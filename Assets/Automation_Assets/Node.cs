using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class Node
{
	public Vector2 Coordinates;
	public float xCoordinate, yCoordinate, pose;       //gps info
	public Texture2D texture;						//image texture to be placed on the sphere
	public string locationName;					//extracted from file path name
	public bool isActive;							//is player on this node to not
	public bool isHighlighted;						//to mark path to go to a paricular location from cur node
	public Node[] neighbours;						// nodes we can go to from current node
	public int nodeType;							//useless for now, may be used to mark location name in map
	public GameObject mySkybox;
}