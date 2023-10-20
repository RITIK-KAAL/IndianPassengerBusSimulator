using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using UnityEngine.UI;

namespace UnityStandardAssets.Vehicles.Car
{
    public class PauseAndResumeMenu : MonoBehaviour
    {
        [SerializeField]
        private GameObject PauseBluringImage;
        [SerializeField]
        private GameObject PauseMenu;
        [SerializeField]
        private GameObject LoadingImage;
        [SerializeField]
        private Slider slider;
        [SerializeField]
        private TMP_Text LoadingPercentage;
        [SerializeField]
        private GameObject PauseButton;
        [SerializeField]
        private GameObject SteeringWheel;
        [SerializeField]
        private GameObject ArrowControls;
        private bool CurrentControls;
        [SerializeField]
        private CarAudio carAudio;
        private int RealTimeScene; 

        private void Awake()
        {
            RealTimeScene = SceneManager.GetActiveScene().buildIndex;
        }

        public void Pause()
        {
            AudioManager.instance.Play("Buttons");
            carAudio.StopSound();
            AudioManager.instance.Stop("City");
            AudioManager.instance.Stop("BackGear");
            AudioManager.instance.Stop("Fpp");
            PauseBluringImage.SetActive(true);
            PauseButton.SetActive(false);
            Time.timeScale = 0f;
        }

        public void ReloadScene(int SceneIndex)
        {
            PlayerPrefs.SetInt("Home", 1);
            PlayerPrefs.Save();

            AudioManager.instance.Stop("BackGear");
            AudioManager.instance.Play("Buttons");
            AudioManager.instance.Stop("Fpp");
            
            StartCoroutine(ReturnHomeAsync(SceneIndex));
        }

        private IEnumerator ReturnHomeAsync(int SceneIndex)
        {
            AsyncOperation operation = SceneManager.LoadSceneAsync(SceneIndex);
            PauseBluringImage.SetActive(false);
            PauseButton.SetActive(false);
            Time.timeScale = 1f;
            LoadingImage.SetActive(true);

            while (!operation.isDone)
            {
                float Progress = Mathf.Clamp01(operation.progress / 0.9f);
                slider.value = Progress;
                LoadingPercentage.text = Progress * 100f + "%";
                yield return null;
            }
        }

        public void Resume()
        {
            AudioManager.instance.Play("City");
            AudioManager.instance.Stop("BackGear");
            AudioManager.instance.Play("Buttons");
            AudioManager.instance.Play("Fpp");
            carAudio.StartSound();
            PauseButton.SetActive(true);
            PauseBluringImage.SetActive(false);
            Time.timeScale = 1f;
        }

        public void ChangeControls()
        {
            if (CurrentControls)
            {
                ArrowControls.SetActive(true);
                SteeringWheel.SetActive(false);
                PlayerPrefs.SetInt("SelectedControls", 0);
                PlayerPrefs.SetInt("SelectedControlsArrow", 1);
                CurrentControls = false;
            }
            else
            {
                SteeringWheel.SetActive(true);
                ArrowControls.SetActive(false);
                PlayerPrefs.SetInt("SelectedControlsArrow", 0);
                PlayerPrefs.SetInt("SelectedControls", 1);
                CurrentControls = true;
            }
        }
    }
}
