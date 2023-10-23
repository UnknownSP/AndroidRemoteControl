using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ValueSlider : MonoBehaviour
{
    GameObject sliderObj;
    GameObject textObj;
    GameObject valuetextObj;
    Slider slider;
    TextMeshProUGUI text;
    TextMeshProUGUI valuetext;

    private bool _enable = false;
    public float value = 0.0f;

    private const float LOCALPOSITION_X = 0.0f;
    // Start is called before the first frame update
    void Start()
    {
        sliderObj = transform.Find("Slider").gameObject;
        textObj = transform.Find("Text").gameObject;
        valuetextObj = transform.Find("ValueText").gameObject;
        slider = sliderObj.GetComponent<Slider>();
        text = textObj.GetComponent<TextMeshProUGUI>();
        valuetext = valuetextObj.GetComponent<TextMeshProUGUI>();

        SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (_enable)
        {
            value = slider.value;
        }
        valuetext.text = "Value: " + value.ToString("F2");
    }

    public void SetActive(bool _active)
    {
        _enable = _active;
        slider.interactable = _active;
        sliderObj.SetActive(_active);
        textObj.SetActive(_active);
        valuetextObj.SetActive(_active);
        slider.value = 0.0f;
    }

    public void SetText(string setText)
    {
        text.text = setText;
    }

    public void SetPosition(float y)
    {
        transform.localPosition = new Vector3(LOCALPOSITION_X, y, 0);
    }
}
