using UnityEditor;
using UnityEngine;
using UnityEditor.SceneManagement;
using UnityEngine.UI;
using System;
using System.Collections.Generic;
using System.IO;

# if UNITY_EDITOR || UNITY_EDITOR_64 || UNITY_EDITOR_WIN
public class Tools : Editor
{
    public static int NumberOfPictures;
    public static Dictionary<string,Node> PictureDetails;
    public static Node[] nodes;
    public static GameObject[] skyboxes;
    public static float offsetX;
    public static float offsetY;
    public static float offsetAngle;
    public static float magnify = 1000000f;
    public static string first_pic = "A1";
    public static string site_name = "Auniati";
    private static void ParseData()
    {
        var filePath = Application.dataPath + "/NodeInformation/myfile.txt";
        string[] lines = File.ReadAllLines(filePath);
        int n = lines.Length;
        nodes=new Node[n];
        for (int i = 0; i < n; i++)
        {
            nodes[i] = new Node();
            string[] data = lines[i].Split(' ');
            nodes[i].pose = float.Parse(data[3]);
            string[] path = data[0].Split('/');
            string loc_name = path[1].Split(".JPG")[0];
            nodes[i].locationName = loc_name;
            Debug.Log(loc_name);
            nodes[i].xCoordinate = float.Parse(data[1]);
            nodes[i].yCoordinate = float.Parse(data[2]);
            if(loc_name==first_pic){
                offsetX = float.Parse(data[1]);
                offsetY = float.Parse(data[2]);
                offsetAngle = nodes[i].pose;
            }
            Debug.Log("Location Name: " + nodes[i].locationName + " " + "xCoordinate: " + nodes[i].xCoordinate + "yCoordinate: " + nodes[i].yCoordinate);
        }
        for (int i = 0; i < n; i++)
        {
            string[] data = lines[i].Split(' ');
            nodes[i].xCoordinate-=offsetX;
            nodes[i].yCoordinate-=offsetY;
            nodes[i].pose-= offsetAngle;
            nodes[i].Coordinates = new Vector2(nodes[i].xCoordinate,nodes[i].yCoordinate);
        }
    }

    [MenuItem("MyMenu/Create Materials")]
    public static void CreateMaterial()
    {
        Texture[] textures = Resources.LoadAll<Texture>("Pictures");
        NumberOfPictures = textures.Length;
        foreach( Texture texture in textures){
            Material material = new Material(Shader.Find("Skybox/Cubemap"));
            // Debug.Log(texture);
            material.SetTexture("_Tex",texture);
            AssetDatabase.CreateAsset(material, "Assets/Resources/Materials/" + texture.name + ".mat");
        }
        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();
    }

    [MenuItem("MyMenu/Create Objects")]
    public static void CreateObjects()
    {
        GameObject prefab = Resources.Load<GameObject>("Prefabs/SkyBox");
        Material[] materials = Resources.LoadAll<Material>("Materials");
        NumberOfPictures = materials.Length;
        skyboxes = new GameObject[NumberOfPictures];
        PictureDetails = new Dictionary<string, Node>();
        ParseData();
        // Debug.Log("Number of Pictures" + NumberOfPictures);
        for(int i= 0;i<NumberOfPictures;i++){
            // Debug.Log("Location Name is: " + nodes[i].locationName);
            PictureDetails[nodes[i].locationName] = nodes[i];
        }

        for (int i = 0; i < materials.Length; i++)
        {
            GameObject newSkyBox = Instantiate(prefab);
            // newSkyBox.GetComponent<Renderer>().material = materials[i];
            newSkyBox.GetComponent<SkyBox>().myMaterial = materials[i];
            newSkyBox.name = materials[i].name;
            newSkyBox.tag = "SkyBox";
            newSkyBox.transform.position = new Vector3(PictureDetails[newSkyBox.name].xCoordinate,0,PictureDetails[newSkyBox.name].yCoordinate);
            Quaternion newRotation = Quaternion.Euler(0, PictureDetails[newSkyBox.name].pose,0);
            newSkyBox.transform.rotation = newRotation;
            PictureDetails[newSkyBox.name].mySkybox = newSkyBox;
        }
        Debug.Log(PictureDetails[first_pic].mySkybox);
        string tag = "XROrigin";
        GameObject XROrigin = GameObject.FindGameObjectsWithTag(tag)[0];
        XROrigin.GetComponent<Controller>().CurrentlyInside = PictureDetails[first_pic].mySkybox;
        RenderSettings.skybox = PictureDetails[first_pic].mySkybox.GetComponent<SkyBox>().myMaterial;
    }

