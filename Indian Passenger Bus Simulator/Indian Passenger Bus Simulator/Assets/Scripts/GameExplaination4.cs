using System.Collections;
using UnityEngine;

public class GameExplaination4 : MonoBehaviour
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
    private GameObject StartButton1;
    [SerializeField]
    private GameObject DuplicateDamageMeter;
    [SerializeField]
    private GameObject DuplicateRepairButton;
    [SerializeField]
    private GameObject ExplainationText1;
    [SerializeField]
    private GameObject DamageMeterText; 

    private void Start()
    { 
        StartCoroutine(Explaination());
    }

    private IEnumerator Explaination()
    {
        yield return new WaitForSeconds(0.5f);
        ExplainationImage.SetActive(true);
    }

    public void StartGameButton()
    {
        AudioManager.instance.Play("Buttons");
        ExplainationText.SetActive(false);
        StartButton.SetActive(false);
        DuplicateDamageMeter.SetActive(false); 
        ExplainationText1.SetActive(true);
        DuplicateRepairButton.SetActive(true);
        DamageMeterText.SetActive(false); 
        StartButton1.SetActive(true); 
    }

    public void StartGameButton1()
    {
        AudioManager.instance.Play("Buttons");
        DuplicateRepairButton.SetActive(false); 
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
            DuplicateDamageMeter.SetActive(true);
            DamageMeterText.SetActive(false);
        }
    }
}
