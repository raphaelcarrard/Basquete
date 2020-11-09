using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CarregaNFases : MonoBehaviour
{
    public void Carregamento(string s)
    {
        SceneManager.LoadScene(s);
    }

    public void SairDoJogo()
        {
            Application.Quit();
        } 
}
