using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BusWheelsHack : MonoBehaviour
{
    public static BusWheelsHack Instance;

    public GameObject[] wheelsList;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(gameObject);

        DontDestroyOnLoad(gameObject);
    }
}
