using UnityEngine;

public class NoAdsPopupCheck : MonoBehaviour
{
    public static NoAdsPopupCheck instance;

    private bool isFirstLogin = true;
    private bool wasFirstTimeLogin = false;

    [HideInInspector] public bool alterSessionFlag = true;

    public bool IsFirstLogin
    {
        get { return isFirstLogin; }
        set
        {
            if(!wasFirstTimeLogin)
            {
                wasFirstTimeLogin = true;
                isFirstLogin = value;
            }
        }
    }

    private void Awake()
    {
        if (instance == null)
            instance = this;
        else   
            Destroy(gameObject);        

        DontDestroyOnLoad(gameObject);
    }
}
