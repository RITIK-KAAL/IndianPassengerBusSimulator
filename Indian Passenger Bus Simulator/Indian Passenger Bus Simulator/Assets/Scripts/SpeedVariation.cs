using UnityEngine;

namespace UnityStandardAssets.Vehicles.Car
{
    public class SpeedVariation : MonoBehaviour
    {
        [SerializeField]
        private CarController Bus;

        private void Start()
        {
            Bus = GetComponent<CarController>();
        }

        private void Update()
        {
            if(Bus == null) Bus = GetComponent<CarController>();
            if (Bus == null) return;
            if (HealthBar.instance == null) return;

            if (HealthBar.instance.CurrentHealth == 1)
            {
                Bus.m_Topspeed = 20f;
            } 
            else
            {
                Bus.m_Topspeed = 40f; 
            }
        }
    }
}
