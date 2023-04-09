using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnableSimulate : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField]
    public List<GameObject> toDisable;

    void Awake()
    {
        #if UNITY_EDITOR || UNITY_EDITOR_64 || UNITY_EDITOR_WIN
            for(int i=0; i<toDisable.Count; i++)
                toDisable[i].SetActive(true);
        #else
            for(int i=0; i<toDisable.Count; i++)
                toDisable[i].SetActive(false);
        #endif
    }
}
