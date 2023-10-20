using System.IO;
using UnityEngine;

public class SerializationManager
{
    public static void SaveAsTextFile(string saveName, string saveData)
    {
        string path = Application.persistentDataPath + "/" + saveName + ".json";

        File.WriteAllText(path, saveData);

#if UNITY_EDITOR
        Debug.Log(path + " - FILE SAVED!");
#endif
    }

    public static void SaveAsTextFile(string path, string saveName, string saveData)
    {
        string fullPath = path + "/" + saveName;
        File.WriteAllText(fullPath, saveData);

#if UNITY_EDITOR
        Debug.Log(fullPath + " - FILE SAVED!");
#endif
    }

    public static string LoadFromTextFile(string filePath)
    {
        if (File.Exists(filePath))
        {
            string saveString = File.ReadAllText(filePath);
            return saveString;
        }
        
        return null;
    }

    public static void DeleteIfFileExists(string path)
    {
        if(File.Exists(path))
        {
#if UNITY_EDITOR
            Debug.Log(path + " - File is deleted!");
#endif
            File.Delete(path);
        }
        else
        {
#if UNITY_EDITOR
            Debug.Log(path + " - No such File Found!");
#endif
        }
    }    
}
