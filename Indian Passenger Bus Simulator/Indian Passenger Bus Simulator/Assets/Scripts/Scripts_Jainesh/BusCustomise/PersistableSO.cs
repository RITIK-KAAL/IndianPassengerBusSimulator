using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using UnityEngine;

public class PersistableSO : MonoBehaviour
{
    [Header("Scriptable Objects")]
    public List<ScriptableObject> objectsToPersist;

    private void OnEnable()
    {
        for (int i = 0; i < objectsToPersist.Count; i++)
        {
            string saveFileName = typeof(BusItem).Name + i + ".json";
            string filePath = Application.persistentDataPath + "/" + saveFileName;
            if (File.Exists(filePath))
            {
                BinaryFormatter bf = new BinaryFormatter();
                FileStream file = File.Open(filePath, FileMode.Open);
                JsonUtility.FromJsonOverwrite((string)bf.Deserialize(file), objectsToPersist[i]);                
                file.Close();

            }
            else
            {
                //Do Nothing
            }
        }
    }

    private void OnApplicationPause(bool pause)
    {
        SaveItAll();
    }

    private void OnDisable()
    {
        SaveItAll();
    }

    private void OnDestroy()
    {
        SaveItAll();
    }

    private void SaveItAll()
    {
        for (int i = 0; i < objectsToPersist.Count; i++)
        {
            string saveFileName = typeof(BusItem).Name + i + ".json";
            string filePath = Application.persistentDataPath + "/" + saveFileName;

            BinaryFormatter bf = new BinaryFormatter();
            FileStream file = File.Create(filePath);
            var json = JsonUtility.ToJson(objectsToPersist[i]);
            bf.Serialize(file, json);
            file.Close();
        }
    }
}