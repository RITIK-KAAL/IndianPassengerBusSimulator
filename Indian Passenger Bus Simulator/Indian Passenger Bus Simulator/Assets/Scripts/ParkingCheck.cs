using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using UnityEngine.Analytics;
using System;

namespace UnityStandardAssets.Vehicles.Car
{
    public class ParkingCheck : MonoBehaviour
    {
        [SerializeField]
        private Rigidbody rigidbody;
        [SerializeField]
        private Animator LeftDoor;
        [SerializeField]
        private Animator RightDoor;
        [SerializeField]
        private GameObject ParkingCheckObject;
        [SerializeField]
        private GameObject ParkingCheckObject1;
        [SerializeField]
        private Transform ManPassenger1;
        [SerializeField]
        private Transform ManPassenger1Clone;
        [SerializeField]
        private Transform ManPassenger2;
        [SerializeField]
        private Camera TppCamera;
        [SerializeField]
        private Camera FppCamera;
        [SerializeField]
        private GameObject PickupCinematicCamera;
        [SerializeField]
        private GameObject ParkingIcons;
        [SerializeField]
        private GameObject ParkingIcons1;
        [SerializeField]
        private GameObject OpenButton1;
        [SerializeField]
        private GameObject CloseButton1;
        [SerializeField]
        private GameObject OpenButton2;
        [SerializeField]
        private GameObject CloseButton2;
        [SerializeField]
        private GameObject BusInterior;
        [SerializeField]
        private GameObject FinishPage;
        [SerializeField]
        private GameObject Timer;
        [SerializeField]
        private Animator DoorUI;
        [SerializeField]
        private GameObject Holder;
        [SerializeField]
        private GameObject FinishEffects;
        private bool isTpp;
        private bool isFpp;
        [SerializeField]
        private Animator CameraFadeScreen;
        [SerializeField]
        private GameObject CameraFadeGameObject;
        [SerializeField]
        private Transform Bus;
        [SerializeField]
        private Transform BusHolder;
        [SerializeField]
        private Transform BusHolder1;
        [SerializeField]
        public GameObject ExplainationImage;
        [SerializeField]
        private GameObject NextButton;
        [SerializeField]
        private GameObject Minimap;
        [SerializeField]
        public GameObject ExplainationText;
        [SerializeField]
        private GameObject GearToogle;
        [SerializeField]
        private CarController instance;
        [SerializeField]
        private GameObject LevelAnalyzer;
        [SerializeField]
        private Transform WomanPassenger;
        [SerializeField]
        private Transform WomanPassengerClone;
        [SerializeField]
        private CarAudio AudioInstance;
        [SerializeField]
        public GameObject ExplainationImage1;
        [SerializeField]
        private GameObject TutorialGameObject; 
        public static ParkingCheck ParkingInstance;
        private int CurrentSceneIndex;
        [SerializeField]
        private TMP_Text CurrentCoinCount;
        [SerializeField]
        private GameFinish Instance;
        [SerializeField]
        private CoinData CoinDataInstance;
        private int ThreeStarValue = 500;
        private int TwoStarValue = 400;
        private int OneStarValue = 300;
        private int LevelRepeatValue = 50;
        [SerializeField]
        private GameObject ExplainationImage2;
        public Animator BrakeTutorial;
        [SerializeField]
        private SteeringWheel steeringWheel;

        private Rigidbody m_BusRigidbody;
        private HealthBar m_HealthBar;
        private BusInfo m_BusInfo;

        private void Awake()
        {
            CurrentSceneIndex = SceneManager.GetActiveScene().buildIndex;
            m_BusInfo = FindObjectOfType<BusInfo>();
        }

        private void Start()
        {
            if (Bus != null)
            {
                m_BusRigidbody = Bus.GetComponent<Rigidbody>();
                m_HealthBar = GetComponent<HealthBar>();
            }
        }

        private void Update()
        {
            if (PickupCinematicCamera.activeSelf)
            {
                m_BusRigidbody.drag = 40f;
                //StartCoroutine(WaitForSteer());
            }
        }

