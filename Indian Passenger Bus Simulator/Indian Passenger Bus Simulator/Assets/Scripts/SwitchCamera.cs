using UnityEngine;

public class SwitchCamera : MonoBehaviour
{
    [SerializeField]
    private GameObject[] Camera;
    [SerializeField]
    private GameObject FppCamera; 
    [SerializeField]
    private GameObject BusInterior;
    [SerializeField]
    private GameObject Indicators;

    private int m_CameraCounter = 0;

    private void Start()
    {
        foreach (GameObject camera in Camera)
        {
            camera.SetActive(false);
        }
        Camera[m_CameraCounter].SetActive(true);
    }

    public void SwitchCameraButton()
    {
        /*Camera[CameraCounter].SetActive(false);
        CameraCounter++;
        if (CameraCounter == Camera.Length)
        {
            CameraCounter = 0;
        }
        Camera[CameraCounter].SetActive(true);*/

        m_CameraCounter++;
        m_CameraCounter %= Camera.Length;
        for (int i = 0; i < Camera.Length; i++)        
            Camera[i].SetActive(i == m_CameraCounter);        

        if (FppCamera.activeSelf)
        {
            AudioManager.instance.Play("Fpp");
            BusInterior.SetActive(true);
            Indicators.SetActive(false);
        }
        else
        {
            AudioManager.instance.Stop("Fpp");
            BusInterior.SetActive(false);
            Indicators.SetActive(true);
        }
    }
}
