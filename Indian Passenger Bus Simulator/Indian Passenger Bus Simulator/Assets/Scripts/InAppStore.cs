using System.Collections;
using UnityEngine;
using UnityEngine.Purchasing;
using TMPro;
using System.Collections.Generic;

namespace UnityStandardAssets.Vehicles.Car
{
    public class InAppStore : MonoBehaviour
    {
        [SerializeField]
        private GameObject StoreBackground;
        [SerializeField]
        private GameObject Garage;
        [SerializeField]
        private GameObject CoinsSection;
        [SerializeField]
        private GameObject FuelSection;
        [SerializeField]
        private GameObject DealsSection;
        [SerializeField]
        private CoinData instance;
        [SerializeField]
        private FuelData Instance;
        [SerializeField]
        private GarageSetup garageSetup;
        [SerializeField]
        private GameObject InsufficientCoinText;
        [SerializeField]
        private GameObject FuelText;
        private string Deal1 = "com.bussimulator.coinsdeal1";
        private string Deal2 = "com.bussimulator.coinsdeal2";
        private string Deal3 = "com.bussimulator.coinsdeal3";
        private string Deal4 = "com.bussimulator.coinsdeal4";
        private string Deal5 = "com.bussimulator.coinsdeal5";
        private string Deal6 = "com.bussimulator.coinsdeal6";
        private string Deal7 = "com.bussimulator.coinsadpack";
        private string Deal8 = "com.bussimulator.adremovalpack";
        private string Deal9 = "com.bussimulator.unlockallbuses";
        private string Deal10 = "com.bussimulator.unlockbusno.1250cansoffuel";
/*        private string Deal11 = "com.bussimulator.doublerewardfor2days";*/
        private string Deal12 = "com.bussimulator.megapack";
        [SerializeField]
        private GameObject CoinDeductionAnimation;
        [SerializeField]
        private TMP_Text CoinDeductionText;
        [SerializeField]
        private Rewarded RewardedInstance;
        [SerializeField]
        private GameObject InAppStoreCoinAddButton;
        [SerializeField]
        private GameObject InAppStoreFuelAddButton;
        public bool isAdsOff; 
        [SerializeField] 
        private GameObject PurchasedImageNoAds;
        [SerializeField]
        private GameObject PurchasedImageUnlockAllBuses;
        [SerializeField]
        private GameObject PurchasedImageBusNo1250CansOfFuels;
        [SerializeField]
        private GameObject PurchasedImageMegaPack;

        private Amplitude amplitude;

        [Space(15)]

        [SerializeField] private Interstitial interstitialAdManager;

        private void Awake()
        {
            // Initializing SDK
            amplitude = Amplitude.getInstance();
            amplitude.init("1acb370bcf89779db77dd17092d06718");
        }

        private void Start()
        {
            if(PlayerPrefs.GetInt("isAdsOn") == 1)
            {
                isAdsOff = true;
                PurchasedImageNoAds.SetActive(true);
            }
        }

