using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Startup : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        # if UNITY_EDITOR
            transform.gameObject.SetActive(true);
        # else
            transform.gameObject.SetActive(false);
        #endif
    }
}
