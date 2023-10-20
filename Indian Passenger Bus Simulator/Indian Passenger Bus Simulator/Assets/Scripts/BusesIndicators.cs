using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace UnityStandardAssets.Vehicles.Car
{
    public class BusesIndicators : MonoBehaviour
    {
        [SerializeField] private GameObject AllBusesContainer;
        [SerializeField] private List<BusInfo> m_BusInfos = new List<BusInfo>();

        private int m_CurrentBusIndex = 0;

#if UNITY_EDITOR
        private void OnValidate()
        {
            if (Application.isPlaying)
                return;

            ValidateBusIndicators(false);
        }        
#endif

        private void Awake()
        {
            ValidateBusIndicators(false);

            m_CurrentBusIndex = IntroductionWindow.Instance.CurrentBusIndex;
        }

        private void ValidateBusIndicators(bool revertPrefab)
        {
            if (AllBusesContainer == null) AllBusesContainer = GameObject.Find("AllBuses");
            if (AllBusesContainer != null && AllBusesContainer.transform.childCount >= 12 && m_BusInfos.Count == 0)
            {
                if (!AllBusesContainer.gameObject.activeSelf)
                    AllBusesContainer.gameObject.SetActive(true);

#if UNITY_EDITOR
                if (revertPrefab && !Application.isPlaying)
                    PrefabUtility.RevertPrefabInstance(AllBusesContainer, InteractionMode.UserAction);
#endif
                m_BusInfos.Clear();
                for (int i = 0; i < 12; i++)
                {
                    m_BusInfos.Add(AllBusesContainer.transform.GetChild(i).GetComponent<BusInfo>());
                }
            }
        }

        public void LeftIndicator()
        {
            if (m_BusInfos.Count == 0) return;
            if (m_BusInfos[m_CurrentBusIndex] == null) return;

            m_BusInfos[m_CurrentBusIndex].PlayIndicatorLeft();
        }

        public void RightIndicator()
        {
            if (m_BusInfos.Count == 0) return;
            if (m_BusInfos[m_CurrentBusIndex] == null) return;

            m_BusInfos[m_CurrentBusIndex].PlayIndicatorRight();
        }

        public void ParkingIndicator()
        {
            if (m_BusInfos.Count == 0) return;
            if (m_BusInfos[m_CurrentBusIndex] == null) return;

            m_BusInfos[m_CurrentBusIndex].PlayIndicatorParking();
        }
    }

    /*public class BusesIndicators : MonoBehaviour
    {
        [SerializeField]
        private GameObject Bus0_RightIndicator;
        [SerializeField]
        private GameObject Bus0_LeftIndicator;
        [SerializeField]
        private GameObject Bus1_RightIndicator;
        [SerializeField]
        private GameObject Bus1_LeftIndicator;
        [SerializeField]
        private GameObject Bus2_RightIndicator;
        [SerializeField]
        private GameObject Bus2_LeftIndicator;
        [SerializeField]
        private GameObject Bus3_RightIndicator;
        [SerializeField]
        private GameObject Bus3_LeftIndicator;
        [SerializeField]
        private GameObject Bus4_RightIndicator;
        [SerializeField]
        private GameObject Bus4_LeftIndicator;
        [SerializeField]
        private GameObject Bus5_RightIndicator;
        [SerializeField]
        private GameObject Bus5_LeftIndicator;
        [SerializeField]
        private GameObject Bus6_RightIndicator;
        [SerializeField]
        private GameObject Bus6_LeftIndicator;
        [SerializeField]
        private GameObject Bus7_RightIndicator;
        [SerializeField]
        private GameObject Bus7_LeftIndicator;
        [SerializeField]
        private GameObject Bus8_RightIndicator;
        [SerializeField]
        private GameObject Bus8_LeftIndicator;
        [SerializeField]
        private GameObject Bus9_RightIndicator;
        [SerializeField]
        private GameObject Bus9_LeftIndicator;
        [SerializeField]
        private GameObject Bus10_RightIndicator;
        [SerializeField]
        private GameObject Bus10_LeftIndicator;
        [SerializeField]
        private GameObject Bus11_RightIndicator;
        [SerializeField]
        private GameObject Bus11_LeftIndicator;
        [SerializeField]
        private BusMovement Bus;
        private bool isLeftIndicatorOn;
        private bool isRightIndicatorOn;
        private bool isParkingIndicatorOn;
        private bool isRightIndicator;
        private bool isLeftIndicator;

        private void Awake()
        {
            this.enabled = false;
        }

        private void Update()
        {
            if(Bus0_LeftIndicator.activeSelf || Bus1_LeftIndicator.activeSelf || Bus2_LeftIndicator.activeSelf || Bus3_LeftIndicator.activeSelf ||
               Bus4_LeftIndicator.activeSelf || Bus5_LeftIndicator.activeSelf || Bus6_LeftIndicator.activeSelf || Bus7_LeftIndicator.activeSelf ||
               Bus8_LeftIndicator.activeSelf || Bus9_LeftIndicator.activeSelf || Bus10_LeftIndicator.activeSelf || Bus11_LeftIndicator.activeSelf ||
               Bus0_RightIndicator.activeSelf || Bus1_RightIndicator.activeSelf || Bus2_RightIndicator.activeSelf || Bus3_RightIndicator.activeSelf ||
               Bus4_RightIndicator.activeSelf || Bus5_RightIndicator.activeSelf || Bus6_RightIndicator.activeSelf || Bus7_RightIndicator.activeSelf ||
               Bus8_RightIndicator.activeSelf || Bus9_RightIndicator.activeSelf || Bus10_RightIndicator.activeSelf || Bus11_RightIndicator.activeSelf)
            {
                if (isRightIndicator == true)
                {
                    isLeftIndicator = false; 
                    Bus0_RightIndicator.SetActive(true);
                    Bus1_RightIndicator.SetActive(true);
                    Bus2_RightIndicator.SetActive(true);
                    Bus3_RightIndicator.SetActive(true);
                    Bus4_RightIndicator.SetActive(true);
                    Bus5_RightIndicator.SetActive(true);
                    Bus6_RightIndicator.SetActive(true);
                    Bus7_RightIndicator.SetActive(true);
                    Bus8_RightIndicator.SetActive(true);
                    Bus9_RightIndicator.SetActive(true);
                    Bus10_RightIndicator.SetActive(true);
                    Bus11_RightIndicator.SetActive(true);
                    Bus0_LeftIndicator.SetActive(false);
                    Bus1_LeftIndicator.SetActive(false);
                    Bus2_LeftIndicator.SetActive(false);
                    Bus3_LeftIndicator.SetActive(false);
                    Bus4_LeftIndicator.SetActive(false);
                    Bus5_LeftIndicator.SetActive(false);
                    Bus6_LeftIndicator.SetActive(false);
                    Bus7_LeftIndicator.SetActive(false);
                    Bus8_LeftIndicator.SetActive(false);
                    Bus9_LeftIndicator.SetActive(false);
                    Bus10_LeftIndicator.SetActive(false);
                    Bus11_LeftIndicator.SetActive(false);
                } 
                else if(isLeftIndicator == true)
                {
                    isRightIndicator = false;
                    Bus0_LeftIndicator.SetActive(true);
                    Bus1_LeftIndicator.SetActive(true);
                    Bus2_LeftIndicator.SetActive(true);
                    Bus3_LeftIndicator.SetActive(true);
                    Bus4_LeftIndicator.SetActive(true);
                    Bus5_LeftIndicator.SetActive(true);
                    Bus6_LeftIndicator.SetActive(true);
                    Bus7_LeftIndicator.SetActive(true);
                    Bus8_LeftIndicator.SetActive(true);
                    Bus9_LeftIndicator.SetActive(true);
                    Bus10_LeftIndicator.SetActive(true);
                    Bus11_LeftIndicator.SetActive(true);
                    Bus0_RightIndicator.SetActive(false);
                    Bus1_RightIndicator.SetActive(false);
                    Bus2_RightIndicator.SetActive(false);
                    Bus3_RightIndicator.SetActive(false);
                    Bus4_RightIndicator.SetActive(false);
                    Bus5_RightIndicator.SetActive(false);
                    Bus6_RightIndicator.SetActive(false);
                    Bus7_RightIndicator.SetActive(false);
                    Bus8_RightIndicator.SetActive(false);
                    Bus9_RightIndicator.SetActive(false);
                    Bus10_RightIndicator.SetActive(false);
                    Bus11_RightIndicator.SetActive(false);
                } 
            } 
        }

        public void LeftIndicator()
        {
            isLeftIndicator = true;
            isRightIndicator = false; 
            if (!isLeftIndicatorOn)
            {
                AudioManager.instance.Play("Indicator");
                Bus0_LeftIndicator.SetActive(true);
                Bus1_LeftIndicator.SetActive(true);
                Bus2_LeftIndicator.SetActive(true);
                Bus3_LeftIndicator.SetActive(true);
                Bus4_LeftIndicator.SetActive(true);
                Bus5_LeftIndicator.SetActive(true);
                Bus6_LeftIndicator.SetActive(true);
                Bus7_LeftIndicator.SetActive(true);
                Bus8_LeftIndicator.SetActive(true);
                Bus9_LeftIndicator.SetActive(true);
                Bus10_LeftIndicator.SetActive(true);
                Bus11_LeftIndicator.SetActive(true);

                Bus.LightBlink3.Play("LightBlink3");
                Bus.LightBlink4.Play("LightBlink4");
                Bus.LightBlink5.Play("LightBlink5");
                isLeftIndicatorOn = true;
            } 
            else
            {
                AudioManager.instance.Stop("Indicator");
                Bus0_LeftIndicator.SetActive(false);
                Bus1_LeftIndicator.SetActive(false);
                Bus2_LeftIndicator.SetActive(false);
                Bus3_LeftIndicator.SetActive(false);
                Bus4_LeftIndicator.SetActive(false);
                Bus5_LeftIndicator.SetActive(false);
                Bus6_LeftIndicator.SetActive(false);
                Bus7_LeftIndicator.SetActive(false);
                Bus8_LeftIndicator.SetActive(false);
                Bus9_LeftIndicator.SetActive(false);
                Bus10_LeftIndicator.SetActive(false);
                Bus11_LeftIndicator.SetActive(false);
                isLeftIndicatorOn = false;
            }
        }

        public void RightIndicator()
        {
            isRightIndicator = true;
            isLeftIndicator = false; 
            if (!isRightIndicatorOn)
            {
                AudioManager.instance.Play("Indicator");
                Bus0_RightIndicator.SetActive(true);
                Bus1_RightIndicator.SetActive(true);
                Bus2_RightIndicator.SetActive(true);
                Bus3_RightIndicator.SetActive(true);
                Bus4_RightIndicator.SetActive(true);
                Bus5_RightIndicator.SetActive(true);
                Bus6_RightIndicator.SetActive(true);
                Bus7_RightIndicator.SetActive(true);
                Bus8_RightIndicator.SetActive(true);
                Bus9_RightIndicator.SetActive(true);
                Bus10_RightIndicator.SetActive(true);
                Bus11_RightIndicator.SetActive(true);

                Bus.LightBlink.Play("LightBlink");
                Bus.LightBlink1.Play("LightBlink1");
                Bus.LightBlink2.Play("LightBlink2");
                isRightIndicatorOn = true;
            } 
            else
            {
                AudioManager.instance.Stop("Indicator");
                Bus0_RightIndicator.SetActive(false);
                Bus1_RightIndicator.SetActive(false);
                Bus2_RightIndicator.SetActive(false);
                Bus3_RightIndicator.SetActive(false);
                Bus4_RightIndicator.SetActive(false);
                Bus5_RightIndicator.SetActive(false);
                Bus6_RightIndicator.SetActive(false);
                Bus7_RightIndicator.SetActive(false);
                Bus8_RightIndicator.SetActive(false);
                Bus9_RightIndicator.SetActive(false);
                Bus10_RightIndicator.SetActive(false);
                Bus11_RightIndicator.SetActive(false);
                isRightIndicatorOn = false;
            }
        }

        public void ParkingIndicator()
        {
            if (!isParkingIndicatorOn)
            {
                isLeftIndicator = false;
                isRightIndicator = false; 
                AudioManager.instance.Play("Indicator");
                Bus0_LeftIndicator.SetActive(true);
                Bus0_RightIndicator.SetActive(true);
                Bus1_LeftIndicator.SetActive(true);
                Bus1_RightIndicator.SetActive(true);
                Bus2_LeftIndicator.SetActive(true);
                Bus2_RightIndicator.SetActive(true);
                Bus3_LeftIndicator.SetActive(true);
                Bus3_RightIndicator.SetActive(true);
                Bus4_LeftIndicator.SetActive(true);
                Bus4_RightIndicator.SetActive(true);
                Bus5_LeftIndicator.SetActive(true);
                Bus5_RightIndicator.SetActive(true);
                Bus6_LeftIndicator.SetActive(true);
                Bus6_RightIndicator.SetActive(true);
                Bus7_LeftIndicator.SetActive(true);
                Bus7_RightIndicator.SetActive(true);
                Bus8_LeftIndicator.SetActive(true);
                Bus8_RightIndicator.SetActive(true);
                Bus9_LeftIndicator.SetActive(true);
                Bus9_RightIndicator.SetActive(true);
                Bus10_LeftIndicator.SetActive(true);
                Bus10_RightIndicator.SetActive(true);
                Bus11_LeftIndicator.SetActive(true);
                Bus11_RightIndicator.SetActive(true);

                Bus.LightBlink.Play("LightBlink");
                Bus.LightBlink1.Play("LightBlink1");
                Bus.LightBlink2.Play("LightBlink2");
                Bus.LightBlink3.Play("LightBlink3");
                Bus.LightBlink4.Play("LightBlink4");
                Bus.LightBlink5.Play("LightBlink5");
                isParkingIndicatorOn = true;
            }
            else
            {
                isLeftIndicator = true;
                isRightIndicator = true;
                AudioManager.instance.Stop("Indicator");
                Bus0_LeftIndicator.SetActive(false);
                Bus0_RightIndicator.SetActive(false);
                Bus1_LeftIndicator.SetActive(false);
                Bus1_RightIndicator.SetActive(false);
                Bus2_LeftIndicator.SetActive(false);
                Bus2_RightIndicator.SetActive(false);
                Bus3_LeftIndicator.SetActive(false);
                Bus3_RightIndicator.SetActive(false);
                Bus4_LeftIndicator.SetActive(false);
                Bus4_RightIndicator.SetActive(false);
                Bus5_LeftIndicator.SetActive(false);
                Bus5_RightIndicator.SetActive(false);
                Bus6_LeftIndicator.SetActive(false);
                Bus6_RightIndicator.SetActive(false);
                Bus7_LeftIndicator.SetActive(false);
                Bus7_RightIndicator.SetActive(false);
                Bus8_LeftIndicator.SetActive(false);
                Bus8_RightIndicator.SetActive(false);
                Bus9_LeftIndicator.SetActive(false);
                Bus9_RightIndicator.SetActive(false);
                Bus10_LeftIndicator.SetActive(false);
                Bus10_RightIndicator.SetActive(false);
                Bus11_LeftIndicator.SetActive(false);
                Bus11_RightIndicator.SetActive(false);
                isParkingIndicatorOn = false;
            }
        } 
    }*/
}
