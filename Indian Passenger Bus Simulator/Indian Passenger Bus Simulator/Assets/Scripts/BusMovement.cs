using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Analytics;
using UnityEngine.SceneManagement;
using System;

namespace UnityStandardAssets.Vehicles.Car
{
    public class BusMovement : MonoBehaviour
    {
        public Joystick joystick;
        private float NegativeSpeed = -40f;
        public float vConverter;
        private float hConverter;
        private bool isForward;
        private bool isBackward;
        private bool isEngineStarted;
        private bool isHeadLightOn;
        private bool isRightIndicatorOn;
        private bool isLeftIndicatorOn;
        public Image CurrentGearImage;
        public Image ForwardGearImage;
        public Image BackwardGearImage;
        public GameObject FrontRightHeadLight;
        public GameObject FrontLeftHeadLight;
        public GameObject RearLeftIndicator;
        public GameObject RearRightIndicator;
        public GameObject FrontLeftIndicator;
        public GameObject FrontRightIndicator;
        public GameObject[] TriLightRight = new GameObject[3];
        public GameObject[] TriLightLeft = new GameObject[3];
        public GameObject StartEngineButton;
        [SerializeField]
        public Animator LightBlink;
        [SerializeField]
        public Animator LightBlink1;
        [SerializeField]
        public Animator LightBlink2;
        [SerializeField]
        public Animator LightBlink3;
        [SerializeField]
        public Animator LightBlink4;
        [SerializeField]
        public Animator LightBlink5;
        private CarController m_Car;
        [SerializeField]
        private GameObject SteeringWheel;
        [SerializeField]
        private GameObject ArrowControls;
        public float h;
        [SerializeField]
        private Slider GearSlider; 
        [SerializeField]
        private GameObject TriLightRightGameObject;
        [SerializeField]
        private GameObject TriLightLeftGameObject;
        [SerializeField]
        private GameObject RearRightIndicatorGameObject;
        [SerializeField]
        private GameObject RearLeftIndicatorGameObject;
        [SerializeField]
        private GameObject Camera;
        [SerializeField]
        private GameObject VirtualCamera;
        [SerializeField]
        private GameObject GearToggle;
        [SerializeField]
        private GameObject ExplainationImage;
        [SerializeField]
        private GameObject GearToggleText;
        [SerializeField]
        private GameObject Trigger;
        [SerializeField]
        private GameObject FppCamera;
        [SerializeField]
        private GameObject TppCamera;
        [SerializeField]
        private GameObject BusInterior;
        [SerializeField]
        private GameObject Speedometer;
        [SerializeField]
        private GameObject TextBackground;
        [SerializeField]
        private GameObject ExplainationText2;
        [SerializeField]
        private TMP_Text Speed;
        private bool Audio;
        [SerializeField]
        private CarAudio instance;
        [SerializeField]
        private GameObject AcceleratorText;
        private bool isEngineTurnedOn;
        private bool isEngineFinallyOn;
        [SerializeField]
        private GameObject StartEngineReward;
        [SerializeField]
        private CoinData CoinInstance;
        public bool isTimerOn;
        [SerializeField]
        private Button CameraSwitch;
        [SerializeField]
        private Animator BusShake;

        [Space(10)]

        [SerializeField] private GameObject AllBusesContainer;

        private RaycastHit hit;
        private bool m_EngineStarted = false;

        private GameObject m_TopViewCamera;

        private BusInfo m_BusInfo;

        public bool IsForwardGear { get { return isForward; } }
        public bool IsBackwardGear { get { return isBackward; } }

        private void Awake()
        {
            PlayerPrefs.SetInt("PreviousLevel", SceneManager.GetActiveScene().buildIndex);
            AudioManager.instance.Play("City");
            AudioManager.instance.Stop("BackGear");
            if(PlayerPrefs.GetInt("isAdsOn") == 0)
            {
                IronSource.Agent.loadBanner(IronSourceBannerSize.BANNER, IronSourceBannerPosition.TOP);

                m_Car = GetComponent<CarController>();
                Trigger.SetActive(false);

                if (PlayerPrefs.GetInt("SelectedControls") == 1)
                {
                    SteeringWheel.SetActive(true);
                    ArrowControls.SetActive(false);
                }
                else if (PlayerPrefs.GetInt("SelectedControlsArrow") == 1)
                {
                    ArrowControls.SetActive(true);
                    SteeringWheel.SetActive(false);
                }

                if (PlayerPrefs.HasKey("Coins"))
                {
                    CoinInstance.currentCash = PlayerPrefs.GetInt("Coins");
                }

                StartCoroutine(ReverseTutorial());
            }
            else if (PlayerPrefs.GetInt("isAdsOn") == 1)
            {
                m_Car = GetComponent<CarController>();
                Trigger.SetActive(false);

                if (PlayerPrefs.GetInt("SelectedControls") == 1)
                {
                    SteeringWheel.SetActive(true);
                    ArrowControls.SetActive(false);
                }
                else if (PlayerPrefs.GetInt("SelectedControlsArrow") == 1)
                {
                    ArrowControls.SetActive(true);
                    SteeringWheel.SetActive(false);
                }

                if (PlayerPrefs.HasKey("Coins"))
                {
                    CoinInstance.currentCash = PlayerPrefs.GetInt("Coins");
                }

                StartCoroutine(ReverseTutorial());
            }

            if(m_TopViewCamera == null)
                m_TopViewCamera = transform.Find("TopViewCamera").gameObject;
        }

