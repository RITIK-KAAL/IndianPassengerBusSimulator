using UnityEngine;
using TMPro; 

public class CoinData : MonoBehaviour
{
    [SerializeField]
    public TMP_Text cashAmount;
    [SerializeField]
    public int currentCash = 00;

    private void Awake()
    {
        if(PlayerPrefs.HasKey("Coins"))
        {
            currentCash = PlayerPrefs.GetInt("Coins");
        } 
        cashAmount.text = "" + currentCash; 
    }
}
