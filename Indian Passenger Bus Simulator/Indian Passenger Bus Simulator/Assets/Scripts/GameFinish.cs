using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Analytics;
using System.Collections.Generic;

namespace UnityStandardAssets.Vehicles.Car
{
    public class GameFinish : MonoBehaviour
    {
        [SerializeField]
        private GameObject LoadingImage;
        [SerializeField]
        private Slider slider;
        [SerializeField]
        private TMP_Text LoadingPercentage;
        [SerializeField]
        private TMP_Text FinishLevelName;
        [SerializeField]
        private TMP_Text FailedLevelName;
        [SerializeField]
        private Animator BarFillAnimation;
        [SerializeField]
        private Animator TimeFillAnimation;
        [SerializeField]
        private GameObject Star1;
        [SerializeField]
        private GameObject Star2;
        [SerializeField]
        private GameObject Star3;
        [SerializeField]
        private GameObject FinishPage;
        [SerializeField]
        private GameObject CoinsEarned;
        [SerializeField]
        private TMP_Text CoinsEarnedText;
        [SerializeField]
        private GameObject ButtonHolder;
        [SerializeField]
        public GameObject LevelAnalyzer1;
        [SerializeField]
        public Slider TimerSlider;
        [SerializeField]
        private Slider FinishPageSlider;
        [SerializeField]
        private GameObject FailPage;
        public float ThreeStar;
        public float TwoStar;
        public float OneStar;
        [SerializeField]
        public Slider HealthBarSlider;
        private float TimerTracker;
        private float TimerTracker1;
        [SerializeField]
        private CoinData instance;
        public bool isThreeStared;
        public bool isTwoStared;
        public bool isOneStared;
        private bool isFailed;
        public static GameFinish Instance;
        [SerializeField]
        private TMP_Text CurrentCoinCount;
        private int LevelLoseValue = 20;
        private bool isWorking;
        private int RealTimeScene;
        [SerializeField]
        private CarAudio carAudio;
        private bool isFirstTime;
        private bool isCurrentLevel;
        private object Time;
        private object LevelRetry = "LevelRetry";
        private object LevelPassed = "LevelPassed";
        private object LevelFailed = "LevelFailed";

        private Amplitude amplitude;
        private AndroidJavaClass pluginClass;

        private void Awake()
        {
            // Initializing SDK
            amplitude = Amplitude.getInstance();
            amplitude.init("1acb370bcf89779db77dd17092d06718");

            RealTimeScene = SceneManager.GetActiveScene().buildIndex;
            FinishLevelName.text = SceneManager.GetActiveScene().name;
            FailedLevelName.text = SceneManager.GetActiveScene().name;
            ThreeStar = TimerSlider.value * 70f / 100f;
            TwoStar = TimerSlider.value - ThreeStar;
            OneStar = TwoStar / 2f;
            TimerTracker = FinishPageSlider.maxValue / 3f + 3f;
            TimerTracker1 = FinishPageSlider.maxValue / 1.5f;

            if (PlayerPrefs.HasKey("Coins"))
            {
                instance.currentCash = PlayerPrefs.GetInt("Coins");
            }

            IronSource.Agent.loadInterstitial();

            isFirstTime = true;
            isCurrentLevel = true;
            Time = TimerSlider.maxValue - TimerSlider.value; 
        }

/*        private string SetStringToLevelRetry()
        {
            LevelRetry = SetStringToLevelRetry();
            pluginClass.CallStatic<string>("SetStringToLevelRetry");
            return "LevelRetry";
        }

        private string SetStringToLevelPassed()
        {
            LevelPassed = SetStringToLevelPassed();
            pluginClass.CallStatic<string>("SetStringToLevelPassed");
            return "LevelPassed";
        }

        private string SetStringToLevelFailed()
        {
            LevelFailed = SetStringToLevelFailed();
            pluginClass.CallStatic<string>("SetStringToLevelFailed");
            return "LevelFailed";
        }*/

        public void RestartLevel(int SceneIndex)
        {
            AudioManager.instance.Stop("BackGear");
            AudioManager.instance.Stop("City");
            AudioManager.instance.Stop("Birds");
            AudioManager.instance.Play("Buttons");
            if (RealTimeScene >= 6)
            {
                if (PlayerPrefs.GetInt("isAdsOn") == 0)
                {
                    IronSource.Agent.showInterstitial();
                }
                else if (PlayerPrefs.GetInt("isAdsOn") == 1)
                {
                    // Do Something
                }
            }
            StartCoroutine(RestartLevelAsync(SceneIndex));
            Analytics.CustomEvent("RestartLevel");

            // Level Retry Event
            Dictionary<string, object> LevelRetryButton = new Dictionary<string, object>()
                {
                                     {"levelRetry" , LevelRetry }
                };
            amplitude.logEvent("LevelRetry", LevelRetryButton);
        }

        public void Back(int SceneIndex)
        {
            AudioManager.instance.Stop("BackGear");
            AudioManager.instance.Stop("City");
            AudioManager.instance.Stop("Birds");
            AudioManager.instance.Play("Buttons");
            if (RealTimeScene >= 6)
            {
                if (PlayerPrefs.GetInt("isAdsOn") == 0)
                {
                    IronSource.Agent.showInterstitial();
                }
                else if (PlayerPrefs.GetInt("isAdsOn") == 1)
                {
                    // Do Something
                }
            }
            StartCoroutine(RestartLevelAsync(SceneIndex));
            Analytics.CustomEvent("RestartLevel");
        }

