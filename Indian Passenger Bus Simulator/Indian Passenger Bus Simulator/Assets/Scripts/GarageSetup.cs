using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections.Generic;

public class GarageSetup : MonoBehaviour
{
    [SerializeField]
    private GameObject Garage;
    [SerializeField]
    private GameObject StartPage;
    [SerializeField]
    private BusGarageItem[] Buses;
    private int CurrentBus = 0;
    [SerializeField]
    private GameObject FadeScreen;
    [SerializeField]
    private BuyingBuses[] buses;
    [SerializeField]
    private Button buyButton;
    [SerializeField]
    private CoinData instance;
    [SerializeField]
    public GameObject PlayButton;
    [SerializeField]
    private GameObject Confetti;
    [SerializeField]
    private GameObject BusBuyAnimation;
    [SerializeField]
    private TMP_Text CoinDeduction;
    [SerializeField]
    private GameObject LockImage;
    [SerializeField]
    private Levels levels;

    [SerializeField] private GameObject NotEnoughCoinsPopup;

    [Space(15)]

    [SerializeField] private BusCustomiseManager customiseManager;

    private Amplitude amplitude;

    private void Awake()
    {
        // Initializing SDK
        amplitude = Amplitude.getInstance();
        amplitude.init("1acb370bcf89779db77dd17092d06718");

        // Setting for the active choosen bus in the Garage
        if (PlayerPrefs.GetInt("isBus0") == 1)
        {
            PlayerPrefs.SetInt("SelectedBus", 0);
            CurrentBus = PlayerPrefs.GetInt("SelectedBus", 0);
            DisableBusesData();
            Buses[CurrentBus].gameObject.SetActive(true);
        }
        else if (PlayerPrefs.GetInt("isBus1") == 1)
        {
            PlayerPrefs.SetInt("SelectedBus", 1);
            CurrentBus = PlayerPrefs.GetInt("SelectedBus", 1);
            DisableBusesData();
            Buses[CurrentBus].gameObject.SetActive(true);
        }
        else if (PlayerPrefs.GetInt("isBus2") == 1)
        {
            PlayerPrefs.SetInt("SelectedBus", 2);
            CurrentBus = PlayerPrefs.GetInt("SelectedBus", 2);
            DisableBusesData();
            Buses[CurrentBus].gameObject.SetActive(true);
        }
        else if (PlayerPrefs.GetInt("isBus3") == 1)
        {
            PlayerPrefs.SetInt("SelectedBus", 3);
            CurrentBus = PlayerPrefs.GetInt("SelectedBus", 3);
            DisableBusesData();
            Buses[CurrentBus].gameObject.SetActive(true);
        }
        else if (PlayerPrefs.GetInt("isBus4") == 1)
        {
            PlayerPrefs.SetInt("SelectedBus", 4);
            CurrentBus = PlayerPrefs.GetInt("SelectedBus", 4);
            DisableBusesData();
            Buses[CurrentBus].gameObject.SetActive(true);
        }
        else if (PlayerPrefs.GetInt("isBus5") == 1)
        {
            PlayerPrefs.SetInt("SelectedBus", 5);
            CurrentBus = PlayerPrefs.GetInt("SelectedBus", 5);
            DisableBusesData();
            Buses[CurrentBus].gameObject.SetActive(true);
        }
        else if (PlayerPrefs.GetInt("isBus6") == 1)
        {
            PlayerPrefs.SetInt("SelectedBus", 6);
            CurrentBus = PlayerPrefs.GetInt("SelectedBus", 6);
            DisableBusesData();
            Buses[CurrentBus].gameObject.SetActive(true);
        }
        else if (PlayerPrefs.GetInt("isBus7") == 1)
        {
            PlayerPrefs.SetInt("SelectedBus", 7);
            CurrentBus = PlayerPrefs.GetInt("SelectedBus", 7);
            DisableBusesData();
            Buses[CurrentBus].gameObject.SetActive(true);
        }
        else if (PlayerPrefs.GetInt("isBus8") == 1)
        {
            PlayerPrefs.SetInt("SelectedBus", 8);
            CurrentBus = PlayerPrefs.GetInt("SelectedBus", 8);
            DisableBusesData();
            Buses[CurrentBus].gameObject.SetActive(true);
        }
        else if (PlayerPrefs.GetInt("isBus9") == 1)
        {
            PlayerPrefs.SetInt("SelectedBus", 9);
            CurrentBus = PlayerPrefs.GetInt("SelectedBus", 9);
            DisableBusesData();
            Buses[CurrentBus].gameObject.SetActive(true);
        }
        else if (PlayerPrefs.GetInt("isBus10") == 1)
        {
            PlayerPrefs.SetInt("SelectedBus", 10);
            CurrentBus = PlayerPrefs.GetInt("SelectedBus", 10);
            DisableBusesData();
            Buses[CurrentBus].gameObject.SetActive(true);
        }
        else if (PlayerPrefs.GetInt("isBus11") == 1)
        {
            PlayerPrefs.SetInt("SelectedBus", 11);
            CurrentBus = PlayerPrefs.GetInt("SelectedBus", 11);
            DisableBusesData();
            Buses[CurrentBus].gameObject.SetActive(true);
        }
        else
        {
            PlayerPrefs.SetInt("isBus0", 1);
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
            PlayerPrefs.SetInt("SelectedBus", 0);
            CurrentBus = PlayerPrefs.GetInt("SelectedBus", 0);
            DisableBusesData();
            Buses[CurrentBus].gameObject.SetActive(true);
        }

        LockImage.SetActive(false);        
    }

