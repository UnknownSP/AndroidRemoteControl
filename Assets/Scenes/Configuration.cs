using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Configuration : MonoBehaviour
{
    [SerializeField] public bool _useTCP = true;
    [SerializeField] public int displayWidth = 1080;
    [SerializeField] public int displayHeight = 2280;
    [SerializeField] public float canvasMovingTime = 0.3f;
    [SerializeField] public float longTapTime = 0.8f;
    [SerializeField] public float flickTime = 0.3f;
    [SerializeField] public float flickStartPosL = 300.0f;
    [SerializeField] public float flickStartPosR = 780.0f;
    [SerializeField] public float flickMoveY = 300.0f;
    [SerializeField] public float flickMoveX = 300.0f;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
