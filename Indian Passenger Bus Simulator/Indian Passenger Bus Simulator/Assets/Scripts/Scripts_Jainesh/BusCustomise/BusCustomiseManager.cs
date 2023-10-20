using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using DG.Tweening;
using TMPro;
using UnityStandardAssets.Vehicles.Car;

public class BusCustomiseManager : MonoBehaviour
{
    [System.Serializable]
    private struct SkinButtonItem
    {
        public Button skinButtonMain;
        public RawImage skinButtonImage;
        public GameObject skinLockImage;
        public GameObject skinSelectedImage;
        public TextMeshProUGUI skinNameText;
        public TextMeshProUGUI skinTimerText;
    }

    [Header("Scriptable DBs")]
    [SerializeField] private BusSkinsDB busSkinsDB;
    [SerializeField] private BusSkinsTexturesDB busSkinsTexturesDB;
    [SerializeField] private BusSkinsTexturesDB busSCSkinsTexturesDB;
    [SerializeField] private BusItemDB busItemsDB;

    [Header("Garage")]
    [SerializeField] private GarageSetup garage;
    [SerializeField] private GameObject garageUI;
    [SerializeField] private GameObject garageCustomiseUI;

    [Header("UI")]
    [SerializeField] private GameObject customiseUI;
    [SerializeField] private GameObject customiseButton;
    [SerializeField] private SkinButtonItem[] customiseSkinButtons;

    [SerializeField] private Button unlockSkinButton;

    [Space(15)]

    [SerializeField] private GameObject skinUnlockParent;
    [SerializeField] private TextMeshProUGUI skinUnlockCoinText;
    [SerializeField] private Button skinUnlockCloseButton;

    [Space(15)]

    [SerializeField] private Button skinPurchaseButton;
    [SerializeField] private Button skinAdButton;
    [SerializeField] private GameObject notEnoughCoinsPanel;

    [Space(15)]

    [SerializeField] private CanvasGroup skinPurchaseAnim;
    [SerializeField] private TextMeshProUGUI skinDeductText;

    [Space(15)]

    [SerializeField] private CoinData coinData;
    [SerializeField] private Transform playerCoinsParent;
    [SerializeField] private TextMeshProUGUI playerCoinsText;

    [Header("Camera Parent")]
    [SerializeField] private float rotateSpeed = 0.5f;
    [SerializeField] private float autoRotateSpeed = 0.5f;
    [SerializeField] private Transform mainCamera;
    [SerializeField] private Transform mainCameraParent;

    [Header("Ad")]
    [SerializeField] private Interstitial interstitialManager;
    [SerializeField] private Rewarded m_RewardedManager;

    private Coroutine updateRoutine;
    private BuyingBuses currentBus;
    private BusItem currentBusItem;
    private BusSkinsItem currentBusSkinItem;
    private BusGarageItem currentBusGarageItem;

    private int currentButtonIndex;
    private int currentBusSkinIndex;

    private int playerCoinsParentSiblingIndex;
    private Vector3 mainCameraParentDefaultRot;

    private float yYaw = 0.0f;
    private bool leftRight = true;  //True - Left, False - Right
    private bool isFirstTime = true;

    private int m_FingerID;

    private void Awake()
    {
#if UNITY_EDITOR
        m_FingerID = -1;
#elif UNITY_ANDROID || UNITY_IOS
        m_FingerID = 0;
#endif

        if (customiseSkinButtons.Length > 0)
        {
            for(int i = 0; i < customiseSkinButtons.Length; i++)                             
                customiseSkinButtons[i].skinSelectedImage.SetActive(false);

            customiseSkinButtons[0].skinButtonMain?.onClick.AddListener(delegate { OnSkinButtonClick(0); });
            customiseSkinButtons[1].skinButtonMain?.onClick.AddListener(delegate { OnSkinButtonClick(1); });
            customiseSkinButtons[2].skinButtonMain?.onClick.AddListener(delegate { OnSkinButtonClick(2); });
        }

        if(unlockSkinButton)
        {
            unlockSkinButton.onClick.AddListener(OnUnlockButton);
            unlockSkinButton.gameObject.SetActive(false);
        }

        if(skinUnlockParent) skinUnlockParent.SetActive(false);
        if (skinPurchaseAnim) skinPurchaseAnim.gameObject.SetActive(false);
        if (skinUnlockCloseButton) skinUnlockCloseButton.onClick.AddListener(OnSkinUnlockWindowClose);

        if (skinPurchaseButton) skinPurchaseButton.onClick.AddListener(OnSkinPurchase);
        if (skinAdButton) skinAdButton.onClick.AddListener(OnSkinAd);

        playerCoinsParentSiblingIndex = playerCoinsParent.GetSiblingIndex();
        
        if(mainCameraParent != null)
        {
            mainCameraParentDefaultRot = mainCameraParent.eulerAngles;
            yYaw = mainCameraParentDefaultRot.y;
        }
    }

