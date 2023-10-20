using UnityEngine;

public class BusSkinHelper : MonoBehaviour
{
    [SerializeField] private int busIndex = 0;
    [SerializeField] private BusItemDB busItemsDB;
    [SerializeField] private BusSkinsTexturesDB busSkinsTexturesDB;

    [Space(10)]

    [SerializeField] private BodyMeshData[] bodyMeshRenderers;

    private BusItem currentBusItem;

    //private BusGarageItem garageItem;
    /*private void OnValidate()
    {
        if(garageItem == null)
            garageItem = GetComponent<BusGarageItem>();

        if(garageItem != null && bodyMeshRenderers.Length == 0)
        {
            Array.Resize(ref bodyMeshRenderers, garageItem.bodyMeshRenderers.Length);
            Array.Copy(garageItem.bodyMeshRenderers, bodyMeshRenderers, garageItem.bodyMeshRenderers.Length);        
        }
    }*/

    private void Awake()
    {
        currentBusItem = busItemsDB.GetBusItem(busIndex);
        ApplySkinTexture(busSkinsTexturesDB.busTextures[currentBusItem.GetCurrentSkinIndex()]);
    }

    public void ApplySkinTexture(Texture skinTexture)
    {
        if (skinTexture == null) return;
        if (bodyMeshRenderers.Length <= 0) return;

        foreach (BodyMeshData meshData in bodyMeshRenderers)
        {
            for (int i = 0; i < meshData.meshMaterialIndexes.Length; i++)
            {
                if(meshData.meshRenderer != null)
                    meshData.meshRenderer.materials[meshData.meshMaterialIndexes[i]].SetTexture("_MainTex", skinTexture);
            }
        }
    }
}