        private IEnumerator WaitForSteer()
        {
            yield return new WaitForSeconds(0.5f);

            steeringWheel.OutPut = 0f; 
            steeringWheel.WheelAngle = 0f;
            steeringWheel.LastWheelAngle = 0f; 
        }

        private void OnTriggerStay(Collider collider)
        {
            if (collider.gameObject.tag == "TutorialCheck")
            {
                if (FppCamera.gameObject.activeSelf)
                {   
                    isFpp = true;
                }
                else if (TppCamera.gameObject.activeSelf)
                {
                    isTpp = true;
                }
                BrakeTutorial.SetBool("isTutorial", true);
            }

            else if (collider.gameObject.tag == "PickupPassengers" && instance.CurrentSpeed < 5f)
            {
                if (FppCamera.gameObject.activeSelf)
                {
                    isFpp = true;
                }
                else if (TppCamera.gameObject.activeSelf)
                {
                    isTpp = true;
                }
                ParkingIcons.SetActive(false);
                ParkingIcons1.SetActive(true);
                ParkingCheckObject.SetActive(false);
                StartCoroutine(WaitTime());
            }
            else if (collider.gameObject.tag == "DropPassengers" && instance.CurrentSpeed < 5f)
            {
                if (FppCamera.gameObject.activeSelf)
                {
                    isFpp = true;
                }
                else if (TppCamera.gameObject.activeSelf)
                {
                    isTpp = true;
                }
                ParkingIcons1.SetActive(false);
                ParkingCheckObject1.SetActive(false);
                StartCoroutine(WaitTime1());
            }
        } 

        public void OpenDoor()
        {
            LeftDoor.SetBool("isLeftOpen", true);
            RightDoor.SetBool("isRightOpen", true);
            
            LeftDoor.SetBool("isDone", true);
            RightDoor.SetBool("isdone", true);

            if(m_BusInfo == null) m_BusInfo = FindObjectOfType<BusInfo>();
            m_BusInfo?.BusDoorOpen();

            AudioManager.instance.Play("DoorOpen");
            
            StartCoroutine(PickupPassengers());
            
            ExplainationImage1.SetActive(false);
        }

        public void CloseDoor()
        {
            LeftDoor.SetBool("isLeftOpen", false);
            RightDoor.SetBool("isClosed", true);
            LeftDoor.SetBool("isDone", false);
            RightDoor.SetBool("isdone", false);

            if (m_BusInfo == null) m_BusInfo = FindObjectOfType<BusInfo>();
            m_BusInfo?.BusDoorClose();

            AudioManager.instance.Play("DoorClose");
            
            StartCoroutine(PickupWaitTime());
            
            ExplainationImage2.SetActive(false);
        }

        public void OpenDoor1()
        {
            LeftDoor.SetBool("isLeftOpen", true);
            RightDoor.SetBool("isRightOpen", true);
            LeftDoor.SetBool("isDone", true);
            RightDoor.SetBool("isdone", true);

            if (m_BusInfo == null) m_BusInfo = FindObjectOfType<BusInfo>();
            m_BusInfo?.BusDoorOpen();
            
            AudioManager.instance.Play("DoorOpen");

            StartCoroutine(DropPassengers());
        }

        public void CloseDoor1()
        {
            LeftDoor.SetBool("isLeftOpen", false);
            RightDoor.SetBool("isClosed", true);
            LeftDoor.SetBool("isDone", false);
            RightDoor.SetBool("isdone", false);
            
            if (m_BusInfo == null) m_BusInfo = FindObjectOfType<BusInfo>();
            m_BusInfo?.BusDoorClose();

            AudioManager.instance.Play("DoorClose");
            
            StartCoroutine(DropWaitTime());
        }

