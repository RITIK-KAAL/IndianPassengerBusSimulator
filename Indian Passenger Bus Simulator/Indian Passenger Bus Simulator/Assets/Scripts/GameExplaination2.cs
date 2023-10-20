using System.Collections;
using UnityEngine;

public class GameExplaination2 : MonoBehaviour
{
    [SerializeField]
    private GameObject ExplainationImage;
    [SerializeField]
    private GameObject Timer;
    [SerializeField]
    private GameObject ExplainationText;
    [SerializeField]
    private GameObject StartButton;
    [SerializeField]
    private GameObject HealthText;
    [SerializeField]
    private GameObject ChangeCameraText;
    [SerializeField]
    private GameObject ChangeControlText;

    private void Start()
    {
        StartCoroutine(Explaination());
    }

    private IEnumerator Explaination()
    {
        yield return new WaitForSeconds(0.5f);
        ExplainationImage.SetActive(true);
        yield return new WaitForSeconds(2f);
    }

    public void StartGameButton()
    {
        AudioManager.instance.Play("Buttons");
        ExplainationText.SetActive(false);
        StartButton.SetActive(false);
        ExplainationImage.SetActive(false); 
    }

    private void Update()
    {
        if (ExplainationImage.activeInHierarchy)
        {
            Timer.SetActive(false);
        }
        else
        {
            Timer.SetActive(true);
            HealthText.SetActive(false);
        }
    }
}
