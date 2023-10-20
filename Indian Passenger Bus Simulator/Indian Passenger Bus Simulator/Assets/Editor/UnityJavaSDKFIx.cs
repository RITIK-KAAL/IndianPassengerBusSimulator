#if UNITY_EDITOR
using UnityEditor;
#endif
using UnityEngine;
using System;

public class UnityJavaSDKFIx : MonoBehaviour {
#if UNITY_EDITOR
    [InitializeOnLoadMethod]
    static void SetJavaHome () {
        Debug.Log ( "JAVA_HOME in editor was: " + Environment.GetEnvironmentVariable ( "JAVA_HOME" ) );
        string newJDKPath = EditorApplication.applicationPath.Replace ( "Unity.app", "PlaybackEngines/AndroidPlayer/OpenJDK" );
        if ( Environment.GetEnvironmentVariable ( "JAVA_HOME" ) != newJDKPath ) {
            Environment.SetEnvironmentVariable ( "JAVA_HOME", newJDKPath );
        }
        Debug.Log ( "JAVA_HOME in editor set to: " + Environment.GetEnvironmentVariable ( "JAVA_HOME" ) );
    }
#endif
}