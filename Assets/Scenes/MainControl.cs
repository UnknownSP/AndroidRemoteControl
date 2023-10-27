using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//メインコントロール用
//今のところLaunchButtonControlが通常ゲーム処理，
//TestModeCanvasControlがテストモードのメイン処理を担っている
public class MainControl : MonoBehaviour
{
    [SerializeField] private TCPConnection TCPcon;
    [SerializeField] private LaunchButtonControl launchButtonControl;
    private bool _TCPConnected = false;
    private Configuration config;
    private KZ_TestMenu KZ_TestMenu;

    void Start()
    {
        //全体共通のコンフィグ
        config = GameObject.Find("Configuration").GetComponent<Configuration>();
        //カザーンのテストメニュー
        //今後その他メダルゲームも追加
        KZ_TestMenu = GameObject.Find("MainCamera").GetComponent<KZ_TestMenu>();

        //サーバとTCP通信する場合
        if (config._useTCP)
        {
            if (TCPcon.Connect())
            {
                _TCPConnected = true;
                launchButtonControl.setTCPConnection(TCPcon);
                KZ_TestMenu.setTCPConnection(TCPcon);
            }
        }
        launchButtonControl._enabledLaunch = true;
    }

    void Update()
    {
        if (!_TCPConnected && config._useTCP)
        {
            Debug.Log("Non TCP Connection");
            return;
        }

    }
}