        private void Start()
        {
            if(BusShake == null)
            {
                AllBusesContainer = GameObject.Find("AllBuses");
                if(AllBusesContainer != null) 
                    BusShake = AllBusesContainer.GetComponent<Animator>();                
            }

            Transform minimapCamera = transform.Find("MiniMapCamera");
            if (minimapCamera != null)
            {
                Vector3 camLocalPos = minimapCamera.localPosition;
                camLocalPos.x = camLocalPos.z = 0.0f;
                minimapCamera.transform.localPosition = camLocalPos;
                minimapCamera.transform.localRotation = Quaternion.Euler(90.0f, 0.0f, 0.0f);
            }

            Transform busSprite = transform.Find("BusSprite");
            if (busSprite != null)
                busSprite.gameObject.SetActive(false);

            m_BusInfo = FindObjectOfType<BusInfo>();
        }

#if UNITY_EDITOR
        private void Update()
        {
            if (Input.GetKey(KeyCode.W)) VerticalClick(1.0f);
            if(Input.GetKeyUp(KeyCode.W)) VerticalClick(0.0f);

            if (Input.GetKey(KeyCode.S)) VerticalClick(-1.0f);
            if (Input.GetKeyUp(KeyCode.W)) VerticalClick(0.0f);

            if (Input.GetKey(KeyCode.A)) HorizontalClick(-1.0f);
            if (Input.GetKeyUp(KeyCode.A)) HorizontalClick(0.0f);

            if (Input.GetKey(KeyCode.D)) HorizontalClick(1.0f);
            if (Input.GetKeyUp(KeyCode.D)) HorizontalClick(0.0f);
        }
#endif

        public void FixedUpdate()
        {
            // For Input { Steer Helper = 1f , Traction Control = 1f , TopSpeed = 30f , SlipLimit = 1f , SteerAngle = 25f , RevRangeBoundary = 25f }

            if(SteeringWheel.activeSelf)
            {
                // SteeringWheel Controls
                float v = vConverter;

                m_Car.Move(h, v, v, 0f);
            }
            else if(ArrowControls.activeSelf)
            {
                // Arrow Controls
                float V = vConverter;
                float H = hConverter;

                m_Car.Move(H, V, V, 0f);
            }

            if (TppCamera.activeSelf || m_TopViewCamera.activeSelf)
            {
                if (GearSlider.value > 0.5f)
                {
                    isForward = true;
                    isBackward = false;

                    Camera.SetActive(false);
                    VirtualCamera.SetActive(true);
                    Speedometer.SetActive(true);
                    CameraSwitch.interactable = true;
                    AudioManager.instance.Play("BackGear");
                }
                else if (GearSlider.value < 0.5f)
                {
                    isBackward = true;
                    isForward = false;

                    VirtualCamera.SetActive(false);
                    Camera.SetActive(true);
                    Speedometer.SetActive(true);
                    CameraSwitch.interactable = false;
                }
            }

            else if (FppCamera.activeSelf)
            {
                if (GearSlider.value > 0.5f)
                {
                    isForward = true;
                    isBackward = false;

                    Camera.SetActive(false);
                    VirtualCamera.SetActive(true);
                    BusInterior.SetActive(true);
                    Speedometer.SetActive(true);
                    CameraSwitch.interactable = true;
                    AudioManager.instance.Play("BackGear");
                }
                else if (GearSlider.value < 0.5f)
                {
                    isBackward = true;
                    isForward = false;

                    VirtualCamera.SetActive(false);
                    Camera.SetActive(true);
                    BusInterior.SetActive(false);
                    Speedometer.SetActive(true);
                    CameraSwitch.interactable = false;
                }
            }

            Speed.text = m_Car.CurrentSpeed.ToString();

            // Bus Shake 

            if (m_Car.CurrentSpeed > 10)
            {
                BusShake.SetBool("isEnoughSpeed", true);

                if (m_Car.CurrentSpeed > 30)
                {
                    BusShake.SetBool("isEnoughSpeed", false);
                    BusShake.SetBool("isRight", true);
                }
                else if (m_Car.CurrentSpeed < 30)
                {
                    BusShake.SetBool("isRight", false);
                    BusShake.SetBool("isEnoughSpeed", true);
                }
            }
            else
            {
                BusShake.SetBool("isEnoughSpeed", false);
                BusShake.SetBool("isRight", false);
            }

            // Destroying all objects beneath Bus
            if (Physics.Raycast(this.transform.position, -transform.up, out hit, 20f))
            {
                if (hit.transform.tag == "AI")
                {
                    Destroy(hit.transform.gameObject);
                }
            }
        }