    private IEnumerator Start() 
    {
        yield return new WaitForSeconds(1.0f);

        if (busItemsDB != null) 
            busItemsDB.ValidateAdData(); 
    }

    public void BusCustomisationOpen()
    {
        AudioManager.instance.Play("Buttons");

        if (garageUI == null) return;        

        leftRight = true;

        garageUI.SetActive(false);
        customiseUI.SetActive(true);

        if (currentBusGarageItem != null)       
            currentBusGarageItem.busDetailsCanvas.SetActive(false);

        updateRoutine = StartCoroutine(UpdateRoutine());

        if(playerCoinsParent != null)
        {
            playerCoinsParent.SetParent(garageCustomiseUI.transform);
            playerCoinsParent.SetSiblingIndex(2);
        }

        if(currentBusItem != null) currentBusItem.ValidateSkinTemporaryStatus();
        if (currentBusGarageItem != null) currentBusGarageItem.ApplySkinTexture(busSkinsTexturesDB.busTextures[currentBusItem.GetCurrentSkinIndex()]);

        FillUpSkinButtons();
    }

    public void BusCustomisationClose()
    {
        AudioManager.instance.Play("Buttons");

        if (garageUI == null) return;

        yYaw = mainCameraParentDefaultRot.y;

        garageUI.SetActive(true);
        customiseUI.SetActive(false);

        if (currentBusGarageItem != null)
        {
            currentBusGarageItem.busDetailsCanvas.SetActive(true);
            currentBusGarageItem.ApplySkinTexture(busSkinsTexturesDB.busTextures[currentBusItem.GetCurrentSkinIndex()]);
        }

        if (mainCameraParent != null)
        {
            //mainCameraParent.DOMove(Vector3.zero, 1.0f).SetEase(Ease.InOutQuad);
            mainCameraParent.DOLocalRotate(mainCameraParentDefaultRot, 1.0f).SetEase(Ease.InOutQuad).OnComplete(() => 
            {
                //if (interstitialManager != null) interstitialManager.interstitialplay();
                SubMenuCounter.Instance?.OnMainMenu();
            });
        }

        if(playerCoinsParent != null)
        {
            playerCoinsParent.SetParent(garageUI.transform);
            playerCoinsParent.SetSiblingIndex(playerCoinsParentSiblingIndex);
        }

        StopCoroutine(updateRoutine);
    }

    public void BusCustomisationNotify(BuyingBuses Bus, BusGarageItem garageItem)
    {
        if (Bus == null) return;
        if (customiseButton == null) return;

        currentBus = Bus;
        customiseButton.SetActive(PlayerPrefs.GetInt("Level2") >= 1 && Bus.isUnlocked);
        currentBusItem = busItemsDB.GetBusItem(currentBus.index);
        currentBusSkinItem = busSkinsDB.GetBusSkinsItem(currentBus.index);

        currentBusItem.ValidateSkinTemporaryStatus();

        currentBusGarageItem = garageItem;
        if (currentBusGarageItem != null)
        {
            currentBusGarageItem.busDetailsCanvas.SetActive(true);
            if (isFirstTime)
            {
                if (Camera.main != null)
                    Camera.main.clearFlags = CameraClearFlags.Skybox;

                isFirstTime = false;
                if (mainCameraParent != null) mainCameraParent.position = currentBusGarageItem.BusCenter;

                Vector3 newLocalPos = mainCamera.transform.localPosition;
                newLocalPos.x = 0.0f;
                newLocalPos.y = 0.0f;
                newLocalPos.z = currentBusGarageItem.LookAtDistance;
                if (mainCamera != null) mainCamera.transform.localPosition = newLocalPos;
            }
            else
            {
                if (mainCameraParent != null) mainCameraParent.DOMove(currentBusGarageItem.BusCenter, 1.0f).SetEase(Ease.InOutQuad);
                if (mainCamera != null) mainCamera.DOLocalMoveZ(currentBusGarageItem.LookAtDistance, 1.0f).SetEase(Ease.InOutQuad);
            }

            currentBusGarageItem.ApplySkinTexture(busSkinsTexturesDB.busTextures[currentBusItem.GetCurrentSkinIndex()]);
        }

        FillUpSkinButtons();
    }

