using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Controller : MonoBehaviour
{
    public GameObject CurrentlyInside;
    public Material transparentMaterial;
    //Mouse Rotation
    // public float mouseSensitivityX = 100f;
    // public float mouseSensitivityY = 100f;

    // private float xRotation = 0f;
    // private float yRotation = 0f;
    
    void Start()
    {
        // transform.position = new Vector3(0,0,0);
        // Cursor.lockState = CursorLockMode.Locked;
        // Cursor.visible = false;
        transparentMaterial = Resources.Load<Material>("Materials/OtherMaterials/Transparent");
    }
    void Update()
    {
        //Mouse Rotation: 
        // float mouseX = Input.GetAxis("Mouse X") * mouseSensitivityX * Time.deltaTime;
        // float mouseY = Input.GetAxis("Mouse Y") * mouseSensitivityY * Time.deltaTime;
        // xRotation -= mouseY;
        // xRotation = Mathf.Clamp(xRotation, -90f, 90f);
        // yRotation += mouseX;
        // transform.rotation = Quaternion.Euler(xRotation, yRotation, 0f);
    }


}