    //Delete Objects with tag
    [MenuItem("MyMenu/Delete Objects with Tag")]
    public static void DeleteObjectsWithTag()
    {
        string tag = "SkyBox";
        GameObject[] objects = GameObject.FindGameObjectsWithTag(tag);
        foreach (GameObject obj in objects)
        {
            UnityEngine.Object.DestroyImmediate(obj);
        }
    }

    //UpdatePrefabInstances
    [MenuItem("MyMenu/Update Prefab Instances")]
    public static void UpdatePrefabInstances()
    {
        GameObject prefab = Resources.Load<GameObject>("Sphere");
        GameObject[] instances = GameObject.FindGameObjectsWithTag("Sphere");
        PrefabUtility.ApplyPrefabInstance(prefab, InteractionMode.AutomatedAction);
        foreach (GameObject instance in instances)
        {
            PrefabUtility.ApplyPrefabInstance(instance, InteractionMode.AutomatedAction);
        }
    }
    [MenuItem("MyMenu/Add Neighbours")]
    public static void AddArrow()
    {
        string tag = "SkyBox";
        GameObject[] objects = GameObject.FindGameObjectsWithTag(tag);
        var filePath = Application.dataPath + "/NodeInformation/" + site_name + ".txt";
        string[] lines = File.ReadAllLines(filePath);
        for(int i = 0;i<lines.Length;i++){
            string [] data = lines[i].Split(' ');
            if(PictureDetails[data[0]].mySkybox.GetComponent<SkyBox>().neighbours==null){
                PictureDetails[data[0]].mySkybox.GetComponent<SkyBox>().neighbours = new List<GameObject>();
            }
            if(PictureDetails[data[1]].mySkybox.GetComponent<SkyBox>().neighbours==null){
                PictureDetails[data[1]].mySkybox.GetComponent<SkyBox>().neighbours = new List<GameObject>();
            }
            PictureDetails[data[1]].mySkybox.GetComponent<SkyBox>().neighbours.Add(PictureDetails[data[0]].mySkybox);
            PictureDetails[data[0]].mySkybox.GetComponent<SkyBox>().neighbours.Add(PictureDetails[data[1]].mySkybox);
        }

        RenderSettings.skybox = PictureDetails[first_pic].mySkybox.GetComponent<SkyBox>().myMaterial;
        
        // for( int i = 0;i<objects.Length;i++){
        //     objects[i].GetComponent<SkyBox>().addArrows();
        // }

        
    }

    [MenuItem("Minimap/Add buttons")]
    public static void AddButtons()
    {   
        // Get the name of the active scene
        String sceneName = EditorSceneManager.GetActiveScene().name;
        Debug.Log(sceneName);

        GameObject prefab = Resources.Load<GameObject>("Prefabs/MinimapButton");
        GameObject minimapContent = GameObject.FindGameObjectWithTag("MinimapContent");

        String filePath = Application.dataPath + "/Maps/" + sceneName + "/buttons.txt";

        string[] lines = File.ReadAllLines(filePath);
        int n = lines.Length;

        
        Image image = minimapContent.GetComponent<Image>();
        float width = image.sprite.rect.width;
        float height = image.sprite.rect.height;

        for(int i=0; i<n; i++){
            String[] data = lines[i].Split(' ');
            String nodeName = data[0];
            float x = float.Parse(data[1]);
            float y = float.Parse(data[2]); 
            
            // Create new button and assign name and skybox
            GameObject mySkybox = GameObject.Find(nodeName);
            GameObject button = Instantiate<GameObject>(prefab, minimapContent.transform);
            
            button.name = nodeName;
            button.GetComponent<Teleport>().mySkyBox = mySkybox;

            // Give button new position
            RectTransform rectTransform =  button.GetComponent<RectTransform>();
            rectTransform.anchoredPosition = new Vector3((x/width) * 160.0f, (y/height) * 90.0f, 0);
            
        }
    }

    [MenuItem("Minimap/Clear buttons")]
    public static void ClearButtons()
    {   
        string tag = "MinimapButton";
        GameObject[] objects = GameObject.FindGameObjectsWithTag(tag);
        foreach (GameObject obj in objects)
        {
            UnityEngine.Object.DestroyImmediate(obj);
        }
    }


    [MenuItem("MyMenu/Remove arrows")]
    public static void RemoveArrow()
    {
       
        string tag = "Arrow";

        
        GameObject[] objects = GameObject.FindGameObjectsWithTag(tag);
        for (int i = 0; i < objects.Length; i++)
        {
            UnityEngine.Object.DestroyImmediate(objects[i]);
        }
    }


    [MenuItem("MyMenu/Clear")]
    public static void Clear()
    {
        RemoveArrow();
        DeleteObjectsWithTag();
    }


    [MenuItem("MyMenu/Add")]
    public static void Add()
    {
        // CreateMaterial();
        Clear();
        CreateObjects();
        AddArrow();
    }
}

#endif