using UnityEngine;

[System.Serializable]
public struct BodyMeshData
{
    public MeshRenderer meshRenderer;
    public int[] meshMaterialIndexes;
}

public class BusGarageItem : MonoBehaviour
{
    [SerializeField] private bool m_MakeMaterialColourWhite = false;
    [SerializeField] private float m_ColorMultiplier = 1.0f;

    [Space(15)]

    [SerializeField] private BoxCollider colliderBounds;
    [SerializeField] private float lookAtDistance = 6.5f;
    [SerializeField] private BodyMeshData[] bodyMeshRenderers;

    [Space(10)]

    public GameObject busDetailsCanvas;

    public float LookAtDistance { get { if (lookAtDistance > 0.0f) lookAtDistance = -lookAtDistance; return lookAtDistance; } }

    public Vector3 BusCenter
    {
        get 
        {
            if (colliderBounds != null) { return transform.TransformPoint(colliderBounds.center); }
            else { return Vector3.zero; }
        }
    }

    public Vector3 BusSize
    {
        get
        {
            if (colliderBounds != null) { return transform.TransformPoint(colliderBounds.bounds.extents); }
            else { return Vector3.zero; }
        }
    }

    private void OnValidate()
    {
        lookAtDistance = -lookAtDistance;
    }

    public void ApplySkinTexture(Texture skinTexture)
    {
        if (skinTexture == null) return;
        if (bodyMeshRenderers.Length <= 0) return;

        foreach(BodyMeshData meshData in bodyMeshRenderers)
        {
            for(int i = 0; i < meshData.meshMaterialIndexes.Length; i++)
            {
                meshData.meshRenderer.materials[meshData.meshMaterialIndexes[i]].SetTexture("_MainTex", skinTexture);

                if (m_MakeMaterialColourWhite)
                    meshData.meshRenderer.materials[meshData.meshMaterialIndexes[i]].SetColor("_Color", Color.white * m_ColorMultiplier);
            }
        }
    }
}
