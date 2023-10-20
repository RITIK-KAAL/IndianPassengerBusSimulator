using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Analytics;
using System.Collections.Generic;

namespace UnityStandardAssets.Vehicles.Car
{
    public class FuelMeter : MonoBehaviour
    {
        private float IntervalTime = 0.5f;
        public float CurrentFuel;
        private float CountDownTime;
        [SerializeField]
        private GameObject Trigger;
        [SerializeField]
        public Slider slider;
        [SerializeField]
        public TMP_Text TotalFuelCount;
        public int CurrentFuelCount;
        [SerializeField]
        public GameObject FuelFill;
        [SerializeField]
        public GameObject FuelFill1;
        [SerializeField]
        public GameObject FuelFill2;
        [SerializeField]
        public GameObject FuelFill3;
        [SerializeField]
        public GameObject FuelFill4;
        [SerializeField]
        private GameObject FailScreen;
        [SerializeField]
        private FuelData instance;
        [SerializeField]
        private OilStationHalt OilStationInstance;
        private float Variable;
        private object FuelLowPopupButton = "FuelLowPopupButton"; 

        private Amplitude amplitude;
        private AndroidJavaClass pluginClass;

        private void Awake()
        {
            // Initializing SDK
            amplitude = Amplitude.getInstance();
/*            FuelLowPopupButton = SetStringToFuel();*/
            amplitude.init("1acb370bcf89779db77dd17092d06718");

            if (PlayerPrefs.HasKey("Fuel"))
            {
                instance.currentFuel = PlayerPrefs.GetInt("Fuel");
            }

            slider.maxValue = instance.currentFuel * 100f;
            slider.value = instance.currentFuel * 100f;

            TotalFuelCount.text = instance.currentFuel.ToString();
            CurrentFuel = slider.maxValue; 
        }

        private void Start()
        {
            if (slider.value == 0)
            {
                OilStationInstance.FuelStationPopup.SetActive(true);
            }
        }

        public void FuelStationBuyFuel()
        {
            if (OilStationInstance.CoinInstance.currentCash >= OilStationInstance.ServiceCharge)
            {
                Analytics.CustomEvent("FuelByCoins");
                OilStationInstance.FuelCoinReward.SetActive(true);
                AudioManager.instance.Play("Coin");
                instance.currentFuel += 5;
                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                instance.fuelAmount.text = "" + instance.currentFuel;
                PlayerPrefs.Save();
                CurrentFuelCount += 5;
                TotalFuelCount.text = instance.currentFuel.ToString();
                slider.maxValue = instance.currentFuel * 100f;
                CurrentFuel = instance.currentFuel * 100f;
                FuelFill.SetActive(true);
                FuelFill1.SetActive(true);
                FuelFill2.SetActive(true);
                FuelFill3.SetActive(true);
                FuelFill4.SetActive(true);

                OilStationInstance.CoinInstance.currentCash -= 500;
                PlayerPrefs.SetInt("Coins", OilStationInstance.CoinInstance.currentCash);
                OilStationInstance.CoinInstance.cashAmount.text = "" + OilStationInstance.CoinInstance.currentCash;
                PlayerPrefs.Save();

                OilStationInstance.FuelEarnedText.text = "+5";
                OilStationInstance.WinningFuelAnimation.SetActive(true);
                OilStationInstance.FuelStationPopup.SetActive(false);
            }
            else
            {
                StartCoroutine(AlertText());
            }
        }

