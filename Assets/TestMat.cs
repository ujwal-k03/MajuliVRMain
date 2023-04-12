using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class TestMat : MonoBehaviour
{   
    public List<Material> materialList;
    public InputAction action;
    public InputActionReference actionRef;
    int ctr;
    // Start is called before the first frame update
    void Start()
    {
        ctr = 0;
        RenderSettings.skybox = materialList[0];
    }

    void OnEnable()
    {
        action.Enable();
    }

    // Update is called once per frame
    void Update()
    {
        if(action.triggered || actionRef.action.triggered){
            ctr++;
            RenderSettings.skybox = materialList[ctr];
        }
    }
}
