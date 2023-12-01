using System.Collections;
using UnityEngine;
using TMPro;
using UnityEngine.Analytics;
using System.Collections.Generic;

namespace UnityStandardAssets.Vehicles.Car
{
    public class OilStationHalt : MonoBehaviour
    {
        [SerializeField]
        private GameObject ParkingCheck;
        [SerializeField]
        private GameObject ParkingCheck1;
        [SerializeField]
        private Camera TppCamera;
        [SerializeField]
        private Camera FppCamera;
        [SerializeField]
        private GameObject CinematicCamera;
        [SerializeField]
        private Rigidbody rigidbody;
        private bool isTpp;
        private bool isFpp;
        [SerializeField]
        private Transform Bus;
        [SerializeField]
        private Transform PositionHolder;
        [SerializeField]
        private Transform PositionHolder1;
        [SerializeField]
        private GameObject OilStationHaltObj;
        [SerializeField]
        private GameObject OilStationHaltObj1;
        [SerializeField]
        private Animator CameraFadeScreen;
        [SerializeField]
        private GameObject CameraFadeGameObject;
        [SerializeField]
        private GameObject Holder;
        [SerializeField]
        private GameObject BusInterior;
        public GameObject WinningFuelAnimation;
        [SerializeField]
        private FuelData instance;
        [SerializeField]
        private FuelMeter fuelMeterInstance;
        [SerializeField]
        public GameObject FuelStationPopup;
        public CoinData CoinInstance;
        public Rewarded RewardedInstance;
        [SerializeField]
        private GameObject FailScreen;
        public GameObject NoConnectionPopup;
        public GameObject FuelCoinReward;
        public TMP_Text FuelEarnedText;
        public GameObject InsufficientCoinText;
        public int ServiceCharge = 500;
        [SerializeField]
        private CarController Car;
        private object OilStationFreeFuelButton = "OilStationFreeFuelButton";
        [SerializeField]
        private Camera TopViewCamera;

        private Amplitude amplitude;
        private AndroidJavaClass pluginClass;

        private void Awake()
        {
            // Initializing SDK
            amplitude = Amplitude.getInstance();
/*            OilStationFreeFuelButton = SetStringToFuel();*/
            amplitude.init("1acb370bcf89779db77dd17092d06718");

            if (PlayerPrefs.HasKey("Fuel"))
            {
                instance.currentFuel = PlayerPrefs.GetInt("Fuel");
            }

            if (PlayerPrefs.HasKey("Coins"))
            {
                CoinInstance.currentCash = PlayerPrefs.GetInt("Coins");
            }
        }

        private void OnTriggerStay(Collider collider)
        {
            if (collider.gameObject.tag == "OilPump" && Car.CurrentSpeed < 2f)
            {
                if (TppCamera.gameObject.activeSelf)
                {
                    isTpp = true;
                }
                else if (FppCamera.gameObject.activeSelf)
                {
                    isFpp = true;
                }
                ParkingCheck.SetActive(false);
                ParkingCheck1.SetActive(false);
                OilStationHaltObj.SetActive(false);
                OilStationHaltObj1.SetActive(false);
                StartCoroutine(Refueling());
            }

            if (collider.gameObject.tag == "OilPump1" && Car.CurrentSpeed < 2f)
            {
                if (TppCamera.gameObject.activeSelf)
                {
                    isTpp = true;
                }
                else if (FppCamera.gameObject.activeSelf)
                {
                    isFpp = true;
                }
                ParkingCheck1.SetActive(false);
                ParkingCheck.SetActive(false);
                OilStationHaltObj1.SetActive(false);
                OilStationHaltObj.SetActive(false);
                StartCoroutine(Refueling1());
            }
        }

