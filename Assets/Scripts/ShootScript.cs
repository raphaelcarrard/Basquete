﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class ShootScript : MonoBehaviour
{
    private float forca = 2.0f;
    private Vector2 startPos;
    [SerializeField]
    private bool tiro = false;
    [SerializeField]
    private bool mirando = false;
    [SerializeField]
    private GameObject dotsGO;
    private List<GameObject> caminho;
    [SerializeField]
    private Rigidbody2D myRBody;
    [SerializeField]
    private Collider2D myCollider;
    private Vector2 vel;
    [SerializeField]
    private float valorX, valorY;
    [SerializeField]
    private bool bateuAro = false;
    [SerializeField]
    private bool bateuTabela = false;
    [SerializeField]
    public static bool fezponto;
    [SerializeField]
    private bool liberaSky;
    private Animator anim;

    public io.newgrounds.core ngio_core;

    void onMedalUnlocked(io.newgrounds.results.Medal.unlock result) {
		io.newgrounds.objects.medal medal = result.medal;
		Debug.Log( "Medal Unlocked: " + medal.name + " (" + medal.value + " points)" );
	}

    void unlockMedal(int medal_id) {
        io.newgrounds.components.Medal.unlock medal_unlock = new io.newgrounds.components.Medal.unlock();
        medal_unlock.id = medal_id;
        medal_unlock.callWith(ngio_core, onMedalUnlocked);
    }

    // Start is called before the first frame update
    void Start()
    {
        ngio_core = GameObject.Find("Newgrounds.io Object").GetComponent<io.newgrounds.core>();
        anim = GameObject.FindWithTag("RimTxt").GetComponent<Animator>();
        liberaSky = false;
        fezponto = false;
        dotsGO = GameObject.FindWithTag("dots");
        myRBody.isKinematic = true;
        myCollider.enabled = false;
        startPos = transform.position;
        caminho = dotsGO.transform.Cast<Transform>().ToList().ConvertAll(t => t.gameObject);
        for (int x=0; x < caminho.Count;x++)
        {
            caminho[x].GetComponent<Renderer>().enabled = false;
        }
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (GameManager.instance.jogoExecutando == true)
        {
            Vector2 wp = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            RaycastHit2D hit = Physics2D.Raycast(wp, Vector2.zero);
            if (hit.collider == null)
            {
                if (!myRBody.gameObject.CompareTag("bolaclone"))
                {
                    Mirando();
                }
            }
        }
    }

    void Update()
    {
        if (GameManager.instance.jogoExecutando == true)
        {
            if (!myRBody.isKinematic)
            {
                if (bateuTabela == false)
                {
                    if (bateuAro == true && fezponto == true && liberaSky == false)
                    {
                        GameManager.instance.rimShot = true;
                        fezponto = false;
                        GameManager.instance.desafioNum1RimShot--;
                        GameManager.instance.DesafioDeFase(OndeEstou.instance.fase);
                        anim.Play("RimShotAnim");
                        unlockMedal(71260);
                    }
                    else if (fezponto == true && liberaSky == false)
                    {
                        GameManager.instance.swishShot = true;
                        fezponto = false;
                        GameManager.instance.desafioNum2SwishShot--;
                        GameManager.instance.DesafioDeFase(OndeEstou.instance.fase);
                        anim.Play("RimShotAnim");
                        unlockMedal(71261);
                    }
                }
                if (liberaSky == true && fezponto == true)
                {
                    GameManager.instance.skyHook = true;
                    fezponto = false;
                    GameManager.instance.desafioNum3SkyHook--;
                    GameManager.instance.DesafioDeFase(OndeEstou.instance.fase);
                    anim.Play("RimShotAnim");
                    unlockMedal(71262);
                }
            }
        }
    }

    void MostraCaminho()
    {
        for (int x = 0; x < caminho.Count; x++)
        {
            caminho[x].GetComponent<Renderer>().enabled = true;
        }
    }

    void EscondeCaminho()
    {
        for (int x = 0; x < caminho.Count; x++)
        {
            caminho[x].GetComponent<Renderer>().enabled = false;
        }
    }

    Vector2 PegaForca(Vector3 mouse)
    {
        return (new Vector2(startPos.x + valorX, startPos.y + valorY) - new Vector2(mouse.x, mouse.y)) * forca;
    }

    Vector2 CaminhoPonto(Vector2 posInicial,Vector2 velInicial,float tempo)
    {
        return posInicial + velInicial * tempo + 0.5f * Physics2D.gravity * tempo * tempo;
    }

    void CalculoCaminho()
    {
        vel = PegaForca(Input.mousePosition) * Time.fixedDeltaTime / myRBody.mass;
        for (int x = 0; x < caminho.Count; x++)
        {
            caminho[x].GetComponent<Renderer>().enabled = true;
            float t = x / 20f;
            Vector3 point = CaminhoPonto(transform.position, vel, t);
            point.z = 1.0f;
            caminho[x].transform.position = point;
        }
    }

    void Mirando()
    {
        if (tiro == true)
            return;
        if (Input.GetMouseButton(0) /*&& VerificaAreaRestrita.restrita == false*/)
        {
            if (GameManager.instance.primeiraVez == 0)
            {
                GameManager.instance.DesligaTuto();
            }
            if (mirando == false)
            {
                mirando = true;
                startPos = Input.mousePosition;
                CalculoCaminho();
                MostraCaminho();
            }
            else
            {
                CalculoCaminho();
            }
        }else if (mirando == true && tiro == false)
        {
            myRBody.isKinematic = false;
            myCollider.enabled = true;
            tiro = true;
            mirando = false;
            myRBody.AddForce(PegaForca(Input.mousePosition));
            EscondeCaminho();
        }
    }

    void OnBecameInvisible()
    {
        SegueBola.alvoInvisivel = true;
    }

    void OnBecameVisible()
    {
        SegueBola.alvoInvisivel = false;
    }

    void OnCollisionEnter2D(Collision2D col)
    {
        if (col.gameObject.CompareTag("aro"))
        {
            bateuAro = true;
        }
        if (col.gameObject.CompareTag("Tabela"))
        {
            bateuTabela = true;
        }
    }

    void OnTriggerEnter2D(Collider2D col) {
        if (col.gameObject.CompareTag("cesta"))
        {
            fezponto = true;
        }
    }

    void OnTriggerExit2D(Collider2D col)
    {
        if (col.gameObject.CompareTag("Sky"))
        {
            liberaSky = true;
        }
    }
}
