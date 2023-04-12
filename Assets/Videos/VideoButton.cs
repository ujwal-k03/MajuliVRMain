using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class VideoButton : MonoBehaviour
{
    // Start is called before the first frame update
    public VideoClip videoclip;

    public void PlayVideo()
    {
        VideoController.videoClip = videoclip;
        VideoController.videoPlayEvent.Invoke();
    }

}
