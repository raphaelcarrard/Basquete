using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    [System.Serializable]
    public class DesafiosTxt
    {
        public int ondeEstou;
        public string desafioRim, desafioSwish, desafioSky;
        public int desafioInt1RimShot = 0, desafioInt2SwishShot = 0, desafioInt3SkyHook = 0;
        public int numeroJogadas;
    }
    public List<DesafiosTxt> desafiosList;

    void ListaAdd()
    {
        foreach (DesafiosTxt desaf in desafiosList)
        {
            if (desaf.ondeEstou == OndeEstou.instance.fase)
            {
                UIManager.instance.desafio1.text = desaf.desafioRim;
                UIManager.instance.desafio2.text = desaf.desafioSwish;
                UIManager.instance.desafio3.text = desaf.desafioSky;
                desafioNum1RimShot = desaf.desafioInt1RimShot;
                desafioNum2SwishShot = desaf.desafioInt2SwishShot;
                desafioNum3SkyHook = desaf.desafioInt3SkyHook;
                numJogadas = desaf.numeroJogadas;
                UIManager.instance.desafio1Ap.text = desaf.desafioRim;
                UIManager.instance.desafio2Ap.text = desaf.desafioSwish;
                UIManager.instance.desafio3Ap.text = desaf.desafioSky;
                break;
            }
        }
    }

    public static GameManager instance;
    public int desafioNum1RimShot, desafioNum2SwishShot, desafioNum3SkyHook;
    public bool bolaEmCena;
    public int numJogadas;
    public GameObject[] bolaPrefab;
    [SerializeField]
    private Transform posDireita, posEsquerda, posCima, posBaixo;
    public bool jogoExecutando = true, win = false, lose = false;
    public GameObject mao, bolinhas;
    public int primeiraVez = 0;
    public int pontos = 0;
    public bool rimShot = false, swishShot = false, skyHook = false;
    public int moedasIntSave;
    [SerializeField]
    private GameObject fundo, tela, telaWL;
    [SerializeField]
    private Animator animCont;
    private Animator maoAnim, bolinhasAnim;

    public void LiberaContagem()
    {
        fundo.gameObject.SetActive(false);
        tela.gameObject.SetActive(false);
        telaWL.SetActive(false);
        animCont.Play("ContadorAnim");
    }

    void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
        if (PlayerPrefs.HasKey("PrimeiraVez") == false)
        {
            PlayerPrefs.SetInt("PrimeiraVez", 0);
            primeiraVez = PlayerPrefs.GetInt("PrimeiraVez");
        }
        SceneManager.sceneLoaded += Carrega;
    }

    void Carrega(Scene cena, LoadSceneMode modo)
    {
        StartGame();
        ListaAdd();
        posDireita = GameObject.FindWithTag("Direita_Pos").GetComponent<Transform>();
        posEsquerda = GameObject.FindWithTag("Esquerda_Pos").GetComponent<Transform>();
        posCima = GameObject.FindWithTag("Cima_Pos").GetComponent<Transform>();
        posBaixo = GameObject.FindWithTag("Baixo_Pos").GetComponent<Transform>();
        fundo = GameObject.FindWithTag("fundoC");
        tela = GameObject.FindWithTag("telaDesafio");
        animCont = GameObject.FindWithTag("contador").GetComponent<Animator>();
        telaWL = GameObject.FindWithTag("telaWL");
        maoAnim = GameObject.FindWithTag("mao").GetComponent<Animator>();
        bolinhasAnim = GameObject.FindWithTag("bolinhas").GetComponent<Animator>();
        primeiraVez = PlayerPrefs.GetInt("PrimeiraVez");
        if (primeiraVez == 0 || primeiraVez == 1)
        {
            PegaSpritesTutorial();
            if (primeiraVez == 1)
            {
                Matador(mao.gameObject, bolinhas.gameObject);
            }
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        StartGame();
        ListaAdd();
        bolaEmCena = true;
    }

    // Update is called once per frame
    void Update()
    {
        if (numJogadas <= 0)
        {
            if (desafioNum1RimShot > 0 || desafioNum2SwishShot > 0 || desafioNum3SkyHook > 0)
            {
                YouLose();
            }
        }
        else if (numJogadas > 0 && desafioNum1RimShot <= 0 && desafioNum2SwishShot <= 0 && desafioNum3SkyHook <= 0)
        {
            YouWin();
        }
    }

    public void NascBolas()
    {
        GameObject bolaClone = Instantiate(bolaPrefab[UIManager.instance.aux], new Vector2(Random.Range(posEsquerda.position.x, posDireita.position.x), Random.Range(posCima.position.y, posBaixo.position.y)), Quaternion.identity) as GameObject;
        bolaEmCena = true;
        SegueBola.alvo = bolaClone.transform;
    }

    public void DesligaTuto()
    {
        Matador(mao.gameObject, bolinhas.gameObject);
        PlayerPrefs.SetInt("PrimeiraVez",1);
    }

    void Matador(GameObject obj, GameObject obj2)
    {
        Destroy(obj);
        Destroy(obj2);
    }

    void PegaSpritesTutorial()
    {
        mao = GameObject.FindWithTag("mao");
        bolinhas = GameObject.FindWithTag("bolinhas");
    }

    void Novamente()
    {
        SceneManager.LoadScene("Level1");
    }

    void Voltar()
    {
        SceneManager.LoadScene("MenuInicial");
    }

    void StartGame()
    {
        UIManager.instance.novamenteBtn.onClick.AddListener(Novamente);
        UIManager.instance.voltarBtn.onClick.AddListener(Voltar);
        UIManager.instance.entendiBtn.onClick.AddListener(LiberaContagem);
        jogoExecutando = false;
        pontos = 0;
        win = false;
        lose = false;
        moedasIntSave = ScoreManager.instance.CarregarDados();
        UIManager.instance.moedasUI.text = moedasIntSave.ToString("c");
    }

    public void DesafioDeFase(int fase)
    {
        if (OndeEstou.instance.fase == fase)
        {
            if (desafioNum1RimShot == 0)
            {
                UIManager.instance.desafio1T.isOn = true;
                print("RimShot completo!");
            }
        }

        if (OndeEstou.instance.fase == fase)
        {
            if (desafioNum2SwishShot == 0)
            {
                UIManager.instance.desafio2T.isOn = true;
                print("SwishShot completo!");
            }
        }

        if (OndeEstou.instance.fase == fase)
        {
            if (desafioNum3SkyHook == 0)
            {
                UIManager.instance.desafio3T.isOn = true;
                print("SkyHook completo!");
            }
        }
    }

    void YouWin()
    {
        if (jogoExecutando == true)
        {
            win = true;
            jogoExecutando = false;
            print("Venceu!");
            ScoreManager.instance.SalvarDados(moedasIntSave);
            telaWL.gameObject.SetActive(true);
            UIManager.instance.txtWL.text = "YOU WIN!";
        }
    }

    void YouLose()
    {
        if (jogoExecutando == true)
        {
            lose = true;
            jogoExecutando = false;
            print("Perdeu! :(");
            ScoreManager.instance.SalvarDados(moedasIntSave);
            telaWL.gameObject.SetActive(true);
            UIManager.instance.txtWL.text = "GAME OVER";
        }
    }

    public void PrimeiraJogada()
    {
        if (jogoExecutando == true && primeiraVez == 0)
        {
            if (mao != null && bolinhas != null)
            {
                maoAnim.Play("mao");
                bolinhasAnim.Play("bolinhas");
                print("animando...");
            }
            print(primeiraVez);
        }
    }
}
