using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveMoedasSprite : MonoBehaviour
{

    private float vel = 2;

    // Update is called once per frame
    void Update()
    {
        transform.Translate(Vector2.up * vel * Time.deltaTime);
    }

    public void MorteMoeda()
    {
        Destroy(gameObject);
    }
}
