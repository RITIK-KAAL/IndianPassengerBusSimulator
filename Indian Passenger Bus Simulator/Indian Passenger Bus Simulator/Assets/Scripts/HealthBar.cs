using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro; 

namespace UnityStandardAssets.Vehicles.Car
{
    public class HealthBar : MonoBehaviour
    {
        [SerializeField] private bool m_GodMode = false;
        private int MaxHealth = 3;
        public int CurrentHealth;
        public Slider slider;
        [SerializeField]
        private Image HealthBarFill;
        public GameObject ServiceScreen;
        public static HealthBar instance;
        private int MainScreenFail = 0;
        [SerializeField]
        private GameObject HappyEmoji;
        [SerializeField]
        private GameObject ConfuseEmoji;
        [SerializeField]
        private GameObject AngryEmoji;
/*        [SerializeField]
        private ParticleSystem Smoke;*/
        [SerializeField]
        private GameObject CrashedText;
        [SerializeField]
        private GameObject AngryMessagesDialogueBox;
        [SerializeField]
        private GameObject ConfusedMessagesDialogueBox;
        [SerializeField]
        private TMP_Text AngryMessagesText;
        [SerializeField]
        private TMP_Text ConfusedMessagesText;

        private CarController m_CarController;

        public bool GodMode
        {
            get { return m_GodMode;}
            set { m_GodMode = value; }
        }

        private void Awake()
        {
            if (instance == null)
            {
                instance = this;
            }

            m_CarController = GetComponent<CarController>();
        }

        private void Start()
        {
            CurrentHealth = MaxHealth;
        }

        public void SetHealth(int health)
        {
            slider.value = health;
        }

        public void SetMaxHealth(int health)
        {
            slider.maxValue = health;
            slider.value = health;
        }

        private void OnCollisionEnter(Collision collision)
        {
            if (CurrentHealth == 0 || m_GodMode) return;
            
            float angle = Vector3.Angle(transform.up, Vector3.up);

            if (collision.gameObject.tag == "CityProps" ||
                collision.gameObject.tag == "AI" ||
                collision.gameObject.tag == "OilPump" ||
                collision.gameObject.tag == "OilPump1" || angle >= 30.0f)
            {
                if(m_CarController.CurrentSpeed < 7.0f) return;

                AudioManager.instance.Play("Crash");
                AudioManager.instance.Play("PassengersScreaming");
                StartCoroutine(CrashedMessage());
                if (CurrentHealth > 0)
                {
                    CurrentHealth = CurrentHealth - 1;
                    slider.value = CurrentHealth;
                }

                UpdateEmojis();

                if (CurrentHealth == 0 && MainScreenFail < 2)
                {
                    MainScreenFail = MainScreenFail + 1;
                    ServiceScreen.SetActive(true);
                }

                else if (CurrentHealth == 0 && MainScreenFail == 2)
                {
                    BusService.instance.FailScreen.SetActive(true);
                    StartCoroutine(SoundWaitTime());
                }

                // Updating Random Messages in DialogueBox
                if (ConfuseEmoji.activeSelf)
                {
                    StartCoroutine(RandomConfusedDialogue());
                }
                else if (AngryEmoji.activeSelf)
                {
                    StartCoroutine(RandomAngryDialogue());
                }
            }
        }  

        private IEnumerator RandomConfusedDialogue()
        {
            if (AngryMessagesDialogueBox.activeSelf) 
                AngryMessagesDialogueBox.SetActive(false);

            ConfusedMessagesDialogueBox.SetActive(true); 
            int RandomConsfusedDialogue = Random.Range(1, 4);

            if (RandomConsfusedDialogue == 1)
            {
                ConfusedMessagesText.text = "Could you please drive carefully?";
            }
            else if (RandomConsfusedDialogue == 2)
            {
                ConfusedMessagesText.text = "I have fracture, please drive cautiously!";
            }
            else if (RandomConsfusedDialogue == 3)
            {
                ConfusedMessagesText.text = "Why are you slamming into everything in your path?";
            }

            yield return new WaitForSeconds(1.5f);
            ConfusedMessagesDialogueBox.SetActive(false);
        }

        private IEnumerator RandomAngryDialogue()
        {
            if (ConfusedMessagesDialogueBox.activeSelf) 
                ConfusedMessagesDialogueBox.SetActive(false);

            AngryMessagesDialogueBox.SetActive(true);
            int RandomAngryDialogue = Random.Range(1, 4);

            if (RandomAngryDialogue == 1)
            {
                AngryMessagesText.text = "Who gave you a licence to drive?";
            }
            else if (RandomAngryDialogue == 2)
            {
                AngryMessagesText.text = "Hey, you'll make me throw up!";
            }
            else if (RandomAngryDialogue == 3)
            {
                AngryMessagesText.text = "My grandmother drives better than you!";
            }

            yield return new WaitForSeconds(1.5f);
            AngryMessagesDialogueBox.SetActive(false);
        }

        private IEnumerator CrashedMessage()
        {
            CrashedText.SetActive(true); 
            yield return new WaitForSeconds(1.5f);
            CrashedText.SetActive(false);  
        }

        private IEnumerator SoundWaitTime()
        {
            AudioManager.instance.Play("LevelFailed");
            yield return new WaitForSeconds(2f);
            AudioManager.instance.Play("Coin");
        }

        public void UpdateEmojis()
        {
            if (CurrentHealth == 3)
            {
                HappyEmoji.SetActive(true);
                ConfuseEmoji.SetActive(false);
                AngryEmoji.SetActive(false);
                /*                Smoke.gameObject.SetActive(false);*/
            }
            if (CurrentHealth == 2)
            {
                HappyEmoji.SetActive(false);
                ConfuseEmoji.SetActive(true);
                AngryEmoji.SetActive(false);
                /*                Smoke.gameObject.SetActive(false);*/
            }
            if (CurrentHealth == 1)
            {
                HappyEmoji.SetActive(false);
                ConfuseEmoji.SetActive(false);
                AngryEmoji.SetActive(true);
                /*                Smoke.gameObject.SetActive(true); */
                /*                Smoke.Play();*/
            }
        }
    }
}
