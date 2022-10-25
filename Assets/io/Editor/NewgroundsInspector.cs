using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(NewgroundsAPI))]
public class NewgroundsInspector : Editor
{
    SerializedProperty ngio_core;
    SerializedProperty Medals;
    SerializedProperty Scoreboards;

    void OnEnable()
    {
        ngio_core = serializedObject.FindProperty("ngio_core");
        Medals = serializedObject.FindProperty("Medals");
        Scoreboards = serializedObject.FindProperty("Scoreboards");
    }

    public override void OnInspectorGUI()
    {
        // Displays a Custom Inspector GUI        
        NewgroundsAPI NGScript = (NewgroundsAPI)target;
        EditorGUILayout.PropertyField(ngio_core);
        EditorGUILayout.Space();

        // Starts a Horizontal Group
        GUILayout.BeginHorizontal();

        if(GUILayout.Button("Add Medal")){
            NGScript.AddMedal();
        }

        if(GUILayout.Button("Remove Medal")){
            NGScript.RemoveMedal();
        }
                
        // Ends a Horizontal Group
        GUILayout.EndHorizontal();
        //for (int i = 0; i < Medals.arraySize; i++)
        {
            GUILayout.BeginHorizontal();
/*
            currentName = name.GetArrayElementAtIndex(i);
            currentID = id.GetArrayElementAtIndex(i);
            currentUnlocked = unlocked.GetArrayElementAtIndex(i);

            EditorGUILayout.PropertyField(Medals.GetArrayElementAtIndex(i),
            new GUIContent ("Medal Name: " + EditorGUILayout.TextField(name.GetArrayElementAtIndex(i))));

            EditorGUILayout.PropertyField(Medals.GetArrayElementAtIndex(i),
            new GUIContent ("Medal ID: " + EditorGUILayout.IntField(id.GetArrayElementAtIndex(i))));

            EditorGUILayout.PropertyField(Medals.GetArrayElementAtIndex(i),
            new GUIContent (EditorGUILayout.Toggle(unlocked.GetArrayElementAtIndex(i))));

            EditorGUILayout.PropertyField(Medals.GetArrayElementAtIndex(i),
            new GUIContent ("Medal " + (i+1).ToString()));
            GUILayout.BeginHorizontal();

            EditorGUIUtility.labelWidth = 21;
            EditorGUILayout.LabelField("Medal Name:");
            EditorGUIUtility.labelWidth = 60;
            Medals.GetArrayElementAtIndex(i).name = EditorGUILayout.TextField(Medals.GetArrayElementAtIndex(i).name);

            EditorGUIUtility.labelWidth = 4;
            EditorGUILayout.LabelField("Medal ID:");
            EditorGUIUtility.labelWidth = 12;
            Medals.GetArrayElementAtIndex(i).id = EditorGUILayout.IntField(Medals.GetArrayElementAtIndex(i).id);

            EditorGUIUtility.labelWidth = 69;
            Medals.GetArrayElementAtIndex(i).unlocked = EditorGUILayout.Toggle("Unlocked:", Medals.GetArrayElementAtIndex(i).unlocked);
*/
            GUILayout.EndHorizontal();
        }

        //EditorGUI.indentLevel -= 1;
        //EditorGUILayout.PropertyField(Medals);

        EditorGUILayout.Space();

        // Starts a Horizontal Group
        GUILayout.BeginHorizontal();

        if(GUILayout.Button("Add Scoreboard"))
        {
            NGScript.AddScoreboard();
        }

        if(GUILayout.Button("Remove Scoreboard"))
        {
            NGScript.RemoveScoreboard();
        }
                
        // Ends a Horizontal Group
        GUILayout.EndHorizontal();

        for (int i = 0; i < this.Scoreboards.arraySize; i++)
        {
            GUILayout.BeginHorizontal();

            EditorGUIUtility.labelWidth = 108;
            EditorGUILayout.PropertyField(Scoreboards.GetArrayElementAtIndex(i),  
            new GUIContent ("Scoreboard Name:"));

            EditorGUIUtility.labelWidth = 86;
            EditorGUILayout.PropertyField(Scoreboards.GetArrayElementAtIndex(i),  
            new GUIContent ("Scoreboard ID:"));

            //GUILayout.FlexibleSpace();
            GUILayout.EndHorizontal();
        }            
        
        //EditorGUI.indentLevel -= 1;
        //EditorGUILayout.PropertyField(Scoreboards);
                
        DrawDefaultInspector();
    }
}
