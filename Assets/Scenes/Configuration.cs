using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Configuration : MonoBehaviour
{
    public bool _useTCP = true;
    public float displayWidth = 1080;
    public float displayHeight = 2280;
    public float canvasMovingTime = 0.3f;
    public float longTapTime = 0.8f;
    public float flickTime = 0.3f;
    public float flickStartPosL = 300.0f;
    public float flickStartPosR = 780.0f;
    public float flickMoveY = 300.0f;
    public float flickMoveX = 300.0f;
    public float ItemButtonWidth = 450.0f;
    public float ItemButtonHeight = 200.0f;
    public float ItemButtonTouchOffset = 10.0f;
    public Color ItemButtonNormalColor = new Color32(255,255,255,255);
    public Color ItemButtonPressedColor = new Color32(160,160,160,255);
    public Color ItemButtonDisableColorText = new Color32(0, 0, 0, 100);
    public Color ItemButtonEnableColorText = new Color32(0, 0, 0, 255);
    public float BackButtonWidth = 200.0f;
    public float BackButtonHeight = 100.0f;
    public Color BackButtonNormalColor = new Color32(47, 157, 255, 255);
    public Color BackButtonPressedColor = new Color32(28, 90, 144, 255);
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
