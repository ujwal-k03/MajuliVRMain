using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkyBox : MonoBehaviour
{
    // Start is called before the first frame update
    public Material myMaterial;
    public List<GameObject> neighbours;
    public List<GameObject> arrows;
    public string locationName;
    public GameObject XROrigin;
    void Start()
    {
        string tag = "XROrigin";
        XROrigin = GameObject.FindGameObjectsWithTag(tag)[0];
        if(gameObject == XROrigin.GetComponent<Controller>().CurrentlyInside){
            makemeVisible();
        }
        else{
            makeMeTransparent();         
        }
    }
    // Update is called once per frame
    void Update()
    {
        if(Input.GetMouseButtonDown(0)){
            if(XROrigin.GetComponent<Controller>().CurrentlyInside == gameObject){
                //Should ensure that only one arrow is active.  
                foreach(GameObject arrow in arrows){
                    if(arrow.GetComponent<ArrowScript>().isActive()){
                        XROrigin.GetComponent<Controller>().CurrentlyInside = arrow.GetComponent<ArrowScript>().TransformTo;
                        XROrigin.transform.position = arrow.GetComponent<ArrowScript>().TransformTo.transform.position;
                        GameObject nextObject = arrow.GetComponent<ArrowScript>().TransformTo;
                        makeObjVisible(nextObject);
                        makeMeTransparent();
                        break;
                    }
                }
            }
        }
    }

    public void addArrows(){
        foreach(GameObject neighbour in neighbours){
            GameObject prefab = Resources.Load<GameObject>("Prefabs/Arrow");
            GameObject arrow = Instantiate(prefab);
            Vector3 a = transform.position;
            Vector3 b = neighbour.transform.position;
            Vector3 direction = a-b;
            arrow.transform.rotation =Quaternion.LookRotation(direction, Vector3.up);
            direction = -direction;
            Vector3 normalizedDirection = direction.normalized;
            Vector3 position = a + 1.07f * normalizedDirection;
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

    void makeMeTransparent(){
        Material transparent = Resources.Load<Material>("OtherMaterials/Transparent");
        gameObject.GetComponent<Renderer>().material = transparent;
        foreach(GameObject arrow in arrows){
            arrow.GetComponent<Renderer>().material = transparent;
        }
    }


    void makemeVisible(){
        gameObject.GetComponent<Renderer>().material = gameObject.GetComponent<SkyBox>().myMaterial;
        Material green = Resources.Load<Material>("OtherMaterials/GreenMaterial");
        foreach(GameObject arrow in arrows){
            arrow.GetComponent<Renderer>().material = green;
        }
    }
    void makeObjVisible(GameObject obj){
        obj.GetComponent<Renderer>().material = obj.GetComponent<SkyBox>().myMaterial;
        Material green = Resources.Load<Material>("OtherMaterials/GreenMaterial");
        foreach(GameObject arrow in obj.GetComponent<SkyBox>().arrows){
            arrow.GetComponent<Renderer>().material = green;
        }
    }
}
