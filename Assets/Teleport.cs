using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Teleport : MonoBehaviour
{   
    public GameObject mySkyBox;


    public void teleport(){
        SkyBox.XROrigin.GetComponent<Controller>().CurrentlyInside.GetComponent<SkyBox>().teleport(mySkyBox);
    }
}
