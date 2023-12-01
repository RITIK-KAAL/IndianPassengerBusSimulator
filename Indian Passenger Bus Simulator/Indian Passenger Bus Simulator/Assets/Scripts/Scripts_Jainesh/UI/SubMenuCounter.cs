using UnityEngine;

public class SubMenuCounter : MonoBehaviour
{
    public static SubMenuCounter Instance;

    [SerializeField] private int m_CurrentCount = 0;
    [SerializeField] private int m_MaxCount = 3;
    [SerializeField] private Interstitial m_InterstitialManager;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(gameObject);

        m_InterstitialManager = FindObjectOfType<Interstitial>();
    }

    public void OnMainMenu()
    {
/*        if (PlayerPrefs.GetInt("isAdsOn", 0) == 1) return;
        if (m_InterstitialManager == null) return;

        m_CurrentCount++;
        if(m_CurrentCount >= m_MaxCount)
        {
#if UNITY_EDITOR
            Debug.Log("PLAY THE INTERSTITIAL AD!");
#endif
            m_CurrentCount = 0;
            m_InterstitialManager.interstitialplay();
        }*/
    }
}
