using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class DebugControl : MonoBehaviour
{
    GameObject CanvasObject;
    TextMeshProUGUI debugText;
    Button debugButton;
    string text;
    // Start is called before the first frame update
    void Start()
    {
        CanvasObject = GameObject.Find("DebugCanvas");
        debugText = GameObject.Find("DebugText").GetComponent<TextMeshProUGUI>();
        debugButton = GameObject.Find("DebugButton").GetComponent<Button>();
        debugButton.onClick.AddListener(ButtonClick);
        CanvasObject.SetActive(false);
        text = "";
    }

    // Update is called once per frame
    void Update()
    {
        debugText.text = text;
    }

    public void SetActive(bool _active)
    {
        CanvasObject.SetActive(_active);
    }

    public void AddLog(string str)
    {
        text += str + "\n";
    }

    public void ResetLog()
    {
        text = "";
    }

    void ButtonClick()
    {
        text = "";
    }
}
