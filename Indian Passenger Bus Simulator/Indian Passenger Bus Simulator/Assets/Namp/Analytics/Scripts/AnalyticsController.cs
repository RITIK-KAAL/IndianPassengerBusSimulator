namespace com.namp.analytics {

    public interface AnalyticsController {

        public abstract void Init ( string id );
        public abstract void LogEvent ( string eventName, System.Collections.Generic.Dictionary<string, object> payload );
        public abstract void SetUserId ( string id );
        public abstract void SetUserProperty ( string key, string value );
    }

}