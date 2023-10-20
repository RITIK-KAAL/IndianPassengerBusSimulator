using System.Collections;
using UnityEngine;
using UnityEngine.Analytics; 

public class GameExplaination : MonoBehaviour
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
    private GameObject SeatBelt;
    [SerializeField]
    private GameObject StartEngine;
    [SerializeField]
    private GameObject CoinRewardAnimation;
    [SerializeField]
    private GameObject GearToogle;
    [SerializeField]
    private GameObject GearToogleText;
    public GameObject TextBackground;
    [SerializeField]
    private CoinData instance; 

    private void Awake()
    {
        if (PlayerPrefs.HasKey("Coins"))
        {
            instance.currentCash = PlayerPrefs.GetInt("Coins");
        }
    }

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
        MiniMapDuplicate.SetActive(false);
        ExplainationText.SetActive(false);
        MiniMapDuplicate.SetActive(false); 
        TextBackground.SetActive(false); 
        SeatBelt.SetActive(true);  
        StartButton.SetActive(false);
    }  

    public void SeatBeltButton()
    {
        Analytics.CustomEvent("SeatBelt");
        CoinRewardAnimation.SetActive(true);
        SeatBelt.SetActive(false);
        AudioManager.instance.Play("Seatbelt"); 
        StartCoroutine(Wait());
    }

    private IEnumerator Wait()
    {
        AudioManager.instance.Play("Coin");
        instance.currentCash += 10;
        PlayerPrefs.SetInt("Coins", instance.currentCash);
        instance.cashAmount.text = "" + instance.currentCash;
        PlayerPrefs.Save();
        yield return new WaitForSeconds(0.6f);
        StartEngine.SetActive(true);
    }
}