    private IEnumerator UpdateRoutine()
    {
        bool isRunning = true;
        while(isRunning)
        {
            HandleRotationInput();
            HandleSkinTimers();

            yield return null;
        }
    }

    private void HandleRotationInput()
    {
        if (Input.GetMouseButton(0) && !EventSystem.current.IsPointerOverGameObject(m_FingerID))
        {
            float xAxis = Input.GetAxisRaw("Mouse X");
            leftRight = (xAxis > 0.0f);
            yYaw += xAxis;
        }
        else yYaw += leftRight ? autoRotateSpeed : -autoRotateSpeed;

        if (yYaw < 0.0f) yYaw += 360.0f;
        if (yYaw > 360.0f) yYaw -= 360.0f;

        Quaternion newRot = Quaternion.Euler(0.0f, yYaw, 0.0f);
        Quaternion currentRot = mainCameraParent.localRotation;
        Quaternion finalRot = Quaternion.Slerp(currentRot, newRot, rotateSpeed * Time.deltaTime);

        mainCameraParent.localRotation = finalRot;
    }

    private void HandleSkinTimers()
    {
        if (customiseSkinButtons.Length == 0) return;

        for (int i = 0; i < customiseSkinButtons.Length; i++)
        {
            if (i == 0) continue;                           //1st Skin is always Unlocked
            if (!currentBusItem.IsOnTimer(i)) continue;     //First check if On Timer

            DateTime skinUnlockTime = currentBusItem.GetSkinTemporaryUnlockTime(i);
            DateTime currentTime = DateTime.Now;

            TimeSpan span = skinUnlockTime - currentTime;
            string timerString = $"{span.Minutes:00}:{span.Seconds:00}";

            customiseSkinButtons[i].skinTimerText.text = timerString;

            if (span.Days <= 0.0 && span.Hours <= 0.0 && span.Minutes <= 0.0 && span.Seconds <= 1.0)
            {
                Debug.Log("SKIN TIMER ENDED AT INDEX: " + i);
                currentBusItem.TemporarySkinEnded(i);

                HandleLockImage();
                HandleSelectedImage();
                HandleSkinAdTimers();

                if(currentBusGarageItem != null)
                    currentBusGarageItem.ApplySkinTexture(busSkinsTexturesDB.busTextures[currentBusItem.GetCurrentSkinIndex()]);
            }
        }
    }

    private void FillUpSkinButtons()
    {
        if (busSkinsTexturesDB == null || currentBus == null) return;

        for (int i = 0; i < customiseSkinButtons.Length && customiseSkinButtons.Length > 0; i++)
        {
            if (customiseSkinButtons[i].skinButtonImage != null)
                customiseSkinButtons[i].skinButtonImage.texture = busSCSkinsTexturesDB.busTextures[currentBusSkinItem.busSkins[i].skinTextureIndex];
        }

        HandleSkinNames();
        HandleLockImage();
        HandleSelectedImage();
        HandleSkinAdTimers();

        //customiseSkinButtons[0].skinSelectedImage.SetActive(!currentBusItem.IsSkinUnlocked(currentBusSkinItem.busSkins[0].skinTextureIndex) && currentBusItem.GetCurrentSkinIndex() == currentBusSkinItem.busSkins[0].skinTextureIndex);
        //customiseSkinButtons[1].skinSelectedImage.SetActive(!currentBusItem.IsSkinUnlocked(currentBusSkinItem.busSkins[1].skinTextureIndex) && currentBusItem.GetCurrentSkinIndex() == currentBusSkinItem.busSkins[1].skinTextureIndex);
        //customiseSkinButtons[2].skinSelectedImage.SetActive(!currentBusItem.IsSkinUnlocked(currentBusSkinItem.busSkins[2].skinTextureIndex) && currentBusItem.GetCurrentSkinIndex() == currentBusSkinItem.busSkins[2].skinTextureIndex);
    }

