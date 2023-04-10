using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TabletController : MonoBehaviour
{   
    public GameObject tablet;
    public GameObject minimap;

    public void SwitchToMinimap()
    {
        tablet.SetActive(false);
        minimap.SetActive(true);
    }

    public void SwitchToTablet()
    {
        tablet.SetActive(true);
        minimap.SetActive(false);
    }

}
