#if UNITY_EDITOR
/*using UnityEditor;
using UnityEngine;
using UnityToolbarExtender;

[InitializeOnLoad]
public class CompileButton
{
    static CompileButton()
    {
        ToolbarExtender.RightToolbarGUI.Add(() => 
        {
            GUILayout.FlexibleSpace();

            GUIContent compileButtonContent = new GUIContent();
            compileButtonContent.text = "Compile/Re-import";

            GUIStyle style = new GUIStyle(EditorStyles.toolbarButton);

            if (GUILayout.Button(compileButtonContent, style, GUILayout.ExpandWidth(true)) && EditorPrefs.GetInt("kAutoRefresh") == 0)
                AssetDatabase.Refresh();
        });
    }
}*/
#endif