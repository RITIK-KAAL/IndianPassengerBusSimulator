using UnityEngine;
using TMPro;

public class FuelData : MonoBehaviour
{
    [SerializeField]
    public TMP_Text fuelAmount;
    [SerializeField]
    public int currentFuel = 5;

    private void Awake()
    {
        if (PlayerPrefs.HasKey("Fuel"))
        {
            currentFuel = PlayerPrefs.GetInt("Fuel");
        }
        fuelAmount.text = "" + currentFuel;
    }
}

