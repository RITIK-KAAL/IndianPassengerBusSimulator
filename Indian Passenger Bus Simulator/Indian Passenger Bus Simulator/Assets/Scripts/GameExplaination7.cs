using UnityEngine;

public class GameExplaination7 : MonoBehaviour
{
    [SerializeField]
    private GameObject ExplainationImage;
    [SerializeField]
    private GameObject Timer;
    [SerializeField]
    private GameObject ExplainationText;
    [SerializeField]
    private GameObject StartButton;

    public void StartGameButton()
    {
        AudioManager.instance.Play("Buttons");
        ExplainationText.SetActive(false);
        StartButton.SetActive(false);
        ExplainationImage.SetActive(false);
    }
}
