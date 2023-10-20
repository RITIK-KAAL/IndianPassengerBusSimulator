using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

public class CheckInternetConnection : MonoBehaviour
{
    public static CheckInternetConnection instance;

    [SerializeField] private bool m_IsInternetConnected;
    [SerializeField] private string m_WebsitePinging = "https://www.underdogsthestudio.com/";

    [Space(10)]

    [SerializeField] private GameObject m_NoInternetPopup;

    public bool IsInternetConnected
    {
        get { return m_IsInternetConnected; }
    }

    private void Awake()
    {
        if (instance == null)
            instance = this;
        else
            Destroy(gameObject);

        DontDestroyOnLoad(gameObject);
    }

    private void Start()
    {
        if(m_WebsitePinging.Length > 0 && (m_WebsitePinging.Contains("https://") || m_WebsitePinging.Contains("www.")) )
            StartCoroutine("CheckConnectionPoll");
    }

    private void OnDestroy()
    {
        StopCoroutine("CheckConnectionPoll");
    }

    private IEnumerator CheckConnectionPoll()
    {
        while(true)
        {            
            StartCoroutine(CheckInternetAsync((isConnected) =>
            {
                m_IsInternetConnected = isConnected;
                m_NoInternetPopup.SetActive(!m_IsInternetConnected);
            }));

            yield return new WaitForSecondsRealtime(2f);
        }
    }    

    /*public void CheckConnection()
    {
        StartCoroutine(CheckInternetAsync((isConnected) =>
        {
            if(isConnected)
            {
                Debug.Log("Connected!");
                isInternetConnected = true;
            }
            else
            {
                Debug.Log("Not Connected!");
                isInternetConnected = false;
                //return false;
            }
        }));
    }*/

    IEnumerator CheckInternetAsync(Action<bool> status)
    {
        UnityWebRequest unityWebRequest = new UnityWebRequest(m_WebsitePinging);

        yield return unityWebRequest.SendWebRequest();

        if (unityWebRequest.result == UnityWebRequest.Result.ConnectionError || unityWebRequest.result == UnityWebRequest.Result.ProtocolError)
            status(false);        
        else
            status(true);        
    }
}
