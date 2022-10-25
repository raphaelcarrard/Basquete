using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EventoLimpaShots : MonoBehaviour
{
    // Start is called before the first frame update
    void LimpaRimShot()
    {
        GameManager.instance.rimShot = false;
    }
}