    private void OnSkinButtonClick(int index)
    {
        AudioManager.instance.Play("Buttons");

        if (currentBusItem == null) return;
        if (currentBusSkinItem == null) return;

        currentBusItem.ValidateSkinTemporaryStatus();

        currentBusSkinIndex = index;
        currentButtonIndex = index;

        int skinTextureIndex = currentBusSkinItem.busSkins[currentBusSkinIndex].skinTextureIndex;
        int unlockStatus = currentBusItem.IsSkinUnlocked(currentButtonIndex);
        if (unlockStatus > 0)
        {
            //Apply the Skin and Hide/Unhide the unlock button
            if(unlockStatus == (int)BusItem.SkinUnlockStatus.Status_Unlocked_Permanent)
                unlockSkinButton.gameObject.SetActive(false);
            else if(unlockStatus == (int)BusItem.SkinUnlockStatus.Status_Unlocked_Temporary)
                unlockSkinButton.gameObject.SetActive(true);

            currentBusItem.SetCurrentUnlockIndex(currentButtonIndex);
            currentBusItem.SetCurrentSkinIndex(skinTextureIndex);

            //Save it to file
            currentBusItem.SaveToFile();

            for(int i = 0; i < customiseSkinButtons.Length; i++)
                customiseSkinButtons[i].skinSelectedImage.SetActive(false);
            
            customiseSkinButtons[currentBusSkinIndex].skinSelectedImage.SetActive(true);
        }
        else
        {
            unlockSkinButton.gameObject.SetActive(true);
            skinUnlockCoinText.text = currentBusSkinItem.busSkins[currentBusSkinIndex].unlockCost.ToString();
        }

        if (currentBusGarageItem != null)
            currentBusGarageItem.ApplySkinTexture(busSkinsTexturesDB.busTextures[skinTextureIndex]);
    }


    //Opens the Unlock Window Parent
    private void OnUnlockButton()
    {
        AudioManager.instance.Play("Buttons");

        if (skinUnlockParent == null) return;
        skinUnlockParent.SetActive(true);

        //Check if Skin that is temporary unlocked is on timer. If yes disable the ad button
        int skinTextureIndex = currentBusSkinItem.busSkins[currentBusSkinIndex].skinTextureIndex;
        skinAdButton.interactable = !(currentBusItem.IsSkinUnlocked(currentButtonIndex) == (int)BusItem.SkinUnlockStatus.Status_Unlocked_Temporary);
    }

    private void OnSkinUnlockWindowClose()
    {
        AudioManager.instance.Play("Buttons");

        //playerCoinsParent.SetParent(garageUI.transform);
        //playerCoinsParent.SetSiblingIndex(playerCoinsParentSiblingIndex);

        if (skinUnlockParent == null) return;
        skinUnlockParent.SetActive(false);
    }

    private void OnSkinPurchase()
    {
        if (currentBus == null) return;
        if (currentBusItem == null) return;
        if (currentBusSkinItem == null) return;

        AudioManager.instance.Play("Buttons");

        int coins = PlayerPrefs.GetInt("Coins");
        int unlockingCost = (int)currentBusSkinItem.busSkins[currentBusSkinIndex].unlockCost;
        if (coins >= unlockingCost)
        {
            AudioManager.instance.Play("Coin");

            PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins", 0) - unlockingCost);
            PlayerPrefs.Save();

            if (coinData != null)
            {
                coinData.currentCash = PlayerPrefs.GetInt("Coins", 0);
                coinData.cashAmount.text = coinData.currentCash.ToString();
            }

            int skinTextureIndex = currentBusSkinItem.busSkins[currentBusSkinIndex].skinTextureIndex;
            currentBusItem.AddUnlockedSkin(currentButtonIndex, skinTextureIndex);

            currentBusItem.SetCurrentUnlockIndex(currentButtonIndex);
            currentBusItem.SetCurrentSkinIndex(skinTextureIndex);

            //Save it to file
            currentBusItem.SaveToFile();

            if (skinPurchaseAnim != null && skinDeductText != null)
            {
                skinPurchaseAnim.gameObject.SetActive(true);
                skinPurchaseAnim.alpha = 1.0f;
                skinPurchaseAnim.transform.localPosition = Vector3.zero;
                skinPurchaseAnim.transform.DOLocalMoveY(70.0f, 1.0f).SetEase(Ease.InOutSine);
                skinPurchaseAnim.DOFade(0.0f, 1.0f).SetEase(Ease.InOutSine);

                skinDeductText.text = "-" + unlockingCost.ToString();
            }

            skinUnlockParent.SetActive(false);
            unlockSkinButton.gameObject.SetActive(false);

            HandleSkinNames();
            HandleLockImage();
            HandleSelectedImage();
            HandleSkinAdTimers();
        }
        else
            notEnoughCoinsPanel.gameObject.SetActive(true);
    }

