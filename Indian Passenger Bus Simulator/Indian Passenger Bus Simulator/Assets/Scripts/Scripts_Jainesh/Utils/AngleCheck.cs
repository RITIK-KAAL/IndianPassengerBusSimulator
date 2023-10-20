using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[ExecuteInEditMode]
public class AngleCheck : MonoBehaviour
{
    [SerializeField] private float m_Angle = 0.0f;

    void Update()
    {
        m_Angle = Vector3.Angle(transform.up, Vector3.up);
    }
}
