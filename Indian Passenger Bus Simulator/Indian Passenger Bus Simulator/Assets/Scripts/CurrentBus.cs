using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityStandardAssets.Vehicles.Car;

public class CurrentBus : MonoBehaviour
{
    [SerializeField] private GameObject AllBusesContainer;
    [SerializeField] private List<GameObject> AllBusesList = new List<GameObject>();

    [Space(15)]

    [SerializeField] private GameObject AllBusesDoorContainer;
    [SerializeField] private List<GameObject> AllBusesDoorList = new List<GameObject>();

    [Space(15)]

    [SerializeField] private Canvas m_MainCanvas;
    [SerializeField] private Transform m_GameplayHolder;
    [SerializeField] private Transform m_MiniMap;
    [SerializeField] private Transform m_MiniMapBorderImage;
    [SerializeField] private Sprite m_BusMarkerSprite;

#if UNITY_EDITOR
    private void OnValidate()
    {
        if (Application.isPlaying)
            return;

        ValidateBuses(true);        
    }
#endif

    private void Awake()
    {
        ValidateBuses();
        SetActiveBusAndDoor(IntroductionWindow.Instance.CurrentBusIndex);
        FixMinimapMarkers();
        FixBusDrivingControls();
    }

    private void ValidateBuses(bool revertPrefab = false)
    {
        if (AllBusesContainer == null) AllBusesContainer = GameObject.Find("AllBuses");
        if (AllBusesContainer != null && AllBusesContainer.transform.childCount >= 12 && AllBusesList.Count == 0)
        {
            if (!AllBusesContainer.gameObject.activeSelf)
                AllBusesContainer.gameObject.SetActive(true);

#if UNITY_EDITOR
            if(revertPrefab && !Application.isPlaying)
                PrefabUtility.RevertPrefabInstance(AllBusesContainer, InteractionMode.UserAction);
#endif
            AllBusesList.Clear();            
            for (int i = 0; i < 12; i++)
            {
                AllBusesList.Add(AllBusesContainer.transform.GetChild(i).gameObject);
                AllBusesContainer.transform.GetChild(i).gameObject.SetActive(false);
            }
        }

        if (AllBusesDoorContainer == null) AllBusesDoorContainer = GameObject.Find("BusDoors");
        if (AllBusesDoorContainer != null && AllBusesDoorContainer.transform.childCount >= 12 && AllBusesDoorList.Count == 0)
        {
            if (!AllBusesDoorContainer.gameObject.activeSelf)
                AllBusesDoorContainer.gameObject.SetActive(true);

            AllBusesDoorList.Clear();
            for (int i = 0; i < 12; i++)
            {
                AllBusesDoorList.Add(AllBusesDoorContainer.transform.GetChild(i).gameObject);
                AllBusesDoorContainer.transform.GetChild(i).gameObject.SetActive(false);
            }
        }
    }    

    private void SetActiveBusAndDoor(int index)
    {
        for (int i = 0; i < AllBusesList.Count; i++)
        {
            if (AllBusesList[i] != null)
                AllBusesList[i].SetActive(i == index);

            if (AllBusesDoorList[i] != null)
                AllBusesDoorList[i].SetActive(i == index);
        }
    }

    private void FixMinimapMarkers()
    {
        if (m_MainCanvas == null)
            m_MainCanvas = FindObjectOfType<Canvas>();

        if (m_MainCanvas != null)
        {
            if (m_GameplayHolder == null) m_GameplayHolder = m_MainCanvas.transform.Find("Holder");
            if (m_MiniMap == null && m_GameplayHolder != null) m_MiniMap = m_GameplayHolder.Find("MiniMap");
            if (m_MiniMapBorderImage == null && m_MiniMap != null) m_MiniMapBorderImage = m_MiniMap.Find("BorderImage");
        }

        if (m_MiniMapBorderImage != null)
        {
            GameObject markerObject = new GameObject("Marker", typeof(Image));
            markerObject.transform.SetParent(m_MiniMapBorderImage, false);
            markerObject.GetComponent<Image>().sprite = m_BusMarkerSprite;
            markerObject.GetComponent<RectTransform>().sizeDelta = new Vector2(15.0f, 15.0f);
        }
    }