        private IEnumerator AlertText()
        {
            OilStationInstance.InsufficientCoinText.SetActive(true);
            yield return new WaitForSeconds(1.5f);
            OilStationInstance.InsufficientCoinText.SetActive(false);
        }

/*        private string SetStringToFuel()
        {
            pluginClass.CallStatic<string>("SetStringToFuel");
            return "FuelLowPopupButton";
        }
*/
        public void FuelStationAd()
        {
            if (Application.internetReachability != NetworkReachability.NotReachable)
            {
                Analytics.CustomEvent("WatchAdForFuel");
                IronSource.Agent.showRewardedVideo();

                // Showing Rewarded Ad Event
                Dictionary<string, object> RewardAdPlacement = new Dictionary<string, object>()
                {
                                     {"placement" , FuelLowPopupButton}
                };
                amplitude.logEvent("showingRewardedAd", RewardAdPlacement);

                Dictionary<string, object> FreeFuelAmountAndCount = new Dictionary<string, object>()
                {
                                     {"amount" , 3}
                };
                amplitude.logEvent("Free_Fuel", FreeFuelAmountAndCount);

                Analytics.CustomEvent("FreeFuel");

                instance.currentFuel += 3;
                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                instance.fuelAmount.text = "" + instance.currentFuel;
                PlayerPrefs.Save();
                CurrentFuelCount += 3;
                TotalFuelCount.text = instance.currentFuel.ToString();
                slider.maxValue = instance.currentFuel * 100f;
                CurrentFuel = instance.currentFuel * 100f;

                if (CurrentFuel == 100)
                {
                    FuelFill.SetActive(true);
                }
                else if (CurrentFuel == 200)
                {
                    FuelFill.SetActive(true);
                    FuelFill1.SetActive(true);
                }
                else if (CurrentFuel == 300)
                {
                    FuelFill.SetActive(true);
                    FuelFill1.SetActive(true);
                    FuelFill2.SetActive(true);
                }
                else if (CurrentFuel == 400)
                {
                    FuelFill.SetActive(true);
                    FuelFill1.SetActive(true);
                    FuelFill2.SetActive(true);
                    FuelFill3.SetActive(true);
                }
                else if (CurrentFuel == 500)
                {
                    FuelFill.SetActive(true);
                    FuelFill1.SetActive(true);
                    FuelFill2.SetActive(true);
                    FuelFill3.SetActive(true);
                    FuelFill4.SetActive(true);
                }

                OilStationInstance.FuelEarnedText.text = "+3";
                OilStationInstance.WinningFuelAnimation.SetActive(true);
                OilStationInstance.FuelStationPopup.SetActive(false);
            }
            else
            {
                OilStationInstance.RewardedInstance.NoConnectionPopup.SetActive(true);
                OilStationInstance.FuelStationPopup.SetActive(false);
            }
        }

        public void OkButton()
        {
            OilStationInstance.NoConnectionPopup.SetActive(false);
            OilStationInstance.FuelStationPopup.SetActive(true);
        }

        public void FuelPopupExit()
        {
            if (instance.currentFuel == 0)
            {
                FailScreen.SetActive(true);
                OilStationInstance.FuelStationPopup.SetActive(false);
            }
            else
            {
                OilStationInstance.FuelStationPopup.SetActive(false);
            }
        }

