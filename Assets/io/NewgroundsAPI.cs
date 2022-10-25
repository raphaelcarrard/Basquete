using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using io.newgrounds;

public class NewgroundsAPI : MonoBehaviour
{
    #region VARIABLES
    /// <summary>
    /// Variables that will be part of the instance
    /// </summary>

    public io.newgrounds.core ngio_core;
    private io.newgrounds.objects.user ngio_player;

    public class Medal
    {
        public string name { get; set; }
        public int id { get; set; }
        public bool unlocked { get; set; }
    }
    
    public List<Medal> Medals = new List<Medal>();

    public class Scoreboard
    {
        public string name { get; set; }
        public int id { get; set; }
    }

    public List<Scoreboard> Scoreboards = new List<Scoreboard>();

    #endregion

    void Awake()
    {
        //Keeps the API object loaded when changing scenes
        DontDestroyOnLoad(gameObject);
    }

    #region NEWGROUNDS API/USER/MEDAL INITIALIZATION
    /// <summary>
    /// The Start event function called by Unity (only called once) - occurs after Awake() and OnEnable()
    /// Will connect to NG to get the session id, then check if a use is logged in
    /// If a user is logged in, we will have access to their medal information
    /// </summary>
    
    void Start()
    {
        ngio_core.onReady(() => {
            
            // Call the server to check login status
            ngio_core.checkLogin((bool logged_in) => {
                if(logged_in)
                {
                    onLoggedIn();
                }
                else
                {
                    // Opens Newgrounds Passport
                    requestLogin();
                }
            });
        });
    }

    // Gets called when the player is signed in
    void onLoggedIn()
    {
        unlockMedal(65126);
        ngio_player = ngio_core.current_user;
        LoadPlayerMedals();
    }

    void onLoginFailed()
    {
        // Do something here if you want
        io.newgrounds.objects.error error = ngio_core.login_error;
    }

    void onLoginCancelled()
    {
        // Do something, not neccessary
    }

    // This opens the Newgrounds Passport URL
    void requestLogin()
    {
        ngio_core.requestLogin(onLoggedIn, onLoginFailed, onLoginCancelled);
    }

    public void LoadPlayerMedals()//load the medals
    {
        io.newgrounds.components.Medal.getList get_list = new io.newgrounds.components.Medal.getList();
        Action<io.newgrounds.results.Medal.getList> x;
        
        get_list.callWith(ngio_core, x = (io.newgrounds.results.Medal.getList result) => 
        {
            Debug.Log(result.medals);
            foreach (io.newgrounds.objects.medal Medal in result.medals)
            {
                Medals.Add(new Medal { name = Medal.name, id = Medal.id, unlocked = Medal.unlocked });
            }
        });
    }
    #endregion

    #region MEDAL FUNCTIONS

    // Medal Inspector Functions
    public void AddMedal()
    {
        Medals.Add(new Medal { name = "", id = 0, unlocked = false });
    }

    public void RemoveMedal()
    {
        if(Medals.Count >= 1)
        {
            Medals.RemoveAt(Medals.Count - 1);
        }
    }

    public void unlockMedal(int medal_id){
        io.newgrounds.components.Medal.unlock medal_unlock = new io.newgrounds.components.Medal.unlock();
        
        medal_unlock.id = medal_id;
        medal_unlock.callWith(ngio_core);

        Debug.Log("Medal ID: " + medal_unlock.id + " has been unlocked.");
    }
    /*
    public void UnlockNGMedal(string medalNameUnlock)
    {
        for(int i = 0; i < medalList.Count; i++)
        {
            if (medalList[i].medalName.Equals(medalNameUnlock))
            {
                if (!medalList[i].medalUnlocked)
                {
                    io.newgrounds.components.Medal.unlock medalUnlockObject = new io.newgrounds.components.Medal.unlock();
                    medalUnlockObject.id = medalList[i].medalID;
                    medalUnlockObject.callWith(_ngio_core, onMedalUnlocked);
                }
            }
        }
    }
    public void onMedalUnlocked(io.newgrounds.results.Medal.unlock result)
    {
        io.newgrounds.objects.medal medal = result.medal;
        for (int i = 0; i < medalList.Count; i++)
        {
            if (medalList[i].medalName.Equals(result.medal.name))
            {
                medalList[i].medalUnlocked = true;
            }
        }
    }
    */
    #endregion

    #region SCOREBOARD FUNCTIONS

    // Scoreboard Inspector Functions
    public void AddScoreboard()
    {
        Scoreboards.Add(new Scoreboard { name = "", id = 0 });
    }

    public void RemoveScoreboard()
    {
        if(Scoreboards.Count >= 1)
        {
            Scoreboards.RemoveAt(Scoreboards.Count - 1);
        }
    }

    public void postScore(int score_id, int score){
        io.newgrounds.components.ScoreBoard.postScore submit_score = new io.newgrounds.components.ScoreBoard.postScore();
        
        submit_score.id = score_id;
        submit_score.value = score;
        submit_score.callWith(ngio_core);
        
        Debug.Log("Posted Score of " + submit_score.value + " to the leaderboard.");
    }

    #endregion

    #region AUTOMATICALLY SET CORE
    /// <summary>
    /// NewgroundsWindow.cs calls this to load the core script
    /// </summary>
    /// <param name="core"></param>
    public void SetCore(core core)
    {
        ngio_core = core;
    }
    #endregion
}