    private void OnSkinAd()
    {
        if (currentBus == null) return;
        if (currentBusItem == null) return;
        if (currentBusSkinItem == null) return;
        if (m_RewardedManager == null) return;

        AudioManager.instance.Play("Buttons");

#if UNITY_EDITOR
#elif UNITY_ANDROID || UNITY_IOS
        m_RewardedManager.FreeSkinRewardedVideo();
#endif

        int skinTextureIndex = currentBusSkinItem.busSkins[currentBusSkinIndex].skinTextureIndex;
        currentBusItem.AddUnlockedAdSkin(currentButtonIndex, skinTextureIndex);
        currentBusItem.SetCurrentSkinIndex(skinTextureIndex);

        skinAdButton.interactable = false;
        skinUnlockParent.SetActive(false);

        HandleSkinNames();
        HandleLockImage();
        HandleSelectedImage();
        HandleSkinAdTimers();
    }    

    private void HandleSkinNames()
    {
        if (customiseSkinButtons.Length == 0) return;
        if (currentBusSkinItem == null) return;

        for (int i = 0; i < customiseSkinButtons.Length; i++)        
            customiseSkinButtons[i].skinNameText.text = currentBusSkinItem.busSkins[i].skinName;        
    }

    private void HandleLockImage()
    {
        if (customiseSkinButtons.Length == 0) return;

        customiseSkinButtons[0].skinLockImage.SetActive(false);
        customiseSkinButtons[1].skinLockImage.SetActive(currentBusItem.IsSkinUnlocked(1) == 0);
        customiseSkinButtons[2].skinLockImage.SetActive(currentBusItem.IsSkinUnlocked(2) == 0);
    }

    private void HandleSelectedImage()
    {
        if (customiseSkinButtons.Length == 0) return;

        for (int i = 0; i < customiseSkinButtons.Length; i++)
            customiseSkinButtons[i].skinSelectedImage.SetActive(false);

        /*int currentSelectIndex = 0;
        if (currentBusItem.IsSkinUnlocked(currentBusSkinItem.busSkins[0].skinTextureIndex) && currentBusItem.GetCurrentSkinIndex() == currentBusSkinItem.busSkins[0].skinTextureIndex)
            currentSelectIndex = 0;
        else if (currentBusItem.IsSkinUnlocked(currentBusSkinItem.busSkins[1].skinTextureIndex) && currentBusItem.GetCurrentSkinIndex() == currentBusSkinItem.busSkins[1].skinTextureIndex)
            currentSelectIndex = 1;
        else if (currentBusItem.IsSkinUnlocked(currentBusSkinItem.busSkins[2].skinTextureIndex) && currentBusItem.GetCurrentSkinIndex() == currentBusSkinItem.busSkins[2].skinTextureIndex)
            currentSelectIndex = 2;*/

        customiseSkinButtons[currentBusItem.GetCurrentUnlockIndex()].skinSelectedImage.SetActive(true);
    }

    private void HandleSkinAdTimers()
    {
        if (customiseSkinButtons.Length == 0) return;

        customiseSkinButtons[0].skinTimerText.gameObject.SetActive(false);
        customiseSkinButtons[1].skinTimerText.gameObject.SetActive(currentBusItem.IsOnTimer(1));
        customiseSkinButtons[2].skinTimerText.gameObject.SetActive(currentBusItem.IsOnTimer(2));
    }
}