    private void FixBusDrivingControls()
    {
        if (m_GameplayHolder == null)
            return;

        Transform acceleratorButton = m_GameplayHolder.Find("Accelerator");
        if(acceleratorButton != null) 
        {
            BrakingSystem brakingSystem = acceleratorButton.GetComponent<BrakingSystem>();
            if (brakingSystem != null)
                Destroy(brakingSystem);

            EventTrigger brakingEventTrigger = acceleratorButton.GetComponent<EventTrigger>();
            if (brakingEventTrigger != null)
                Destroy(brakingEventTrigger);

            acceleratorButton.gameObject.AddComponent<BusAccelerator>();
        }

        Transform brakeButton = m_GameplayHolder.Find("Brake");
        if(brakeButton != null)
        {
            EventTrigger brakingEventTrigger = brakeButton.GetComponent<EventTrigger>();
            if (brakingEventTrigger != null)
                Destroy(brakingEventTrigger);

            brakeButton.gameObject.AddComponent<BusBraking>();        
        }
    }
}

/*public class CurrentBus : MonoBehaviour
{
    [SerializeField]
    private GameObject Bus0;
    [SerializeField]
    private GameObject Bus1;
    [SerializeField]
    private GameObject Bus2;
    [SerializeField]
    private GameObject Bus3;
    [SerializeField]
    private GameObject Bus4;
    [SerializeField]
    private GameObject Bus5;
    [SerializeField]
    private GameObject Bus6;
    [SerializeField]
    private GameObject Bus7;
    [SerializeField]
    private GameObject Bus8;
    [SerializeField]
    private GameObject Bus9;
    [SerializeField]
    private GameObject Bus10;
    [SerializeField]
    private GameObject Bus11;
    [SerializeField]
    private GameObject BusDoor0;
    [SerializeField]
    private GameObject BusDoor1;
    [SerializeField]
    private GameObject BusDoor2;
    [SerializeField]
    private GameObject BusDoor3;
    [SerializeField]
    private GameObject BusDoor4;
    [SerializeField]
    private GameObject BusDoor5;
    [SerializeField]
    private GameObject BusDoor6;
    [SerializeField]
    private GameObject BusDoor7;
    [SerializeField]
    private GameObject BusDoor8;
    [SerializeField]
    private GameObject BusDoor9;
    [SerializeField]
    private GameObject BusDoor10;
    [SerializeField]
    private GameObject BusDoor11;

    private void Update()
    {
        if(IntroductionWindow.Instance.isBus0 == true)
        {
            Bus0.SetActive(true);
            Bus1.SetActive(false);
            Bus2.SetActive(false);
            Bus3.SetActive(false);
            Bus4.SetActive(false);
            Bus5.SetActive(false);
            Bus6.SetActive(false);
            Bus7.SetActive(false);
            Bus8.SetActive(false);
            Bus9.SetActive(false);
            Bus10.SetActive(false);
            Bus11.SetActive(false);
            BusDoor0.SetActive(true);
            BusDoor1.SetActive(false);
            BusDoor2.SetActive(false);
            BusDoor3.SetActive(false);
            BusDoor4.SetActive(false);
            BusDoor5.SetActive(false);
            BusDoor6.SetActive(false);
            BusDoor7.SetActive(false);
            BusDoor8.SetActive(false);
            BusDoor9.SetActive(false);
            BusDoor10.SetActive(false);
            BusDoor11.SetActive(false);
        }
        else if (IntroductionWindow.Instance.isBus1 == true)
        {
            Bus0.SetActive(false);
            Bus1.SetActive(true);
            Bus2.SetActive(false);
            Bus3.SetActive(false);
            Bus4.SetActive(false);
            Bus5.SetActive(false);
            Bus6.SetActive(false);
            Bus7.SetActive(false);
            Bus8.SetActive(false);
            Bus9.SetActive(false);
            Bus10.SetActive(false);
            Bus11.SetActive(false);
            BusDoor0.SetActive(false);
            BusDoor1.SetActive(true);
            BusDoor2.SetActive(false);
            BusDoor3.SetActive(false);
            BusDoor4.SetActive(false);
            BusDoor5.SetActive(false);
            BusDoor6.SetActive(false);
            BusDoor7.SetActive(false);
            BusDoor8.SetActive(false);
            BusDoor9.SetActive(false);
            BusDoor10.SetActive(false);
            BusDoor11.SetActive(false);
        }
        else if (IntroductionWindow.Instance.isBus2 == true)
        {
            Bus0.SetActive(false);
            Bus1.SetActive(false);
            Bus2.SetActive(true);
            Bus3.SetActive(false);
            Bus4.SetActive(false);
            Bus5.SetActive(false);
            Bus6.SetActive(false);
            Bus7.SetActive(false);
            Bus8.SetActive(false);
            Bus9.SetActive(false);
            Bus10.SetActive(false);
            Bus11.SetActive(false);
            BusDoor0.SetActive(false);
            BusDoor1.SetActive(false);
            BusDoor2.SetActive(true);
            BusDoor3.SetActive(false);
            BusDoor4.SetActive(false);
            BusDoor5.SetActive(false);
            BusDoor6.SetActive(false);
            BusDoor7.SetActive(false);
            BusDoor8.SetActive(false);
            BusDoor9.SetActive(false);
            BusDoor10.SetActive(false);
            BusDoor11.SetActive(false);
        }
        else if (IntroductionWindow.Instance.isBus3 == true)
        {
            Bus0.SetActive(false);
            Bus1.SetActive(false);
            Bus2.SetActive(false);
            Bus3.SetActive(true);
            Bus4.SetActive(false);
            Bus5.SetActive(false);
            Bus6.SetActive(false);
            Bus7.SetActive(false);
            Bus8.SetActive(false);
            Bus9.SetActive(false);
            Bus10.SetActive(false);
            Bus11.SetActive(false);
            BusDoor0.SetActive(false);
            BusDoor1.SetActive(false);
            BusDoor2.SetActive(false);
            BusDoor3.SetActive(true);
            BusDoor4.SetActive(false);
            BusDoor5.SetActive(false);
            BusDoor6.SetActive(false);
            BusDoor7.SetActive(false);
            BusDoor8.SetActive(false);
            BusDoor9.SetActive(false);
            BusDoor10.SetActive(false);
            BusDoor11.SetActive(false);
        }
        else if (IntroductionWindow.Instance.isBus4 == true)
        {
            Bus0.SetActive(false);
            Bus1.SetActive(false);
            Bus2.SetActive(false);
            Bus3.SetActive(false);
            Bus4.SetActive(true);
            Bus5.SetActive(false);
            Bus6.SetActive(false);
            Bus7.SetActive(false);
            Bus8.SetActive(false);
            Bus9.SetActive(false);
            Bus10.SetActive(false);
            Bus11.SetActive(false);
            BusDoor0.SetActive(false);
            BusDoor1.SetActive(false);
            BusDoor2.SetActive(false);
            BusDoor3.SetActive(false);
            BusDoor4.SetActive(true);
            BusDoor5.SetActive(false);
            BusDoor6.SetActive(false);
            BusDoor7.SetActive(false);
            BusDoor8.SetActive(false);
            BusDoor9.SetActive(false);
            BusDoor10.SetActive(false);
            BusDoor11.SetActive(false);
        }
        else if (IntroductionWindow.Instance.isBus5 == true)
        {
            Bus0.SetActive(false);
            Bus1.SetActive(false);
            Bus2.SetActive(false);
            Bus3.SetActive(false);
            Bus4.SetActive(false);
            Bus5.SetActive(true);
            Bus6.SetActive(false);
            Bus7.SetActive(false);
            Bus8.SetActive(false);
            Bus9.SetActive(false);
            Bus10.SetActive(false);
            Bus11.SetActive(false);
            BusDoor0.SetActive(false);
            BusDoor1.SetActive(false);
            BusDoor2.SetActive(false);
            BusDoor3.SetActive(false);
            BusDoor4.SetActive(false);
            BusDoor5.SetActive(true);
            BusDoor6.SetActive(false);
            BusDoor7.SetActive(false);
            BusDoor8.SetActive(false);
            BusDoor9.SetActive(false);
            BusDoor10.SetActive(false);
            BusDoor11.SetActive(false);
        }
        else if (IntroductionWindow.Instance.isBus6 == true)
        {
            Bus0.SetActive(false);
            Bus1.SetActive(false);
            Bus2.SetActive(false);
            Bus3.SetActive(false);
            Bus4.SetActive(false);
            Bus5.SetActive(false);
            Bus6.SetActive(true);
            Bus7.SetActive(false);
            Bus8.SetActive(false);
            Bus9.SetActive(false);
            Bus10.SetActive(false);
            Bus11.SetActive(false);
            BusDoor0.SetActive(false);
            BusDoor1.SetActive(false);
            BusDoor2.SetActive(false);
            BusDoor3.SetActive(false);
            BusDoor4.SetActive(false);
            BusDoor5.SetActive(false);
            BusDoor6.SetActive(true);
            BusDoor7.SetActive(false);
            BusDoor8.SetActive(false);
            BusDoor9.SetActive(false);
            BusDoor10.SetActive(false);
            BusDoor11.SetActive(false);
        }
        else if (IntroductionWindow.Instance.isBus7 == true)
        {
            Bus0.SetActive(false);
            Bus1.SetActive(false);
            Bus2.SetActive(false);
            Bus3.SetActive(false);
            Bus4.SetActive(false);
            Bus5.SetActive(false);
            Bus6.SetActive(false);
            Bus7.SetActive(true);
            Bus8.SetActive(false);
            Bus9.SetActive(false);
            Bus10.SetActive(false);
            Bus11.SetActive(false);
            BusDoor0.SetActive(false);
            BusDoor1.SetActive(false);
            BusDoor2.SetActive(false);
            BusDoor3.SetActive(false);
            BusDoor4.SetActive(false);
            BusDoor5.SetActive(false);
            BusDoor6.SetActive(false);
            BusDoor7.SetActive(true);
            BusDoor8.SetActive(false);
            BusDoor9.SetActive(false);
            BusDoor10.SetActive(false);
            BusDoor11.SetActive(false);
        }
        else if (IntroductionWindow.Instance.isBus8 == true)
        {
            Bus0.SetActive(false);
            Bus1.SetActive(false);
            Bus2.SetActive(false);
            Bus3.SetActive(false);
            Bus4.SetActive(false);
            Bus5.SetActive(false);
            Bus6.SetActive(false);
            Bus7.SetActive(false);
            Bus8.SetActive(true);
            Bus9.SetActive(false);
            Bus10.SetActive(false);
            Bus11.SetActive(false);
            BusDoor0.SetActive(false);
            BusDoor1.SetActive(false);
            BusDoor2.SetActive(false);
            BusDoor3.SetActive(false);
            BusDoor4.SetActive(false);
            BusDoor5.SetActive(false);
            BusDoor6.SetActive(false);
            BusDoor7.SetActive(false);
            BusDoor8.SetActive(true);
            BusDoor9.SetActive(false);
            BusDoor10.SetActive(false);
            BusDoor11.SetActive(false);
        }
        else if (IntroductionWindow.Instance.isBus9 == true)
        {
            Bus0.SetActive(false);
            Bus1.SetActive(false);
            Bus2.SetActive(false);
            Bus3.SetActive(false);
            Bus4.SetActive(false);
            Bus5.SetActive(false);
            Bus6.SetActive(false);
            Bus7.SetActive(false);
            Bus8.SetActive(false);
            Bus9.SetActive(true);
            Bus10.SetActive(false);
            Bus11.SetActive(false);
            BusDoor0.SetActive(false);
            BusDoor1.SetActive(false);
            BusDoor2.SetActive(false);
            BusDoor3.SetActive(false);
            BusDoor4.SetActive(false);
            BusDoor5.SetActive(false);
            BusDoor6.SetActive(false);
            BusDoor7.SetActive(false);
            BusDoor8.SetActive(false);
            BusDoor9.SetActive(true);
            BusDoor10.SetActive(false);
            BusDoor11.SetActive(false);
        }
        else if (IntroductionWindow.Instance.isBus10 == true)
        {
            Bus0.SetActive(false);
            Bus1.SetActive(false);
            Bus2.SetActive(false);
            Bus3.SetActive(false);
            Bus4.SetActive(false);
            Bus5.SetActive(false);
            Bus6.SetActive(false);
            Bus7.SetActive(false);
            Bus8.SetActive(false);
            Bus9.SetActive(false);
            Bus10.SetActive(true);
            Bus11.SetActive(false);
            BusDoor0.SetActive(false);
            BusDoor1.SetActive(false);
            BusDoor2.SetActive(false);
            BusDoor3.SetActive(false);
            BusDoor4.SetActive(false);
            BusDoor5.SetActive(false);
            BusDoor6.SetActive(false);
            BusDoor7.SetActive(false);
            BusDoor8.SetActive(false);
            BusDoor9.SetActive(false);
            BusDoor10.SetActive(true);
            BusDoor11.SetActive(false);
        }
        else if (IntroductionWindow.Instance.isBus11 == true)
        {
            Bus0.SetActive(false);
            Bus1.SetActive(false);
            Bus2.SetActive(false);
            Bus3.SetActive(false);
            Bus4.SetActive(false);
            Bus5.SetActive(false);
            Bus6.SetActive(false);
            Bus7.SetActive(false);
            Bus8.SetActive(false);
            Bus9.SetActive(false);
            Bus10.SetActive(false);
            Bus11.SetActive(true);
            BusDoor0.SetActive(false);
            BusDoor1.SetActive(false);
            BusDoor2.SetActive(false);
            BusDoor3.SetActive(false);
            BusDoor4.SetActive(false);
            BusDoor5.SetActive(false);
            BusDoor6.SetActive(false);
            BusDoor7.SetActive(false);
            BusDoor8.SetActive(false);
            BusDoor9.SetActive(false);
            BusDoor10.SetActive(false);
            BusDoor11.SetActive(true);
        }
    }
}
*/