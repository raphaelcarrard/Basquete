using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VerificaAreaRestrita : MonoBehaviour
{

    public static bool restrita = false;

    private void OnMouseOver()
    {
        if (restrita == false)
        {
            restrita = true;
            print(restrita);
        }
    }

    private void OnMouseExit()
    {
        if (restrita == true)
        {
            restrita = false;
            print(restrita);
        }
    }
}
