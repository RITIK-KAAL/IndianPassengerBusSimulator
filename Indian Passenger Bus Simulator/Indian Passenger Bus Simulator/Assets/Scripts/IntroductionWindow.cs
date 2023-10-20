using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using System.Collections.Generic;
using System;

public class IntroductionWindow : MonoBehaviour
{
    [SerializeField]
    private GameObject UnderDogsLogo;
    [SerializeField]
    private GameObject StartImage;
    [SerializeField]
    private GameObject StartPage;
    [SerializeField]
    private GameObject CoinCountBackground;
    [SerializeField]
    private GameObject FuelCountBackground;
    [SerializeField]
    private GameObject PlayOptionBackground;
    [SerializeField]
    private GameObject CareerMapSelectionBackground;
    [SerializeField]
    private GameObject CareerMapSelectionBackground1;
    [SerializeField]
    private GameObject CareerMapSelectionBackground2;
    [SerializeField]
    private GameObject CareerMapSelectionBackground3;
    [SerializeField]
    private GameObject ParkingMapSelectionBackground;
    [SerializeField]
    private GameObject ParkingMapSelectionBackground1;
    [SerializeField]
    private GameObject ParkingMapSelectionBackground2;
    [SerializeField]
    private GameObject ParkingMapSelectionBackground3;
    [SerializeField]
    private GameObject Garage;
    [SerializeField]
    private Animator Fade;
    [SerializeField]
    private GameObject FadeScreen;
    [SerializeField]
    private AudioSource StartImageAudio;
    [SerializeField]
    private AudioSource GarageAudio;
    [SerializeField]
    private GameObject Bus0;
    [SerializeField]
    private GameObject Bus1;
    [SerializeField]
    private GameObject Bus2;
    [SerializeField]
    private GameObject Bus3;
    [SerializeField]
    private GameObject Bus4;
    [SerializeField]
    private GameObject Bus5;
    [SerializeField]
    private GameObject Bus6;
    [SerializeField]
    private GameObject Bus7;
    [SerializeField]
    private GameObject Bus8;
    [SerializeField]
    private GameObject Bus9;
    [SerializeField]
    private GameObject Bus10;
    [SerializeField]
    private GameObject Bus11;
    private int currentBusIndex = 0;
    public bool isBus0;
    public bool isBus1;
    public bool isBus2;
    public bool isBus3;
    public bool isBus4;
    public bool isBus5;
    public bool isBus6;
    public bool isBus7;
    public bool isBus8;
    public bool isBus9;
    public bool isBus10;
    public bool isBus11;
    [SerializeField]
    public static IntroductionWindow Instance;
    [SerializeField]
    private GameObject RewardImage;
    [SerializeField]
    private GameObject RewardAnimation;
    [SerializeField]
    private GameObject ExplainationImage;
    [SerializeField]
    private GameObject GarageDummy;
    [SerializeField]
    private GameObject ExitConfirmationText;
    [SerializeField]
    private GameObject GarageBusStats;
    [SerializeField]
    private TMP_Text StoreCoinCount;
    [SerializeField]
    private TMP_Text MainCoinCount;
    [SerializeField]
    private TMP_Text StoreFuelCount;
    [SerializeField]
    private TMP_Text MainFuelCount;
    [SerializeField]
    private GameObject AudioObject;
    [SerializeField]
    private GameObject Unmute;
    [SerializeField]
    private GameObject Mute;
    private bool isMuted;
    [SerializeField]
    private AudioSource audioSource;
    private int CurrentStarCount;
    [SerializeField]
    private TMP_Text CurrentStarCountText;
    private int StarRequiredToUnlockMap = 32;
    [SerializeField]
    private GameObject Map1BlurImage;
    [SerializeField] private GameObject Map1LockImage;
    [SerializeField]
    private Levels LevelInstance;
    [SerializeField]
    private GameObject BuyBusExplainationImage;
    [SerializeField]
    private GameObject CreditScreen;
    [SerializeField]
    private CoinData instance;
    private object FunctionHolder;
    [SerializeField]
    private GameObject AdRemovablePackPopup;
    private int AlternateSession;

    [Space(15)]

    [SerializeField] private Interstitial interstitialAdManager;