        private IEnumerator RestartLevelAsync(int sceneIndex)
        {
            AsyncOperation operation = SceneManager.LoadSceneAsync(sceneIndex);
            LoadingImage.SetActive(true);

            if (isThreeStared == true)
            {
                if (RealTimeScene == 1)
                {
                    if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level1ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 2)
                {
                    if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level2ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 3)
                {
                    if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level3ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 4)
                {
                    if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level4ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 5)
                {
                    if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level5ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 6)
                {
                    if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level6ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 7)
                {
                    if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level7ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 8)
                {
                    if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level8ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 9)
                {
                    if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level9ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 10)
                {
                    if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level10ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 11)
                {
                    if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level11ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 12)
                {
                    if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level12ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 13)
                {
                    if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level13ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 14)
                {
                    if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level14ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 15)
                {
                    if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level15ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 16)
                {
                    if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level16ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 17)
                {
                    if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level17ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 18)
                {
                    if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level18ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 19)
                {
                    if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level19ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 20)
                {
                    if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level20ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 21)
                {
                    if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level21ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 22)
                {
                    if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level22ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 23)
                {
                    if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level23ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 24)
                {
                    if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level24ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 25)
                {
                    if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level25ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 26)
                {
                    if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level26ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 27)
                {
                    if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level27ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 28)
                {
                    if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level28ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 29)
                {
                    if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level29ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 30)
                {
                    if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level30ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 31)
                {
                    if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level31ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 32)
                {
                    if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)
                    {
                        PlayerPrefs.SetInt("Level32ThreeStar", 1);
                        instance.currentCash += 500;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
            }
            else if (isTwoStared == true)
            {
                if (RealTimeScene == 1)
                {
                    if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 2)
                {
                    if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 3)
                {
                    if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 4)
                {
                    if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 5)
                {
                    if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 6)
                {
                    if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 7)
                {
                    if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 8)
                {
                    if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 9)
                {
                    if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 10)
                {
                    if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 11)
                {
                    if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 12)
                {
                    if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 13)
                {
                    if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 14)
                {
                    if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 15)
                {
                    if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 16)
                {
                    if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 17)
                {
                    if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 18)
                {
                    if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 19)
                {
                    if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 20)
                {
                    if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 21)
                {
                    if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 22)
                {
                    if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 23)
                {
                    if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 24)
                {
                    if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 25)
                {
                    if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 26)
                {
                    if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 27)
                {
                    if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 28)
                {
                    if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 29)
                {
                    if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 30)
                {
                    if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 31)
                {
                    if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 32)
                {
                    if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)
                    {
                        instance.currentCash += 400;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
            }
            else if (isOneStared == true)
            {
                if (RealTimeScene == 1)
                {
                    if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 2)
                {
                    if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 3)
                {
                    if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 4)
                {
                    if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 5)
                {
                    if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 6)
                {
                    if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 7)
                {
                    if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 8)
                {
                    if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 9)
                {
                    if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 10)
                {
                    if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 11)
                {
                    if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 12)
                {
                    if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 13)
                {
                    if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 14)
                {
                    if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 15)
                {
                    if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 16)
                {
                    if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 17)
                {
                    if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 18)
                {
                    if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 19)
                {
                    if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 20)
                {
                    if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 21)
                {
                    if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 22)
                {
                    if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 23)
                {
                    if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 24)
                {
                    if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 25)
                {
                    if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 26)
                {
                    if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 27)
                {
                    if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 28)
                {
                    if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 29)
                {
                    if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 30)
                {
                    if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 31)
                {
                    if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
                else if (RealTimeScene == 32)
                {
                    if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)
                    {
                        instance.currentCash += 300;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                    else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                    {
                        instance.currentCash += 50;
                        PlayerPrefs.SetInt("Coins", instance.currentCash);
                        instance.cashAmount.text = "" + instance.currentCash;
                        PlayerPrefs.Save();
                    }
                }
            }
            else if (isFailed == true)
            {
                instance.currentCash += 20;
                PlayerPrefs.SetInt("Coins", instance.currentCash);
                instance.cashAmount.text = "" + instance.currentCash;
                PlayerPrefs.Save();
            }

            while (!operation.isDone)
            {
                float Progress = Mathf.Clamp01(operation.progress / 0.9f);
                slider.value = Progress;
                LoadingPercentage.text = Progress * 100f + "%";
                yield return null;
            }
        }

        public void NextLevel()
        {
            Analytics.CustomEvent("NextLevel");
            AudioManager.instance.Play("Buttons");
            AudioManager.instance.Stop("BackGear");
            AudioManager.instance.Stop("City");
            AudioManager.instance.Stop("Birds");
            if (RealTimeScene >= 6)
            {
                if (PlayerPrefs.GetInt("isAdsOn") == 0)
                {
                    IronSource.Agent.showInterstitial();
                }
                else if (PlayerPrefs.GetInt("isAdsOn") == 1)
                {
                    // Do Something
                }
            }
            StartCoroutine(RestartLevelAsync(SceneManager.GetActiveScene().buildIndex + 1));
        } 

        public void NextLevels()
        {
            isOneStared = true;
            Star1.SetActive(true);
            StartCoroutine(RestartLevelAsync(SceneManager.GetActiveScene().buildIndex + 1));
            if(RealTimeScene == 1)
            {
                PlayerPrefs.SetInt("Level1", 1);
                PlayerPrefs.SetInt("Level1OneStared", 1);
            }
            if (RealTimeScene == 2)
            {
                PlayerPrefs.SetInt("Level2", 1);
                PlayerPrefs.SetInt("Level2OneStared", 1);
            }
            if (RealTimeScene == 3)
            {
                PlayerPrefs.SetInt("Level3", 1);
                PlayerPrefs.SetInt("Level3OneStared", 1);
            }
            if (RealTimeScene == 4)
            {
                PlayerPrefs.SetInt("Level4", 1);
                PlayerPrefs.SetInt("Level4OneStared", 1);
            }
            if (RealTimeScene == 5)
            {
                PlayerPrefs.SetInt("Level5", 1);
                PlayerPrefs.SetInt("Level5OneStared", 1);
            }
            if (RealTimeScene == 6)
            {
                PlayerPrefs.SetInt("Level6", 1);
                PlayerPrefs.SetInt("Level6OneStared", 1);
            }
            if (RealTimeScene == 7)
            {
                PlayerPrefs.SetInt("Level7", 1);
                PlayerPrefs.SetInt("Level7OneStared", 1);
            }
            if (RealTimeScene == 8)
            {
                PlayerPrefs.SetInt("Level8", 1);
                PlayerPrefs.SetInt("Level8OneStared", 1);
            }
            if (RealTimeScene == 9)
            {
                PlayerPrefs.SetInt("Level9", 1);
                PlayerPrefs.SetInt("Level9OneStared", 1);
            }
            if (RealTimeScene == 10)
            {
                PlayerPrefs.SetInt("Level10", 1);
                PlayerPrefs.SetInt("Level10OneStared", 1);
            }
            if (RealTimeScene == 11)
            {
                PlayerPrefs.SetInt("Level11", 1);
                PlayerPrefs.SetInt("Level11OneStared", 1);
            }
            if (RealTimeScene == 12)
            {
                PlayerPrefs.SetInt("Level12", 1);
                PlayerPrefs.SetInt("Level12OneStared", 1);
            }
            if (RealTimeScene == 13)
            {
                PlayerPrefs.SetInt("Level13", 1);
                PlayerPrefs.SetInt("Level13OneStared", 1);
            }
            if (RealTimeScene == 14)
            {
                PlayerPrefs.SetInt("Level14", 1);
                PlayerPrefs.SetInt("Level14OneStared", 1);
            }
            if (RealTimeScene == 15)
            {
                PlayerPrefs.SetInt("Level15", 1);
                PlayerPrefs.SetInt("Level15OneStared", 1);
            }
            if (RealTimeScene == 16)
            {
                PlayerPrefs.SetInt("Level16", 1);
                PlayerPrefs.SetInt("Level16OneStared", 1);
            }
            if (RealTimeScene == 17)
            {
                PlayerPrefs.SetInt("Level17", 1);
                PlayerPrefs.SetInt("Level17OneStared", 1);
            }
            if (RealTimeScene == 18)
            {
                PlayerPrefs.SetInt("Level18", 1);
                PlayerPrefs.SetInt("Level18OneStared", 1);
            }
            if (RealTimeScene == 19)
            {
                PlayerPrefs.SetInt("Level19", 1);
                PlayerPrefs.SetInt("Level19OneStared", 1);
            }
            if (RealTimeScene == 20)
            {
                PlayerPrefs.SetInt("Level20", 1);
                PlayerPrefs.SetInt("Level20OneStared", 1);
            }
            if (RealTimeScene == 21)
            {
                PlayerPrefs.SetInt("Level21", 1);
                PlayerPrefs.SetInt("Level21OneStared", 1);
            }
            if (RealTimeScene == 22)
            {
                PlayerPrefs.SetInt("Level22", 1);
                PlayerPrefs.SetInt("Level22OneStared", 1);
            }
            if (RealTimeScene == 23)
            {
                PlayerPrefs.SetInt("Level23", 1);
                PlayerPrefs.SetInt("Level23OneStared", 1);
            }
            if (RealTimeScene == 24)
            {
                PlayerPrefs.SetInt("Level24", 1);
                PlayerPrefs.SetInt("Level24OneStared", 1);
            }
            if (RealTimeScene == 25)
            {
                PlayerPrefs.SetInt("Level25", 1);
                PlayerPrefs.SetInt("Level25OneStared", 1);
            }
            if (RealTimeScene == 26)
            {
                PlayerPrefs.SetInt("Level26", 1);
                PlayerPrefs.SetInt("Level26OneStared", 1);
            }
            if (RealTimeScene == 27)
            {
                PlayerPrefs.SetInt("Level27", 1);
                PlayerPrefs.SetInt("Level27OneStared", 1);
            }
            if (RealTimeScene == 28)
            {
                PlayerPrefs.SetInt("Level28", 1);
                PlayerPrefs.SetInt("Level28OneStared", 1);
            }
            if (RealTimeScene == 29)
            {
                PlayerPrefs.SetInt("Level29", 1);
                PlayerPrefs.SetInt("Level29OneStared", 1);
            }
            if (RealTimeScene == 30)
            {
                PlayerPrefs.SetInt("Level30", 1);
                PlayerPrefs.SetInt("Level30OneStared", 1);
            }
            if (RealTimeScene == 31)
            {
                PlayerPrefs.SetInt("Level31", 1);
                PlayerPrefs.SetInt("Level31OneStared", 1);
            }
            if (RealTimeScene == 32)
            {
                PlayerPrefs.SetInt("Level32", 1);
                PlayerPrefs.SetInt("Level32OneStared", 1);
            }

        }

        private void Update()
        {
            StartCoroutine(BarFillingAnimation());

            if (isCurrentLevel == true)
            {
                // Current Level Event
                Dictionary<string, object> LevelStart = new Dictionary<string, object>()
                        {
                                {"_LevelStart", RealTimeScene }
                        };
                amplitude.logEvent("Level_start", LevelStart);

                isCurrentLevel = false;
            }

            if (FinishPage.activeSelf)
            {
                carAudio.StopSound();
                AudioManager.instance.Stop("BackGear");
                AudioManager.instance.Stop("City");
                AudioManager.instance.Stop("Birds");
                AudioManager.instance.Stop("Fpp");
            }
            else if (FailPage.activeSelf)
            {
                carAudio.StopSound();
                AudioManager.instance.Stop("BackGear");
                AudioManager.instance.Stop("City");
                AudioManager.instance.Stop("Birds");
                AudioManager.instance.Stop("Fpp");

                if (isFirstTime == true)
                {
                    // Levels Event
                    Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                    {
                                     {"levelFailed" , LevelFailed }

                    };
                    amplitude.logEvent("levelEnded", LevelEndedButton);

                    isFirstTime = false;
                }
            }

            if (FinishPage.activeSelf)
            {
                if (RealTimeScene == 1)
                {
                    PlayerPrefs.SetInt("Level1", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed } ,
                                     {"Ftue_levels", RealTimeScene }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level1ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level1TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level1OneStared", 1);
                    }
                }

                if (RealTimeScene == 2)
                {
                    PlayerPrefs.SetInt("Level2", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed } ,
                                     {"Ftue_levels", RealTimeScene }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level2ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level2TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level2OneStared", 1);
                    }
                }

                if (RealTimeScene == 3)
                {
                    PlayerPrefs.SetInt("Level3", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed } ,
                                     {"Ftue_levels", RealTimeScene }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level3ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level3TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level3OneStared", 1);
                    }
                }

                if (RealTimeScene == 4)
                {
                    PlayerPrefs.SetInt("Level4", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed } ,
                                     {"Ftue_levels", RealTimeScene }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level4ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level4TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level4OneStared", 1);
                    }
                }

                if (RealTimeScene == 5)
                {
                    PlayerPrefs.SetInt("Level5", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed } ,
                                     {"Ftue_levels", RealTimeScene }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level5ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level5TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level5OneStared", 1);
                    }
                }

