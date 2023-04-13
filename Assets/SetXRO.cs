using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetXRO : MonoBehaviour
{   
    public GameObject XRorigin;
    // Start is called before the first frame update

    
    void Awake()
    {
        SkyBox.XROrigin = XRorigin;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
