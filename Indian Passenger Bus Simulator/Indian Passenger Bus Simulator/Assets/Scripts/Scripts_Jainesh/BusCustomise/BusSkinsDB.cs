using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "BusSkinsDB", menuName = "Bus Skins/Create Bus Skin DB", order = 1)]
public class BusSkinsDB : ScriptableObject
{
    [SerializeField] private List<BusSkinsItem> busSkinsItems = new List<BusSkinsItem>();

    public BusSkinsItem GetBusSkinsItem(int index)
    {
        return busSkinsItems[index];
    }
}