        public void OnPurchaseComplete(Product product)
        {
            AudioManager.instance.Play("Buttons");
            if (product.definition.id == Deal1)
            {
                instance.currentCash += 1000;
                PlayerPrefs.SetInt("Coins", instance.currentCash);
                instance.cashAmount.text = "" + instance.currentCash;
                PlayerPrefs.Save();
                CoinDeductionText.text = "+1000";
                StartCoroutine(WaitForNextAnimation());

                // IAPPurchase Event
                amplitude.logRevenue(Deal1, 1, 8);
            }

            else if (product.definition.id == Deal2)
            {
                instance.currentCash += 2500;
                PlayerPrefs.SetInt("Coins", instance.currentCash);
                instance.cashAmount.text = "" + instance.currentCash;
                PlayerPrefs.Save();
                CoinDeductionText.text = "+2500";
                StartCoroutine(WaitForNextAnimation());

                // IAPPurchase Event
                amplitude.logRevenue(Deal2, 1, 18);
            }

            else if (product.definition.id == Deal3)
            {
                instance.currentCash += 7500;
                PlayerPrefs.SetInt("Coins", instance.currentCash);
                instance.cashAmount.text = "" + instance.currentCash;
                PlayerPrefs.Save();
                CoinDeductionText.text = "+7500";
                StartCoroutine(WaitForNextAnimation());

                // IAPPurchase Event
                amplitude.logRevenue(Deal3, 1, 50);
            }

            else if (product.definition.id == Deal4)
            {
                instance.currentCash += 25000;
                PlayerPrefs.SetInt("Coins", instance.currentCash);
                instance.cashAmount.text = "" + instance.currentCash;
                PlayerPrefs.Save();
                CoinDeductionText.text = "+25000";
                StartCoroutine(WaitForNextAnimation());

                // IAPPurchase Event
                amplitude.logRevenue(Deal4, 1, 180);
            }

            else if (product.definition.id == Deal5)
            {
                instance.currentCash += 50000;
                PlayerPrefs.SetInt("Coins", instance.currentCash);
                instance.cashAmount.text = "" + instance.currentCash;
                PlayerPrefs.Save();
                CoinDeductionText.text = "+50000";
                StartCoroutine(WaitForNextAnimation());

                // IAPPurchase Event
                amplitude.logRevenue(Deal5, 1, 380);
            }

            else if (product.definition.id == Deal6)
            {
                instance.currentCash += 75000;
                PlayerPrefs.SetInt("Coins", instance.currentCash);
                instance.cashAmount.text = "" + instance.currentCash;
                PlayerPrefs.Save();
                CoinDeductionText.text = "+75000";
                StartCoroutine(WaitForNextAnimation());

                // IAPPurchase Event
                amplitude.logRevenue(Deal6, 1, 550);
            }

            else if (product.definition.id == Deal7)
            {
                // 20000 Coins
                instance.currentCash += 20000;
                PlayerPrefs.SetInt("Coins", instance.currentCash);
                instance.cashAmount.text = "" + instance.currentCash;
                PlayerPrefs.Save();
                CoinDeductionText.text = "+20000";
                StartCoroutine(WaitForNextAnimation());

                // Remove Ads
                isAdsOff = true;
                PlayerPrefs.SetInt("isAdsOn", 1);
/*                RewardedInstance.appkey = "";*/

                // IAPPurchase Event
                amplitude.logRevenue(Deal7, 2, 100);
            }

            else if (product.definition.id == Deal8)
            {
                isAdsOff = true;
                PlayerPrefs.SetInt("isAdsOn", 1);
                /*                RewardedInstance.appkey = "";*/

                PurchasedImageNoAds.SetActive(true);

                // IAPPurchase Event
                amplitude.logRevenue(Deal8, 1, 65);
            }

            else if (product.definition.id == Deal9)
            {
                garageSetup.UnlockAllBuses();

                PurchasedImageUnlockAllBuses.SetActive(true);

                // IAPPurchase Event
                amplitude.logRevenue(Deal9, 1, 115);
            }

            else if (product.definition.id == Deal10)
            {
                // 50 Canes of Fuels
                Instance.currentFuel += 50;
                PlayerPrefs.SetInt("Fuel", Instance.currentFuel);
                Instance.fuelAmount.text = "" + Instance.currentFuel;
                PlayerPrefs.Save();

                // Unlock Bus No.12 
                garageSetup.UnlockBusNo12();

                PurchasedImageBusNo1250CansOfFuels.SetActive(true);

                // IAPPurchase Event
                amplitude.logRevenue(Deal10, 2, 98);
            }

/*            else if (product.definition.id == Deal11)
            {
            }*/

            else if (product.definition.id == Deal12)
            { 
                // 50 Canes of Fuels
                Instance.currentFuel += 50;
                PlayerPrefs.SetInt("Fuel", Instance.currentFuel);
                Instance.fuelAmount.text = "" + Instance.currentFuel;
                PlayerPrefs.Save();

                // Unlock All Buses
                garageSetup.UnlockAllBuses();

                // Remove Ads 
                isAdsOff = true;
                PlayerPrefs.SetInt("isAdsOn", 1);
                /*                RewardedInstance.appkey = "";*/

                PurchasedImageMegaPack.SetActive(true);

                // IAPPurchase Event
                amplitude.logRevenue(Deal12, 3, 148);
            }
        }

