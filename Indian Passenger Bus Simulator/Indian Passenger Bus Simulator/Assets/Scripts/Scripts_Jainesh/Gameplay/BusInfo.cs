using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class BusInfo : MonoBehaviour
{
    [Header("Entry Points")]
    [SerializeField] private Transform m_BusEntryPoint;
    [SerializeField] private Transform m_BusEntryPointInside;
    [SerializeField] private float m_BusEntryDistance = 1.0f;
    [SerializeField] private float m_BusEntryUpDistance = 0.5f;

    [Header("Exit Points")]
    [SerializeField] private Transform m_BusExitPoint;
    [SerializeField] private float m_BusExitDistance = 2.0f;

    [Header("Door")]
    [SerializeField] private List<BusDoor> m_BusDoors = new List<BusDoor>();

    [Header("Rear Indicators")]
    [SerializeField] private Animator m_IndicatorLeftAnim;
    [SerializeField] private Animator m_IndicatorRightAnim;

    [Header("Head Lights")]
    [SerializeField] private GameObject m_HeadLightHalos;
    [SerializeField] private GameObject m_HeadLightSpots;

    public Vector3 BusEntryPos { get { return m_BusEntryPoint.position; } }
    public Vector3 BusEntryPosInside { get { return m_BusEntryPointInside.position; } }
    public Vector3 BusExitPos { get { return m_BusExitPoint.position; } }

    private bool m_IsIndicatorLeftOn = false;
    private bool m_IsIndicatorRightOn = false;
    private bool m_IsIndicatorParkingOn = false;
    private bool m_IsHeadLightOn = false;

    private void OnValidate()
    {
        if (m_BusEntryPoint == null)        m_BusEntryPoint = transform.Find("BusEntryPoint");
        if (m_BusEntryPointInside == null)  m_BusEntryPointInside = transform.Find("BusEntryPointInside");

        if(m_BusExitPoint == null)  m_BusExitPoint = transform.Find("BusExitPoint");

        if(m_BusEntryPointInside != null && m_BusEntryPoint != null)
            m_BusEntryPointInside.position = m_BusEntryPoint.position + (-m_BusEntryPoint.right * m_BusEntryDistance) + (Vector3.up * m_BusEntryUpDistance);

        if (m_BusExitPoint != null && m_BusEntryPoint != null)
            m_BusExitPoint.position = m_BusEntryPoint.position + (m_BusEntryPoint.right * m_BusExitDistance);

        m_BusDoors.Clear();
        m_BusDoors = GetComponentsInChildren<BusDoor>().ToList();
    }

    private void Awake()
    {
        if (m_HeadLightHalos != null) m_HeadLightHalos.SetActive(false);
        if (m_HeadLightSpots != null) m_HeadLightSpots.SetActive(false);
    }

    public void BusDoorOpen()
    {
        if(m_BusDoors.Count == 0) return;

        for (int i = 0; i < m_BusDoors.Count; i++)
        {
            if (m_BusDoors[i] != null)
                m_BusDoors[i].DoorOpen();
        }
    }

    public void BusDoorClose()
    {
        if (m_BusDoors.Count == 0) return;

        for (int i = 0; i < m_BusDoors.Count; i++)
        {
            if (m_BusDoors[i] != null)
                m_BusDoors[i].DoorClose();
        }
    }

    public void PlayIndicatorLeft()
    {
        if (m_IndicatorLeftAnim == null || m_IndicatorRightAnim == null) return;

        m_IsIndicatorLeftOn = !m_IsIndicatorLeftOn;
        m_IsIndicatorParkingOn = false;

        m_IndicatorLeftAnim.SetBool("IndicatorOn", m_IsIndicatorLeftOn);
        m_IndicatorRightAnim.SetBool("IndicatorOn", false);
    }

    public void PlayIndicatorRight()
    {
        if (m_IndicatorLeftAnim == null || m_IndicatorRightAnim == null) return;

        m_IsIndicatorRightOn = !m_IsIndicatorRightOn;
        m_IsIndicatorParkingOn = false;

        m_IndicatorLeftAnim.SetBool("IndicatorOn", false);
        m_IndicatorRightAnim.SetBool("IndicatorOn", m_IsIndicatorRightOn);
    }

    public void PlayIndicatorParking()
    {
        if (m_IndicatorLeftAnim == null || m_IndicatorRightAnim == null) return;

        m_IsIndicatorParkingOn = !m_IsIndicatorParkingOn;
        m_IsIndicatorLeftOn = false;
        m_IsIndicatorRightOn = false;

        m_IndicatorLeftAnim.SetBool("IndicatorOn", m_IsIndicatorParkingOn);
        m_IndicatorRightAnim.SetBool("IndicatorOn", m_IsIndicatorParkingOn);
    }

    public void SetBrakingIndicator(bool status)
    {
        if (m_IndicatorLeftAnim == null || m_IndicatorRightAnim == null) return;
        if ((!status) && (m_IsIndicatorLeftOn || m_IsIndicatorRightOn)) return;

        m_IsIndicatorParkingOn = false;

        m_IsIndicatorLeftOn = false;
        m_IsIndicatorRightOn = false;

        m_IndicatorLeftAnim.SetBool("IndicatorOn", m_IsIndicatorParkingOn);
        m_IndicatorRightAnim.SetBool("IndicatorOn", m_IsIndicatorParkingOn);

        m_IndicatorLeftAnim.SetBool("BrakeOn", status);
        m_IndicatorRightAnim.SetBool("BrakeOn", status);
    }

    public void SetHeadLightStatus(bool status)
    {
        m_IsHeadLightOn = status;

        if (m_HeadLightHalos != null)
            m_HeadLightHalos.SetActive(m_IsHeadLightOn);

        if(m_HeadLightSpots != null)
            m_HeadLightSpots.SetActive(m_IsHeadLightOn);
    }

    private void OnDrawGizmos()
    {
        if (m_BusEntryPoint == null) return;
        Gizmos.color = Color.red;
        Gizmos.DrawSphere(BusEntryPos, 0.1f);
        
        if (m_BusEntryPointInside == null) return;
        Gizmos.color = Color.yellow;
        Gizmos.DrawSphere(BusEntryPosInside, 0.1f);

        if (m_BusExitPoint == null) return;
        Gizmos.color = Color.green;
        Gizmos.DrawSphere(BusExitPos, 0.1f);

    }
}
