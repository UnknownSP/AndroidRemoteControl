using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ToggleButton : MonoBehaviour
{
    private Image backGround;
    private RectTransform toggle;
    private GameObject backGroundObj;
    private GameObject toggleObj;
    private GameObject textObj;
    private Button button;
    private TextMeshProUGUI text;
    public bool value = false;
    private float togglePosX;

    private Color BackGround_OffColor = new Color(0.92f, 0.92f, 0.92f);
    private Color BackGround_OnColor = new Color(0.2f, 0.84f, 0.3f);

    private const float TOGGLE_DURATION = 0.4f;
    private const float LOCALPOSITION_X = 390.0f;

    private float moveTime = 0.0f;
    private bool _startSwitch = false;
    private bool _enable = false;

    // Start is called before the first frame update
    void Start()
    {
        backGroundObj = transform.Find("Background").gameObject;
        backGround = backGroundObj.GetComponent<Image>();
        toggleObj = transform.Find("Toggle").gameObject;
        toggle = toggleObj.GetComponent<RectTransform>();
        button = GetComponent<Button>();
        textObj = transform.Find("Text").gameObject;
        text = textObj.GetComponent<TextMeshProUGUI>();
        button.onClick.AddListener(SwitchToggle);
        backGround.color = BackGround_OffColor;
        togglePosX = Mathf.Abs(toggle.anchoredPosition.x);

        //----
        SetActive(false);
        //----
    }

    // Update is called once per frame
    void Update()
    {
        if (_startSwitch)
        {
            moveTime += Time.deltaTime;
            float timeRatio = moveTime / TOGGLE_DURATION;
            if (timeRatio < 1.0f)
            {
                if (value)
                {
                    backGround.color = Color.Lerp(BackGround_OffColor, BackGround_OnColor, timeRatio);
                }
                else
                {
                    backGround.color = Color.Lerp(BackGround_OnColor, BackGround_OffColor, timeRatio);
                }
                toggle.localPosition = new Vector3((value ? -1.0f : 1.0f) * togglePosX + (value ? 2.0f : -2.0f) * togglePosX * MoveFunc(timeRatio), 0,0);
            }
            else
            {
                if (value)
                {
                    backGround.color = BackGround_OnColor;
                }
                else
                {
                    backGround.color = BackGround_OffColor;
                }
                toggle.localPosition = new Vector3((value ? 1.0f : -1.0f) * togglePosX, 0, 0);
                _startSwitch = false;
            }
        }
    }

    public void SetActive(bool _active)
    {
        _enable = _active;
        value = false;
        backGroundObj.SetActive(_active);
        toggleObj.SetActive(_active);
        textObj.SetActive(_active);
        backGround.color = BackGround_OffColor;
        toggle.localPosition = new Vector3(-togglePosX, 0, 0);
    }

    public void SwitchToggle()
    {
        if (!_enable) return;
        value = !value;
        moveTime = 0.0f;
        _startSwitch = true;
    }

    public void SetText(string setText)
    {
        text.text = setText;
    }

    public void SetPosition(float y)
    {
        transform.localPosition = new Vector3(LOCALPOSITION_X, y, 0);
    }

    private float MoveFunc(float time)
    {
        float x = 1.0f - time;
        return 1.0f - x * x * x;
    }

}
