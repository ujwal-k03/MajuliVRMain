using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using UnityEngine.Events;
using UnityEngine.UI;

public class VideoController : MonoBehaviour
{   
    public enum Mode {
        URL,
        Clip
    }
    static public VideoClip videoClip;
    static public string URL;
    static public Mode mode;
    static public UnityEvent videoPlayEvent;

    public GameObject videoCanvas;
    public GameObject tabletCanvas;
    public Slider slider;
    public VideoPlayer videoPlayer;
    double fullTime;
    double curTime;
    long lastFrame;
    bool isBuffering;
    int ctr = 0;
    public Slider invisSlider;
    public GameObject playPauseImage;
    public Sprite playSprite;
    public Sprite pauseSprite;

    void Awake()
    {
        videoPlayEvent = new UnityEvent();
        lastFrame = -1;
    }

    void OnEnable()
    {
        videoPlayEvent.AddListener(StartVideo);
    }

    void OnDisable()
    {
        videoPlayEvent.RemoveListener(StartVideo);
    }

    void StartVideo()
    {   
        switch(mode)
        {
            case Mode.Clip: 
                videoPlayer.clip = videoClip;
                videoPlayer.source = VideoSource.VideoClip;
                break;
            case Mode.URL:
                videoPlayer.url = URL;
                videoPlayer.source = VideoSource.Url;
                break;

        }

        videoCanvas.SetActive(true);
        tabletCanvas.SetActive(false);

        videoPlayer.isLooping = false;
        videoPlayer.Play();

        
    }

    public void Close()
    {
        videoPlayer.Stop();
        
        videoCanvas.SetActive(false);
        tabletCanvas.SetActive(true);
    }

    void Update()
    {
        curTime = videoPlayer.time;
        fullTime = videoPlayer.length;
 
        if(lastFrame == videoPlayer.frame)
            ctr++;
        else
            ctr = 0;

        if(ctr >= 10)
            isBuffering = true;
        else
            isBuffering = false;

        slider.value = (float)curTime;
        slider.maxValue = (float)fullTime;
        invisSlider.maxValue = (float)fullTime;

        lastFrame = videoPlayer.frame;
    }

    public void Seek()
    {   
        videoPlayer.time = invisSlider.value;
        slider.value = invisSlider.value;
    }

    public void PlayPause()
    {   
        if(videoPlayer.isPaused){
            videoPlayer.Play();
            playPauseImage.GetComponent<Image>().sprite = playSprite;
        }  
        else{
            videoPlayer.Pause();
            playPauseImage.GetComponent<Image>().sprite = pauseSprite;
        }
        
    }

    public void Forward()
    {      
        videoPlayer.time = (double) Mathf.Clamp((float)videoPlayer.time + 5f, 0f, (float)fullTime);
        
    }

    public void Backward()
    {
        videoPlayer.time = (double) Mathf.Clamp((float)videoPlayer.time - 5f, 0f, (float)fullTime);
    }
}
