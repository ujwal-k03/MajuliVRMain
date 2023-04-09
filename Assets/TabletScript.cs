using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TabletScript : MonoBehaviour
{   
    public GameObject screen;
    // Start is called before the first frame update
    public void togglScreen()
    {
        screen.SetActive(!screen.activeSelf);
    }

    void Awake()
    {
        screen.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