        private IEnumerator Refueling()
        {
            if (isTpp == true)
            {
                Holder.SetActive(false);
                yield return new WaitForSeconds(0.5f);
                CameraFadeGameObject.SetActive(true);
                CameraFadeScreen.Play("CameraFadeScreen");
                yield return new WaitForSeconds(1.4f);
                Bus.position = PositionHolder.position;
                Bus.rotation = PositionHolder.rotation;
                yield return new WaitForSeconds(0.24f);
                TppCamera.gameObject.SetActive(false);
                CinematicCamera.gameObject.SetActive(true);
                FuelStationPopup.SetActive(true);
            }
            else if (isFpp == true)
            {
                Holder.SetActive(false);
                yield return new WaitForSeconds(0.5f);
                CameraFadeGameObject.SetActive(true);
                CameraFadeScreen.Play("CameraFadeScreen");
                yield return new WaitForSeconds(1.4f);
                Bus.position = PositionHolder.position;
                Bus.rotation = PositionHolder.rotation;
                yield return new WaitForSeconds(0.24f);
                FppCamera.gameObject.SetActive(false);
                BusInterior.gameObject.SetActive(false);
                CinematicCamera.gameObject.SetActive(true);
                FuelStationPopup.SetActive(true);
            }
            else if (isTpp == false || isFpp == false)
            {
                Holder.SetActive(false);
                yield return new WaitForSeconds(0.5f);
                CameraFadeGameObject.SetActive(true);
                CameraFadeScreen.Play("CameraFadeScreen");
                yield return new WaitForSeconds(1.4f);
                Bus.position = PositionHolder.position;
                Bus.rotation = PositionHolder.rotation;
                yield return new WaitForSeconds(0.24f);
                TopViewCamera.gameObject.SetActive(false);
                CinematicCamera.gameObject.SetActive(true);
                FuelStationPopup.SetActive(true);
            }
        }

        private IEnumerator Refueling1()
        {
            if (isTpp == true)
            {
                Holder.SetActive(false);
                yield return new WaitForSeconds(0.5f);
                CameraFadeGameObject.SetActive(true);
                CameraFadeScreen.Play("CameraFadeScreen");
                yield return new WaitForSeconds(1.4f);
                Bus.position = PositionHolder1.position;
                Bus.rotation = PositionHolder1.rotation;
                yield return new WaitForSeconds(0.24f);
                TppCamera.gameObject.SetActive(false);
                CinematicCamera.gameObject.SetActive(true);
                FuelStationPopup.SetActive(true);
            }
            else if (isFpp == true)
            {
                Holder.SetActive(false);
                yield return new WaitForSeconds(0.5f);
                CameraFadeGameObject.SetActive(true);
                CameraFadeScreen.Play("CameraFadeScreen");
                yield return new WaitForSeconds(1.4f);
                Bus.position = PositionHolder1.position;
                Bus.rotation = PositionHolder1.rotation;
                yield return new WaitForSeconds(0.24f);
                FppCamera.gameObject.SetActive(false);
                BusInterior.gameObject.SetActive(false);
                CinematicCamera.gameObject.SetActive(true);
                FuelStationPopup.SetActive(true);
            }
            else if (isTpp == false || isFpp == false)
            {
                Holder.SetActive(false);
                yield return new WaitForSeconds(0.5f);
                CameraFadeGameObject.SetActive(true);
                CameraFadeScreen.Play("CameraFadeScreen");
                yield return new WaitForSeconds(1.4f);
                Bus.position = PositionHolder.position;
                Bus.rotation = PositionHolder.rotation;
                yield return new WaitForSeconds(0.24f);
                TopViewCamera.gameObject.SetActive(false);
                CinematicCamera.gameObject.SetActive(true);
                FuelStationPopup.SetActive(true);
            }
        }

