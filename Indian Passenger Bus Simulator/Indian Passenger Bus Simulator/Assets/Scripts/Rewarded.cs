using UnityEngine;
using UnityEngine.Analytics;
using System.Collections.Generic;

namespace UnityStandardAssets.Vehicles.Car
{
    public class Rewarded : MonoBehaviour
    {
        public string appkey;
        [SerializeField]
        private CoinData CoinInstance;
        [SerializeField]
        private FuelData FuelInstance;
        private string placementName;
        private bool FreeCoins;
        private bool FreeFuel;
        [SerializeField]
        public GameObject NoConnectionPopup;
        public bool rewardedVideoAvailability;
        public bool isConnectionAvailable;
        [SerializeField]
        private GameFinish instance;
        private object FreeCoinButton = "FreeCoinButton";
        private object FreeFuelButton = "FreeFuelButton";
        private object WatchAdForNextLevelButton = "WatchAdForNextLevelButton";
        private object WatchAdForSkinButton = "WatchAdForSkinButton";

        private Amplitude amplitude;
        private AndroidJavaClass pluginClass;
        public InAppStore InAppStoreInstance; 

        private void Awake()
        {
            // Initializing SDK
            amplitude = Amplitude.getInstance();
/*            FreeCoinButton = SetStringToCoin();
            FreeFuelButton = SetStringToFuel();
            WatchAdForNextLevelButton = SetStringToLevel();*/
            amplitude.init("1acb370bcf89779db77dd17092d06718");

            if (PlayerPrefs.HasKey("Coins"))
            {
                CoinInstance.currentCash = PlayerPrefs.GetInt("Coins");
            }

            if (PlayerPrefs.HasKey("Fuel"))
            {
                FuelInstance.currentFuel = PlayerPrefs.GetInt("Fuel");
            } 

/*            if (PlayerPrefs.GetInt("isAdsOn") == 1)
            {
                appkey = "";
            } 
            else
            {
                appkey = "19c1f8c4d";
            }*/
        }

/*        private string SetStringToCoin()
        {
            pluginClass.CallStatic<string>("SetStringToCoin");
            return "FreeCoinButton";
        }

        private string SetStringToFuel()
        {
            pluginClass.CallStatic<string>("SetStringToFuel");
            return "FreeFuelButton";
        }

        private string SetStringToLevel()
        {
            pluginClass.CallStatic<string>("SetStringToLevel");
            return "WatchAdForNextLevelButton";
        }*/

        void Start()
        {
            IronSource.Agent.shouldTrackNetworkState(true);
            IronSourceEvents.onRewardedVideoAvailabilityChangedEvent += RewardedVideoAvailabilityChangedEvent;
            IronSourceEvents.onRewardedVideoAdClosedEvent += RewardedVideoAdClosedEvent;
            IronSourceEvents.onRewardedVideoAdRewardedEvent += RewardedVideoAdRewardedEvent;
        }

        /*private void Update()
        {
            if (rewardedVideoAvailability == true)
            {
                isConnectionAvailable = true;
            }
            else if (rewardedVideoAvailability == false)
            {
                isConnectionAvailable = false;
            }
        }*/

        public void OKButton()
        {
            AudioManager.instance.Play("Buttons");
            NoConnectionPopup.SetActive(false);
        }

        public void FreeCoinsRewardedVideo()
        {
            AudioManager.instance.Play("Buttons");
            if (Application.internetReachability != NetworkReachability.NotReachable)
            {
                IronSource.Agent.showRewardedVideo();
                FreeCoins = true;

                // Showing Rewarded Ad Event
                Dictionary<string, object> RewardAdPlacement = new Dictionary<string, object>()
                {
                                     {"placement" , FreeCoinButton}
                };
                amplitude.logEvent("showingRewardedAd", RewardAdPlacement);

                Dictionary<string, object> FreeCoinAmountAndCount = new Dictionary<string, object>()
                {
                                     {"amount" , 500}
                };
                amplitude.logEvent("Free_Coins", FreeCoinAmountAndCount);

                Analytics.CustomEvent("FreeCoins");
            }
            else
            {
                NoConnectionPopup.SetActive(true);
                AudioManager.instance.Play("PopupSound");
            }
        }

