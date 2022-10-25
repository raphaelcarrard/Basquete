using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CarregaNFases : MonoBehaviour
{

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

    public void Carregamento()
    {
        unlockMedal(71250);
        SceneManager.LoadScene("Level1");
    }

    public void CarregaLoja(){
        unlockMedal(71251);
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
