using UnityEditor;
using UnityEngine;
using io.newgrounds;

public class NewgroundsWindow : EditorWindow
{
    string appID;
    string key;

    /// <summary>
    /// Will create the window needed for the Editor
    /// </summary>
    [MenuItem("Window/Newgrounds.io")]
    public static void ShowWindow()
    {
        GetWindow<NewgroundsWindow>("Newgrounds.io");
    }

    /// <summary>
    /// Will update the layout window needed for the Editor
    /// </summary>
    private void OnGUI()
    {
        //Window Layout - Vertical - Content is stacked
        EditorGUILayout.BeginVertical();
        GUILayout.FlexibleSpace();

        //Grab the icon -- file placement is important or it won't load
        Texture2D icon = new Texture2D(200,100);
        foreach (string assetGuid in AssetDatabase.FindAssets("ngio_logo"))
        {
            string assetPath = AssetDatabase.GUIDToAssetPath(assetGuid);
            icon = AssetDatabase.LoadAssetAtPath(assetPath, typeof(Texture2D)) as Texture2D;
        }
        GUILayout.Box(icon);

        //Header with style
        GUIStyle headerStyle = new GUIStyle();
        headerStyle.wordWrap = true;
        EditorGUI.indentLevel += 1;
        EditorGUILayout.LabelField("Welcome to Newgrounds.io", headerStyle);
        
        //Introduction
        GUIStyle introStyle = new GUIStyle();
        introStyle.wordWrap = true;
        EditorGUILayout.LabelField("After creating a game project on Newgrounds, please enter the App ID and Session ID to create your Newgrounds API Manager.", introStyle);
        EditorGUI.indentLevel -= 1;

        EditorGUILayout.Space();

        //APP ID input
        appID = EditorGUILayout.TextField("App ID: ", appID);

        //KEY input
        key = EditorGUILayout.TextField("Encryption Key  ", key );

        EditorGUILayout.Space();

        //Button to create the GameObject with correct settings
        if (GUILayout.Button("Create Starter Objects and Files"))
        {
            GameObject NewgroundsWrapper = new GameObject();
            NewgroundsWrapper.name = "Newgrounds.io";
            NewgroundsWrapper.AddComponent<core>();
            NewgroundsWrapper.GetComponent<core>().app_id = appID;
            NewgroundsWrapper.GetComponent<core>().aes_base64_key = key;
            NewgroundsWrapper.AddComponent<NewgroundsAPI>();
            NewgroundsWrapper.GetComponent<NewgroundsAPI>().SetCore(NewgroundsWrapper.GetComponent<core>());

            this.Close();
        }
        Repaint(); // allows text to update
        EditorGUILayout.EndVertical();
    }
}
