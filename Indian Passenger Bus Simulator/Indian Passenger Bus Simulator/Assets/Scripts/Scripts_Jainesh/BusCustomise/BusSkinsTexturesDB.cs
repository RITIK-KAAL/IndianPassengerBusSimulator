using System.Collections.Generic;
using UnityEngine;

#if UNITY_EDITOR
using UnityEditor;
#endif

[CreateAssetMenu(fileName = "BusSkinsTexturesDB", menuName = "Bus Skins/Create Bus Skin Textures DB", order = 3)]
public class BusSkinsTexturesDB : ScriptableObject
{
    public bool show = true;
    public List<Texture> busTextures = new List<Texture>(0);
}

#if UNITY_EDITOR
[CustomEditor(typeof(BusSkinsTexturesDB))]
public class BusSkinsTexturesDBEditor : Editor
{
    private const float deleteButtonWidth = 18.0f;
    private const float deleteButtonHeight = 18.0f;

    public override void OnInspectorGUI()
    {
        BusSkinsTexturesDB busSkinsTexturesDB = (BusSkinsTexturesDB)target;

        SerializedProperty showProp = serializedObject.FindProperty("show");
        SerializedProperty busTexturesProp = serializedObject.FindProperty("busTextures");

        bool showUp = EditorGUILayout.Foldout(busSkinsTexturesDB.show, "Bus Textures", true);
        if (showUp)
        {
            for (int i = 0; i < busTexturesProp.arraySize; i++)
            {
                EditorGUILayout.BeginHorizontal();            

                var texProp = busTexturesProp.GetArrayElementAtIndex(i);
                if(texProp != null)
                    EditorGUILayout.PropertyField(texProp, new GUIContent("Skin [" + i + "]"));

                if (GUILayout.Button("X", GUILayout.Width(deleteButtonWidth), GUILayout.Height(deleteButtonHeight)))
                    busTexturesProp.DeleteArrayElementAtIndex(i);

                EditorGUILayout.EndHorizontal();

                if ( (i + 1) % 3 == 0)
                    EditorGUILayout.Space(15);
            }
        }

        EditorGUILayout.Space(10);

        if (GUILayout.Button("Add Skin"))
            busTexturesProp.InsertArrayElementAtIndex(busTexturesProp.arraySize);       

        serializedObject.ApplyModifiedProperties();
    }
}
#endif