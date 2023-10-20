using UnityEngine;

public class Interstitial : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        IronSource.Agent.loadInterstitial();
        IronSourceEvents.onInterstitialAdClosedEvent += InterstitialAdClosedEvent;
    }

    // Invoked when the interstitial ad closed and the user goes back to the application screen.
    public void InterstitialAdClosedEvent()
    {
        IronSource.Agent.loadInterstitial();
    }

    public void interstitialplay()
    {
        if (PlayerPrefs.GetInt("isAdsOn") == 0)
        {
            IronSource.Agent.showInterstitial();
        }
        else if (PlayerPrefs.GetInt("isAdsOn") == 1)
        {
            return;
        }
    }
}