using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class BackButtonControl : MonoBehaviour
{
    GameObject textObj;
    TextMeshProUGUI text;
    TouchHandler touchHandler;
    Vector3 UIPosition;
    Configuration config;
    Vector2 touchRangeMin;
    Vector2 touchRangeMax;
    bool _isActive = false;
    public bool _tapped = false;
    public bool _enable = true;
    bool _dontCareOneTime = false;
    bool _dontCareReleased = false;
    bool _dontCarePressed = false;
    TestModeCanvasControl canvasControl;

    // Start is called before the first frame update
    void Start()
    {
        config = GameObject.Find("Configuration").GetComponent<Configuration>();
        textObj = transform.Find("Text").gameObject;
        text = textObj.GetComponent<TextMeshProUGUI>();
        touchHandler = GameObject.Find("MainCamera").GetComponent<TouchHandler>();
        canvasControl = GameObject.Find("MainCamera").GetComponent<TestModeCanvasControl>();
        UIPosition = transform.localPosition;
        touchRangeMin.x = UIPosition.x - (config.BackButtonWidth / 2.0f) + config.ItemButtonTouchOffset;
        touchRangeMax.x = UIPosition.x + (config.BackButtonWidth / 2.0f) - config.ItemButtonTouchOffset;
        touchRangeMin.y = UIPosition.y - (config.BackButtonHeight / 2.0f) + config.ItemButtonTouchOffset;
        touchRangeMax.y = UIPosition.y + (config.BackButtonHeight / 2.0f) - config.ItemButtonTouchOffset;
        textObj.SetActive(false);

        //-------
        SetActive(false);
        //-------
    }

    // Update is called once per frame
    void Update()
    {
        if (!_isActive && canvasControl._canvasMoving) return;
        if (_dontCareOneTime)
        {
            if (!touchHandler._pressed)
            {
                _dontCareReleased = true;
            }
            if (_dontCareReleased && touchHandler._pressed)
            {
                _dontCarePressed = true;
            }
            if (_dontCareReleased && _dontCarePressed && !touchHandler._pressed)
            {
                _dontCareReleased = false;
                _dontCarePressed = false;
                _dontCareOneTime = false;
            }
            return;
        }
        if (!_enable) return;
        if (OnTouchPosition(touchHandler.position) && OnTouchPosition(touchHandler.startposition))
        {
            if (touchHandler._pressed)
            {
                text.color = config.BackButtonPressedColor;
            }
            if (touchHandler._tapped && !_tapped)
            {
                _tapped = true;
            }
        }
        else
        {
            if (!_tapped)
            {
                text.color = config.BackButtonNormalColor;
            }
        }
    }

    public void ResetTap()
    {
        _tapped = false;
    }

    public void SetActive(bool active)
    {
        textObj.SetActive(active);
        _isActive = active;
        //text.color = config.ItemButtonEnableColorText;
        _tapped = false;
    }

    public void SetText(string settext)
    {
        text.text = settext;
    }

    public void Disable()
    {
        _enable = false;
        text.color = config.BackButtonPressedColor;
        _tapped = false;
    }

    public void Enable()
    {
        _enable = true;
        text.color = config.BackButtonNormalColor;
        _tapped = false;
    }

    public void DontCareOneTime()
    {
        _dontCareOneTime = true;
    }

    bool OnTouchPosition(Vector2 pos)
    {
        if (pos.x >= touchRangeMin.x && pos.x <= touchRangeMax.x && pos.y >= touchRangeMin.y && pos.y <= touchRangeMax.y)
        {
            return true;
        }
        return false;
    }
}