    private AndroidJavaClass pluginClass;
    private WaitForSeconds checkInternetDelay;

    public int CurrentBusIndex { get { return currentBusIndex; } }

    private void Awake()
    {
        Application.targetFrameRate = 60;

        checkInternetDelay = new WaitForSeconds(0.5f);
        IronSource.Agent.destroyBanner();

        if (Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(gameObject);
            return;
        } 

        if (PlayerPrefs.GetInt("AudioUnmute") == 1)
        {
            Unmute.SetActive(true);
            audioSource.volume = 1f;
            PlayerPrefs.SetInt("AudioUnmute", 1);
            PlayerPrefs.SetInt("AudioMute", 0);
            Mute.SetActive(false);
            isMuted = false;
        }
        else if (PlayerPrefs.GetInt("AudioMute") == 1)
        {
            Mute.SetActive(true);
            audioSource.volume = 0f;
            PlayerPrefs.SetInt("AudioMute", 1);
            PlayerPrefs.SetInt("AudioUnmute", 0);
            Unmute.SetActive(false);
            isMuted = true;
        }

        if ( (PlayerPrefs.GetInt("PreviousLevel") == 3 || PlayerPrefs.GetInt("PreviousLevel") == 7) && 
            PlayerPrefs.GetInt("Coins") >= 750 && 
            PlayerPrefs.GetInt("GreenBus", 0) == 0)
        {
            BuyBusExplainationImage.SetActive(true);
        }

        AlternateSession = PlayerPrefs.GetInt("AlternateSession");
        AlternateSession += 1;
    }

    private void OnEnable()
    {
            // Initializing SDK
            Amplitude amplitude = Amplitude.getInstance(); 
            amplitude.init("1acb370bcf89779db77dd17092d06718");

        // app_open Event
        MiniIT.Utils.AdvertisingIdFetcher.RequestAdvertisingId(advertisingId =>
        {
            if (advertisingId != "")
            {
                FunctionHolder = amplitude.getDeviceId();
                Dictionary<string, object> AppOpen = new Dictionary<string, object>()
                {
                    { "_GPID" , advertisingId } ,
                    {"playerDeviceID", FunctionHolder }
                };
                amplitude.logEvent("App_open", AppOpen);
            }
        });

        SceneManager.sceneLoaded += OnSceneLoad;
    }

    private void OnDisable()
    {
        SceneManager.sceneLoaded -= OnSceneLoad;
    }

    private void OnDestroy()
    {
        SceneManager.sceneLoaded -= OnSceneLoad;
    }

    private void OnSceneLoad(Scene scene, LoadSceneMode sceneMode)
    {
        if (scene.buildIndex != 0) return;
        if (NoAdsPopupCheck.instance == null) return;
        if (NoAdsPopupCheck.instance.IsFirstLogin) return;

        NoAdsPopupCheck.instance.alterSessionFlag = !NoAdsPopupCheck.instance.alterSessionFlag;
        AdRemovablePackPopup.SetActive(NoAdsPopupCheck.instance.alterSessionFlag && PlayerPrefs.GetInt("isAdsOn") == 0);
    }

    private void Start()
    {
        StartCoroutine(ArrangingImages());
        AudioManager.instance.Stop("BackGear");
        AudioManager.instance.Stop("Fpp");
    }

