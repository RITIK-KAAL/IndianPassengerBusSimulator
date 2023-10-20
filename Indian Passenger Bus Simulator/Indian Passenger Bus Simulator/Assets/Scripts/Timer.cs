using UnityEngine;
using TMPro;
using UnityEngine.UI;

namespace UnityStandardAssets.Vehicles.Car
{
    public class Timer : MonoBehaviour
    {
        [SerializeField]
        private float TimeRemaining = 10;
        [SerializeField]
        private TMP_Text TimeText;
        private bool TimerIsRunning = false;
        [SerializeField]
        private GameObject FailScreen;
        public Slider slider;
        public static Timer instance;
        [SerializeField]
        private BusMovement Bus;

        private void Start()
        {
            TimerIsRunning = true;
        }
        private void Update()
        {
            if (Bus.isTimerOn == true)
            {
                if (TimerIsRunning)
                {
                    if (TimeRemaining > 0)
                    {
                        TimeRemaining -= Time.deltaTime;
                        slider.value -= 1f * Time.deltaTime;
                        DisplayTime(TimeRemaining);
                    }
                    else
                    {
                        TimeRemaining = 0;
                        TimerIsRunning = false;
/*                        IronSource.Agent.loadBanner(IronSourceBannerSize.BANNER, IronSourceBannerPosition.BOTTOM);*/
                        FailScreen.SetActive(true);
                        AudioManager.instance.Play("LevelFailed");
                    }
                }
            }
        }

        private void DisplayTime(float TimeToDisplay)
        {
            TimeToDisplay += 1;
            float Minutes = Mathf.FloorToInt(TimeToDisplay / 60);
            float Seconds = Mathf.FloorToInt(TimeToDisplay % 60);
            TimeText.text = string.Format("{0:00}:{1:00}", Minutes, Seconds);
        }
    }
}