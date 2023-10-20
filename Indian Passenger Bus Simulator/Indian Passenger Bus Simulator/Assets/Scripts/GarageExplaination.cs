using UnityEngine;
using UnityEngine.SceneManagement; 

public class GarageExplaination : MonoBehaviour
{
    [SerializeField]
    private Transform Bus;
    [SerializeField]
    private GameObject ChangeBusRight;
    [SerializeField]
    private GameObject ChangeBusLeft;
    private bool isStarted;
    private bool isDone;
    [SerializeField]
    private GameObject[] Buses;
    private int CurrentBus = 0;

    private void Start()
    {
        foreach (GameObject Bus in Buses)
        {
            Bus.SetActive(false);
        }
        Buses[CurrentBus].SetActive(true);
    }

    public void ChangeBusRightButton()
    {
        AudioManager.instance.Play("Buttons");
        Buses[CurrentBus].SetActive(false);
        CurrentBus++;
        if (CurrentBus == Buses.Length)
        {
            CurrentBus = 0;
        }
        Buses[CurrentBus].SetActive(true);
    }

    public void ChangeBusLeftButton()
    {
        AudioManager.instance.Play("Buttons");
        Buses[CurrentBus].SetActive(false);
        CurrentBus--;
        if (CurrentBus == -1)
        {
            CurrentBus = Buses.Length - 1;
        }
        Buses[CurrentBus].SetActive(true);
    }

    public void GarageBack(int SceneIndex)
    {
        AudioManager.instance.Play("Buttons");
        SceneManager.LoadScene(SceneIndex); 
    }

    public void RotateCamera()
    {
        if (!isDone)
        {
            isStarted = true;
            ChangeBusLeft.SetActive(false);
            ChangeBusRight.SetActive(false);
            isDone = true;
        }
        else
        {
            isStarted = false;
            ChangeBusLeft.SetActive(true);
            ChangeBusRight.SetActive(true);
            isDone = false;
        }
    } 

    private void Update()
    {
        if (isStarted == true)
        {
            transform.RotateAround(Bus.position, transform.up, 20f * Time.deltaTime);
        }
    }
}
