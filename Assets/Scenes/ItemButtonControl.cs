using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

//アイテムボタンの処理
public class ItemButtonControl : MonoBehaviour
{
    GameObject imageObj;
    GameObject textObj;
    Image image;
    TextMeshProUGUI text;
    TouchHandler touchHandler;
    Vector3 UIPosition;
    Configuration config;
    Vector2 touchRangeMin;
    Vector2 touchRangeMax;
    bool _isActive = false;
    public bool _tapped = false;
    public bool _longtapped = false;
    public bool _enable = true;
    bool _dontCareOneTime = false;
    bool _dontCareReleased = false;
    bool _dontCarePressed = false;
    TestModeCanvasControl canvasControl;

    
    void Start()
    {
        config = GameObject.Find("Configuration").GetComponent<Configuration>();
        imageObj = transform.Find("Image").gameObject;
        textObj = transform.Find("Text").gameObject;
        image = imageObj.GetComponent<Image>();
        text = textObj.GetComponent<TextMeshProUGUI>();
        touchHandler = GameObject.Find("MainCamera").GetComponent<TouchHandler>();
        canvasControl = GameObject.Find("MainCamera").GetComponent<TestModeCanvasControl>();
        UIPosition = transform.localPosition;
        //自身のボタンの位置に対して反応すべき場所を設定
        touchRangeMin.x = UIPosition.x - (config.ItemButtonWidth / 2.0f) + config.ItemButtonTouchOffset;
        touchRangeMax.x = UIPosition.x + (config.ItemButtonWidth / 2.0f) - config.ItemButtonTouchOffset;
        touchRangeMin.y = UIPosition.y - (config.ItemButtonHeight / 2.0f) + config.ItemButtonTouchOffset;
        touchRangeMax.y = UIPosition.y + (config.ItemButtonHeight / 2.0f) - config.ItemButtonTouchOffset;
        image.color = config.ItemButtonNormalColor;
        imageObj.SetActive(false);
        textObj.SetActive(false);

        //-------
        SetActive(false);
        //-------
    }

    void Update()
    {
        if (!_isActive && canvasControl._canvasMoving) return;
        //一回分押された処理をスルー
        //longtap処理を行った場合のために追加
        //押された回数を見て判断するのがより良いかも
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
                image.color = config.ItemButtonNormalColor;
                _longtapped = false;
            }
            return;
        }
        if (!_enable) return;
        //タッチ開始位置と終了位置が自身のボタンの場所である場合
        if (OnTouchPosition(touchHandler.position) && OnTouchPosition(touchHandler.startposition))
        {
            if (touchHandler._pressed)
            {
                image.color = config.ItemButtonPressedColor;
            }
            if (touchHandler._tapped && !_tapped)
            {
                _tapped = true;
            }
            if (touchHandler._longtapped && !_longtapped)
            {
                _longtapped = true;
                //-----
                DontCareOneTime();
                //-----
            }
        }
        else
        {
            if(!_tapped && !_longtapped)
            {
                image.color = config.ItemButtonNormalColor;
            }
        }
    }

    public void SetActive(bool active)
    {
        imageObj.SetActive(active);
        textObj.SetActive(active);
        _isActive = active;
        image.color = config.ItemButtonNormalColor;
        //text.color = config.ItemButtonEnableColorText;
        _tapped = false;
        _longtapped = false;
    }

    public void SetText(string settext)
    {
        text.text = settext;
    }

    public void Disable()
    {
        _enable = false;
        text.color = config.ItemButtonDisableColorText;
    }

    public void Enable()
    {
        _enable = true;
        text.color = config.ItemButtonEnableColorText;
    }

    public void DontCareOneTime()
    {
        _dontCareOneTime = true;
    }

    //タッチ判定とする場所かどうか判断
    bool OnTouchPosition(Vector2 pos)
    {
        if (pos.x >= touchRangeMin.x && pos.x <= touchRangeMax.x && pos.y >= touchRangeMin.y && pos.y <= touchRangeMax.y)
        {
            return true;
        }
        return false;
    }

}
