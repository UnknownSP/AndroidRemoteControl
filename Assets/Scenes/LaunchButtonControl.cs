using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Threading;
using System.Threading.Tasks;

//発射ボタンの処理
public class LaunchButtonControl : MonoBehaviour
{
    GameObject ButtonObject;
    Button launchButton;
    TCPConnection TCPCon;
    TestModeCanvasControl testModeControl;
    private Configuration config;
    bool _enabledTCP = false;
    public bool _enabledLaunch = false;
    private enum ControlPhase
    {
        WaitEnable,
        WaitPush,
        WaitBallLaunch,
        WaitBallOut,
    }
    ControlPhase controlPhase = ControlPhase.WaitEnable;
    float caseTime = 0.0f;
    int processState = -1;
    bool _buttonClick = false;
    string[] receiveTCP = new string[] { };

    void Start()
    {
        //オブジェクトとコンポーネントのセット
        config = GameObject.Find("Configuration").GetComponent<Configuration>();
        ButtonObject = GameObject.Find("LaunchButton");
        testModeControl = GameObject.Find("MainCamera").GetComponent<TestModeCanvasControl>();
        launchButton = ButtonObject.GetComponent<Button>();
        launchButton.interactable = false;
        //発射ボタンが押された場合のリスナーを追加
        launchButton.onClick.AddListener(buttonClick);
    }

    async void Update()
    {
        //TCP使えない場合は処理しない
        if (!_enabledTCP || !config._useTCP) return;
        if (!_enabledLaunch)
        {
            controlPhase = ControlPhase.WaitEnable;
            launchButton.interactable = false;
            _buttonClick = false;
            return;
        }

        //テストモードの場合は処理しない
        if (testModeControl._testMode) return;
        caseTime += Time.deltaTime;
        //0.05秒おきにTCP通信
        if (caseTime >= 0.05f)
        {
            caseTime = 0.0f;
            if(controlPhase != ControlPhase.WaitBallLaunch)
            {
                TCPCon.SendData("GET:st1_processState:0:");
            }
            var task = TCPReceiveData();
            //受信処理が一定以上かかっている場合はエラーにする
            if (await Task.WhenAny(task, Task.Delay(1000)) == task)
            {
                if (receiveTCP[0].Contains("st1_processState"))
                {
                    processState = int.Parse(receiveTCP[1]);
                }
            }
            else
            {
                Debug.Log("TCP Error");
            }

        }
        switch (controlPhase)
        {
            //有効化待ち
            case ControlPhase.WaitEnable:
                launchButton.interactable = false;
                if(processState == 0)
                {
                    launchButton.interactable = true;
                    controlPhase = ControlPhase.WaitPush;
                }   
                break;

            //有効化してボタンが押された場合もしくは筐体についてるボタンによって発射された場合
            case ControlPhase.WaitPush:
                if (_buttonClick || processState != 0)
                {
                    TCPCon.SendData("SET:st1_ballLaunch:0:");
                    controlPhase = ControlPhase.WaitBallLaunch;
                    launchButton.interactable = false;
                    _buttonClick = false;
                }
                break;

            //ボール発射待ち
            case ControlPhase.WaitBallLaunch:
                TCPCon.SendData("SET:st1_ballLaunch:0:");
                if (processState != 0)
                {
                    controlPhase = ControlPhase.WaitBallOut;
                }
                break;

            //ボールアウト待ち
            case ControlPhase.WaitBallOut:
                if (processState == 0)
                {
                    controlPhase = ControlPhase.WaitEnable;
                }
                break;
        }

    }

    void buttonClick()
    {
        _buttonClick = true;
    }

    public void setTCPConnection(TCPConnection con)
    {
        TCPCon = con;
        _enabledTCP = true;
    }

    private async Task TCPReceiveData()
    {
        await Task.Run(() => receiveTCP = TCPCon.ReceiveData().Split(new string[] { ":" }, System.StringSplitOptions.None));
    }
}
