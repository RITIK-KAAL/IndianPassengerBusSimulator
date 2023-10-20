using System.Collections;
using UnityEngine;
using TMPro;
using UnityEngine.Analytics;
using System.Collections.Generic;

namespace UnityStandardAssets.Vehicles.Car
{
    public class BusService : MonoBehaviour
    {
        [SerializeField]
        private GameObject SeatBeltButton;
        [SerializeField]
        private GameObject CoinRewardAnimation;
        [SerializeField]
        private Transform Bus;
        [SerializeField]
        private TMP_Text CoinCount;
        private int Coins = 100;
        private int ServiceCharge = 50;
        [SerializeField]
        private TMP_Text CoinRewardText;
        [SerializeField]
        private GameObject ServiceMenu;
        public GameObject FailScreen;
        public static BusService instance;
        private bool isServiceRequired;
        [SerializeField]
        private GameObject Timer;
        [SerializeField]
        private Transform ServicePoint;
        [SerializeField]
        private Transform ServicePoint1;
        [SerializeField]
        private Transform ServicePoint2;
        [SerializeField]
        private Transform StartingPoint;
        private float Start;
        [SerializeField]
        private CoinData CoinInstance;
        [SerializeField]
        private GameObject InsufficientCoinText;
        [SerializeField]
        private Rewarded RewardedInstance;
        private object ServiceButton = "ServiceButton";

        private Amplitude amplitude;
        private AndroidJavaClass pluginClass;

        private void Awake()
        {
            // Initializing SDK
            amplitude = Amplitude.getInstance();
/*            ServiceButton = SetStringToService();*/
            amplitude.init("1acb370bcf89779db77dd17092d06718");

            if (instance == null)
            {
                instance = this;
            }

            if (PlayerPrefs.HasKey("Coins"))
            {
                CoinInstance.currentCash = PlayerPrefs.GetInt("Coins");
            }
        }

        public void Service()
        {
            if (InsufficientCoinText.activeSelf)
                InsufficientCoinText.SetActive(false);

            CoinRewardAnimation.SetActive(false);
            ServiceMenu.SetActive(true);
        }

        public void ServiceByCoin()
        {
            if (CoinInstance.currentCash >= ServiceCharge)
            {
                Analytics.CustomEvent("ServiceByCoins");
                CoinRewardAnimation.SetActive(true);
                AudioManager.instance.Play("Coin");
                CoinRewardText.text = "-50 Coins";
                CoinInstance.currentCash -= 50;
                PlayerPrefs.SetInt("Coins", CoinInstance.currentCash);
                CoinInstance.cashAmount.text = "" + CoinInstance.currentCash;
                PlayerPrefs.Save();

                if(HealthBar.instance)
                {
                    HealthBar.instance.CurrentHealth = 3;
                    HealthBar.instance.slider.value = 3;
                    HealthBar.instance.UpdateEmojis();
                }

                ServiceMenu.SetActive(false);

                /*if (HealthBar.instance.CurrentHealth == 0)
                {
                    CoinRewardAnimation.SetActive(true);
                    AudioManager.instance.Play("Coin");
                    CoinRewardText.text = "-50 Coins";
                    CoinInstance.currentCash -= 50;
                    PlayerPrefs.SetInt("Coins", CoinInstance.currentCash);
                    CoinInstance.cashAmount.text = "" + CoinInstance.currentCash;
                    PlayerPrefs.Save();
                    HealthBar.instance.CurrentHealth = 3;
                    HealthBar.instance.slider.value = 3;
                    ServiceMenu.SetActive(false);
                }
                else
                {
                    CoinRewardAnimation.SetActive(true);
                    AudioManager.instance.Play("Coin");
                    CoinRewardText.text = "-50 Coins";
                    CoinInstance.currentCash -= 50;
                    PlayerPrefs.SetInt("Coins", CoinInstance.currentCash);
                    CoinInstance.cashAmount.text = "" + CoinInstance.currentCash;
                    PlayerPrefs.Save();
                    HealthBar.instance.CurrentHealth = 3;
                    HealthBar.instance.slider.value = 3;
                    ServiceMenu.SetActive(false);
                }*/
            }
            else
            {
                StartCoroutine(AlertText());
            }
        }