    public IEnumerator ArrangingImages()
    {
        //As long as internet is connected at start then load or else wait for internet
        while(!(CheckInternetConnection.instance.IsInternetConnected))
            yield return checkInternetDelay;

        //Connected to the internet, move on with loading!
#if UNITY_EDITOR
        PlayerPrefs.SetInt("Home", 1);
        PlayerPrefs.Save();
        
        Garage.SetActive(true);
        AudioObject.SetActive(true);
        CoinCountBackground.SetActive(true);
        FuelCountBackground.SetActive(true);

        if (NoAdsPopupCheck.instance.IsFirstLogin && PlayerPrefs.GetInt("isAdsOn") == 0)
        {
            NoAdsPopupCheck.instance.IsFirstLogin = false;
            NoAdsPopupCheck.instance.alterSessionFlag = true;

            AdRemovablePackPopup.SetActive(true);
        }

        yield return null;
#elif UNITY_ANDROID || UNITY_IOS
        if (PlayerPrefs.GetInt("Home") == 0)
        {
            StartCoroutine(WaitForLogoSound());
            UnderDogsLogo.SetActive(true);
            FadeScreen.SetActive(true);
            yield return new WaitForSeconds(3f);
            Fade.SetBool("isStarted", false);
            yield return new WaitForSeconds(3f);
            UnderDogsLogo.SetActive(false);
            yield return null;
            StartImage.SetActive(true);
            StartImageAudio.Play();
            yield return new WaitForSeconds(6f);
            StartImage.SetActive(false);
            FadeScreen.SetActive(false);
            StartImageAudio.Stop();
            yield return null;
            Garage.SetActive(true);
            AudioObject.SetActive(true);
            CoinCountBackground.SetActive(true);
            FuelCountBackground.SetActive(true);

            /*if (AlternateSession % 2 != 0)
            {
                AdRemovablePackPopup.SetActive(true);
            }
            else
            {
                AdRemovablePackPopup.SetActive(false);
            }*/

            if (NoAdsPopupCheck.instance.IsFirstLogin && PlayerPrefs.GetInt("isAdsOn") == 0)
            {
                NoAdsPopupCheck.instance.IsFirstLogin = false;
                NoAdsPopupCheck.instance.alterSessionFlag = true;
                
                AdRemovablePackPopup.SetActive(true);
            }

            if (PlayerPrefs.GetInt("FirstTimeLogIn") == 0)
            {
                ExplainationImage.SetActive(true);
                AudioManager.instance.Play("PopupSound");
                RewardImage.SetActive(true);
            }
        }
        else if (PlayerPrefs.GetInt("Home") == 1)
        {
            Garage.SetActive(true);
            AudioObject.SetActive(true);
            CoinCountBackground.SetActive(true);
            FuelCountBackground.SetActive(true);
        }
#endif
    }

    private IEnumerator WaitForLogoSound()
    {
        yield return new WaitForSeconds(0.8f);
        AudioManager.instance.Play("LogoSound");
    }

    private void Update()
    {
        StoreCoinCount.text = MainCoinCount.text;
        StoreFuelCount.text = MainFuelCount.text;

        CurrentStarCount = LevelInstance.StarCount;
        CurrentStarCountText.text = (StarRequiredToUnlockMap - CurrentStarCount).ToString();

        if (CurrentStarCount >= StarRequiredToUnlockMap)
        {
            Map1BlurImage.SetActive(false);
        }
    }

    private void LateUpdate()
    {
        if (ExplainationImage.activeSelf)
        {
            GarageDummy.SetActive(false);
        }
        else
        {
            GarageDummy.SetActive(true);
        }
    }

    public void CreditScreenDisplay()
    {
        CreditScreen.SetActive(true); 
    }
        
    public void CollectCoins()
    {
        AudioManager.instance.Play("Buttons");
        AudioManager.instance.Play("Coin");
        RewardImage.SetActive(false);
        RewardAnimation.SetActive(true);
        StartCoroutine(Wait());
        ExplainationImage.SetActive(false);

        instance.currentCash += 100;
        PlayerPrefs.SetInt("Coins", instance.currentCash);
        instance.cashAmount.text = "" + instance.currentCash;
        PlayerPrefs.Save();

        PlayerPrefs.SetInt("FirstTimeLogIn", 1);
    }

    public void BusBusYes()
    {
        BuyBusExplainationImage.SetActive(false); 
    }

    private IEnumerator Wait()
    {
        yield return new WaitForSeconds(2f);
        RewardAnimation.SetActive(false);
    }

