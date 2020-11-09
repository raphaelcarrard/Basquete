using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioGO : MonoBehaviour
{
    [SerializeField]
    private AudioSource audioS;
    [SerializeField]
    private AudioClip clip;

    void OnCollisionEnter2D(Collision2D col)
    {
        if (col.gameObject.CompareTag("bola") || col.gameObject.CompareTag("bolaclone"))
        {
            TocaAudio.TocadorDeAudio(audioS, clip);
        }
    }
}
