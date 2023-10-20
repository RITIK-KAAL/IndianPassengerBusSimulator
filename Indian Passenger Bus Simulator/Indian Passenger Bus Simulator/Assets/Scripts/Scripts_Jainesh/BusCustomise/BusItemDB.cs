using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "BusItemDB", menuName = "Bus Skins/Create Bus Item DB", order = 5)]
public class BusItemDB : ScriptableObject
{
    [SerializeField] private List<BusItem> busItemsList = new List<BusItem>();

    private void OnValidate()
    {
        if (busItemsList.Count == 0) return;

        for(int i = 0; i < busItemsList.Count; i++)
        {
            if (busItemsList[i] == null) continue;
            busItemsList[i].index = i;
        }
    }

    public void ValidateAdData()
    {
        if (busItemsList.Count == 0) return;

        for (int i = 0; i < busItemsList.Count; i++)
        {
            if (busItemsList[i] == null) continue;
            busItemsList[i].ValidateSkinTemporaryStatus();
        }
    }

    public BusItem GetBusItem(int index)
    {
        return busItemsList[index];
    }    
}
