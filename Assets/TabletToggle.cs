using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Hands.Samples.VisualizerSample;

public class TabletToggle : MonoBehaviour
{   
    [SerializeField]
    public InputActionReference leftPinch;
    public LeftHandVisualizer leftHandVisualizer;
    public GameObject leftHand;
    // public RightHandVisualizer rightHandVisualizer;
    [SerializeField]
    public InputActionReference rightPinch;
    public GameObject tablet;
    
    public InputAction keyPress;

    bool leftHandIsPinched, rightHandIsPinched;

    // Start is called before the first frame update
    void Start()
    {   
        tablet.SetActive(false);
        leftHandIsPinched = false;
        rightHandIsPinched = false;
    }

    void OnEnable()
    {
        keyPress.Enable();
    }

    void OnDisable()
    {
        keyPress.Disable();
    }

    // Update is called once per frame
    void Update()
    {   
        UpdateTabletVisibility();
    }

    void UpdateTabletVisibility()
    {   
        bool leftHandWasPinched = leftHandIsPinched;
        bool rightHandWasPinched = rightHandIsPinched;

        leftHandIsPinched = leftPinch.action.IsPressed();
        rightHandIsPinched = rightPinch.action.IsPressed();

        if(!leftHandWasPinched || !rightHandWasPinched)
            if(leftHandIsPinched && rightHandIsPinched)
                ToggleTablet();
                

        // Alternate bind for testing
        if(keyPress.triggered)
            ToggleTablet();
        
    }

    void ToggleTablet()
    {
        tablet.SetActive(!tablet.activeSelf);
        leftHand.SetActive(!leftHand.activeSelf);
        leftHandVisualizer.enabled = !leftHandVisualizer.enabled;
    }

}