        public void FreeFuelRewardedVideo()
        {
            AudioManager.instance.Play("Buttons");
            if (Application.internetReachability != NetworkReachability.NotReachable)
            {
                IronSource.Agent.showRewardedVideo();
                FreeFuel = true;

                // Showing Rewarded Ad Event
                Dictionary<string, object> RewardAdPlacement = new Dictionary<string, object>()
                {
                                     {"placement" , FreeFuelButton}
                };
                amplitude.logEvent("showingRewardedAd", RewardAdPlacement);

                Dictionary<string, object> FreeFuelAmountAndCount = new Dictionary<string, object>()
                {
                                     {"amount" , 3} 
                };
                amplitude.logEvent("Free_Fuel", FreeFuelAmountAndCount);

                Analytics.CustomEvent("FreeFuel");
            }
            else
            {
                NoConnectionPopup.SetActive(true);
                AudioManager.instance.Play("PopupSound");
            }
        }

        public void MoveToNextLevel()
        {
            AudioManager.instance.Play("Buttons");
            if (Application.internetReachability != NetworkReachability.NotReachable)
            {
                IronSource.Agent.showRewardedVideo();
                instance.NextLevels();

                // Showing Rewarded Ad Event
                Dictionary<string, object> RewardAdPlacement = new Dictionary<string, object>()
                {
                                     {"placement" , WatchAdForNextLevelButton}
                };
                amplitude.logEvent("showingRewardedAd", RewardAdPlacement);
            }
            else
            {
                NoConnectionPopup.SetActive(true);
                AudioManager.instance.Play("PopupSound");
            }
        }

        public void FreeSkinRewardedVideo()
        {
            if (Application.internetReachability != NetworkReachability.NotReachable)
            {
                IronSource.Agent.showRewardedVideo();

                // Showing Rewarded Ad Event
                Dictionary<string, object> RewardSkinAdPlacement = new Dictionary<string, object>()
                {
                                     {"placement" , WatchAdForSkinButton}
                };
                amplitude.logEvent("showingRewardedAd", RewardSkinAdPlacement);
            }
        }

        void RewardedVideoAdClosedEvent()
        {
            IronSource.Agent.init(appkey, IronSourceAdUnits.REWARDED_VIDEO);
            IronSource.Agent.shouldTrackNetworkState(true);
        }

        void RewardedVideoAvailabilityChangedEvent(bool available)
        {
            //Change the in-app 'Traffic Driver' state according to availability.
            rewardedVideoAvailability = available;
        }

        void RewardedVideoAdRewardedEvent(IronSourcePlacement ssp)
        {
            ssp = IronSource.Agent.getPlacementInfo(placementName);
            //Placement can return null if the placementName is not valid.
            if (ssp != null)
            {
                placementName = ssp.getPlacementName();
                string rewardName = ssp.getRewardName();
                int rewardAmount = ssp.getRewardAmount();

                if (FreeCoins == true)
                {
                    CoinInstance.currentCash += 500;
                    PlayerPrefs.SetInt("Coins", CoinInstance.currentCash);
                    CoinInstance.cashAmount.text = "" + CoinInstance.currentCash;
                    PlayerPrefs.Save();
                    FreeCoins = false;
                }

                else if (FreeFuel == true)
                {
                    FuelInstance.currentFuel += 3;
                    PlayerPrefs.SetInt("Fuel", FuelInstance.currentFuel);
                    FuelInstance.fuelAmount.text = "" + FuelInstance.currentFuel;
                    PlayerPrefs.Save();
                    FreeFuel = false;
                }
            }
        }
    }
}