        public void ForwardGear()
        {
            isForward = true;
            isBackward = false;
            GearSlider.value = 1f;
            Camera.SetActive(false);
            VirtualCamera.SetActive(true); 
        }

        public void BackwardGear()
        {
            isBackward = true;
            isForward = false;
            GearSlider.value = 0f;
            VirtualCamera.SetActive(false);
            Camera.SetActive(true);
        }

        public void VerticalClick(float Mobilev)
        {
            if(m_BusInfo == null) m_BusInfo = FindObjectOfType<BusInfo>();
            if (m_BusInfo != null) m_BusInfo.SetBrakingIndicator(false);

            if (!m_EngineStarted) return;

            isTimerOn = true; 

            if (isEngineTurnedOn == false && isEngineFinallyOn == false)
            {
                isEngineFinallyOn = true; 
                StartEngineButton.SetActive(false);
                AudioManager.instance.Play("EngineStart");
                StartCoroutine(EngineSimulation()); 
            } 
            AcceleratorText.SetActive(false);
            TextBackground.SetActive(false);
            ExplainationImage.SetActive(false);

            if (isForward)
            {
                isBackward = false;
                vConverter = Mobilev; 
                Trigger.SetActive(true); 
            }
            
            if (isBackward)
            {
                isForward = false;
                vConverter = Mobilev * NegativeSpeed;
            } 
        }

        public void HorizontalClick(float Mobileh)
        {
            hConverter = Mobileh;
        }

        public void HorizontalClickArrow(float Mobileh)
        {
            h = Mobileh;
        }

        public void StartEngine()
        {
            m_EngineStarted = true;

            Analytics.CustomEvent("StartEngine");
            isTimerOn = true; 
            StartEngineReward.SetActive(true);
            AudioManager.instance.Play("Coin");
            CoinInstance.currentCash += 10;
            PlayerPrefs.SetInt("Coins", CoinInstance.currentCash);
            CoinInstance.cashAmount.text = "" + CoinInstance.currentCash;
            PlayerPrefs.Save();
            isEngineTurnedOn = true; 
            AudioManager.instance.Play("EngineStart");
            StartCoroutine(EngineSimulation());
            TextBackground.SetActive(true);
            ExplainationText2.SetActive(true);
            GearToggle.SetActive(true); 
            ExplainationText2.SetActive(true); 
            isEngineStarted = true;
            StartEngineButton.SetActive(false);
            StartCoroutine(WaitForNextExplaination());
        }

        private IEnumerator EngineSimulation()
        {
            yield return new WaitForSeconds(2f);
            instance.StartSound(); 
        }

        private IEnumerator WaitForNextExplaination()
        {
            yield return new WaitForSeconds(2f);
            GearToggleText.SetActive(false);
            AcceleratorText.SetActive(true);
        } 

        private IEnumerator ReverseTutorial()
        {
            yield return new WaitForSeconds(0.1f); 
            ExplainationImage.SetActive(true);
        } 

        public void PlayHorn()
        {
            AudioManager.instance.Play("BusHorn");
        }

        public void StopHorn()
        {
            AudioManager.instance.Stop("BusHorn");
        }

        private IEnumerator TurnLight()
        {
            FrontRightHeadLight.SetActive(true);
            FrontLeftHeadLight.SetActive(true);
            RearLeftIndicator.SetActive(true);
            RearRightIndicator.SetActive(true);
            FrontLeftIndicator.SetActive(true);
            FrontRightIndicator.SetActive(true);

            for (int i = 0; i < TriLightRight.Length; i++)
            {
                TriLightRight[i].SetActive(true);
            }

            for (int i = 0; i < TriLightLeft.Length; i++)
            {
                TriLightLeft[i].SetActive(true);
            }

            yield return new WaitForSeconds(1.5f);

            FrontRightHeadLight.SetActive(false);
            FrontLeftHeadLight.SetActive(false);
            RearLeftIndicator.SetActive(false);
            RearRightIndicator.SetActive(false);
            FrontLeftIndicator.SetActive(false);
            FrontRightIndicator.SetActive(false);
            StartEngineButton.SetActive(false);

            for (int i = 0; i < TriLightRight.Length; i++)
            {
                TriLightRight[i].SetActive(false);
            }

            for (int i = 0; i < TriLightLeft.Length; i++)
            {
                TriLightLeft[i].SetActive(false);
            }
        }