        private IEnumerator PickupPassengers()
        {
            AudioManager.instance.Stop("BackGear");
            OpenButton1.SetActive(false);
            
            yield return new WaitForSeconds(1f);
            
            ManPassenger1Clone.gameObject.SetActive(false);
            ManPassenger1.GetComponent<PassengerController>().setForExit = false;
            ManPassenger1.gameObject.SetActive(true);
            
            yield return new WaitForSeconds(1f);

            WomanPassengerClone.gameObject.SetActive(false);
            WomanPassenger.GetComponent<PassengerController>().setForExit = false;
            WomanPassenger.gameObject.SetActive(true);
            
            yield return new WaitForSeconds(2f);
            
            AudioManager.instance.Play("Passenger");
            
            ManPassenger1.gameObject.SetActive(false);
            WomanPassenger.gameObject.SetActive(false);
            
            CloseButton1.SetActive(true);
            ExplainationImage2.SetActive(true);
            DoorUI.Play("DoorUI");
            
            yield return new WaitForSeconds(1f);
        }

        private IEnumerator DropPassengers()
        {
            AudioManager.instance.Stop("BackGear");
            
            OpenButton2.SetActive(false);
            
            yield return new WaitForSeconds(1f);
            
            ManPassenger2.GetComponent<PassengerController>().setForExit = true;
            ManPassenger2.gameObject.SetActive(true);
            
            yield return new WaitForSeconds(2.5f);
            
            StartCoroutine(DropWaitTime()); 
        }

        //Makes Bus Wait to Open Door for Passenger
        private IEnumerator WaitTime()
        {
            if(m_HealthBar) m_HealthBar.GodMode = true;
            Holder.SetActive(false);  
            
            yield return new WaitForSeconds(0.3f);
            
            CameraFadeGameObject.SetActive(true);
            CameraFadeScreen.Play("CameraFadeScreen");
            
            yield return new WaitForSeconds(1.4f);
            
            Bus.position = BusHolder.position;
            Bus.rotation = BusHolder.rotation;
            //Bus.rotation = BusHolder.localRotation;            
            
            yield return new WaitForSeconds(0.24f);
            
            TppCamera.gameObject.SetActive(false);
            FppCamera.gameObject.SetActive(false);
            
            BusInterior.SetActive(false);
            PickupCinematicCamera.SetActive(true);
            CameraFadeGameObject.SetActive(false);
            OpenButton1.SetActive(true);
            DoorUI.Play("DoorUI");
            ExplainationImage1.SetActive(true);
        }

        private IEnumerator WaitTime1()
        {
            if(m_HealthBar) m_HealthBar.GodMode = true;
            Holder.SetActive(false);

            yield return new WaitForSeconds(0.3f);

            CameraFadeGameObject.SetActive(true);
            CameraFadeScreen.Play("CameraFadeScreen");

            yield return new WaitForSeconds(1.4f);

            Bus.position = BusHolder1.position;
            Bus.rotation = BusHolder1.rotation;
            /*if (LevelAnalyzer.activeSelf)
            {
                Bus.rotation = Quaternion.Euler(0f, 0f, 0f);
            }
            else
            {
                Bus.rotation = BusHolder1.localRotation;
            }*/

            yield return new WaitForSeconds(0.24f);

            TppCamera.gameObject.SetActive(false);
            FppCamera.gameObject.SetActive(false);
            BusInterior.SetActive(false);
            PickupCinematicCamera.SetActive(true);
            CameraFadeGameObject.SetActive(false);
            OpenButton2.SetActive(true);
            DoorUI.Play("DoorUI");  
        }

