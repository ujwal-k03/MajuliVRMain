using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArrowScript : MonoBehaviour
{
    
    public float angleBetweenCameraandMe;
    public float myAngle;
    public float CameraAngle;
    public float Threshold;
    public Vector3 curScale;
    public Vector3 zoomScale;
    public GameObject MyParent;
    public GameObject TransformTo;
    public float transitionSpeed = 5f;
    private bool active;
    void Start()
    {
        curScale = new Vector3(33.46707F,0.06694455F,100.5768F);
        zoomScale =new Vector3(33.46707F,1.6694455F,100.5768F) ;
        active = false;
        Threshold = 10;
    }

    void Update()
    {
        Quaternion myView = transform.rotation;
        Quaternion cameraAngle = Camera.main.transform.rotation;
        Vector3 v = cameraAngle.eulerAngles;
        CameraAngle = v.y;
        angleBetweenCameraandMe = 180 + transform.rotation.eulerAngles.y - CameraAngle;
        while(angleBetweenCameraandMe>360){
            angleBetweenCameraandMe = angleBetweenCameraandMe-=360;
        }
        while(angleBetweenCameraandMe<0){
            angleBetweenCameraandMe+=360;
        }
        if((angleBetweenCameraandMe<=Threshold) || (360-angleBetweenCameraandMe<=Threshold) ){
            active = true;
            transform.localScale = Vector3.Lerp(transform.localScale, zoomScale, transitionSpeed * Time.deltaTime);
        }
        else{
            active = false;
            transform.localScale = Vector3.Lerp(transform.localScale, curScale, transitionSpeed * Time.deltaTime);
        }
        
    }
    public bool isActive(){
        return active;
    }
}