    public void Play()
    {
        AudioManager.instance.Play("Buttons");
        PlayerPrefs.SetInt("Home", 1);

        if (Bus0.activeSelf)
        {
            isBus0 = true;
            currentBusIndex = 0;
            PlayerPrefs.SetInt("isBus0", 1);
            PlayerPrefs.SetInt("isBus1", 0);
            PlayerPrefs.SetInt("isBus2", 0);
            PlayerPrefs.SetInt("isBus3", 0);
            PlayerPrefs.SetInt("isBus4", 0);
            PlayerPrefs.SetInt("isBus5", 0);
            PlayerPrefs.SetInt("isBus6", 0);
            PlayerPrefs.SetInt("isBus7", 0);
            PlayerPrefs.SetInt("isBus8", 0);
            PlayerPrefs.SetInt("isBus9", 0);
            PlayerPrefs.SetInt("isBus10", 0);
            PlayerPrefs.SetInt("isBus11", 0);           
        }
        else if (Bus1.activeSelf)
        {
            isBus1 = true;
            currentBusIndex = 1;
            PlayerPrefs.SetInt("isBus0", 0);
            PlayerPrefs.SetInt("isBus1", 1);
            PlayerPrefs.SetInt("isBus2", 0);
            PlayerPrefs.SetInt("isBus3", 0);
            PlayerPrefs.SetInt("isBus4", 0);
            PlayerPrefs.SetInt("isBus5", 0);
            PlayerPrefs.SetInt("isBus6", 0);
            PlayerPrefs.SetInt("isBus7", 0);
            PlayerPrefs.SetInt("isBus8", 0);
            PlayerPrefs.SetInt("isBus9", 0);
            PlayerPrefs.SetInt("isBus10", 0);
            PlayerPrefs.SetInt("isBus11", 0);           
        }
        else if (Bus2.activeSelf)
        {
            isBus2 = true;
            currentBusIndex = 2;
            PlayerPrefs.SetInt("isBus0", 0);
            PlayerPrefs.SetInt("isBus1", 0);
            PlayerPrefs.SetInt("isBus2", 1);
            PlayerPrefs.SetInt("isBus3", 0);
            PlayerPrefs.SetInt("isBus4", 0);
            PlayerPrefs.SetInt("isBus5", 0);
            PlayerPrefs.SetInt("isBus6", 0);
            PlayerPrefs.SetInt("isBus7", 0);
            PlayerPrefs.SetInt("isBus8", 0);
            PlayerPrefs.SetInt("isBus9", 0);
            PlayerPrefs.SetInt("isBus10", 0);
            PlayerPrefs.SetInt("isBus11", 0);            
        }
        else if (Bus3.activeSelf)
        {
            isBus3 = true;
            currentBusIndex = 3;
            PlayerPrefs.SetInt("isBus0", 0);
            PlayerPrefs.SetInt("isBus1", 0);
            PlayerPrefs.SetInt("isBus2", 0);
            PlayerPrefs.SetInt("isBus3", 1);
            PlayerPrefs.SetInt("isBus4", 0);
            PlayerPrefs.SetInt("isBus5", 0);
            PlayerPrefs.SetInt("isBus6", 0);
            PlayerPrefs.SetInt("isBus7", 0);
            PlayerPrefs.SetInt("isBus8", 0);
            PlayerPrefs.SetInt("isBus9", 0);
            PlayerPrefs.SetInt("isBus10", 0);
            PlayerPrefs.SetInt("isBus11", 0);            
        }
        else if (Bus4.activeSelf)
        {
            isBus4 = true;
            currentBusIndex = 4;
            PlayerPrefs.SetInt("isBus0", 0);
            PlayerPrefs.SetInt("isBus1", 0);
            PlayerPrefs.SetInt("isBus2", 0);
            PlayerPrefs.SetInt("isBus3", 0);
            PlayerPrefs.SetInt("isBus4", 1);
            PlayerPrefs.SetInt("isBus5", 0);
            PlayerPrefs.SetInt("isBus6", 0);
            PlayerPrefs.SetInt("isBus7", 0);
            PlayerPrefs.SetInt("isBus8", 0);
            PlayerPrefs.SetInt("isBus9", 0);
            PlayerPrefs.SetInt("isBus10", 0);
            PlayerPrefs.SetInt("isBus11", 0);            
        }
        else if (Bus5.activeSelf)
        {
            isBus5 = true;
            currentBusIndex = 5;
            PlayerPrefs.SetInt("isBus0", 0);
            PlayerPrefs.SetInt("isBus1", 0);
            PlayerPrefs.SetInt("isBus2", 0);
            PlayerPrefs.SetInt("isBus3", 0);
            PlayerPrefs.SetInt("isBus4", 0);
            PlayerPrefs.SetInt("isBus5", 1);
            PlayerPrefs.SetInt("isBus6", 0);
            PlayerPrefs.SetInt("isBus7", 0);
            PlayerPrefs.SetInt("isBus8", 0);
            PlayerPrefs.SetInt("isBus9", 0);
            PlayerPrefs.SetInt("isBus10", 0);
            PlayerPrefs.SetInt("isBus11", 0);            
        }
        else if (Bus6.activeSelf)
        {
            isBus6 = true;
            currentBusIndex = 6;
            PlayerPrefs.SetInt("isBus0", 0);
            PlayerPrefs.SetInt("isBus1", 0);
            PlayerPrefs.SetInt("isBus2", 0);
            PlayerPrefs.SetInt("isBus3", 0);
            PlayerPrefs.SetInt("isBus4", 0);
            PlayerPrefs.SetInt("isBus5", 0);
            PlayerPrefs.SetInt("isBus6", 1);
            PlayerPrefs.SetInt("isBus7", 0);
            PlayerPrefs.SetInt("isBus8", 0);
            PlayerPrefs.SetInt("isBus9", 0);
            PlayerPrefs.SetInt("isBus10", 0);
            PlayerPrefs.SetInt("isBus11", 0);            
        }
        else if (Bus7.activeSelf)
        {
            isBus7 = true;
            currentBusIndex = 7;
            PlayerPrefs.SetInt("isBus0", 0);
            PlayerPrefs.SetInt("isBus1", 0);
            PlayerPrefs.SetInt("isBus2", 0);
            PlayerPrefs.SetInt("isBus3", 0);
            PlayerPrefs.SetInt("isBus4", 0);
            PlayerPrefs.SetInt("isBus5", 0);
            PlayerPrefs.SetInt("isBus6", 0);
            PlayerPrefs.SetInt("isBus7", 1);
            PlayerPrefs.SetInt("isBus8", 0);
            PlayerPrefs.SetInt("isBus9", 0);
            PlayerPrefs.SetInt("isBus10", 0);
            PlayerPrefs.SetInt("isBus11", 0);           
        }
        else if (Bus8.activeSelf)
        {
            isBus8 = true;
            currentBusIndex = 8;
            PlayerPrefs.SetInt("isBus0", 0);
            PlayerPrefs.SetInt("isBus1", 0);
            PlayerPrefs.SetInt("isBus2", 0);
            PlayerPrefs.SetInt("isBus3", 0);
            PlayerPrefs.SetInt("isBus4", 0);
            PlayerPrefs.SetInt("isBus5", 0);
            PlayerPrefs.SetInt("isBus6", 0);
            PlayerPrefs.SetInt("isBus7", 0);
            PlayerPrefs.SetInt("isBus8", 1);
            PlayerPrefs.SetInt("isBus9", 0);
            PlayerPrefs.SetInt("isBus10", 0);
            PlayerPrefs.SetInt("isBus11", 0);           
        }
        else if (Bus9.activeSelf)
        {
            isBus9 = true;
            currentBusIndex = 9;
            PlayerPrefs.SetInt("isBus0", 0);
            PlayerPrefs.SetInt("isBus1", 0);
            PlayerPrefs.SetInt("isBus2", 0);
            PlayerPrefs.SetInt("isBus3", 0);
            PlayerPrefs.SetInt("isBus4", 0);
            PlayerPrefs.SetInt("isBus5", 0);
            PlayerPrefs.SetInt("isBus6", 0);
            PlayerPrefs.SetInt("isBus7", 0);
            PlayerPrefs.SetInt("isBus8", 0);
            PlayerPrefs.SetInt("isBus9", 1);
            PlayerPrefs.SetInt("isBus10", 0);
            PlayerPrefs.SetInt("isBus11", 0);            
        }
        else if (Bus10.activeSelf)
        {
            isBus10 = true;
            currentBusIndex = 10;
            PlayerPrefs.SetInt("isBus0", 0);
            PlayerPrefs.SetInt("isBus1", 0);
            PlayerPrefs.SetInt("isBus2", 0);
            PlayerPrefs.SetInt("isBus3", 0);
            PlayerPrefs.SetInt("isBus4", 0);
            PlayerPrefs.SetInt("isBus5", 0);
            PlayerPrefs.SetInt("isBus6", 0);
            PlayerPrefs.SetInt("isBus7", 0);
            PlayerPrefs.SetInt("isBus8", 0);
            PlayerPrefs.SetInt("isBus9", 0);
            PlayerPrefs.SetInt("isBus10", 1);
            PlayerPrefs.SetInt("isBus11", 0);
        }
        else if (Bus11.activeSelf)
        {
            isBus11 = true;
            currentBusIndex = 11;
            PlayerPrefs.SetInt("isBus0", 0);
            PlayerPrefs.SetInt("isBus1", 0);
            PlayerPrefs.SetInt("isBus2", 0);
            PlayerPrefs.SetInt("isBus3", 0);
            PlayerPrefs.SetInt("isBus4", 0);
            PlayerPrefs.SetInt("isBus5", 0);
            PlayerPrefs.SetInt("isBus6", 0);
            PlayerPrefs.SetInt("isBus7", 0);
            PlayerPrefs.SetInt("isBus8", 0);
            PlayerPrefs.SetInt("isBus9", 0);
            PlayerPrefs.SetInt("isBus10", 0);
            PlayerPrefs.SetInt("isBus11", 1);
        }

        StartPage.SetActive(false);
        PlayOptionBackground.SetActive(true);
        Garage.SetActive(false);
    } 

