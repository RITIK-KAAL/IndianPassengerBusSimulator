using System.Collections;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityStandardAssets.Vehicles.Car;

public class BusAccelerator : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IPointerExitHandler
{
    [SerializeField] private BusMovement m_BusMovement;

    private bool m_IsButtonHeld = false;
    private Coroutine m_UpdateRoutine;

    private void Awake()
    {
        m_BusMovement = FindObjectOfType<BusMovement>();        
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (m_BusMovement == null) return;

        m_IsButtonHeld = true;
        m_UpdateRoutine = StartCoroutine(UpdateRoutine());
        m_BusMovement.VerticalClick(1.0f);

        /*if (m_BusMovement.IsForwardGear)
        {
#if UNITY_EDITOR
            Debug.Log("On Forward Gear");
#endif
            m_BusMovement.VerticalClick(1.0f);
        }

        if (m_BusMovement.IsBackwardGear)
        {
#if UNITY_EDITOR
            Debug.Log("On Backward Gear");
#endif
            m_BusMovement.VerticalClick(-1.0f);
        }*/
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (m_BusMovement == null) return;

        m_IsButtonHeld = false;
        m_BusMovement.VerticalClick(0.0f);

        StopCoroutine(m_UpdateRoutine);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        if (m_BusMovement == null) return;

        m_IsButtonHeld = false;
        m_BusMovement.VerticalClick(0.0f);

        StopCoroutine(m_UpdateRoutine);
    }

    private IEnumerator UpdateRoutine()
    {
        while(true)
        {
            if(m_BusMovement != null && m_IsButtonHeld)
                m_BusMovement.VerticalClick(1.0f);            

            yield return null;
        }
    }
}
