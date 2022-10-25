using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{

    public static UIManager instance;
    public Text desafio1, desafio2, desafio3;
    public Text numBolas;
    public Toggle desafio1T, desafio2T, desafio3T;
    public Text moedasUI;
    public Button entendiBtn;
    public Text desafio1Ap, desafio2Ap, desafio3Ap;
    public Text txtWL;
    public Button voltarBtn, novamenteBtn;
    public List<int> bolas;
    public Image menuImg;
    public Sprite[] imagemSp;
    public int aux = 0;
    public Button[] compraBtn;
    private Button sobe, desce;
    public GameObject[] bolasPrefab;
    public Transform pos;

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
        bolas = new List<int>();
        bolas.Add(0);
        if (!PlayerPrefs.HasKey("Bola0"))
        {
            PlayerPrefs.SetInt("Bola0", bolas[0]);
            PlayerPrefs.SetInt("list_Count", 1);
            print("salvo");
        }
        for (int i = 1; i < PlayerPrefs.GetInt("list_Count"); i++)
        {
            bolas.Add(PlayerPrefs.GetInt("Bola" + i));
        }
        if (OndeEstou.instance.fase == 1)
        {
            menuImg = GameObject.FindWithTag("imgBolasLoja").GetComponent<Image>();
            moedasUI = GameObject.FindWithTag("coinUI").GetComponent<Text>();
            desafio1T = GameObject.FindWithTag("togg1").GetComponent<Toggle>();
            desafio2T = GameObject.FindWithTag("togg2").GetComponent<Toggle>();
            desafio3T = GameObject.FindWithTag("togg3").GetComponent<Toggle>();
            desafio1 = GameObject.FindWithTag("d1").GetComponent<Text>();
            desafio2 = GameObject.FindWithTag("d2").GetComponent<Text>();
            desafio3 = GameObject.FindWithTag("d3").GetComponent<Text>();
        }
        SceneManager.sceneLoaded += Carrega;
    }

    void Carrega(Scene cena, LoadSceneMode modo)
    {
        if (OndeEstou.instance.fase == 1)
        {
            txtWL = GameObject.FindWithTag("txtWl").GetComponent<Text>();
            voltarBtn = GameObject.FindWithTag("btnVoltar").GetComponent<Button>();
            novamenteBtn = GameObject.FindWithTag("btnNovamente").GetComponent<Button>();
            entendiBtn = GameObject.FindWithTag("btnEntendi").GetComponent<Button>();
            numBolas = GameObject.FindWithTag("numBolas").GetComponent<Text>();
            numBolas.text = GameManager.instance.numJogadas.ToString();
            desafio1T = GameObject.FindWithTag("togg1").GetComponent<Toggle>();
            desafio2T = GameObject.FindWithTag("togg2").GetComponent<Toggle>();
            desafio3T = GameObject.FindWithTag("togg3").GetComponent<Toggle>();
            desafio1 = GameObject.FindWithTag("d1").GetComponent<Text>();
            desafio2 = GameObject.FindWithTag("d2").GetComponent<Text>();
            desafio3 = GameObject.FindWithTag("d3").GetComponent<Text>();
            desafio1Ap = GameObject.FindWithTag("desafio1Ap").GetComponent<Text>();
            desafio2Ap = GameObject.FindWithTag("desafio2Ap").GetComponent<Text>();
            desafio3Ap = GameObject.FindWithTag("desafio3Ap").GetComponent<Text>();
            menuImg = GameObject.FindWithTag("imgBolasLoja").GetComponent<Image>();
            menuImg.sprite = imagemSp[PlayerPrefs.GetInt("Bola" + bolas[0])];
            sobe = GameObject.FindWithTag("btnCima").GetComponent<Button>();
            desce = GameObject.FindWithTag("btnBaixo").GetComponent<Button>();
            sobe.onClick.AddListener(CimaBolas);
            desce.onClick.AddListener(BaixoBolas);
            aux = 0;
        }
        moedasUI = GameObject.FindWithTag("coinUI").GetComponent<Text>();
        moedasUI.text = ScoreManager.instance.CarregarDados().ToString("c");
        AtualizaBtnBola();
    }

    // Start is called before the first frame update
    void Start()
    {
        if (OndeEstou.instance.fase == 1)
        {
            numBolas.text = GameManager.instance.numJogadas.ToString();
            menuImg.sprite = imagemSp[PlayerPrefs.GetInt("Bola" + bolas[0])];
        }
    }

    public void Compra(int id)
    {
        if (id == 1)
        {
            if (ScoreManager.instance.CarregarDados() >= 50)
            {
                ChamaCompra(1);
                ScoreManager.instance.PerdeMoedas(50);
                moedasUI.text = ScoreManager.instance.CarregarDados().ToString("c");
            }
            else
            {
                print("Você não tem dinheiro para comprar esta bola!");
            }
        }else if (id == 2)
        {
            if (ScoreManager.instance.CarregarDados() >= 100)
            {
                ChamaCompra(2);
                ScoreManager.instance.PerdeMoedas(100);
                moedasUI.text = ScoreManager.instance.CarregarDados().ToString("c");
            }
            else
            {
                print("Você não tem dinheiro para comprar esta bola!");
            }
        }
        else if(id == 3)
        {
            if (ScoreManager.instance.CarregarDados() >= 150)
            {
                ChamaCompra(3);
                ScoreManager.instance.PerdeMoedas(150);
                moedasUI.text = ScoreManager.instance.CarregarDados().ToString("c");
            }
            else
            {
                print("Você não tem dinheiro para comprar esta bola!");
            }
        }
        else if(id == 4)
        {
            if (ScoreManager.instance.CarregarDados() >= 200)
            {
                ChamaCompra(4);
                ScoreManager.instance.PerdeMoedas(200);
                moedasUI.text = ScoreManager.instance.CarregarDados().ToString("c");
            }
            else
            {
                print("Você não tem dinheiro para comprar esta bola!");
            }
        }
        else if(id == 5)
        {
            if (ScoreManager.instance.CarregarDados() >= 250)
            {
                ChamaCompra(5);
                ScoreManager.instance.PerdeMoedas(250);
                moedasUI.text = ScoreManager.instance.CarregarDados().ToString("c");
            }
            else
            {
                print("Você não tem dinheiro para comprar esta bola!");
            }
        }
        else if(id == 6)
        {
            if (ScoreManager.instance.CarregarDados() >= 300)
            {
                ChamaCompra(6);
                ScoreManager.instance.PerdeMoedas(300);
                moedasUI.text = ScoreManager.instance.CarregarDados().ToString("c");
            }
            else
            {
                print("Você não tem dinheiro para comprar esta bola!");
            }
        }
        else if(id == 7)
        {
            if (ScoreManager.instance.CarregarDados() >= 350)
            {
                ChamaCompra(7);
                ScoreManager.instance.PerdeMoedas(350);
                moedasUI.text = ScoreManager.instance.CarregarDados().ToString("c");
            }
            else
            {
                print("Você não tem dinheiro para comprar esta bola!");
            }
        }
        else if(id == 8)
        {
            if (ScoreManager.instance.CarregarDados() >= 400)
            {
                ChamaCompra(8);
                ScoreManager.instance.PerdeMoedas(400);
                moedasUI.text = ScoreManager.instance.CarregarDados().ToString("c");
            }
            else
            {
                print("Você não tem dinheiro para comprar esta bola!");
            }
        }
        else if (id == 9)
        {
            if (ScoreManager.instance.CarregarDados() >= 500)
            {
                ChamaCompra(9);
                ScoreManager.instance.PerdeMoedas(500);
                moedasUI.text = ScoreManager.instance.CarregarDados().ToString("c");
            }
            else
            {
                print("Você não tem dinheiro para comprar esta bola!");
            }
        }
    }

    void ChamaCompra(int id)
    {
        bolas.Add(id);
        PlayerPrefs.SetInt("list_Count", bolas.Count);
        PlayerPrefs.SetInt("Bola" + id, id);
        compraBtn[id - 1].interactable = false;
        if (id != 9)
        {
            compraBtn[id].interactable = true;
        }
        if (bolas.Contains(id))
        {
            compraBtn[id - 1].GetComponentInChildren<Text>().text = "Bought";
            compraBtn[id - 1].GetComponentInChildren<Text>().color = new Color(0, 1, 0, 1);
        }
    }

    void AjustaBolasBtn(int x)
    {
        compraBtn[x].interactable = false;
        compraBtn[x].GetComponentInChildren<Text>().text = "Bought";
        compraBtn[x].GetComponentInChildren<Text>().color = new Color(0, 1, 0, 1);
    }

    void BaixoBolas()
    {
        if (aux < bolas.Count - 1)
        {
            aux++;
            menuImg.sprite = imagemSp[PlayerPrefs.GetInt("Bola" + aux)];
        }
    }


    void CimaBolas()
    {
        if (aux >= 1)
        {
            aux--;
            menuImg.sprite = imagemSp[PlayerPrefs.GetInt("Bola" + aux)];
        }
    }

    void AtualizaBtnBola()
    {
        if (OndeEstou.instance.fase == 2)
        {
            compraBtn = new Button[9];
            compraBtn[0] = GameObject.FindWithTag("btnCompra1").GetComponent<Button>();
            compraBtn[1] = GameObject.FindWithTag("btnCompra2").GetComponent<Button>();
            compraBtn[2] = GameObject.FindWithTag("btnCompra3").GetComponent<Button>();
            compraBtn[3] = GameObject.FindWithTag("btnCompra4").GetComponent<Button>();
            compraBtn[4] = GameObject.FindWithTag("btnCompra5").GetComponent<Button>();
            compraBtn[5] = GameObject.FindWithTag("btnCompra6").GetComponent<Button>();
            compraBtn[6] = GameObject.FindWithTag("btnCompra7").GetComponent<Button>();
            compraBtn[7] = GameObject.FindWithTag("btnCompra8").GetComponent<Button>();
            compraBtn[8] = GameObject.FindWithTag("btnCompra9").GetComponent<Button>();
            compraBtn[0].onClick.AddListener(() => Compra(1));
            compraBtn[1].onClick.AddListener(() => Compra(2));
            compraBtn[2].onClick.AddListener(() => Compra(3));
            compraBtn[3].onClick.AddListener(() => Compra(4));
            compraBtn[4].onClick.AddListener(() => Compra(5));
            compraBtn[5].onClick.AddListener(() => Compra(6));
            compraBtn[6].onClick.AddListener(() => Compra(7));
            compraBtn[7].onClick.AddListener(() => Compra(8));
            compraBtn[8].onClick.AddListener(() => Compra(9));
            if (bolas.Contains(1))
            {
                AjustaBolasBtn(0);
                if (!bolas.Contains(2))
                {
                    compraBtn[1].interactable = true;
                }
            }
            if (bolas.Contains(2))
            {
                AjustaBolasBtn(1);
            }
            if (bolas.Contains(3))
            {
                AjustaBolasBtn(2);
            }
            if (bolas.Contains(4))
            {
                AjustaBolasBtn(3);
            }
            if (bolas.Contains(5))
            {
                AjustaBolasBtn(4);
            }
            if (bolas.Contains(6))
            {
                AjustaBolasBtn(5);
            }
            if (bolas.Contains(7))
            {
                AjustaBolasBtn(6);
            }
            if (bolas.Contains(8))
            {
                AjustaBolasBtn(7);
            }
            if (bolas.Contains(9))
            {
                AjustaBolasBtn(8);
            }
        }
    }

    // Update is called once per frame
    void Update()
    {

    }
}