    public void Exit()
    {
        AudioManager.instance.Play("Buttons");
        if (PlayerPrefs.GetInt("isAdsOn") == 0)
        {
            //IronSource.Agent.loadBanner(IronSourceBannerSize.BANNER, IronSourceBannerPosition.BOTTOM);

            ExitConfirmationText.SetActive(true);
            AudioManager.instance.Play("PopupSound");
            GarageBusStats.SetActive(false);
        }
        else if (PlayerPrefs.GetInt("isAdsOn") == 1)
        {
            ExitConfirmationText.SetActive(true);
            AudioManager.instance.Play("PopupSound");
            GarageBusStats.SetActive(false);
        }
    }

    public void CloseAdRemovablePackPopup()
    {
        AdRemovablePackPopup.SetActive(false);
    }

    public void OnApplicationPause()
    {
        PlayerPrefs.SetInt("Home", 0);
        PlayerPrefs.Save();
    }

    private void OnApplicationQuit()
    {
        PlayerPrefs.SetInt("AlternateSession", AlternateSession);
        PlayerPrefs.Save();
    }

    public void YesButton()
    {
        AudioManager.instance.Play("Buttons");
        PlayerPrefs.SetInt("Home", 0);
        PlayerPrefs.Save();
        Application.Quit();
    }  

