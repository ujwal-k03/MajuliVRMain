using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class VideoButton : MonoBehaviour
{
    // Start is called before the first frame update
    public VideoClip videoclip;
    public string url;
    public VideoController.Mode mode;

    public void PlayVideo()
    {      
        VideoController.mode = mode;

        switch(mode)
        {
            case VideoController.Mode.Clip: 
                VideoController.videoClip = videoclip;  
                break;
            case VideoController.Mode.URL: 
                VideoController.URL = url; 
                break;
        }
        
        VideoController.videoPlayEvent.Invoke();
    }

}