        public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
        {
            Debug.Log(product.definition.id + "Failed due to" + failureReason);
        }

        /*private IEnumerator Alert()
        {
            FuelText.SetActive(false);
            InsufficientCoinText.SetActive(true);
            AudioManager.instance.Play("PopupSound");
            yield return new WaitForSeconds(1.5f);
            InsufficientCoinText.SetActive(false);
            FuelText.SetActive(true);
        }*/

        public void FuelPurchaseDeal1()
        {
            AudioManager.instance.Play("Buttons");
            if (instance.currentCash >= 400)
            {
                Instance.currentFuel += 5;
                PlayerPrefs.SetInt("Fuel", Instance.currentFuel);
                Instance.fuelAmount.text = "" + Instance.currentFuel;
                instance.currentCash -= 400;
                PlayerPrefs.SetInt("Coins", instance.currentCash);
                instance.cashAmount.text = "" + instance.currentCash;
                PlayerPrefs.Save();
                CoinDeductionText.text = "-400";
                StartCoroutine(WaitForNextAnimation());
            }
            else
            {
                //StartCoroutine(Alert());
                InsufficientCoinText.SetActive(true);
            }
        }

        public void FuelPurchaseDeal2()
        {
            AudioManager.instance.Play("Buttons");
            if (instance.currentCash >= 750)
            {
                Instance.currentFuel += 10;
                PlayerPrefs.SetInt("Fuel", Instance.currentFuel);
                Instance.fuelAmount.text = "" + Instance.currentFuel;
                instance.currentCash -= 750;
                PlayerPrefs.SetInt("Coins", instance.currentCash);
                instance.cashAmount.text = "" + instance.currentCash;
                PlayerPrefs.Save();
                CoinDeductionText.text = "-750";
                StartCoroutine(WaitForNextAnimation());
            }
            else
            {
                //StartCoroutine(Alert());
                InsufficientCoinText.SetActive(true);
            }
        }

        public void FuelPurchaseDeal3()
        {
            AudioManager.instance.Play("Buttons");
            if (instance.currentCash >= 1100)
            {
                Instance.currentFuel += 15;
                PlayerPrefs.SetInt("Fuel", Instance.currentFuel);
                Instance.fuelAmount.text = "" + Instance.currentFuel;
                instance.currentCash -= 1100;
                PlayerPrefs.SetInt("Coins", instance.currentCash);
                instance.cashAmount.text = "" + instance.currentCash;
                PlayerPrefs.Save();
                CoinDeductionText.text = "-1100";
                StartCoroutine(WaitForNextAnimation());
            }
            else
            {
                //StartCoroutine(Alert());
                InsufficientCoinText.SetActive(true);
            }
        }

        public void FuelPurchaseDeal4()
        {
            AudioManager.instance.Play("Buttons");
            if (instance.currentCash >= 1700)
            {
                Instance.currentFuel += 25;
                PlayerPrefs.SetInt("Fuel", Instance.currentFuel);
                Instance.fuelAmount.text = "" + Instance.currentFuel;
                instance.currentCash -= 1700;
                PlayerPrefs.SetInt("Coins", instance.currentCash);
                instance.cashAmount.text = "" + instance.currentCash;
                PlayerPrefs.Save();
                CoinDeductionText.text = "1700";
                StartCoroutine(WaitForNextAnimation());
            }
            else
            {
                //StartCoroutine(Alert());
                InsufficientCoinText.SetActive(true);
            }
        }

