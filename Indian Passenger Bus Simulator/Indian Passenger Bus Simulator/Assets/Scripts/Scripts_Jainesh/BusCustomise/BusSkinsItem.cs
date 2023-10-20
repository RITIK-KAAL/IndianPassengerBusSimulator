using UnityEngine;

[System.Serializable]
public struct BusSkinData
{
    public float unlockCost;
    public string skinName;
    public int skinTextureIndex;
}

[CreateAssetMenu(fileName = "BusSkinsItem", menuName = "Bus Skins/Create Bus Skin Item", order = 2)]
public class BusSkinsItem : ScriptableObject
{
    public BusSkinData[] busSkins;

    private void OnValidate()
    {
        if(busSkins.Length > 0)
        {
            for (int i = 0; i < busSkins.Length; i++)
            {               
                if (i == 0) busSkins[i].unlockCost = 0;
                if(i > 0) busSkins[i].skinTextureIndex = busSkins[i - 1].skinTextureIndex + 1;
            }
        }
    }
}
