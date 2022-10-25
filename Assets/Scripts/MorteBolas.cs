using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MorteBolas : MonoBehaviour
{

    [SerializeField]
    private float vidaBola = 1f;
    [SerializeField]
    private Color cor;
    [SerializeField]
    private Renderer bolaRender;
    [SerializeField]
    private bool tocouChao = false;

    // Start is called before the first frame update
    void Start()
    {
        bolaRender = gameObject.GetComponent<Renderer>();
        cor = bolaRender.material.GetColor("_Color");
    }

    // Update is called once per frame
    void Update()
    {
        if (tocouChao == true)
        {
            MataBola();
        }
    }

    void OnCollisionEnter2D(Collision2D col)
    {
        if (col.gameObject.CompareTag("chao"))
        {
            tocouChao = true;
        }
    }

    void MataBola()
    {
        if (vidaBola > 0)
        {
            vidaBola -= Time.deltaTime;
            bolaRender.material.SetColor("_Color", new Color(cor.r, cor.g, cor.b, vidaBola));
        }
        if (vidaBola <= 0)
        {
            GameManager.instance.bolaEmCena = false;
            Destroy(gameObject);
            if (gameObject.CompareTag("bola"))
            {
                GameManager.instance.numJogadas--;
                UIManager.instance.numBolas.text = GameManager.instance.numJogadas.ToString();
                if (GameManager.instance != null && GameManager.instance.numJogadas > 0)
                {
                    GameManager.instance.NascBolas();
                }
            }
        }
    }
}