    public void NoButton()
    {
        AudioManager.instance.Play("Buttons");
        ExitConfirmationText.SetActive(false);
        GarageBusStats.SetActive(true);
    }

    public void PlayOptionBackgroundBackButton()
    {
        AudioManager.instance.Play("Buttons");
        Garage.SetActive(true);
        PlayOptionBackground.SetActive(false);
        CreditScreen.SetActive(false);

        //if(interstitialAdManager != null) interstitialAdManager.interstitialplay();
        SubMenuCounter.Instance?.OnMainMenu();
    } 

    public void CareerMode()
    {
        AudioManager.instance.Play("Buttons");
        PlayOptionBackground.SetActive(false);
        CareerMapSelectionBackground.SetActive(true);
    }

    public void CareerMapSelectionBackgroundBackButton()
    {
        AudioManager.instance.Play("Buttons");
        PlayOptionBackground.SetActive(true);
        CareerMapSelectionBackground.SetActive(false);
        CareerMapSelectionBackground1.SetActive(false);
        CareerMapSelectionBackground2.SetActive(false);
        CareerMapSelectionBackground3.SetActive(false);
    } 

    public void CareerMapSelectionBackgroundChangeButton()
    {
        AudioManager.instance.Play("Buttons");
        CareerMapSelectionBackground.SetActive(false);
        CareerMapSelectionBackground1.SetActive(true);

        Map1LockImage.SetActive(!(CurrentStarCount >= StarRequiredToUnlockMap));
    }

