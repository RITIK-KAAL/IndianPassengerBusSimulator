using UnityEngine;
using UnityEngine.EventSystems;
using UnityStandardAssets.Vehicles.Car;

public class BusBraking : MonoBehaviour, IPointerUpHandler, IPointerDownHandler
{
    [SerializeField] private BusMovement m_BusMovement;
    [SerializeField] private Rigidbody m_BusRigidbody;

    [Space(15)]

    [SerializeField] private BusInfo m_BusInfo;

    private void Awake()
    {
        m_BusMovement = FindObjectOfType<BusMovement>();
        if(m_BusMovement != null)
            m_BusRigidbody = m_BusMovement.GetComponent<Rigidbody>();

        m_BusInfo = FindObjectOfType<BusInfo>();
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (m_BusRigidbody == null || m_BusInfo == null) return;

        m_BusRigidbody.drag = 1.5f;
        m_BusInfo.SetBrakingIndicator(true);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (m_BusRigidbody == null || m_BusInfo == null) return;

        m_BusRigidbody.drag = 0.25f;
        m_BusInfo.SetBrakingIndicator(false);
    }
}
