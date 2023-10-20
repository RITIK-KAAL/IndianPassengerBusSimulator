using UnityEngine;
using UnityStandardAssets.Characters.ThirdPerson;
using UnityEngine.AI;
using System.Collections.Generic;
using DG.Tweening;

public class PassengerController : MonoBehaviour
{
    [SerializeField] private NavMeshAgent agent; 
    [SerializeField] private ThirdPersonCharacter character;
    
    [SerializeField] private Transform Target1;
    public bool setForExit = false;

    private BusInfo m_CurrentBusInfo;
    private Vector3 m_TargetPosition;
    private int m_TargetPositionIndex = 0;
    private List<Vector3> m_TargetPositionsList = new List<Vector3>();

    private Sequence m_MoveSeq;
    private Animator m_Animator;

    private void Awake()
    {
        m_Animator = GetComponent<Animator>();
        m_CurrentBusInfo = FindObjectOfType<BusInfo>();
        if (m_CurrentBusInfo != null)
        {
            //m_TargetPosition = setForExit ? m_CurrentBusInfo.BusExitPos : m_CurrentBusInfo.BusEntryPos;
            m_TargetPositionsList.Clear();
            if (!setForExit)
            {
                m_TargetPositionsList.Add(m_CurrentBusInfo.BusEntryPos);
                m_TargetPositionsList.Add(m_CurrentBusInfo.BusEntryPosInside);

                m_TargetPosition = m_TargetPositionsList[m_TargetPositionIndex];
            }
            else
            {
                transform.position = m_CurrentBusInfo.BusEntryPosInside;
                m_TargetPositionsList.Add(m_CurrentBusInfo.BusEntryPos);

                m_TargetPosition = m_CurrentBusInfo.BusExitPos;
            }
        }

        agent.enabled = false;
        
        //agent.updateRotation = true;
        //agent.autoBraking = false;
        //agent.SetDestination(m_TargetPosition);
    }

    private void Start()
    {
        m_MoveSeq = DOTween.Sequence();        

        if (!setForExit)
        {
            Vector3 rot1 = m_TargetPositionsList[0] - transform.position;
            rot1.y = 0;

            Vector3 rot2 = (m_TargetPositionsList[1] - m_TargetPositionsList[0]).normalized;
            rot2.y = 0;

            m_MoveSeq.AppendCallback(() => m_Animator.SetBool("Moving", true));
            m_MoveSeq.Append(transform.DOMove(m_TargetPositionsList[0], 1.0f).SetEase(Ease.InSine));
            m_MoveSeq.Join(transform.DORotateQuaternion(Quaternion.LookRotation(rot1), 0.2f).SetEase(Ease.InOutSine));
           
            m_MoveSeq.Append(transform.DOMove(m_TargetPositionsList[1], 1.0f).SetEase(Ease.OutSine));
            m_MoveSeq.Join(transform.DORotateQuaternion(Quaternion.LookRotation(rot2, Vector3.up), 0.2f).SetEase(Ease.InOutSine));
            m_MoveSeq.AppendCallback(() => m_Animator.SetBool("Moving", false));
            m_MoveSeq.AppendInterval(0.25f);
            m_MoveSeq.AppendCallback(() => gameObject.SetActive(false));
        }
        else
        {
            Vector3 rot1 = m_TargetPositionsList[0] - transform.position;
            rot1.y = 0;

            Vector3 rot2 = m_CurrentBusInfo.BusExitPos - transform.position;
            rot2.y = 0;

            m_MoveSeq.AppendCallback(() => m_Animator.SetBool("Moving", true));
            m_MoveSeq.Append(transform.DOMove(m_TargetPositionsList[0], 1.0f).SetEase(Ease.InSine));
            m_MoveSeq.Join(transform.DORotateQuaternion(Quaternion.LookRotation(rot1), 0.2f).SetEase(Ease.InOutSine));

            m_MoveSeq.AppendCallback(() => 
            {
                rot2 = m_CurrentBusInfo.BusExitPos - transform.position;
                rot2.y = 0;
            });
            m_MoveSeq.Append(transform.DOMove(m_CurrentBusInfo.BusExitPos, 2.5f).SetEase(Ease.InOutSine));
            m_MoveSeq.Join(transform.DORotateQuaternion(Quaternion.LookRotation(rot2), 0.2f).SetEase(Ease.InOutSine));
            m_MoveSeq.AppendCallback(() => m_Animator.SetBool("Moving", false));
        }
    }

    /*private void Update()
    {
        if(!setForExit && m_TargetPositionIndex == 0)
        {
            //float distance = Vector3.Distance(transform.position, m_TargetPosition);
            if (agent.remainingDistance <= 2.0f)
            {
                m_TargetPositionIndex++;
                m_TargetPosition = m_TargetPositionsList[m_TargetPositionIndex];
                agent.SetDestination(m_TargetPosition);
            }
        }
    }*/

    /*private void FixedUpdate()
    {
        if (agent.remainingDistance > agent.stoppingDistance)
        {
            character.Move(agent.desiredVelocity * 0.55f, false, false);
        }
        else
        {
            character.Move(Vector3.zero, false, false);
        }
    }*/
}
