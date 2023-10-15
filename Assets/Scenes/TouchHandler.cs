using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class TouchHandler : MonoBehaviour
{
    private Configuration config;
    InputSettings inputSettings;
    public bool _pressed = false;
    public bool _tapped = false;
    public bool _longtapped = false;
    public bool _flickLtoR = false;
    public bool _flickRtoL = false;
    public Vector2 position;
    private bool _istapped = false;
    private bool _tapmoved = false;
    private Vector2 maxPosition;
    private Vector2 minPosition;
    private float tapTime = 0.0f;
    // Start is called before the first frame update
    void Start()
    {
        inputSettings = ScriptableObject.CreateInstance("InputSettings") as InputSettings;
        config = GameObject.Find("Configuration").GetComponent<Configuration>();
        Debug.Log(inputSettings.tapRadius);
        maxPosition = new Vector2(0.0f, 0.0f);
        minPosition = new Vector2(config.displayWidth, config.displayHeight);
        position = new Vector2(0.0f, 0.0f);
    }

    // Update is called once per frame
    void Update()
    {
        var touchInput = Touchscreen.current;
        var primaryTouch = touchInput.touches[0];
        if (primaryTouch.press.wasPressedThisFrame)
        {
            _pressed = true;
            _tapmoved = false;
            tapTime = 0.0f;
            _flickLtoR = false;
            _flickRtoL = false;
            maxPosition = new Vector2(0.0f, 0.0f);
            minPosition = new Vector2(config.displayWidth, config.displayHeight);
            position = new Vector2(0.0f, 0.0f);
        }
        if (primaryTouch.press.wasReleasedThisFrame)
        {
            _pressed = false;
            _tapmoved = false;
            _longtapped = false;
            //フリック判定
            if (tapTime <= config.flickTime && Mathf.Abs(maxPosition.y - minPosition.y) <= config.flickMoveY && Mathf.Abs(maxPosition.x - minPosition.x) >= config.flickMoveX)
            {
                if (primaryTouch.startPosition.ReadValue().x <= config.flickStartPosL)
                {
                    _flickLtoR = true;
                    Debug.Log("FlickLtoR");
                }
                if (primaryTouch.startPosition.ReadValue().x >= config.flickStartPosR)
                {
                    _flickRtoL = true;
                    Debug.Log("FlickRtoL");
                }
            }
        }
        //押されている時間の計算
        if (_pressed)
        {
            tapTime += Time.deltaTime;
            position = primaryTouch.position.ReadValue();
            if (maxPosition.x <= primaryTouch.position.ReadValue().x) maxPosition.x = primaryTouch.position.ReadValue().x;
            if (minPosition.x >= primaryTouch.position.ReadValue().x) minPosition.x = primaryTouch.position.ReadValue().x;
            if (maxPosition.y <= primaryTouch.position.ReadValue().y) maxPosition.y = primaryTouch.position.ReadValue().y;
            if (minPosition.y >= primaryTouch.position.ReadValue().y) minPosition.y = primaryTouch.position.ReadValue().y;
        }
        //tap判定
        if (primaryTouch.tap.ReadValue() == 1)
        {
            if (!_istapped)
            {
                _tapped = true;
                _istapped = true;
                Debug.Log("Tap");
            }
        }
        else
        {
            _istapped = false;
        }
        //tap移動判定
        if (_pressed && !_tapmoved)
        {
            if (Vector2.Distance(primaryTouch.startPosition.ReadValue(), primaryTouch.position.ReadValue()) > inputSettings.tapRadius)
            {
                _tapmoved = true;
                Debug.Log("tap Moved");
            }
        }
        //logtap判定
        if (_pressed)
        {
            if (!_tapmoved && tapTime >= config.longTapTime && !_longtapped)
            {
                _longtapped = true;
                Debug.Log("Long tap");
            }
        }
        
    }

    public void ResetTap()
    {
        _tapped = false;
    }
}
