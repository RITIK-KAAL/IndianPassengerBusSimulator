using UnityEngine;
using DG.Tweening;

public class BusDoor : MonoBehaviour
{
    private enum MoveType { EMove, ERotate };

    [SerializeField] private MoveType m_MoveType = MoveType.EMove;
    [SerializeField] private float m_MoveSpeed = 2.0f;
    [SerializeField] private Ease m_MoveEasing = Ease.InOutSine;

    [Header("Position")]
    [SerializeField] private Vector3 m_MovePosition = Vector3.zero;

    [Header("Rotation")]
    [SerializeField] private float m_RotateYaw = 0.0f;
    [SerializeField] private float m_RotateSpeed = 2.0f;
    [SerializeField] private Ease m_RotateEasing = Ease.InOutSine;

    private Vector3 m_DefaultPositon;
    private Quaternion m_DefaultRotation;

    private Quaternion m_OpenRotation;

    private void Awake()
    {
        m_DefaultPositon = transform.localPosition;
        m_DefaultRotation = transform.localRotation;
        
        m_OpenRotation = Quaternion.Euler(0.0f, m_RotateYaw, 0.0f);
    }

    public void DoorOpen()
    {
        switch (m_MoveType)
        {
            case MoveType.EMove:
                transform.DOLocalMove(m_MovePosition, m_MoveSpeed).SetEase(m_MoveEasing);
                break;
            case MoveType.ERotate:
                transform.DOLocalRotateQuaternion(m_OpenRotation, m_RotateSpeed).SetEase(m_RotateEasing);
                break;
        }
    }

    public void DoorClose()
    {
        switch (m_MoveType)
        {
            case MoveType.EMove:
                transform.DOLocalMove(m_DefaultPositon, m_MoveSpeed).SetEase(m_MoveEasing);
                break;
            case MoveType.ERotate:
                transform.DOLocalRotateQuaternion(m_DefaultRotation, m_RotateSpeed).SetEase(m_RotateEasing);
                break;
        }
    }
}
