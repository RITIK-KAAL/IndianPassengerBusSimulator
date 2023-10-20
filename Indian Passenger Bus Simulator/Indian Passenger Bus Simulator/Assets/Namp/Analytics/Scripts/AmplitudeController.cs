namespace com.namp.analytics {

    public class AmplitudeController : AnalyticsController {

        private Amplitude amplitude;

        public void Init ( string id ) {

            amplitude = Amplitude.Instance;
            amplitude.logging = true;
            amplitude.init ( id );
        }

        public void LogEvent ( string eventName, System.Collections.Generic.Dictionary<string, object> payload ) {

            if ( amplitude != null ) {
                amplitude.logEvent ( eventName, payload );
            }

        }

        public void SetUserId ( string id ) {
            if ( amplitude != null ) {
                amplitude.addUserProperty ( "userid", id );
                amplitude.setUserId ( id );
            }
        }

        public void SetUserProperty ( string key, string value ) {
            amplitude.addUserProperty ( key, value );
        }
    }

}