        public void FuelStationBuyFuel()
        {
            if (CoinInstance.currentCash >= ServiceCharge)
            {
                Analytics.CustomEvent("FuelByCoins");
                if (isTpp == true)
                {
                    FuelCoinReward.SetActive(true);
                    AudioManager.instance.Play("Coin");
                    fuelMeterInstance.CurrentFuelCount += 5;
                    fuelMeterInstance.TotalFuelCount.text = instance.currentFuel.ToString();
                    fuelMeterInstance.slider.maxValue = instance.currentFuel * 100f;
                    fuelMeterInstance.CurrentFuel = instance.currentFuel * 100f;
                    fuelMeterInstance.FuelFill.SetActive(true);
                    fuelMeterInstance.FuelFill1.SetActive(true);
                    fuelMeterInstance.FuelFill2.SetActive(true);
                    fuelMeterInstance.FuelFill3.SetActive(true);
                    fuelMeterInstance.FuelFill4.SetActive(true);

                    CoinInstance.currentCash -= 500;
                    PlayerPrefs.SetInt("Coins", CoinInstance.currentCash);
                    CoinInstance.cashAmount.text = "" + CoinInstance.currentCash;
                    PlayerPrefs.Save();

                    FuelEarnedText.text = "+5";
                    WinningFuelAnimation.SetActive(true);
                    CinematicCamera.gameObject.SetActive(false);
                    CameraFadeGameObject.SetActive(false);
                    Holder.SetActive(true);
                    FuelStationPopup.SetActive(false);
                    TppCamera.gameObject.SetActive(true);
                    OilStationHaltObj.SetActive(true);
                    OilStationHaltObj1.SetActive(true);
                    ParkingCheck.SetActive(false);
                    ParkingCheck1.SetActive(false);

                    rigidbody.drag = 0.25f;

                    StartCoroutine(WaitForNextFuel());
                }
                else if (isFpp == true)
                {
                    FuelCoinReward.SetActive(true);
                    AudioManager.instance.Play("Coin");
                    fuelMeterInstance.CurrentFuelCount += 5;
                    fuelMeterInstance.TotalFuelCount.text = instance.currentFuel.ToString();
                    fuelMeterInstance.slider.maxValue = instance.currentFuel * 100f;
                    fuelMeterInstance.CurrentFuel = instance.currentFuel * 100f;
                    fuelMeterInstance.FuelFill.SetActive(true);
                    fuelMeterInstance.FuelFill1.SetActive(true);
                    fuelMeterInstance.FuelFill2.SetActive(true);
                    fuelMeterInstance.FuelFill3.SetActive(true);
                    fuelMeterInstance.FuelFill4.SetActive(true);

                    CoinInstance.currentCash -= 500;
                    PlayerPrefs.SetInt("Coins", CoinInstance.currentCash);
                    CoinInstance.cashAmount.text = "" + CoinInstance.currentCash;
                    PlayerPrefs.Save();

                    FuelEarnedText.text = "+5";
                    WinningFuelAnimation.SetActive(true);
                    CinematicCamera.gameObject.SetActive(false);
                    CameraFadeGameObject.SetActive(false);
                    Holder.SetActive(true);
                    FuelStationPopup.SetActive(false);
                    FppCamera.gameObject.SetActive(true);
                    BusInterior.gameObject.SetActive(true);
                    OilStationHaltObj.SetActive(true);
                    OilStationHaltObj1.SetActive(true);
                    ParkingCheck.SetActive(false);
                    ParkingCheck1.SetActive(false);

                    rigidbody.drag = 0.25f;

                    StartCoroutine(WaitForNextFuel());
                }
                else if (isTpp == false || isFpp == false)
                {
                    FuelCoinReward.SetActive(true);
                    AudioManager.instance.Play("Coin");
                    fuelMeterInstance.CurrentFuelCount += 5;
                    fuelMeterInstance.TotalFuelCount.text = instance.currentFuel.ToString();
                    fuelMeterInstance.slider.maxValue = instance.currentFuel * 100f;
                    fuelMeterInstance.CurrentFuel = instance.currentFuel * 100f;
                    fuelMeterInstance.FuelFill.SetActive(true);
                    fuelMeterInstance.FuelFill1.SetActive(true);
                    fuelMeterInstance.FuelFill2.SetActive(true);
                    fuelMeterInstance.FuelFill3.SetActive(true);
                    fuelMeterInstance.FuelFill4.SetActive(true);

                    CoinInstance.currentCash -= 500;
                    PlayerPrefs.SetInt("Coins", CoinInstance.currentCash);
                    CoinInstance.cashAmount.text = "" + CoinInstance.currentCash;
                    PlayerPrefs.Save();

                    FuelEarnedText.text = "+5";
                    WinningFuelAnimation.SetActive(true);
                    CinematicCamera.gameObject.SetActive(false);
                    CameraFadeGameObject.SetActive(false);
                    Holder.SetActive(true);
                    FuelStationPopup.SetActive(false);
                    TopViewCamera.gameObject.SetActive(true);
                    OilStationHaltObj.SetActive(true);
                    OilStationHaltObj1.SetActive(true);
                    ParkingCheck.SetActive(false);
                    ParkingCheck1.SetActive(false);

                    rigidbody.drag = 0.25f;

                    StartCoroutine(WaitForNextFuel());
                }
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

/*        private string SetStringToFuel()
        {
            pluginClass.CallStatic<string>("SetStringToFuel");
            return "OilStationFreeFuelButton";
        }*/

        public void FuelStationAd()
        {
            if (isTpp == true)
            {
                if (Application.internetReachability != NetworkReachability.NotReachable)
                {
                    Analytics.CustomEvent("WatchAdForFuel");
                    IronSource.Agent.showRewardedVideo();

                    // Showing Rewarded Ad Event
                    Dictionary<string, object> RewardAdPlacement = new Dictionary<string, object>()
                {
                                     {"placement" , OilStationFreeFuelButton}
                };
                    amplitude.logEvent("showingRewardedAd", RewardAdPlacement);

                    Dictionary<string, object> FreeFuelAmountAndCount = new Dictionary<string, object>()
                {
                                     {"amount" , 3}
                };
                    amplitude.logEvent("Free_Fuel", FreeFuelAmountAndCount);

                    fuelMeterInstance.CurrentFuelCount += 3;
                    fuelMeterInstance.TotalFuelCount.text = instance.currentFuel.ToString();
                    fuelMeterInstance.slider.maxValue = instance.currentFuel * 100f;
                    fuelMeterInstance.CurrentFuel = instance.currentFuel * 100f;

                    if (fuelMeterInstance.CurrentFuel == 100)
                    {
                        fuelMeterInstance.FuelFill.SetActive(true);
                    }
                    else if (fuelMeterInstance.CurrentFuel == 200)
                    {
                        fuelMeterInstance.FuelFill.SetActive(true);
                        fuelMeterInstance.FuelFill1.SetActive(true);
                    }
                    else if (fuelMeterInstance.CurrentFuel == 300)
                    {
                        fuelMeterInstance.FuelFill.SetActive(true);
                        fuelMeterInstance.FuelFill1.SetActive(true);
                        fuelMeterInstance.FuelFill2.SetActive(true);
                    }
                    else if (fuelMeterInstance.CurrentFuel == 400)
                    {
                        fuelMeterInstance.FuelFill.SetActive(true);
                        fuelMeterInstance.FuelFill1.SetActive(true);
                        fuelMeterInstance.FuelFill2.SetActive(true);
                        fuelMeterInstance.FuelFill3.SetActive(true);
                    }
                    else if (fuelMeterInstance.CurrentFuel == 500)
                    {
                        fuelMeterInstance.FuelFill.SetActive(true);
                        fuelMeterInstance.FuelFill1.SetActive(true);
                        fuelMeterInstance.FuelFill2.SetActive(true);
                        fuelMeterInstance.FuelFill3.SetActive(true);
                        fuelMeterInstance.FuelFill4.SetActive(true);
                    }

                    FuelEarnedText.text = "+3";
                    WinningFuelAnimation.SetActive(true);
                    CinematicCamera.gameObject.SetActive(false);
                    CameraFadeGameObject.SetActive(false);
                    Holder.SetActive(true);
                    FuelStationPopup.SetActive(false);
                    TppCamera.gameObject.SetActive(true);
                    OilStationHaltObj.SetActive(true);
                    OilStationHaltObj1.SetActive(true);
                    ParkingCheck.SetActive(false);
                    ParkingCheck1.SetActive(false);

                    rigidbody.drag = 0.25f;
                    StartCoroutine(WaitForNextFuel());
                }
                else
                {
                    RewardedInstance.NoConnectionPopup.SetActive(true);
                    FuelStationPopup.SetActive(false);
                    OilStationHaltObj.SetActive(true);
                    OilStationHaltObj1.SetActive(true);
                    ParkingCheck.SetActive(false);
                    ParkingCheck1.SetActive(false);

                    rigidbody.drag = 0.25f;
                    StartCoroutine(WaitForNextFuel());
                }
            }   
            else if (isFpp == true)
            {
                if (Application.internetReachability != NetworkReachability.NotReachable)
                {
                    Analytics.CustomEvent("WatchAdForFuel");
                    IronSource.Agent.showRewardedVideo();

                    // Showing Rewarded Ad Event
                    Dictionary<string, object> RewardAdPlacement = new Dictionary<string, object>()
                {
                                     {"placement" , OilStationFreeFuelButton}
                };
                    amplitude.logEvent("showingRewardedAd", RewardAdPlacement);

                    Dictionary<string, object> FreeFuelAmountAndCount = new Dictionary<string, object>()
                {
                                     {"amount" , 3}
                };
                    amplitude.logEvent("Free_Fuel", FreeFuelAmountAndCount);

                    fuelMeterInstance.CurrentFuelCount += 3;
                    fuelMeterInstance.TotalFuelCount.text = instance.currentFuel.ToString();
                    fuelMeterInstance.slider.maxValue = instance.currentFuel * 100f;
                    fuelMeterInstance.CurrentFuel = instance.currentFuel * 100f;

                    if (fuelMeterInstance.CurrentFuel == 100)
                    {
                        fuelMeterInstance.FuelFill.SetActive(true);
                    }
                    else if (fuelMeterInstance.CurrentFuel == 200)
                    {
                        fuelMeterInstance.FuelFill.SetActive(true);
                        fuelMeterInstance.FuelFill1.SetActive(true);
                    }
                    else if (fuelMeterInstance.CurrentFuel == 300)
                    {
                        fuelMeterInstance.FuelFill.SetActive(true);
                        fuelMeterInstance.FuelFill1.SetActive(true);
                        fuelMeterInstance.FuelFill2.SetActive(true);
                    }
                    else if (fuelMeterInstance.CurrentFuel == 400)
                    {
                        fuelMeterInstance.FuelFill.SetActive(true);
                        fuelMeterInstance.FuelFill1.SetActive(true);
                        fuelMeterInstance.FuelFill2.SetActive(true);
                        fuelMeterInstance.FuelFill3.SetActive(true);
                    }
                    else if (fuelMeterInstance.CurrentFuel == 500)
                    {
                        fuelMeterInstance.FuelFill.SetActive(true);
                        fuelMeterInstance.FuelFill1.SetActive(true);
                        fuelMeterInstance.FuelFill2.SetActive(true);
                        fuelMeterInstance.FuelFill3.SetActive(true);
                        fuelMeterInstance.FuelFill4.SetActive(true);
                    }

                    FuelEarnedText.text = "+3";
                    WinningFuelAnimation.SetActive(true);
                    CinematicCamera.gameObject.SetActive(false);
                    CameraFadeGameObject.SetActive(false);
                    Holder.SetActive(true);
                    FuelStationPopup.SetActive(false);
                    FppCamera.gameObject.SetActive(true);
                    BusInterior.gameObject.SetActive(true);
                    OilStationHaltObj.SetActive(true);
                    OilStationHaltObj1.SetActive(true);
                    ParkingCheck.SetActive(false);
                    ParkingCheck1.SetActive(false);
                    StartCoroutine(WaitForNextFuel());
                }
                else
                {
                    RewardedInstance.NoConnectionPopup.SetActive(true);
                    FuelStationPopup.SetActive(false);
                    OilStationHaltObj.SetActive(true);
                    OilStationHaltObj1.SetActive(true);
                    ParkingCheck.SetActive(false);
                    ParkingCheck1.SetActive(false);
                    StartCoroutine(WaitForNextFuel());
                }
            }
            else if (isTpp == false || isFpp == false)
            {
                if (Application.internetReachability != NetworkReachability.NotReachable)
                {
                    Analytics.CustomEvent("WatchAdForFuel");
                    IronSource.Agent.showRewardedVideo();

                    // Showing Rewarded Ad Event
                    Dictionary<string, object> RewardAdPlacement = new Dictionary<string, object>()
                {
                                     {"placement" , OilStationFreeFuelButton}
                };
                    amplitude.logEvent("showingRewardedAd", RewardAdPlacement);

                    Dictionary<string, object> FreeFuelAmountAndCount = new Dictionary<string, object>()
                {
                                     {"amount" , 3}
                };
                    amplitude.logEvent("Free_Fuel", FreeFuelAmountAndCount);

                    fuelMeterInstance.CurrentFuelCount += 3;
                    fuelMeterInstance.TotalFuelCount.text = instance.currentFuel.ToString();
                    fuelMeterInstance.slider.maxValue = instance.currentFuel * 100f;
                    fuelMeterInstance.CurrentFuel = instance.currentFuel * 100f;

                    if (fuelMeterInstance.CurrentFuel == 100)
                    {
                        fuelMeterInstance.FuelFill.SetActive(true);
                    }
                    else if (fuelMeterInstance.CurrentFuel == 200)
                    {
                        fuelMeterInstance.FuelFill.SetActive(true);
                        fuelMeterInstance.FuelFill1.SetActive(true);
                    }
                    else if (fuelMeterInstance.CurrentFuel == 300)
                    {
                        fuelMeterInstance.FuelFill.SetActive(true);
                        fuelMeterInstance.FuelFill1.SetActive(true);
                        fuelMeterInstance.FuelFill2.SetActive(true);
                    }
                    else if (fuelMeterInstance.CurrentFuel == 400)
                    {
                        fuelMeterInstance.FuelFill.SetActive(true);
                        fuelMeterInstance.FuelFill1.SetActive(true);
                        fuelMeterInstance.FuelFill2.SetActive(true);
                        fuelMeterInstance.FuelFill3.SetActive(true);
                    }
                    else if (fuelMeterInstance.CurrentFuel == 500)
                    {
                        fuelMeterInstance.FuelFill.SetActive(true);
                        fuelMeterInstance.FuelFill1.SetActive(true);
                        fuelMeterInstance.FuelFill2.SetActive(true);
                        fuelMeterInstance.FuelFill3.SetActive(true);
                        fuelMeterInstance.FuelFill4.SetActive(true);
                    }

                    FuelEarnedText.text = "+3";
                    WinningFuelAnimation.SetActive(true);
                    CinematicCamera.gameObject.SetActive(false);
                    CameraFadeGameObject.SetActive(false);
                    Holder.SetActive(true);
                    FuelStationPopup.SetActive(false);
                    TopViewCamera.gameObject.SetActive(true);
                    OilStationHaltObj.SetActive(true);
                    OilStationHaltObj1.SetActive(true);
                    ParkingCheck.SetActive(false);
                    ParkingCheck1.SetActive(false);

                    rigidbody.drag = 0.25f;
                    StartCoroutine(WaitForNextFuel());
                }
                else
                {
                    RewardedInstance.NoConnectionPopup.SetActive(true);
                    FuelStationPopup.SetActive(false);
                    OilStationHaltObj.SetActive(true);
                    OilStationHaltObj1.SetActive(true);
                    ParkingCheck.SetActive(false);
                    ParkingCheck1.SetActive(false);

                    rigidbody.drag = 0.25f;
                    StartCoroutine(WaitForNextFuel());
                }
            }
        }

        public void FuelPopupExit()
        {
            if (isTpp == true)
            {
                if (instance.currentFuel == 0)
                {
                    FailScreen.SetActive(true);
                    FuelStationPopup.SetActive(false);
                    CinematicCamera.gameObject.SetActive(false);
                    CameraFadeGameObject.SetActive(false);
                    Holder.SetActive(true);
                    TppCamera.gameObject.SetActive(true);
                    OilStationHaltObj.SetActive(true);
                    OilStationHaltObj1.SetActive(true);
                    ParkingCheck.SetActive(false);
                    ParkingCheck1.SetActive(false);

                    rigidbody.drag = 0.25f;

                    StartCoroutine(WaitForNextFuel());
                }
                else
                {
                    FuelStationPopup.SetActive(false);
                    CinematicCamera.gameObject.SetActive(false);
                    CameraFadeGameObject.SetActive(false);
                    Holder.SetActive(true);
                    TppCamera.gameObject.SetActive(true);
                    OilStationHaltObj.SetActive(true);
                    OilStationHaltObj1.SetActive(true);
                    ParkingCheck.SetActive(false);
                    ParkingCheck1.SetActive(false);

                    rigidbody.drag = 0.25f;

                    StartCoroutine(WaitForNextFuel());
                }
            }
            else if (isFpp == true)
            {
                if (instance.currentFuel == 0)
                {
                    FailScreen.SetActive(true);
                    FuelStationPopup.SetActive(false);
                    CinematicCamera.gameObject.SetActive(false);
                    CameraFadeGameObject.SetActive(false);
                    Holder.SetActive(true);
                    FppCamera.gameObject.SetActive(true);
                    BusInterior.gameObject.SetActive(true);
                    OilStationHaltObj.SetActive(true);
                    OilStationHaltObj1.SetActive(true);
                    ParkingCheck.SetActive(false);
                    ParkingCheck1.SetActive(false);
                    
                    rigidbody.drag = 0.25f;

                    StartCoroutine(WaitForNextFuel());
                }
                else
                {
                    FuelStationPopup.SetActive(false);
                    CinematicCamera.gameObject.SetActive(false);
                    CameraFadeGameObject.SetActive(false);
                    Holder.SetActive(true);
                    FppCamera.gameObject.SetActive(true);
                    BusInterior.gameObject.SetActive(true);
                    OilStationHaltObj.SetActive(true);
                    OilStationHaltObj1.SetActive(true);
                    ParkingCheck.SetActive(false);
                    ParkingCheck1.SetActive(false);

                    rigidbody.drag = 0.25f;

                    StartCoroutine(WaitForNextFuel());
                }
            }
            else if (isTpp == false || isFpp == false)
            {
                if (instance.currentFuel == 0)
                {
                    FailScreen.SetActive(true);
                    FuelStationPopup.SetActive(false);
                    CinematicCamera.gameObject.SetActive(false);
                    CameraFadeGameObject.SetActive(false);
                    Holder.SetActive(true);
                    TopViewCamera.gameObject.SetActive(true);
                    OilStationHaltObj.SetActive(true);
                    OilStationHaltObj1.SetActive(true);
                    ParkingCheck.SetActive(false);
                    ParkingCheck1.SetActive(false);

                    rigidbody.drag = 0.25f;

                    StartCoroutine(WaitForNextFuel());
                }
                else
                {
                    FuelStationPopup.SetActive(false);
                    CinematicCamera.gameObject.SetActive(false);
                    CameraFadeGameObject.SetActive(false);
                    Holder.SetActive(true);
                    TopViewCamera.gameObject.SetActive(true);
                    OilStationHaltObj.SetActive(true);
                    OilStationHaltObj1.SetActive(true);
                    ParkingCheck.SetActive(false);
                    ParkingCheck1.SetActive(false);

                    rigidbody.drag = 0.25f;

                    StartCoroutine(WaitForNextFuel());
                }
            }
        }

        public void OkButton()
        {
            if (isTpp == true)
            {
                NoConnectionPopup.SetActive(false);
                FuelStationPopup.SetActive(true);
                CinematicCamera.gameObject.SetActive(false);
                CameraFadeGameObject.SetActive(false);
                Holder.SetActive(true);
                TppCamera.gameObject.SetActive(true);
                OilStationHaltObj.SetActive(true);
                OilStationHaltObj1.SetActive(true);
                ParkingCheck.SetActive(false);
                ParkingCheck1.SetActive(false);
            }
            else if (isFpp == true)
            {
                NoConnectionPopup.SetActive(false);
                FuelStationPopup.SetActive(true);
                CinematicCamera.gameObject.SetActive(false);
                CameraFadeGameObject.SetActive(false);
                Holder.SetActive(true);
                FppCamera.gameObject.SetActive(true);
                BusInterior.gameObject.SetActive(true);
                OilStationHaltObj.SetActive(true);
                OilStationHaltObj1.SetActive(true);
                ParkingCheck.SetActive(false);
                ParkingCheck1.SetActive(false);
            }
            else if (isTpp == false || isFpp == false)
            {
                NoConnectionPopup.SetActive(false);
                FuelStationPopup.SetActive(true);
                CinematicCamera.gameObject.SetActive(false);
                CameraFadeGameObject.SetActive(false);
                Holder.SetActive(true);
                TopViewCamera.gameObject.SetActive(true);
                OilStationHaltObj.SetActive(true);
                OilStationHaltObj1.SetActive(true);
                ParkingCheck.SetActive(false);
                ParkingCheck1.SetActive(false);
            }
        } 

        private IEnumerator WaitForNextFuel()
        {
            yield return new WaitForSeconds(10f);
            FuelCoinReward.SetActive(false);
            WinningFuelAnimation.SetActive(false);
            ParkingCheck.SetActive(true);
            ParkingCheck1.SetActive(true);
        }
    }
}
