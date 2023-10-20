using UnityEngine;

namespace com.namp.analytics {

    public class AnalyticsWrapper : MonoBehaviour {

        public static AnalyticsWrapper Instance;

        [SerializeField] private AnalyticsProvider provider;
        [SerializeField] private string appId;

        private AnalyticsController analyticsController;

        private void Awake () {

            if ( Instance == null ) {
                Instance = this;
            } else {
                Destroy ( gameObject );
            }

            DontDestroyOnLoad ( this.gameObject );
        }

        private void Start () {
            Debug.LogError ( "Start" );
            switch ( provider ) {
                case AnalyticsProvider.AMPLITUDE:
                    analyticsController = new AmplitudeController ( );
                    break;
                default:
                    break;
            }

            initialise ( SystemInfo.deviceUniqueIdentifier );
        }

        public void initialise ( string userId ) {

            analyticsController.Init ( appId );
            analyticsController.SetUserId ( userId );

            logAnalyticsEvent ( "app_open " );

            MiniIT.Utils.AdvertisingIdFetcher.RequestAdvertisingId ( advertisingId => {
                if ( advertisingId != "" ) {
                    logAnalyticsEvent ( "GPIDTracker", new System.Collections.Generic.Dictionary<string, object> ( ) {
                        {
                            "GPID", advertisingId
                        } } );
                }
            } );

        }

        public void logAnalyticsEvent ( string event_name, System.Collections.Generic.Dictionary<string, object> payload = null ) {

            Debug.Log ( "logAnalyticsEvent: " + event_name );
            if ( analyticsController == null )
                return;

            analyticsController.LogEvent ( event_name, payload );
        }

        public void setUserProperty ( string key, string value ) {
            analyticsController.SetUserProperty ( key, value );
        }
    }

    [System.Serializable]
    public enum AnalyticsProvider {
        AMPLITUDE
    }
}