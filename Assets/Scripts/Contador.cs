using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Contador : MonoBehaviour
{
    void EventoContagem()
    {
        gameObject.GetComponent<Text>().enabled = false;
        GameManager.instance.jogoExecutando = true;
        GameManager.instance.PrimeiraJogada();
    }
}