        private void Update()
        {
            if (CurrentFuelCount == 4)
            {
                FuelFill4.SetActive(false);
            }
            else if (CurrentFuelCount == 3)
            {
                FuelFill3.SetActive(false);
                FuelFill4.SetActive(false);
            }
            else if (CurrentFuelCount == 2)
            {
                FuelFill2.SetActive(false);
                FuelFill3.SetActive(false);
                FuelFill4.SetActive(false);
            }
            else if (CurrentFuelCount == 1)
            {
                FuelFill1.SetActive(false);
                FuelFill2.SetActive(false);
                FuelFill3.SetActive(false);
                FuelFill4.SetActive(false);
            }
            else if (CurrentFuelCount == 0)
            {
                FuelFill.SetActive(false);
                FuelFill1.SetActive(false);
                FuelFill2.SetActive(false);
                FuelFill3.SetActive(false);
                FuelFill4.SetActive(false);
            }

            CurrentFuelCount = instance.currentFuel;

            if (Trigger.activeSelf)
            {
                if (CountDownTime > 0)
                {
                    CountDownTime -= Time.deltaTime;
                }
                else
                {
                    CountDownTime = IntervalTime;
                    CurrentFuel -= 1;

                    if (CurrentFuelCount <= 5)
                    {
                        slider.value = CurrentFuel;

                        if (slider.value == 400)
                        {
                            FuelFill4.SetActive(false);
                            AudioManager.instance.Play("FuelReduced");
                            CurrentFuelCount = 4;
                            instance.currentFuel -= 1;
                            PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                            instance.fuelAmount.text = "" + instance.currentFuel;
                            PlayerPrefs.Save();
                            TotalFuelCount.text = CurrentFuelCount.ToString();
                        }

                        else if (slider.value == 300)
                        {
                            FuelFill3.SetActive(false);
                            FuelFill4.SetActive(false);
                            AudioManager.instance.Play("FuelReduced");
                            CurrentFuelCount = 3;
                            instance.currentFuel -= 1;
                            PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                            instance.fuelAmount.text = "" + instance.currentFuel;
                            PlayerPrefs.Save();
                            TotalFuelCount.text = CurrentFuelCount.ToString();
                        }

                        else if (slider.value == 200)
                        {
                            FuelFill2.SetActive(false);
                            FuelFill3.SetActive(false);
                            FuelFill4.SetActive(false);
                            AudioManager.instance.Play("FuelReduced");
                            CurrentFuelCount = 2;
                            instance.currentFuel -= 1;
                            PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                            instance.fuelAmount.text = "" + instance.currentFuel;
                            PlayerPrefs.Save();
                            TotalFuelCount.text = CurrentFuelCount.ToString();
                        }

                        else if (slider.value == 100)
                        {
                            FuelFill1.SetActive(false);
                            FuelFill2.SetActive(false);
                            FuelFill3.SetActive(false);
                            FuelFill4.SetActive(false);
                            AudioManager.instance.Play("FuelReduced");
                            CurrentFuelCount = 1;
                            instance.currentFuel -= 1;
                            PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                            instance.fuelAmount.text = "" + instance.currentFuel;
                            PlayerPrefs.Save();
                            TotalFuelCount.text = CurrentFuelCount.ToString();
                        }

                        else if (slider.value == 0)
                        {
                            FuelFill.SetActive(false);
                            FuelFill1.SetActive(false);
                            FuelFill2.SetActive(false);
                            FuelFill3.SetActive(false);
                            FuelFill4.SetActive(false);
                            AudioManager.instance.Play("FuelReduced");
                            CurrentFuelCount = 0;
                            instance.currentFuel = 0;
                            PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                            instance.fuelAmount.text = "" + instance.currentFuel;
                            PlayerPrefs.Save();
                            TotalFuelCount.text = CurrentFuelCount.ToString();
/*                            IronSource.Agent.loadBanner(IronSourceBannerSize.BANNER, IronSourceBannerPosition.BOTTOM);*/
                            OilStationInstance.FuelStationPopup.SetActive(true);
                        }
                    }

                    else if (CurrentFuelCount > 5)
                    {
                        slider.maxValue = instance.currentFuel * 100f;
                        Variable = instance.currentFuel * 100f;
                        slider.value = Variable; 

                        if (slider.value > 500)
                        {
                            slider.value = CurrentFuel;

                            if (slider.value == 900)
                            {
                                CurrentFuelCount = 9;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 800)
                            {
                                CurrentFuelCount = 8;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 700)
                            {
                                CurrentFuelCount = 7;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 600)
                            {
                                CurrentFuelCount = 6;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 500)
                            {
                                CurrentFuelCount = 5;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 1000)
                            {
                                CurrentFuelCount = 10;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 1100)
                            {
                                CurrentFuelCount = 11;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 1200)
                            {
                                CurrentFuelCount = 12;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 1300)
                            {
                                CurrentFuelCount = 13;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 1400)
                            {
                                CurrentFuelCount = 14;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 1500)
                            {
                                CurrentFuelCount = 15;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 1600)
                            {
                                CurrentFuelCount = 16;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 1700)
                            {
                                CurrentFuelCount = 17;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 1800)
                            {
                                CurrentFuelCount = 18;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 1900)
                            {
                                CurrentFuelCount = 19;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 2000)
                            {
                                CurrentFuelCount = 20;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 2100)
                            {
                                CurrentFuelCount = 21;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 2200)
                            {
                                CurrentFuelCount = 22;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 2300)
                            {
                                CurrentFuelCount = 23;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 2400)
                            {
                                CurrentFuelCount = 24;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 2500)
                            {
                                CurrentFuelCount = 25;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 2600)
                            {
                                CurrentFuelCount = 26;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 2700)
                            {
                                CurrentFuelCount = 27;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 2800)
                            {
                                CurrentFuelCount = 28;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 2900)
                            {
                                CurrentFuelCount = 29;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 3000)
                            {
                                CurrentFuelCount = 30;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 3100)
                            {
                                CurrentFuelCount = 31;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 3200)
                            {
                                CurrentFuelCount = 32;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 3300)
                            {
                                CurrentFuelCount = 33;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 3400)
                            {
                                CurrentFuelCount = 34;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 3500)
                            {
                                CurrentFuelCount = 35;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 3600)
                            {
                                CurrentFuelCount = 36;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 3700)
                            {
                                CurrentFuelCount = 37;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 3800)
                            {
                                CurrentFuelCount = 38;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 3900)
                            {
                                CurrentFuelCount = 39;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 4000)
                            {
                                CurrentFuelCount = 40;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 4100)
                            {
                                CurrentFuelCount = 41;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 4200)
                            {
                                CurrentFuelCount = 42;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 4300)
                            {
                                CurrentFuelCount = 43;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 4400)
                            {
                                CurrentFuelCount = 44;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 4500)
                            {
                                CurrentFuelCount = 45;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 4600)
                            {
                                CurrentFuelCount = 46;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 4700)
                            {
                                CurrentFuelCount = 47;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 4800)
                            {
                                CurrentFuelCount = 48;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 4900)
                            {
                                CurrentFuelCount = 49;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 5000)
                            {
                                CurrentFuelCount = 50;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 5100)
                            {
                                CurrentFuelCount = 51;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 5200)
                            {
                                CurrentFuelCount = 52;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 5300)
                            {
                                CurrentFuelCount = 53;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 5400)
                            {
                                CurrentFuelCount = 54;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 5500)
                            {
                                CurrentFuelCount = 55;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 5600)
                            {
                                CurrentFuelCount = 56;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 5700)
                            {
                                CurrentFuelCount = 57;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 5800)
                            {
                                CurrentFuelCount = 58;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 5900)
                            {
                                CurrentFuelCount = 59;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 6000)
                            {
                                CurrentFuelCount = 60;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 6100)
                            {
                                CurrentFuelCount = 61;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 6200)
                            {
                                CurrentFuelCount = 62;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 6300)
                            {
                                CurrentFuelCount = 63;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 6400)
                            {
                                CurrentFuelCount = 64;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 6500)
                            {
                                CurrentFuelCount = 65;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 6600)
                            {
                                CurrentFuelCount = 66;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 6700)
                            {
                                CurrentFuelCount = 67;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 6800)
                            {
                                CurrentFuelCount = 68;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 6900)
                            {
                                CurrentFuelCount = 69;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                            else if (slider.value == 7000)
                            {
                                CurrentFuelCount = 70;
                                AudioManager.instance.Play("FuelReduced");
                                instance.currentFuel -= 1;
                                PlayerPrefs.SetInt("Fuel", instance.currentFuel);
                                instance.fuelAmount.text = "" + instance.currentFuel;
                                PlayerPrefs.Save();
                                TotalFuelCount.text = CurrentFuelCount.ToString();
                            }
                        }
                    }
                }
            }
        }
    }
}
