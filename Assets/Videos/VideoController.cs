using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using UnityEngine.Events;

public class VideoController : MonoBehaviour
{   
    static public VideoClip videoClip;
    static public UnityEvent videoPlayEvent;

    public VideoPlayer videoPlayer;

    void OnEnable()
    {
        videoPlayEvent.AddListener(DoStuff);
    }

    void OnDisable()
    {
        videoPlayEvent.RemoveListener(DoStuff);
    }

    void DoStuff()
    {
        videoPlayer.clip = videoClip;
        videoPlayer.isLooping = false;
        videoPlayer.Play();
    }

}