    public void CareerMapSelectionBackground1BackButton()
    {
        AudioManager.instance.Play("Buttons");
        CareerMapSelectionBackground.SetActive(true);
        CareerMapSelectionBackground1.SetActive(false);
    }

    public void CareerMapSelectionBackground1ChangeButton()
    {
        AudioManager.instance.Play("Buttons");
        CareerMapSelectionBackground2.SetActive(true);
        CareerMapSelectionBackground1.SetActive(false);
    }

    public void CareerMapSelectionBackground2BackButton()
    {
        AudioManager.instance.Play("Buttons");
        CareerMapSelectionBackground1.SetActive(true);
        CareerMapSelectionBackground2.SetActive(false);

        Map1LockImage.SetActive(!(CurrentStarCount >= StarRequiredToUnlockMap));
    }

    public void CareerMapSelectionBackground2ChangeButton()
    {
        AudioManager.instance.Play("Buttons");
        CareerMapSelectionBackground3.SetActive(true);
        CareerMapSelectionBackground2.SetActive(false);
    }

    public void CareerMapSelectionBackground3BackButton()
    {
        AudioManager.instance.Play("Buttons");
        CareerMapSelectionBackground2.SetActive(true);
        CareerMapSelectionBackground3.SetActive(false);
    } 

    public void ParkingMode()
    {
        AudioManager.instance.Play("Buttons");
        PlayOptionBackground.SetActive(false);
        ParkingMapSelectionBackground.SetActive(true);
    }

    public void ParkingMapSelectionBackgroundBackButton()
    {
        AudioManager.instance.Play("Buttons");
        PlayOptionBackground.SetActive(true);
        ParkingMapSelectionBackground.SetActive(false);
    }

    public void ParkingMapSelectionBackgroundChangeButton()
    {
        AudioManager.instance.Play("Buttons");
        ParkingMapSelectionBackground.SetActive(false);
        ParkingMapSelectionBackground1.SetActive(true);
    }

    public void ParkingMapSelectionBackground1BackButton()
    {
        AudioManager.instance.Play("Buttons");
        ParkingMapSelectionBackground.SetActive(true);
        ParkingMapSelectionBackground1.SetActive(false);
    }

    public void ParkingMapSelectionBackground1ChangeButton()
    {
        AudioManager.instance.Play("Buttons");
        ParkingMapSelectionBackground2.SetActive(true);
        ParkingMapSelectionBackground1.SetActive(false);
    }

    public void ParkingMapSelectionBackground2BackButton()
    {
        AudioManager.instance.Play("Buttons");
        ParkingMapSelectionBackground1.SetActive(true);
        ParkingMapSelectionBackground2.SetActive(false);
    }

    public void ParkingMapSelectionBackground2ChangeButton()
    {
        AudioManager.instance.Play("Buttons");
        ParkingMapSelectionBackground3.SetActive(true);
        ParkingMapSelectionBackground2.SetActive(false);
    }

    public void ParkingMapSelectionBackground3BackButton()
    {
        AudioManager.instance.Play("Buttons");
        ParkingMapSelectionBackground2.SetActive(true);
        ParkingMapSelectionBackground3.SetActive(false);
    } 

    public void GarageButton()
    {
        AudioManager.instance.Play("Buttons");
        StartPage.SetActive(false);
        FadeScreen.SetActive(false);
        Garage.SetActive(true);
    } 

    public void MuteButton()
    {
        AudioManager.instance.Play("Buttons");
        if (!isMuted)
        {
            Mute.SetActive(true);
            audioSource.volume = 0f; 
            PlayerPrefs.SetInt("AudioMute", 1);
            PlayerPrefs.SetInt("AudioUnmute", 0);
            Unmute.SetActive(false);
            isMuted = true;
        }
        else
        {
            Unmute.SetActive(true);
            audioSource.volume = 1f; 
            PlayerPrefs.SetInt("AudioUnmute", 1);
            PlayerPrefs.SetInt("AudioMute", 0);
            Mute.SetActive(false);
            isMuted = false;
        }
    }
}
