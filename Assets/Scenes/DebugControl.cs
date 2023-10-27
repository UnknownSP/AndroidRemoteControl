using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

//デバッグキャンバスの処理
public class DebugControl : MonoBehaviour
{
    GameObject CanvasObject;
    TextMeshProUGUI debugText;
    Button debugButton;
    string text;

    void Start()
    {
        CanvasObject = GameObject.Find("DebugCanvas");
        debugText = GameObject.Find("DebugText").GetComponent<TextMeshProUGUI>();
        debugButton = GameObject.Find("DebugButton").GetComponent<Button>();
        debugButton.onClick.AddListener(ButtonClick);
        CanvasObject.SetActive(false);
        text = "";
    }

    void Update()
    {
        debugText.text = text;
    }

    public void SetActive(bool _active)
    {
        CanvasObject.SetActive(_active);
    }

    //ログ追加
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