    private void DisableBusesData()
    {
        if (Buses.Length == 0) return;

        foreach (BusGarageItem Bus in Buses)
        {
            if(Bus != null)
                Bus.gameObject.SetActive(false);
        }
    }

    private void Start()
    {
        foreach (BuyingBuses bus in buses)
        {
            if (bus.price == 0) 
            {
                bus.isUnlocked = true;
            }
            else
            {
                bus.isUnlocked = PlayerPrefs.GetInt(bus.name, 0) == 0 ? false : true;
            }
        }

        if (customiseManager == null) customiseManager = GetComponent<BusCustomiseManager>();
        if (customiseManager) customiseManager.BusCustomisationNotify(buses[CurrentBus], Buses[CurrentBus]);

        UpdateUI();
        /*PlayerPrefs.SetInt("SelectedBus", 0);
        CurrentBus = PlayerPrefs.GetInt("SelectedBus", 0); 
        foreach (GameObject Bus in Buses)
        {
            Bus.SetActive(false);
        }
        Buses[CurrentBus].SetActive(true);*/
    }  

    public void ChangeBusRight()
    {
        AudioManager.instance.Play("Buttons");

        Buses[CurrentBus].gameObject.SetActive(false);
        CurrentBus++;
        if (CurrentBus == Buses.Length)
        {
            CurrentBus = 0;
        }
        Buses[CurrentBus].gameObject.SetActive(true);

        UpdateUI();

        BuyingBuses b = buses[CurrentBus];
        if (customiseManager) customiseManager.BusCustomisationNotify(b, Buses[CurrentBus]);
        if (!b.isUnlocked) return;

        PlayerPrefs.SetInt("SelectedBus", CurrentBus);
    }

    public void ChangeBusLeft()
    {
        AudioManager.instance.Play("Buttons");

        Buses[CurrentBus].gameObject.SetActive(false);
        CurrentBus--;
        if (CurrentBus == -1)
        {
            CurrentBus = Buses.Length - 1;
        }
        Buses[CurrentBus].gameObject.SetActive(true);

        UpdateUI();

        BuyingBuses b = buses[CurrentBus];
        if (customiseManager) customiseManager.BusCustomisationNotify(b, Buses[CurrentBus]);
        if (!b.isUnlocked) return;

        PlayerPrefs.SetInt("SelectedBus", CurrentBus);
    } 