        public void ServiceByCoin1()
        {         
            if (CoinInstance.currentCash >= ServiceCharge)
            {
                Analytics.CustomEvent("ServiceByCoins");
                CoinRewardAnimation.SetActive(true);
                AudioManager.instance.Play("Coin");
                CoinRewardText.text = "-50 Coins";
                CoinInstance.currentCash -= 50;
                PlayerPrefs.SetInt("Coins", CoinInstance.currentCash);
                CoinInstance.cashAmount.text = "" + CoinInstance.currentCash;
                PlayerPrefs.Save();

                if(UnaffectedHealth.instance != null)
                {
                    UnaffectedHealth.instance.CurrentHealth = 3;
                    UnaffectedHealth.instance.slider.value = 3;
                }

                if(HealthBar.instance)
                    HealthBar.instance.UpdateEmojis();

                ServiceMenu.SetActive(false);
            }
            else
            {
                StartCoroutine(AlertText());
            }
        }

        private IEnumerator AlertText()
        {
            InsufficientCoinText.SetActive(true);
            yield return new WaitForSeconds(1.5f);
            InsufficientCoinText.SetActive(false);
        }

        public void SeatBelt()
        {
            Analytics.CustomEvent("SeatBelt");
            CoinRewardAnimation.SetActive(true);
            SeatBeltButton.SetActive(false);
            AudioManager.instance.Play("Seatbelt");
            StartCoroutine(WaitForNextAudio());
        }

        private IEnumerator WaitForNextAudio()
        {
            yield return new WaitForSeconds(1f);
            AudioManager.instance.Play("Coin");
            CoinInstance.currentCash += 10;
            PlayerPrefs.SetInt("Coins", CoinInstance.currentCash);
            CoinInstance.cashAmount.text = "" + CoinInstance.currentCash;
            PlayerPrefs.Save();
        }

        public void Exit()
        {
            if (HealthBar.instance.CurrentHealth == 0)
            {
                FailScreen.SetActive(true);
                ServiceMenu.SetActive(false);
            }
            else
            {
                ServiceMenu.SetActive(false);
            }
        }

        public void UnaffectedExit()
        {
            ServiceMenu.SetActive(false);
        }

        private void Update()
        {
            Start = Vector3.Distance(Bus.position, StartingPoint.position);

            if (ServiceMenu.activeInHierarchy)
            {
                Timer.SetActive(false);
            }
            else
            {
                Timer.SetActive(true);
            }
        }

        public void WatchAdForServiceUnaffected()
        {
            if (Application.internetReachability != NetworkReachability.NotReachable)
            {
                Analytics.CustomEvent("WatchAdForService");
                IronSource.Agent.showRewardedVideo();

                // Showing Rewarded Ad Event
                Dictionary<string, object> RewardAdPlacement = new Dictionary<string, object>()
                {
                                     {"placement" , ServiceButton}
                };
                amplitude.logEvent("showingRewardedAd", RewardAdPlacement);

                UnaffectedHealth.instance.CurrentHealth = 3;
                UnaffectedHealth.instance.slider.value = 3;
                ServiceMenu.SetActive(false);
            }
            else
            {
                RewardedInstance.NoConnectionPopup.SetActive(true);
                ServiceMenu.SetActive(false);
            }
        }

        public void WatchAdForServiceAffected()
        {
            if (Application.internetReachability != NetworkReachability.NotReachable)
            {
                Analytics.CustomEvent("WatchAdForService");
                IronSource.Agent.showRewardedVideo();

                // Showing Rewarded Ad Event
                Dictionary<string, object> RewardAdPlacement = new Dictionary<string, object>()
                {
                                     {"placement" , ServiceButton}
                };
                amplitude.logEvent("showingRewardedAd", RewardAdPlacement);

                HealthBar.instance.CurrentHealth = 3;
                HealthBar.instance.slider.value = 3;
                ServiceMenu.SetActive(false);
            }
            else
            {
                RewardedInstance.NoConnectionPopup.SetActive(true);
                ServiceMenu.SetActive(false);
            }
        }

/*        private string SetStringToService()
        {
            pluginClass.CallStatic<string>("SetStringToService");
            return "ServiceButton";
        }*/
    }
}
