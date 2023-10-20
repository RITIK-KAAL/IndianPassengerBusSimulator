using UnityEngine;

namespace UnityStandardAssets.Vehicles.Car
{
    public class InitializeAds : MonoBehaviour
    {
        public string appKey;
        public InAppStore instance;

        private void Awake()
        {
            IronSource.Agent.init(appKey);
        }

        void Start()
        {
            Loadbanner();
        }

        void OnApplicationPause(bool isPaused)
        {
            IronSource.Agent.onApplicationPause(isPaused);
        }

        public void Loadbanner()
        {
/*            IronSource.Agent.loadBanner(IronSourceBannerSize.BANNER, IronSourceBannerPosition.BOTTOM);*/
        }
    }
}