                if (RealTimeScene == 6)
                {
                    PlayerPrefs.SetInt("Level6", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed } ,
                                     {"Ftue_levels", RealTimeScene }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level6ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level6TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level6OneStared", 1);
                    }
                }

                if (RealTimeScene == 7)
                {
                    PlayerPrefs.SetInt("Level7", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed } ,
                                     {"Ftue_levels", RealTimeScene }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level7ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level7TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level7OneStared", 1);
                    }
                }

                if (RealTimeScene == 8)
                {
                    PlayerPrefs.SetInt("Level8", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"levelEnd", RealTimeScene } ,
                                     {"levelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"levelPassed", LevelPassed } ,
                                     {"ftue_levels", RealTimeScene }

                        };
                        amplitude.logEvent("level ended", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level8ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level8TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level8OneStared", 1);
                    }
                }

                if (RealTimeScene == 9)
                {
                    PlayerPrefs.SetInt("Level9", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed } ,
                                     {"Ftue_levels", RealTimeScene }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level9ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level9TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level9OneStared", 1);
                    }
                }

                if (RealTimeScene == 10)
                {
                    PlayerPrefs.SetInt("Level10", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed } 

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level10ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level10TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level10OneStared", 1);
                    }
                }

                if (RealTimeScene == 11)
                {
                    PlayerPrefs.SetInt("Level11", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                        if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level11ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level11TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level11OneStared", 1);
                    }
                }

                if (RealTimeScene == 12)
                {
                    PlayerPrefs.SetInt("Level12", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level12ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level12TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level12OneStared", 1);
                    }
                }

                if (RealTimeScene == 13)
                {
                    PlayerPrefs.SetInt("Level13", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level13ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level13TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level13OneStared", 1);
                    }
                }

                if (RealTimeScene == 14)
                {
                    PlayerPrefs.SetInt("Level14", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level14ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level14TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level14OneStared", 1);
                    }
                }

                if (RealTimeScene == 15)
                {
                    PlayerPrefs.SetInt("Level15", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level15ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level15TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level15OneStared", 1);
                    }
                }

                if (RealTimeScene == 16)
                {
                    PlayerPrefs.SetInt("Level16", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level16ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level16TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level16OneStared", 1);
                    }
                }

                if (RealTimeScene == 17)
                {
                    PlayerPrefs.SetInt("Level17", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level17ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level17TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level17OneStared", 1);
                    }
                }

                if (RealTimeScene == 18)
                {
                    PlayerPrefs.SetInt("Level18", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level18ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level18TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level18OneStared", 1);
                    }
                }

                if (RealTimeScene == 19)
                {
                    PlayerPrefs.SetInt("Level19", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level19ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level19TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level19OneStared", 1);
                    }
                }

                if (RealTimeScene == 20)
                {
                    PlayerPrefs.SetInt("Level20", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level20ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level20TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level20OneStared", 1);
                    }
                }

                if (RealTimeScene == 21)
                {
                    PlayerPrefs.SetInt("Level21", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level21ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level21TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level21OneStared", 1);
                    }
                }

                if (RealTimeScene == 22)
                {
                    PlayerPrefs.SetInt("Level22", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level22ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level22TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level22OneStared", 1);
                    }
                }

                if (RealTimeScene == 23)
                {
                    PlayerPrefs.SetInt("Level23", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level23ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level23TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level23OneStared", 1);
                    }
                }

                if (RealTimeScene == 24)
                {
                    PlayerPrefs.SetInt("Level24", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level24ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level24TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level24OneStared", 1);
                    }
                }

                if (RealTimeScene == 25)
                {
                    PlayerPrefs.SetInt("Level25", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level25ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level25TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level25OneStared", 1);
                    }
                }

                if (RealTimeScene == 26)
                {
                    PlayerPrefs.SetInt("Level26", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level26ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level26TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level26OneStared", 1);
                    }
                }

                if (RealTimeScene == 27)
                {
                    PlayerPrefs.SetInt("Level27", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level27ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level27TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level27OneStared", 1);
                    }
                }

                if (RealTimeScene == 28)
                {
                    PlayerPrefs.SetInt("Level28", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level28ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level28TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level28OneStared", 1);
                    }
                }

                if (RealTimeScene == 29)
                {
                    PlayerPrefs.SetInt("Level29", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level29ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level29TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level29OneStared", 1);
                    }
                }

                if (RealTimeScene == 30)
                {
                    PlayerPrefs.SetInt("Level30", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level30ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level30TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level30OneStared", 1);
                    }
                }

                if (RealTimeScene == 31)
                {
                    PlayerPrefs.SetInt("Level31", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level31ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level31TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level31OneStared", 1);
                    }
                }

                if (RealTimeScene == 32)
                {
                    PlayerPrefs.SetInt("Level32", 1);

                    if (isFirstTime == true)
                    {
                        // Levels Event
                        Dictionary<string, object> LevelEndedButton = new Dictionary<string, object>()
                        {
                                     {"LevelEnd", RealTimeScene } ,
                                     {"LevelTime", UnityEngine.Time.timeSinceLevelLoad  } ,
                                     {"LevelPassed", LevelPassed }

                        };
                        amplitude.logEvent("levelEnded", LevelEndedButton);

                        isFirstTime = false;
                    }

                    if (isThreeStared == true)
                    {
                        PlayerPrefs.SetInt("Level32ThreeStared", 1);
                    }
                    else if (isTwoStared == true)
                    {
                        PlayerPrefs.SetInt("Level32TwoStared", 1);
                    }
                    else if (isOneStared == true)
                    {
                        PlayerPrefs.SetInt("Level32OneStared", 1);
                    }
                }
            }
        }

        private IEnumerator BarFillingAnimation()
        {

            if (FinishPage.activeSelf && LevelAnalyzer1.activeSelf && TimerSlider.value > TwoStar)
            {
                isThreeStared = true;
                BarFillAnimation.Play("BarFillAnimation2");
                yield return new WaitForSeconds(1f);
                Star1.SetActive(true);
                FinishPageSlider.value = FinishPageSlider.maxValue;
                yield return new WaitForSeconds(0.5f);
                Star2.SetActive(true);
                yield return new WaitForSeconds(0.5f);
                Star3.SetActive(true);
                yield return new WaitForSeconds(0.5f);
                CoinsEarned.SetActive(true);

                if (RealTimeScene == 1)
                {
                    if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 2)
                {
                    if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 3)
                {
                    if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 4)
                {
                    if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 5)
                {
                    if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 6)
                {
                    if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 7)
                {
                    if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 8)
                {
                    if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 9)
                {
                    if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 10)
                {
                    if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 11)
                {
                    if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 12)
                {
                    if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 13)
                {
                    if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 14)
                {
                    if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 15)
                {
                    if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 16)
                {
                    if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 17)
                {
                    if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 18)
                {
                    if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 19)
                {
                    if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 20)
                {
                    if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 21)
                {
                    if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 22)
                {
                    if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 23)
                {
                    if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 24)
                {
                    if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 25)
                {
                    if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                    else if (RealTimeScene == 26)
                    {
                        if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+500 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 27)
                    {
                        if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+500 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 28)
                    {
                        if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+500 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 29)
                    {
                        if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+500 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 30)
                    {
                        if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+500 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 31)
                    {
                        if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+500 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 32)
                    {
                        if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+500 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                }
                yield return new WaitForSeconds(1f);
                ButtonHolder.SetActive(true);
            }

            else if (FinishPage.activeSelf && LevelAnalyzer1.activeSelf && TimerSlider.value < ThreeStar && TimerSlider.value > OneStar)
            {
                BarFillAnimation.Play("BarFillAnimation2");
                yield return new WaitForSeconds(1f);
                Star1.SetActive(true);
                FinishPageSlider.value = TimerTracker1;
                yield return new WaitForSeconds(0.5f);
                Star2.SetActive(true);
                yield return new WaitForSeconds(0.5f);
                CoinsEarned.SetActive(true);

                if (RealTimeScene == 1)
                {
                    if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 2)
                {
                    if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 3)
                {
                    if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 4)
                {
                    if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 5)
                {
                    if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 6)
                {
                    if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 7)
                {
                    if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 8)
                {
                    if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 9)
                {
                    if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 10)
                {
                    if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 11)
                {
                    if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 12)
                {
                    if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 13)
                {
                    if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 14)
                {
                    if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 15)
                {
                    if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 16)
                {
                    if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 17)
                {
                    if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 18)
                {
                    if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 19)
                {
                    if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 20)
                {
                    if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 21)
                {
                    if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 22)
                {
                    if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 23)
                {
                    if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 24)
                {
                    if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 25)
                {
                    if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                    else if (RealTimeScene == 26)
                    {
                        if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 27)
                    {
                        if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 28)
                    {
                        if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 29)
                    {
                        if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 30)
                    {
                        if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 31)
                    {
                        if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 32)
                    {
                        if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                }
                isTwoStared = true;
                yield return new WaitForSeconds(1f);
                ButtonHolder.SetActive(true);
                LevelAnalyzer1.SetActive(false);
                FinishPage.SetActive(false);
            }
            else if (FinishPage.activeSelf && LevelAnalyzer1.activeSelf && TimerSlider.value < OneStar)
            {
                BarFillAnimation.Play("BarFillAnimation2");
                yield return new WaitForSeconds(1f);
                Star1.SetActive(true);
                FinishPageSlider.value = TimerTracker;
                yield return new WaitForSeconds(0.5f);
                CoinsEarned.SetActive(true);

                if (RealTimeScene == 1)
                {
                    if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 2)
                {
                    if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 3)
                {
                    if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 4)
                {
                    if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 5)
                {
                    if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 6)
                {
                    if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 7)
                {
                    if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 8)
                {
                    if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 9)
                {
                    if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 10)
                {
                    if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 11)
                {
                    if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 12)
                {
                    if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 13)
                {
                    if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 14)
                {
                    if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 15)
                {
                    if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 16)
                {
                    if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 17)
                {
                    if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 18)
                {
                    if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 19)
                {
                    if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 20)
                {
                    if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 21)
                {
                    if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 22)
                {
                    if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 23)
                {
                    if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 24)
                {
                    if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 25)
                {
                    if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                    else if (RealTimeScene == 26)
                    {
                        if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 27)
                    {
                        if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 28)
                    {
                        if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 29)
                    {
                        if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 30)
                    {
                        if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 31)
                    {
                        if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 32)
                    {
                        if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                }
                isOneStared = true;
                yield return new WaitForSeconds(1f);
                ButtonHolder.SetActive(true);
            }

            else if (FinishPage.activeSelf && HealthBarSlider.value == 1f && TimerSlider.value < OneStar)
            {
                BarFillAnimation.Play("BarFillAnimation");
                yield return new WaitForSeconds(1f);
                Star1.SetActive(true);
                FinishPageSlider.value = TimerTracker;
                yield return new WaitForSeconds(0.5f);
                CoinsEarned.SetActive(true);

                if (RealTimeScene == 1)
                {
                    if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 2)
                {
                    if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 3)
                {
                    if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 4)
                {
                    if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 5)
                {
                    if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 6)
                {
                    if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 7)
                {
                    if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 8)
                {
                    if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 9)
                {
                    if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 10)
                {
                    if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 11)
                {
                    if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 12)
                {
                    if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 13)
                {
                    if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 14)
                {
                    if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 15)
                {
                    if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 16)
                {
                    if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 17)
                {
                    if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 18)
                {
                    if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 19)
                {
                    if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 20)
                {
                    if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 21)
                {
                    if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 22)
                {
                    if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 23)
                {
                    if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 24)
                {
                    if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 25)
                {
                    if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                    else if (RealTimeScene == 26)
                    {
                        if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 27)
                    {
                        if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 28)
                    {
                        if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 29)
                    {
                        if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 30)
                    {
                        if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 31)
                    {
                        if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 32)
                    {
                        if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                }
                isOneStared = true;
                yield return new WaitForSeconds(1f);
                ButtonHolder.SetActive(true);
            }

            else if (FinishPage.activeSelf && HealthBarSlider.value == 2f && TimerSlider.value < ThreeStar && TimerSlider.value > OneStar)
            {
                BarFillAnimation.Play("BarFillAnimation1");
                yield return new WaitForSeconds(1f);
                Star1.SetActive(true);
                FinishPageSlider.value = TimerTracker1;
                yield return new WaitForSeconds(0.5f);
                Star2.SetActive(true);
                yield return new WaitForSeconds(0.5f);
                CoinsEarned.SetActive(true);

                if (RealTimeScene == 1)
                {
                    if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 2)
                {
                    if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 3)
                {
                    if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 4)
                {
                    if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 5)
                {
                    if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 6)
                {
                    if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 7)
                {
                    if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 8)
                {
                    if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 9)
                {
                    if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 10)
                {
                    if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 11)
                {
                    if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 12)
                {
                    if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 13)
                {
                    if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 14)
                {
                    if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 15)
                {
                    if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 16)
                {
                    if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 17)
                {
                    if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 18)
                {
                    if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 19)
                {
                    if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 20)
                {
                    if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 21)
                {
                    if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 22)
                {
                    if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 23)
                {
                    if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 24)
                {
                    if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 25)
                {
                    if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                    else if (RealTimeScene == 26)
                    {
                        if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 27)
                    {
                        if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 28)
                    {
                        if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 29)
                    {
                        if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 30)
                    {
                        if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 31)
                    {
                        if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 32)
                    {
                        if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                }
                isTwoStared = true;
                yield return new WaitForSeconds(1f);
                ButtonHolder.SetActive(true);
            }

            else if (FinishPage.activeSelf && HealthBarSlider.value == 3f && TimerSlider.value > TwoStar)
            {
                BarFillAnimation.Play("BarFillAnimation2");
                yield return new WaitForSeconds(1f);
                Star1.SetActive(true);
                FinishPageSlider.value = FinishPageSlider.maxValue;
                yield return new WaitForSeconds(0.5f);
                Star2.SetActive(true);
                yield return new WaitForSeconds(0.5f);
                Star3.SetActive(true);
                yield return new WaitForSeconds(0.5f);
                CoinsEarned.SetActive(true);

                if (RealTimeScene == 1)
                {
                    if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 2)
                {
                    if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 3)
                {
                    if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 4)
                {
                    if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 5)
                {
                    if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 6)
                {
                    if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 7)
                {
                    if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 8)
                {
                    if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 9)
                {
                    if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 10)
                {
                    if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 11)
                {
                    if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 12)
                {
                    if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 13)
                {
                    if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 14)
                {
                    if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 15)
                {
                    if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 16)
                {
                    if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 17)
                {
                    if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 18)
                {
                    if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 19)
                {
                    if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 20)
                {
                    if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 21)
                {
                    if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 22)
                {
                    if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 23)
                {
                    if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 24)
                {
                    if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 25)
                {
                    if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+500 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                    else if (RealTimeScene == 26)
                    {
                        if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+500 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 27)
                    {
                        if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+500 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 28)
                    {
                        if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+500 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 29)
                    {
                        if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+500 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 30)
                    {
                        if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+500 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 31)
                    {
                        if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+500 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 32)
                    {
                        if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+500 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                }
                isThreeStared = true;
                yield return new WaitForSeconds(1f);
                ButtonHolder.SetActive(true);
            }

            else if (FinishPage.activeSelf && HealthBarSlider.value == 2f && TimerSlider.value < OneStar)
            {
                BarFillAnimation.Play("BarFillAnimation1");
                yield return new WaitForSeconds(1f);
                Star1.SetActive(true);
                FinishPageSlider.value = TimerTracker;
                yield return new WaitForSeconds(0.5f);
                CoinsEarned.SetActive(true);

                if (RealTimeScene == 1)
                {
                    if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 2)
                {
                    if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 3)
                {
                    if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 4)
                {
                    if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 5)
                {
                    if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 6)
                {
                    if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 7)
                {
                    if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 8)
                {
                    if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 9)
                {
                    if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 10)
                {
                    if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 11)
                {
                    if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 12)
                {
                    if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 13)
                {
                    if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 14)
                {
                    if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 15)
                {
                    if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 16)
                {
                    if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 17)
                {
                    if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 18)
                {
                    if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 19)
                {
                    if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 20)
                {
                    if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 21)
                {
                    if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 22)
                {
                    if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 23)
                {
                    if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 24)
                {
                    if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 25)
                {
                    if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                    else if (RealTimeScene == 26)
                    {
                        if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 27)
                    {
                        if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 28)
                    {
                        if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 29)
                    {
                        if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 30)
                    {
                        if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 31)
                    {
                        if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 32)
                    {
                        if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                }
                isOneStared = true;
                yield return new WaitForSeconds(1f);
                ButtonHolder.SetActive(true);
            }

            else if (FinishPage.activeSelf && HealthBarSlider.value == 3f && TimerSlider.value < OneStar)
            {
                BarFillAnimation.Play("BarFillAnimation2");
                yield return new WaitForSeconds(1f);
                Star1.SetActive(true);
                FinishPageSlider.value = TimerTracker;
                yield return new WaitForSeconds(0.5f);
                Star2.SetActive(true);
                yield return new WaitForSeconds(0.5f);
                CoinsEarned.SetActive(true);

                if (RealTimeScene == 1)
                {
                    if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 2)
                {
                    if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 3)
                {
                    if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 4)
                {
                    if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 5)
                {
                    if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 6)
                {
                    if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 7)
                {
                    if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 8)
                {
                    if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 9)
                {
                    if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 10)
                {
                    if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 11)
                {
                    if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 12)
                {
                    if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 13)
                {
                    if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 14)
                {
                    if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 15)
                {
                    if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 16)
                {
                    if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 17)
                {
                    if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 18)
                {
                    if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 19)
                {
                    if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 20)
                {
                    if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 21)
                {
                    if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 22)
                {
                    if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 23)
                {
                    if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 24)
                {
                    if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 25)
                {
                    if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                    else if (RealTimeScene == 26)
                    {
                        if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 27)
                    {
                        if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 28)
                    {
                        if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 29)
                    {
                        if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 30)
                    {
                        if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 31)
                    {
                        if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 32)
                    {
                        if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                }
                isOneStared = true;
                yield return new WaitForSeconds(1f);
                ButtonHolder.SetActive(true);
            }

            else if (FinishPage.activeSelf && HealthBarSlider.value == 2f && TimerSlider.value < OneStar)
            {
                BarFillAnimation.Play("BarFillAnimation1");
                yield return new WaitForSeconds(1f);
                Star1.SetActive(true);
                FinishPageSlider.value = TimerTracker;
                yield return new WaitForSeconds(0.5f);
                CoinsEarned.SetActive(true);

                if (RealTimeScene == 1)
                {
                    if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 2)
                {
                    if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 3)
                {
                    if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 4)
                {
                    if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 5)
                {
                    if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 6)
                {
                    if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 7)
                {
                    if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 8)
                {
                    if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 9)
                {
                    if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 10)
                {
                    if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 11)
                {
                    if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 12)
                {
                    if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 13)
                {
                    if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 14)
                {
                    if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 15)
                {
                    if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 16)
                {
                    if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 17)
                {
                    if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 18)
                {
                    if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 19)
                {
                    if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 20)
                {
                    if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 21)
                {
                    if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 22)
                {
                    if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 23)
                {
                    if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 24)
                {
                    if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 25)
                {
                    if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                    else if (RealTimeScene == 26)
                    {
                        if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 27)
                    {
                        if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 28)
                    {
                        if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 29)
                    {
                        if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 30)
                    {
                        if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 31)
                    {
                        if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 32)
                    {
                        if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                }
                isOneStared = true;
                yield return new WaitForSeconds(1f);
                ButtonHolder.SetActive(true);
            }

            else if (FinishPage.activeSelf && HealthBarSlider.value == 2f && TimerSlider.value > TwoStar)
            {
                BarFillAnimation.Play("BarFillAnimation1");
                yield return new WaitForSeconds(1f);
                Star1.SetActive(true);
                FinishPageSlider.value = FinishPageSlider.maxValue;
                yield return new WaitForSeconds(0.5f);
                Star2.SetActive(true);
                yield return new WaitForSeconds(0.5f);
                CoinsEarned.SetActive(true);

                if (RealTimeScene == 1)
                {
                    if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 2)
                {
                    if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 3)
                {
                    if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 4)
                {
                    if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 5)
                {
                    if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 6)
                {
                    if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 7)
                {
                    if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 8)
                {
                    if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 9)
                {
                    if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 10)
                {
                    if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 11)
                {
                    if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 12)
                {
                    if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 13)
                {
                    if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 14)
                {
                    if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 15)
                {
                    if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 16)
                {
                    if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 17)
                {
                    if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 18)
                {
                    if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 19)
                {
                    if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 20)
                {
                    if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 21)
                {
                    if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 22)
                {
                    if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 23)
                {
                    if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 24)
                {
                    if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 25)
                {
                    if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                    else if (RealTimeScene == 26)
                    {
                        if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 27)
                    {
                        if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 28)
                    {
                        if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 29)
                    {
                        if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 30)
                    {
                        if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 31)
                    {
                        if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 32)
                    {
                        if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                }
                isTwoStared = true;
                yield return new WaitForSeconds(1f);
                ButtonHolder.SetActive(true);
            }

            else if (FinishPage.activeSelf && HealthBarSlider.value == 1f && TimerSlider.value < ThreeStar && TimerSlider.value > OneStar)
            {
                BarFillAnimation.Play("BarFillAnimation");
                yield return new WaitForSeconds(1f);
                Star1.SetActive(true);
                FinishPageSlider.value = TimerTracker1;
                yield return new WaitForSeconds(0.5f);
                CoinsEarned.SetActive(true);

                if (RealTimeScene == 1)
                {
                    if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 2)
                {
                    if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 3)
                {
                    if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 4)
                {
                    if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 5)
                {
                    if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 6)
                {
                    if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 7)
                {
                    if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 8)
                {
                    if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 9)
                {
                    if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 10)
                {
                    if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 11)
                {
                    if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 12)
                {
                    if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 13)
                {
                    if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 14)
                {
                    if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 15)
                {
                    if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 16)
                {
                    if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 17)
                {
                    if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 18)
                {
                    if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 19)
                {
                    if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 20)
                {
                    if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 21)
                {
                    if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 22)
                {
                    if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 23)
                {
                    if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 24)
                {
                    if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 25)
                {
                    if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                    else if (RealTimeScene == 26)
                    {
                        if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 27)
                    {
                        if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 28)
                    {
                        if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 29)
                    {
                        if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 30)
                    {
                        if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 31)
                    {
                        if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 32)
                    {
                        if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                }
                isOneStared = true;
                yield return new WaitForSeconds(1f);
                ButtonHolder.SetActive(true);
            }

            else if (FinishPage.activeSelf && HealthBarSlider.value == 3f && TimerSlider.value < ThreeStar && TimerSlider.value > OneStar)
            {
                BarFillAnimation.Play("BarFillAnimation2");
                yield return new WaitForSeconds(1f);
                Star1.SetActive(true);
                FinishPageSlider.value = TimerTracker1;
                yield return new WaitForSeconds(0.5f);
                Star2.SetActive(true);
                yield return new WaitForSeconds(0.5f);
                CoinsEarned.SetActive(true);

                if (RealTimeScene == 1)
                {
                    if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 2)
                {
                    if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 3)
                {
                    if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 4)
                {
                    if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 5)
                {
                    if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 6)
                {
                    if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 7)
                {
                    if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 8)
                {
                    if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 9)
                {
                    if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 10)
                {
                    if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 11)
                {
                    if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 12)
                {
                    if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 13)
                {
                    if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 14)
                {
                    if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 15)
                {
                    if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 16)
                {
                    if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 17)
                {
                    if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 18)
                {
                    if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 19)
                {
                    if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 20)
                {
                    if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 21)
                {
                    if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 22)
                {
                    if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 23)
                {
                    if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 24)
                {
                    if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 25)
                {
                    if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                    else if (RealTimeScene == 26)
                    {
                        if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 27)
                    {
                        if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 28)
                    {
                        if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 29)
                    {
                        if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 30)
                    {
                        if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 31)
                    {
                        if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 32)
                    {
                        if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                }
                isTwoStared = true;
                yield return new WaitForSeconds(1f);
                ButtonHolder.SetActive(true);
            }

            else if (FinishPage.activeSelf && HealthBarSlider.value == 1f && TimerSlider.value > TwoStar)
            {
                BarFillAnimation.Play("BarFillAnimation");
                yield return new WaitForSeconds(1f);
                Star1.SetActive(true);
                FinishPageSlider.value = FinishPageSlider.maxValue;
                yield return new WaitForSeconds(0.5f);
                Star2.SetActive(true);
                yield return new WaitForSeconds(0.5f);
                CoinsEarned.SetActive(true);

                if (RealTimeScene == 1)
                {
                    if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 2)
                {
                    if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 3)
                {
                    if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 4)
                {
                    if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 5)
                {
                    if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 6)
                {
                    if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 7)
                {
                    if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 8)
                {
                    if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 9)
                {
                    if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 10)
                {
                    if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 11)
                {
                    if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 12)
                {
                    if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 13)
                {
                    if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 14)
                {
                    if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 15)
                {
                    if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 16)
                {
                    if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 17)
                {
                    if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 18)
                {
                    if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 19)
                {
                    if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 20)
                {
                    if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 21)
                {
                    if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 22)
                {
                    if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 23)
                {
                    if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 24)
                {
                    if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 25)
                {
                    if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+400 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                    else if (RealTimeScene == 26)
                    {
                        if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 27)
                    {
                        if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 28)
                    {
                        if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 29)
                    {
                        if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 30)
                    {
                        if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 31)
                    {
                        if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 32)
                    {
                        if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+400 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                }
                isTwoStared = true;
                yield return new WaitForSeconds(1f);
                ButtonHolder.SetActive(true);
            }
            else if (FinishPage.activeSelf && HealthBarSlider.value == 1f && TimerSlider.value < ThreeStar && TimerSlider.value > OneStar)
            {
                BarFillAnimation.Play("BarFillAnimation");
                yield return new WaitForSeconds(1f);
                Star1.SetActive(true);
                FinishPageSlider.value = TimerTracker1;
                yield return new WaitForSeconds(0.5f);
                CoinsEarned.SetActive(true);

                if (RealTimeScene == 1)
                {
                    if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 2)
                {
                    if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 3)
                {
                    if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 4)
                {
                    if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 5)
                {
                    if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 6)
                {
                    if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 7)
                {
                    if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 8)
                {
                    if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 9)
                {
                    if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 10)
                {
                    if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 11)
                {
                    if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 12)
                {
                    if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 13)
                {
                    if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 14)
                {
                    if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 15)
                {
                    if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 16)
                {
                    if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 17)
                {
                    if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 18)
                {
                    if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 19)
                {
                    if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 20)
                {
                    if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 21)
                {
                    if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 22)
                {
                    if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 23)
                {
                    if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 24)
                {
                    if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                }
                else if (RealTimeScene == 25)
                {
                    if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)
                    {
                        CoinsEarnedText.text = "+300 Coins";
                    }
                    else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                    {
                        CoinsEarnedText.text = "+50 Coins";
                    }
                    else if (RealTimeScene == 26)
                    {
                        if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 27)
                    {
                        if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 28)
                    {
                        if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 29)
                    {
                        if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 30)
                    {
                        if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 31)
                    {
                        if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                    else if (RealTimeScene == 32)
                    {
                        if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)
                        {
                            CoinsEarnedText.text = "+300 Coins";
                        }
                        else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                        {
                            CoinsEarnedText.text = "+50 Coins";
                        }
                    }
                }
                isOneStared = true;
                yield return new WaitForSeconds(1f);
                ButtonHolder.SetActive(true);
            }
        }
    }
}
