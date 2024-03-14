using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CarregaNFases : MonoBehaviour
{

    public void Carregamento()
    {
        NGHelper.instance.unlockMedal(71250);
        SceneManager.LoadScene("Level1");
    }

    public void CarregaLoja(){
        NGHelper.instance.unlockMedal(71251);
        SceneManager.LoadScene("Loja");
    }

    public void Menu(){
        SceneManager.LoadScene("MenuInicial");
    }

    public void SairDoJogo()
        {
            Application.Quit();
        } 
}
