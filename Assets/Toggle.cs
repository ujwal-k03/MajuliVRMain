using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class Toggle : MonoBehaviour
{   
    private bool isTab;
    public GameObject tablet;

    [SerializeField]
    public GameObject[] disabledObjects;
    // private bool 

    public InputAction primaryX;

    private void OnEnable()
    {
        primaryX.Enable();
    }

    private void OnDisable()
    {
        primaryX.Disable();
    }
    // Start is called before the first frame update
    void Start()
    {
        isTab = false;
    }

    // Update is called once per frame
    void Update()
    {
        if(primaryX.triggered)
            isTab = !isTab;
    }

    private void DisableObjects()
    {
        for(int i=0; i<disabledObjects.Length; i++)
        {
            disabledObjects[i].SetActive(false);
        }
    }

    private void EnableObjects()
    {
        for(int i=0; i<disabledObjects.Length; i++)
        {
            disabledObjects[i].SetActive(true);
        }
    }

    void FixedUpdate()
    {
        if(isTab){
            tablet.SetActive(true);
            DisableObjects();
        } else {
            tablet.SetActive(false);
            EnableObjects();
        }
    }
}