        public void HeadLight()
        {
            isHeadLightOn = !isHeadLightOn;
            if(m_BusInfo != null)
                m_BusInfo.SetHeadLightStatus(isHeadLightOn);
            /*if (!isHeadLightOn)
            {
                FrontRightHeadLight.SetActive(true);
                FrontLeftHeadLight.SetActive(true);
                isHeadLightOn = true;

            }
            else
            {
                FrontRightHeadLight.SetActive(false);
                FrontLeftHeadLight.SetActive(false);
                isHeadLightOn = false;
            }*/
        }

        public void RightIndicator()
        {
            TriLightLeftGameObject.SetActive(false);
            RearLeftIndicatorGameObject.SetActive(false);
            TriLightRightGameObject.SetActive(true); 
            RearRightIndicatorGameObject.SetActive(true);

                if (!isRightIndicatorOn)
                {
                    RearRightIndicator.SetActive(true);
                    for (int i = 0; i < TriLightRight.Length; i++)
                    {
                        TriLightRight[i].SetActive(true);
                        LightBlink.Play("LightBlink");
                        LightBlink1.Play("LightBlink1");
                        LightBlink2.Play("LightBlink2");
                    }
                    isRightIndicatorOn = true;
                }
            else
            {
                RearRightIndicator.SetActive(false);
                for (int i = 0; i < TriLightRight.Length; i++)
                {
                    TriLightRight[i].SetActive(false);
                }
                isRightIndicatorOn = false;
            }
        }

        public void LeftIndicator()
        {
            TriLightRightGameObject.SetActive(false);
            RearRightIndicatorGameObject.SetActive(false);
            TriLightLeftGameObject.SetActive(true);
            RearLeftIndicatorGameObject.SetActive(true);

                if (!isLeftIndicatorOn)
                {
                    RearLeftIndicator.SetActive(true);
                    for (int i = 0; i < TriLightRight.Length; i++)
                    {
                        TriLightLeft[i].SetActive(true);
                        LightBlink3.Play("LightBlink3");
                        LightBlink4.Play("LightBlink4");
                        LightBlink5.Play("LightBlink5");
                }
                    isLeftIndicatorOn = true;
                }
                else
                {
                    RearLeftIndicator.SetActive(false);
                    for (int i = 0; i < TriLightRight.Length; i++)
                    {
                        TriLightLeft[i].SetActive(false);
                    }
                    isLeftIndicatorOn = false;
                }
        }

        public void ParkingIndicator()
        {
            TriLightLeftGameObject.SetActive(true);
            RearLeftIndicatorGameObject.SetActive(true);
            TriLightRightGameObject.SetActive(true);
            RearRightIndicatorGameObject.SetActive(true);
            TriLightRightGameObject.SetActive(true);
            RearRightIndicatorGameObject.SetActive(true);
            TriLightLeftGameObject.SetActive(true);
            RearLeftIndicatorGameObject.SetActive(true);

            if (!isRightIndicatorOn)
            {
                RearRightIndicator.SetActive(true);
                for (int i = 0; i < TriLightRight.Length; i++)
                {
                    TriLightRight[i].SetActive(true);
                    LightBlink.Play("LightBlink");
                    LightBlink1.Play("LightBlink1");
                    LightBlink2.Play("LightBlink2");
                }
                isRightIndicatorOn = true;
            }
            else
            {
                RearRightIndicator.SetActive(false);
                for (int i = 0; i < TriLightRight.Length; i++)
                {
                    TriLightRight[i].SetActive(false);
                }
                isRightIndicatorOn = false;
            }

            if (!isLeftIndicatorOn)
            {
                RearLeftIndicator.SetActive(true);
                for (int i = 0; i < TriLightRight.Length; i++)
                {
                    TriLightLeft[i].SetActive(true);
                    LightBlink3.Play("LightBlink3");
                    LightBlink4.Play("LightBlink4");
                    LightBlink5.Play("LightBlink5");
                }
                isLeftIndicatorOn = true;
            }
            else
            {
                RearLeftIndicator.SetActive(false);
                for (int i = 0; i < TriLightRight.Length; i++)
                {
                    TriLightLeft[i].SetActive(false);
                }
                isLeftIndicatorOn = false;
            }
        } 
    }
}
