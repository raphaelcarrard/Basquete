using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IdentPonto : MonoBehaviour
{
    [SerializeField]
    private AudioSource audioS;
    [SerializeField]
    private AudioClip clip;
    [SerializeField]
    private GameObject pontosImg;

    void OnTriggerExit2D(Collider2D col)
    {
        if (col.gameObject.CompareTag("bola") || col.gameObject.CompareTag("bolaclone"))
        {
            GameManager.instance.pontos++;
            GameManager.instance.moedasIntSave += GameManager.instance.pontos * 50;
            UIManager.instance.moedasUI.text = (GameManager.instance.moedasIntSave).ToString("c");
            ShootScript.fezponto = true;
            TocaAudio.TocadorDeAudio(audioS, clip);
            Instantiate(pontosImg, gameObject.transform.position, Quaternion.identity);
        }
    }
}
