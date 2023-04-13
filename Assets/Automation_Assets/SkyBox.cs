using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class SkyBox : MonoBehaviour
{
    // Start is called before the first frame update
    public Material myMaterial;
    public List<GameObject> neighbours;
    public List<GameObject> arrows;
    public string locationName;
    static public GameObject XROrigin;
    public InputActionReference rightTrigger;
    public int counter = 10;

    void Start()
    {
        string tag = "XROrigin";
        if(XROrigin==null){
            XROrigin = GameObject.FindGameObjectsWithTag(tag)[0];
        }
        if(gameObject == XROrigin.GetComponent<Controller>().CurrentlyInside){
            XROrigin.transform.position = transform.position;
            RenderSettings.skybox = myMaterial;
            addArrows();
        }
        
    }
    // Update is called once per frame
    void Update()
    {   
        //Removed counter
        if(rightTrigger.action.triggered){
           if(XROrigin.GetComponent<Controller>().CurrentlyInside == gameObject ){
                foreach(GameObject arrow in arrows){
                    if(arrow.GetComponent<ArrowScript>().isActive()){
                        XROrigin.GetComponent<Controller>().CurrentlyInside = arrow.GetComponent<ArrowScript>().TransformTo;
                        GameObject nextObject = arrow.GetComponent<ArrowScript>().TransformTo;
                        XROrigin.transform.position = arrow.GetComponent<ArrowScript>().TransformTo.transform.position;
                        nextObject.GetComponent<SkyBox>().addArrows();
                        nextObject.GetComponent<SkyBox>().counter = 10;
                        // XROrigin.transform.rotation = Quaternion.Inverse(nextObject.transform.rotation);
                        RenderSettings.skybox = nextObject.GetComponent<SkyBox>().myMaterial;
                        RenderSettings.skybox.SetFloat("_Rotation", -nextObject.transform.rotation.eulerAngles.y);
                        destroyArrows();
                        break;
                    }
                }
            }
        }
        counter--;
    }

    public void addArrows(){
        foreach(GameObject neighbour in neighbours){
            GameObject prefab = Resources.Load<GameObject>("Prefabs/Arrow");
            GameObject arrow = Instantiate(prefab);
            Vector3 a = Camera.main.gameObject.transform.position;
            Vector3 b = neighbour.transform.position;
            Vector3 direction = a-b;
            arrow.transform.rotation =Quaternion.LookRotation(direction, Vector3.up);
            direction = -direction;
            Vector3 normalizedDirection = direction.normalized;
            Vector3 position = a + 1.7f * normalizedDirection;
            position.y = -0.4f;
            arrow.transform.position = position;
            arrow.GetComponent<ArrowScript>().MyParent = gameObject;
            arrow.GetComponent<ArrowScript>().TransformTo = neighbour;
            arrow.GetComponent<ArrowScript>().myAngle = arrow.transform.rotation.eulerAngles.y;
            arrow.GetComponent<ArrowScript>().myAngle = arrow.transform.rotation.eulerAngles.y;
            arrow.tag = "Arrow";
            arrow.name = gameObject.name + "_" + neighbour.GetComponent<SkyBox>().gameObject.name;
            arrows.Add(arrow);
        }
    }

    public void destroyArrows(){
        foreach(GameObject arrow in arrows){
            UnityEngine.Object.DestroyImmediate(arrow);
        }
        arrows = new List<GameObject>(); 
    }
}