        private IEnumerator PickupWaitTime()
        {
            if (isFpp == true)
            {
                OpenButton1.SetActive(false);
                CloseButton1.SetActive(false);
                OpenButton2.SetActive(false);
                CloseButton2.SetActive(false);

                yield return new WaitForSeconds(3f);

                CameraFadeGameObject.SetActive(true);
                CameraFadeScreen.Play("CameraFade1");
                
                yield return new WaitForSeconds(1.4f);
                
                FppCamera.gameObject.SetActive(true);
                BusInterior.SetActive(true);
                CameraFadeGameObject.SetActive(false);
                PickupCinematicCamera.SetActive(false);
                Holder.SetActive(true);
                ExplainationImage.SetActive(true);
                ExplainationText.SetActive(true);
                Minimap.SetActive(true);
                NextButton.SetActive(true);
                GearToogle.SetActive(false);
                ManPassenger1.gameObject.SetActive(false);
                ManPassenger2.gameObject.SetActive(false);
                m_BusRigidbody.drag = 0.1f;
                if(m_HealthBar) m_HealthBar.GodMode = false;
                AudioManager.instance.Play("Pickup");
            }
            else if (isTpp == true)
            {
                OpenButton1.SetActive(false);
                CloseButton1.SetActive(false);
                OpenButton2.SetActive(false);
                CloseButton2.SetActive(false);
                
                yield return new WaitForSeconds(3f);
                
                CameraFadeGameObject.SetActive(true);
                CameraFadeScreen.Play("CameraFade1");
                
                yield return new WaitForSeconds(1.4f);
                
                TppCamera.gameObject.SetActive(true);
                CameraFadeGameObject.SetActive(false);
                PickupCinematicCamera.SetActive(false);
                Holder.SetActive(true);
                ExplainationImage.SetActive(true);
                ExplainationText.SetActive(true);
                Minimap.SetActive(true);
                NextButton.SetActive(true);
                GearToogle.SetActive(false);
                ManPassenger1.gameObject.SetActive(false);
                ManPassenger2.gameObject.SetActive(false);
                m_BusRigidbody.drag = 0.1f;
                if(m_HealthBar) m_HealthBar.GodMode = false;
                AudioManager.instance.Play("Pickup");
            }
            else
            {
                OpenButton1.SetActive(false);
                CloseButton1.SetActive(false);
                OpenButton2.SetActive(false);
                CloseButton2.SetActive(false);
                
                yield return new WaitForSeconds(3f);
                
                CameraFadeGameObject.SetActive(true);
                CameraFadeScreen.Play("CameraFade1");
                
                yield return new WaitForSeconds(1.4f);
                
                CameraFadeGameObject.SetActive(false);
                PickupCinematicCamera.SetActive(false);
                Holder.SetActive(true);
                ExplainationImage.SetActive(true);
                ExplainationText.SetActive(true);
                Minimap.SetActive(true);
                NextButton.SetActive(true);
                GearToogle.SetActive(false);
                ManPassenger1.gameObject.SetActive(false);
                ManPassenger2.gameObject.SetActive(false);
                m_BusRigidbody.drag = 0.1f;
                if(m_HealthBar) m_HealthBar.GodMode = false;
                AudioManager.instance.Play("Pickup");
            }

            StartCoroutine(WaitForSteer());
        }

        public void PickupExplaination()
        {
            ExplainationImage.SetActive(false);
            Minimap.SetActive(false);
            GearToogle.SetActive(true);
        }