    public void GarageBackButton()
    {
        AudioManager.instance.Play("Buttons");
        StartPage.SetActive(true);
        Garage.SetActive(false);
        FadeScreen.SetActive(true);
    }

    private void UpdateUI()
    {
        if(instance) instance.cashAmount.text = "" + instance.currentCash;

        BuyingBuses b = buses[CurrentBus];
        if (b.isUnlocked)
        {
            LockImage.SetActive(false);
            buyButton.gameObject.SetActive(false);
            PlayButton.SetActive(true); 
        }
        else
        {
            LockImage.SetActive(true);
            buyButton.gameObject.SetActive(true);
            PlayButton.SetActive(false);
            buyButton.GetComponentInChildren<TMP_Text>().text = "" + b.price;
            /*if (b.price <= PlayerPrefs.GetInt("Coins", 0))
            {
                buyButton.interactable = true;
            }
            else
            {
                buyButton.interactable = false;
            }*/
        }
    }

    public void UnlockBus()
    {
        AudioManager.instance.Play("Buttons");

        BuyingBuses b = buses[CurrentBus];
        if (instance.currentCash >= b.price)
        {
            PlayerPrefs.SetInt(b.name, 1);
            PlayerPrefs.SetInt("SelectedBus", CurrentBus);
            b.isUnlocked = true;
            PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins", 0) - b.price);
            instance.currentCash = PlayerPrefs.GetInt("Coins", 0);
            instance.cashAmount.text = "" + instance.currentCash;
            PlayerPrefs.Save();
            CoinDeduction.text = "-" + b.price.ToString();

            LockImage.SetActive(false);
            PlayerPrefs.SetInt("Lock", b.index);

            StartCoroutine(CashDeduction());
            StartCoroutine(PlayConfetti());
        }
        else
            NotEnoughCoinsPopup.SetActive(true);

        // Bus Unlock Event
        Dictionary<string, object> UnlockBusButton = new Dictionary<string, object>()
                {
                                     {"playerLevel" , levels.LevelCount} ,
                                     {"busCost" , b.price } ,
                                     {"busID" , b.index }
                };
        amplitude.logEvent("busUnlock", UnlockBusButton);

        UpdateUI();
        if (customiseManager) customiseManager.BusCustomisationNotify(b, Buses[CurrentBus]);
    }

    private IEnumerator CashDeduction()
    {
        BusBuyAnimation.SetActive(true);
        AudioManager.instance.Play("Coin");
        yield return new WaitForSeconds(1f); 
        BusBuyAnimation.SetActive(false);
    }

    private IEnumerator PlayConfetti()
    {
        AudioManager.instance.Play("EngineStart");
        AudioManager.instance.Play("Confetti");
        Confetti.SetActive(true);
        yield return new WaitForSeconds(0.2f);
        AudioManager.instance.Play("LevelComplete");
        yield return new WaitForSeconds(2.8f);
        Confetti.SetActive(false);
    }

    public void UnlockAllBuses()
    {
        BuyingBuses b = buses[CurrentBus];

        foreach (BuyingBuses bus in buses)
        {
            PlayerPrefs.SetInt(bus.name, 1);
            PlayerPrefs.SetInt("SelectedBus", CurrentBus);
            bus.isUnlocked = true;
            PlayerPrefs.Save();
        }

        UpdateUI();
        if (customiseManager) customiseManager.BusCustomisationNotify(b, Buses[CurrentBus]);
    }

    public void UnlockBusNo12()
    { 
        BuyingBuses b = buses[11];
        PlayerPrefs.SetInt(b.name, 11);
        PlayerPrefs.SetInt("SelectedBus", 11);
        buses[11].isUnlocked = true;
        PlayerPrefs.Save();

        UpdateUI();
        if (customiseManager) customiseManager.BusCustomisationNotify(b, Buses[CurrentBus]);
    }
}
