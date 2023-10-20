using UnityEngine;
using UnityEngine.UI;

namespace UnityStandardAssets.Vehicles.Car
{
    public class UnaffectedHealth : MonoBehaviour
    {
        private int MaxHealth = 100;
        public int CurrentHealth;
        public Slider slider;
        [SerializeField]
        private Image HealthBarFill;
        public GameObject ServiceScreen;
        public static UnaffectedHealth instance;
        private int MainScreenFail = 0;

        private void Awake()
        {
            if (instance == null)
            {
                instance = this;
            }
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
            if (collision.gameObject.tag == "CityProps" || collision.gameObject.tag == "AI")
            {
                AudioManager.instance.Play("Crash");
                AudioManager.instance.Play("PassengersScreaming");
                if (CurrentHealth > 0)
                {
                    CurrentHealth = CurrentHealth - 1;
                    slider.value = CurrentHealth;
                }

                if (CurrentHealth == 0 && MainScreenFail < 2)
                {
                    MainScreenFail = MainScreenFail + 1;
                    ServiceScreen.SetActive(true);
                }

                else if (CurrentHealth == 0 && MainScreenFail == 2)
                {
                    BusService.instance.FailScreen.SetActive(true);
                }
            }
        }
    }
}
