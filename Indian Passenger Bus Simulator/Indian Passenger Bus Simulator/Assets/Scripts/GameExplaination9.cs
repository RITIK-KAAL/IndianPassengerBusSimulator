using System.Collections;
using UnityEngine;

public class GameExplaination9 : MonoBehaviour
{
    [SerializeField]
    private GameObject ExplainationImage;
    [SerializeField]
    private GameObject Timer;
    [SerializeField]
    private GameObject MiniMapDuplicate;
    [SerializeField]
    private GameObject ExplainationText;
    [SerializeField]
    private GameObject StartButton;
    [SerializeField]
    private GameObject FuelMeter; 

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
        FuelMeter.SetActive(false);
        StartButton.SetActive(false);
        MiniMapDuplicate.SetActive(true);
    }

    public void StartGameButton1()
    {
        AudioManager.instance.Play("Buttons");
        ExplainationImage.SetActive(false);
        MiniMapDuplicate.SetActive(false);
    }
}