        public void FuelPurchaseDeal5()
        {
            AudioManager.instance.Play("Buttons");
            if (instance.currentCash >= 2350)
            {
                Instance.currentFuel += 35;
                PlayerPrefs.SetInt("Fuel", Instance.currentFuel);
                Instance.fuelAmount.text = "" + Instance.currentFuel;
                instance.currentCash -= 2350;
                PlayerPrefs.SetInt("Coins", instance.currentCash);
                instance.cashAmount.text = "" + instance.currentCash;
                PlayerPrefs.Save();
                CoinDeductionText.text = "2350";
                StartCoroutine(WaitForNextAnimation());
            }
            else
            {
                //StartCoroutine(Alert());
                InsufficientCoinText.SetActive(true);
            }
        }

        public void FuelPurchaseDeal6()
        {
            AudioManager.instance.Play("Buttons");
            if (instance.currentCash >= 3350)
            {
                Instance.currentFuel += 50;
                PlayerPrefs.SetInt("Fuel", Instance.currentFuel);
                Instance.fuelAmount.text = "" + Instance.currentFuel;
                instance.currentCash -= 3350;
                PlayerPrefs.SetInt("Coins", instance.currentCash);
                instance.cashAmount.text = "" + instance.currentCash;
                PlayerPrefs.Save();
                CoinDeductionText.text = "3350";
                StartCoroutine(WaitForNextAnimation());
            }
            else
            {
                //StartCoroutine(Alert());
                InsufficientCoinText.SetActive(true);
            }
        }

        public void InAppStoreButton()
        {
            AudioManager.instance.Play("Buttons");
            Garage.SetActive(false);
            CoinsSection.SetActive(true);
            StoreBackground.SetActive(true);
            InAppStoreCoinAddButton.SetActive(false);
        }

        public void InAppStoreButtonFuelSection()
        {
            AudioManager.instance.Play("Buttons");
            Garage.SetActive(false);
            CoinsSection.SetActive(false);
            FuelSection.SetActive(true);
            StoreBackground.SetActive(true);
            InAppStoreFuelAddButton.SetActive(false);
        }

        public void CoinsSectionButton()
        {
            if (!StoreBackground.activeSelf)
                StoreBackground.SetActive(true);

            AudioManager.instance.Play("Buttons");
            CoinsSection.SetActive(true);
            FuelSection.SetActive(false);
            DealsSection.SetActive(false);
        }

        public void FuelSectionButton()
        {
            if (!StoreBackground.activeSelf)
                StoreBackground.SetActive(true);

            AudioManager.instance.Play("Buttons");
            CoinsSection.SetActive(false);
            FuelSection.SetActive(true);
            DealsSection.SetActive(false);
        }

        public void DealsSectionButton()
        {
            if (!StoreBackground.activeSelf) 
                StoreBackground.SetActive(true);

            AudioManager.instance.Play("Buttons");
            CoinsSection.SetActive(false);
            FuelSection.SetActive(false);
            DealsSection.SetActive(true);
        }

        public void BackButton()
        {
            AudioManager.instance.Play("Buttons");
            Garage.SetActive(true);
            CoinsSection.SetActive(false);
            FuelSection.SetActive(false);
            DealsSection.SetActive(false);
            StoreBackground.SetActive(false);
            InAppStoreCoinAddButton.SetActive(true);
            InAppStoreFuelAddButton.SetActive(true);

            //if (interstitialAdManager != null) interstitialAdManager.interstitialplay();
            SubMenuCounter.Instance?.OnMainMenu();
        }

        private IEnumerator WaitForNextAnimation()
        {
            CoinDeductionAnimation.SetActive(true);
            AudioManager.instance.Play("Coin");
            yield return new WaitForSeconds(1f);
            CoinDeductionAnimation.SetActive(false);
        }
    }
}
