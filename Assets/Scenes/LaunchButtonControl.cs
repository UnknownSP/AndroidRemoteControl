using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Threading;
using System.Threading.Tasks;

public class LaunchButtonControl : MonoBehaviour
{
    GameObject ButtonObject;
    Button launchButton;
    TCPConnection TCPCon;
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

    // Start is called before the first frame update
    void Start()
    {
        config = GameObject.Find("Configuration").GetComponent<Configuration>();
        ButtonObject = GameObject.Find("LaunchButton");
        launchButton = ButtonObject.GetComponent<Button>();
        launchButton.interactable = false;
        launchButton.onClick.AddListener(buttonClick);
    }

    // Update is called once per frame
    async void Update()
    {
        if (!_enabledTCP || !config._useTCP) return;
        if (!_enabledLaunch)
        {
            controlPhase = ControlPhase.WaitEnable;
            launchButton.interactable = false;
            _buttonClick = false;
            return;
        }

        caseTime += Time.deltaTime;
        if (caseTime >= 0.05f)
        {
            caseTime = 0.0f;
            if(controlPhase != ControlPhase.WaitBallLaunch)
            {
                TCPCon.SendData("GET:st1_processState:");
            }
            var task = TCPReceiveData();
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
            case ControlPhase.WaitEnable:
                launchButton.interactable = false;
                if(processState == 0)
                {
                    launchButton.interactable = true;
                    controlPhase = ControlPhase.WaitPush;
                }   
                break;

            case ControlPhase.WaitPush:
                if (_buttonClick || processState != 0)
                {
                    TCPCon.SendData("SET:st1_ballLaunch:");
                    controlPhase = ControlPhase.WaitBallLaunch;
                    launchButton.interactable = false;
                    _buttonClick = false;
                }
                break;

            case ControlPhase.WaitBallLaunch:
                TCPCon.SendData("SET:st1_ballLaunch:");
                if (processState != 0)
                {
                    controlPhase = ControlPhase.WaitBallOut;
                }
                break;

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