        private IEnumerator DropWaitTime()
        {
            if (isFpp == true)
            {
                OpenButton1.SetActive(false);
                CloseButton1.SetActive(false);
                OpenButton2.SetActive(false);
                CloseButton2.SetActive(false);
                yield return new WaitForSeconds(1f);
                CameraFadeGameObject.SetActive(true);
                CameraFadeScreen.Play("CameraFade1");
                yield return new WaitForSeconds(1.4f);
                Holder.SetActive(false);
                ManPassenger1.gameObject.SetActive(false);
                ManPassenger2.gameObject.SetActive(false);
                yield return new WaitForSeconds(0.5f);
                FinishEffects.SetActive(false);
/*                if (PlayerPrefs.GetInt("isAdsOn") == 0)
                {
                    IronSource.Agent.loadBanner(IronSourceBannerSize.BANNER, IronSourceBannerPosition.TOP);
                }
                else if(PlayerPrefs.GetInt("isAdsOn") == 1)
                {
                    return;
                }*/
                FinishPage.SetActive(true);
                AudioInstance.StopSound();
                AudioManager.instance.Stop("City");
                AudioManager.instance.Stop("Birds");

                Analytics.CustomEvent("LevelWin" + CurrentSceneIndex);

                if (Instance.LevelAnalyzer1.activeSelf && Instance.TimerSlider.value > Instance.TwoStar ||
                    Instance.HealthBarSlider.value == 3f && Instance.TimerSlider.value > Instance.TwoStar)
                {
                    if (CurrentSceneIndex == 1)
                    {
                        if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 2)
                    {
                        if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 3)
                    {
                        if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 4)
                    {
                        if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 5)
                    {
                        if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 6)
                    {
                        if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)
                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 7)
                    {
                        if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 8)
                    {
                        if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 9)
                    {
                        if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 10)
                    {
                        if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 11)
                    {
                        if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 12)
                    {
                        if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 13)
                    {
                        if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 14)
                    {
                        if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 15)
                    {
                        if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 16)
                    {
                        if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 17)
                    {
                        if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 18)
                    {
                        if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 19)
                    {
                        if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 20)
                    {
                        if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 21)
                    {
                        if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 22)
                    {
                        if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 23)
                    {
                        if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 24)
                    {
                        if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 25)
                    {
                        if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 26)
                    {
                        if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 27)
                    {
                        if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 28)
                    {
                        if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 29)
                    {
                        if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 30)
                    {
                        if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 31)
                    {
                        if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 32)
                    {
                        if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                }
                else if (Instance.LevelAnalyzer1.activeSelf && Instance.TimerSlider.value < Instance.ThreeStar && Instance.TimerSlider.value > Instance.OneStar ||
                         Instance.HealthBarSlider.value == 2f && Instance.TimerSlider.value < Instance.ThreeStar && Instance.TimerSlider.value > Instance.OneStar ||
                         Instance.HealthBarSlider.value == 2f && Instance.TimerSlider.value > Instance.TwoStar ||
                         Instance.HealthBarSlider.value == 3f && Instance.TimerSlider.value < Instance.ThreeStar && Instance.TimerSlider.value > Instance.OneStar ||
                         Instance.HealthBarSlider.value == 1f && Instance.TimerSlider.value > Instance.TwoStar)
                {
                    if (CurrentSceneIndex == 1)
                    {
                        if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)
                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 2)
                    {
                        if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)
                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 3)
                    {
                        if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 4)
                    {
                        if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 5)
                    {
                        if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 6)
                    {
                        if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 7)
                    {
                        if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 8)
                    {
                        if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 9)
                    {
                        if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 10)
                    {
                        if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 11)
                    {
                        if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 12)
                    {
                        if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 13)
                    {
                        if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 14)
                    {
                        if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 15)
                    {
                        if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 16)
                    {
                        if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 17)
                    {
                        if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 18)
                    {
                        if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 19)
                    {
                        if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 20)
                    {
                        if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 21)
                    {
                        if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 22)
                    {
                        if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 23)
                    {
                        if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 24)
                    {
                        if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 25)
                    {
                        if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 26)
                    {
                        if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 27)
                    {
                        if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 28)
                    {
                        if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 29)
                    {
                        if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 30)
                    {
                        if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 31)
                    {
                        if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 32)
                    {
                        if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                }
                else if (Instance.HealthBarSlider.value == 1f && Instance.TimerSlider.value < Instance.OneStar ||
                         Instance.HealthBarSlider.value == 1f && Instance.TimerSlider.value < Instance.OneStar ||
                         Instance.HealthBarSlider.value == 2f && Instance.TimerSlider.value < Instance.OneStar ||
                         Instance.HealthBarSlider.value == 3f && Instance.TimerSlider.value < Instance.OneStar ||
                         Instance.HealthBarSlider.value == 2f && Instance.TimerSlider.value < Instance.OneStar ||
                         Instance.HealthBarSlider.value == 1f && Instance.TimerSlider.value < Instance.ThreeStar && Instance.TimerSlider.value > Instance.OneStar ||
                         Instance.HealthBarSlider.value == 1f && Instance.TimerSlider.value < Instance.ThreeStar && Instance.TimerSlider.value > Instance.OneStar)
                {
                    if (CurrentSceneIndex == 1)
                    {
                        if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 2)
                    {
                        if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 3)
                    {
                        if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 4)
                    {
                        if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 5)
                    {
                        if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 6)
                    {
                        if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 7)
                    {
                        if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 8)
                    {
                        if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 9)
                    {
                        if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 10)
                    {
                        if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 11)
                    {
                        if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 12)
                    {
                        if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 13)
                    {
                        if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 14)
                    {
                        if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 15)
                    {
                        if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 16)
                    {
                        if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 17)
                    {
                        if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 18)
                    {
                        if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 19)
                    {
                        if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 20)
                    {
                        if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 21)
                    {
                        if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 22)
                    {
                        if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 23)
                    {
                        if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 24)
                    {
                        if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 25)
                    {
                        if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 26)
                    {
                        if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 27)
                    {
                        if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 28)
                    {
                        if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 29)
                    {
                        if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 30)
                    {
                        if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 31)
                    {
                        if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 32)
                    {
                        if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                }
                StartCoroutine(SoundDelay());
                Timer.SetActive(false);
            }
            else if (isTpp == true)
            {
                OpenButton1.SetActive(false);
                CloseButton1.SetActive(false);
                OpenButton2.SetActive(false);
                CloseButton2.SetActive(false);
                yield return new WaitForSeconds(1f);
                CameraFadeGameObject.SetActive(true);
                CameraFadeScreen.Play("CameraFade1");
                yield return new WaitForSeconds(1.4f);
                Holder.SetActive(false);
                ManPassenger1.gameObject.SetActive(false);
                ManPassenger2.gameObject.SetActive(false);
                yield return new WaitForSeconds(0.5f);
                FinishEffects.SetActive(false);
/*                IronSource.Agent.loadBanner(IronSourceBannerSize.BANNER, IronSourceBannerPosition.BOTTOM);*/
                FinishPage.SetActive(true);
                AudioInstance.StopSound();
                 
                if (Instance.LevelAnalyzer1.activeSelf && Instance.TimerSlider.value > Instance.TwoStar ||
                    Instance.HealthBarSlider.value == 3f && Instance.TimerSlider.value > Instance.TwoStar)
                {
                    if (CurrentSceneIndex == 1)
                    {
                        if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 2)
                    {
                        if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 3)
                    {
                        if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 4)
                    {
                        if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 5)
                    {
                        if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 6)
                    {
                        if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 7)
                    {
                        if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 8)
                    {
                        if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 9)
                    {
                        if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 10)
                    {
                        if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 11)
                    {
                        if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 12)
                    {
                        if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 13)
                    {
                        if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 14)
                    {
                        if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 15)
                    {
                        if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 16)
                    {
                        if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 17)
                    {
                        if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 18)
                    {
                        if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 19)
                    {
                        if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 20)
                    {
                        if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 21)
                    {
                        if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 22)
                    {
                        if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 23)
                    {
                        if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 24)
                    {
                        if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 25)
                    {
                        if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 26)
                    {
                        if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 27)
                    {
                        if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 28)
                    {
                        if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 29)
                    {
                        if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 30)
                    {
                        if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 31)
                    {
                        if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 32)
                    {
                        if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)

                        {
                            Instance.isThreeStared = true;
                            ThreeStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + ThreeStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                        {
                            Instance.isThreeStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                }
                else if (Instance.LevelAnalyzer1.activeSelf && Instance.TimerSlider.value < Instance.ThreeStar && Instance.TimerSlider.value > Instance.OneStar ||
                         Instance.HealthBarSlider.value == 2f && Instance.TimerSlider.value < Instance.ThreeStar && Instance.TimerSlider.value > Instance.OneStar ||
                         Instance.HealthBarSlider.value == 2f && Instance.TimerSlider.value > Instance.TwoStar ||
                         Instance.HealthBarSlider.value == 3f && Instance.TimerSlider.value < Instance.ThreeStar && Instance.TimerSlider.value > Instance.OneStar ||
                         Instance.HealthBarSlider.value == 1f && Instance.TimerSlider.value > Instance.TwoStar)
                {
                    if (CurrentSceneIndex == 1)
                    {
                        if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)
                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 2)
                    {
                        if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)
                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 3)
                    {
                        if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 4)
                    {
                        if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 5)
                    {
                        if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 6)
                    {
                        if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 7)
                    {
                        if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 8)
                    {
                        if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 9)
                    {
                        if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 10)
                    {
                        if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 11)
                    {
                        if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 12)
                    {
                        if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 13)
                    {
                        if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 14)
                    {
                        if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 15)
                    {
                        if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 16)
                    {
                        if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 17)
                    {
                        if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 18)
                    {
                        if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 19)
                    {
                        if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 20)
                    {
                        if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 21)
                    {
                        if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 22)
                    {
                        if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 23)
                    {
                        if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 24)
                    {
                        if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 25)
                    {
                        if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 26)
                    {
                        if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 27)
                    {
                        if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 28)
                    {
                        if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 29)
                    {
                        if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 30)
                    {
                        if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 31)
                    {
                        if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 32)
                    {
                        if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)

                        {
                            Instance.isTwoStared = true;
                            TwoStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + TwoStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                        {
                            Instance.isTwoStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                }
                else if (Instance.HealthBarSlider.value == 1f && Instance.TimerSlider.value < Instance.OneStar ||
                         Instance.HealthBarSlider.value == 1f && Instance.TimerSlider.value < Instance.OneStar ||
                         Instance.HealthBarSlider.value == 2f && Instance.TimerSlider.value < Instance.OneStar ||
                         Instance.HealthBarSlider.value == 3f && Instance.TimerSlider.value < Instance.OneStar ||
                         Instance.HealthBarSlider.value == 2f && Instance.TimerSlider.value < Instance.OneStar ||
                         Instance.HealthBarSlider.value == 1f && Instance.TimerSlider.value < Instance.ThreeStar && Instance.TimerSlider.value > Instance.OneStar ||
                         Instance.HealthBarSlider.value == 1f && Instance.TimerSlider.value < Instance.ThreeStar && Instance.TimerSlider.value > Instance.OneStar)
                {
                    if (CurrentSceneIndex == 1)
                    {
                        if (PlayerPrefs.GetInt("Level1ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level1ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 2)
                    {
                        if (PlayerPrefs.GetInt("Level2ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level2ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 3)
                    {
                        if (PlayerPrefs.GetInt("Level3ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level3ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 4)
                    {
                        if (PlayerPrefs.GetInt("Level4ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level4ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 5)
                    {
                        if (PlayerPrefs.GetInt("Level5ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level5ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 6)
                    {
                        if (PlayerPrefs.GetInt("Level6ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level6ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 7)
                    {
                        if (PlayerPrefs.GetInt("Level7ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level7ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 8)
                    {
                        if (PlayerPrefs.GetInt("Level8ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level8ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 9)
                    {
                        if (PlayerPrefs.GetInt("Level9ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level9ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 10)
                    {
                        if (PlayerPrefs.GetInt("Level10ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level10ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 11)
                    {
                        if (PlayerPrefs.GetInt("Level11ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level11ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 12)
                    {
                        if (PlayerPrefs.GetInt("Level12ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level12ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 13)
                    {
                        if (PlayerPrefs.GetInt("Level13ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level13ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 14)
                    {
                        if (PlayerPrefs.GetInt("Level14ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level14ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 15)
                    {
                        if (PlayerPrefs.GetInt("Level15ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level15ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 16)
                    {
                        if (PlayerPrefs.GetInt("Level16ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level16ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 17)
                    {
                        if (PlayerPrefs.GetInt("Level17ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level17ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 18)
                    {
                        if (PlayerPrefs.GetInt("Level18ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level18ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 19)
                    {
                        if (PlayerPrefs.GetInt("Level19ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level19ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 20)
                    {
                        if (PlayerPrefs.GetInt("Level20ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level20ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 21)
                    {
                        if (PlayerPrefs.GetInt("Level21ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level21ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 22)
                    {
                        if (PlayerPrefs.GetInt("Level22ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level22ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 23)
                    {
                        if (PlayerPrefs.GetInt("Level23ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level23ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 24)
                    {
                        if (PlayerPrefs.GetInt("Level24ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level24ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 25)
                    {
                        if (PlayerPrefs.GetInt("Level25ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level25ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 26)
                    {
                        if (PlayerPrefs.GetInt("Level26ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level26ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 27)
                    {
                        if (PlayerPrefs.GetInt("Level27ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level27ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 28)
                    {
                        if (PlayerPrefs.GetInt("Level28ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level28ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 29)
                    {
                        if (PlayerPrefs.GetInt("Level29ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level29ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 30)
                    {
                        if (PlayerPrefs.GetInt("Level30ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level30ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 31)
                    {
                        if (PlayerPrefs.GetInt("Level31ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level31ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                    else if (CurrentSceneIndex == 32)
                    {
                        if (PlayerPrefs.GetInt("Level32ThreeStar") == 0)

                        {
                            Instance.isOneStared = true;
                            OneStarValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + OneStarValue;
                        }
                        else if (PlayerPrefs.GetInt("Level32ThreeStar") == 1)
                        {
                            Instance.isOneStared = true;
                            LevelRepeatValue += CoinDataInstance.currentCash;
                            CurrentCoinCount.text = "" + LevelRepeatValue;
                        }
                    }
                }
                StartCoroutine(SoundDelay());
                Timer.SetActive(false);
            }
        }

        private IEnumerator SoundDelay()
        {
            if (Instance.isThreeStared == true)
            {
                AudioManager.instance.Play("LevelComplete");
                yield return new WaitForSeconds(1f);
                AudioManager.instance.Play("Stars");
                yield return new WaitForSeconds(0.5f);
                AudioManager.instance.Play("Stars");
                yield return new WaitForSeconds(0.5f);
                AudioManager.instance.Play("Stars");
                yield return new WaitForSeconds(1f);
                AudioManager.instance.Play("Coin");

                if (CurrentSceneIndex >= PlayerPrefs.GetInt("LevelCount") && CurrentSceneIndex != 11)
                {
                    PlayerPrefs.SetInt("LevelCount", CurrentSceneIndex + 1);
                }
                else if (CurrentSceneIndex == 11)
                {
                    PlayerPrefs.SetInt("LevelCount", CurrentSceneIndex);
                }
            }

            else if (Instance.isTwoStared == true)
            {
                AudioManager.instance.Play("LevelComplete");
                yield return new WaitForSeconds(1f);
                AudioManager.instance.Play("Stars");
                yield return new WaitForSeconds(0.5f);
                AudioManager.instance.Play("Stars");
                yield return new WaitForSeconds(0.5f);
                AudioManager.instance.Play("Coin");

                if (CurrentSceneIndex >= PlayerPrefs.GetInt("LevelCount") && CurrentSceneIndex != 11)
                {
                    PlayerPrefs.SetInt("LevelCount", CurrentSceneIndex + 1);
                }
                else if (CurrentSceneIndex == 11)
                {
                    PlayerPrefs.SetInt("LevelCount", CurrentSceneIndex);
                }
            }

            else if (Instance.isOneStared == true)
            {
                AudioManager.instance.Play("LevelComplete");
                yield return new WaitForSeconds(1f);
                AudioManager.instance.Play("Stars");
                yield return new WaitForSeconds(0.5f);
                AudioManager.instance.Play("Coin");

                if (CurrentSceneIndex >= PlayerPrefs.GetInt("LevelCount") && CurrentSceneIndex != 11)
                {
                    PlayerPrefs.SetInt("LevelCount", CurrentSceneIndex + 1);
                }
                else if (CurrentSceneIndex == 11)
                {
                    PlayerPrefs.SetInt("LevelCount", CurrentSceneIndex);
                }
            }
        }
    }
}
