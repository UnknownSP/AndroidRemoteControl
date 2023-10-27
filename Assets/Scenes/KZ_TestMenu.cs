using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemOperation
{
    public string name;
    public Action process;
}

//アイテムスロットの定義
public class ItemSlot
{
    public string name;
    public bool _terminal = false;
    public string parent;
    public List<ItemSlot> Items = new List<ItemSlot>();
    public List<ItemOperation> operation = new List<ItemOperation>();
    public Action process;
    public Action processInit;
    public Action processDeinit;
}

//KAZAAANのテストメニューの定義
public class KZ_TestMenu : MonoBehaviour
{
    //4th
    public ItemSlot ST_TM_Input = new ItemSlot();
    public ItemSlot ST_TM_Motor = new ItemSlot();
    public ItemSlot ST_TM_Solenoid = new ItemSlot();
    public ItemSlot ST_TM_LED = new ItemSlot();
    //3rd
    public ItemSlot ST_DataMode = new ItemSlot();
    public ItemSlot ST_ServiceSettings = new ItemSlot();
    public ItemSlot ST_TestMode = new ItemSlot();
    public ItemSlot MAIN_DataMode = new ItemSlot();
    public ItemSlot MAIN_ServiceSettings = new ItemSlot();
    public ItemSlot MAIN_TestMode = new ItemSlot();
    //2nd
    public ItemSlot StationMenu = new ItemSlot();
    public ItemSlot MainMenu = new ItemSlot();
    public ItemSlot GameMode = new ItemSlot();
    //1st
    public ItemSlot OperationMode = new ItemSlot();


    ToggleButton toggleButton_1;
    ValueSlider valueSlider_1;
    ToggleButton toggleButton_2;
    ValueSlider valueSlider_2;
    ToggleButton toggleButton_3;
    ValueSlider valueSlider_3;
    TestModeCanvasControl canvasControl;
    TCPConnection TCPCon;

    float TCPsendTime = 0.0f;
    bool _TCPsend = false;
    bool _enabledTCP = false;


    void Start()
    {
        //初期化
        SetOparationMode();
        canvasControl = GameObject.Find("MainCamera").GetComponent<TestModeCanvasControl>();
        toggleButton_1 = GameObject.Find("ToggleButton_1").GetComponent<ToggleButton>();
        valueSlider_1 = GameObject.Find("ValueSlider_1").GetComponent<ValueSlider>();
        toggleButton_2 = GameObject.Find("ToggleButton_2").GetComponent<ToggleButton>();
        valueSlider_2 = GameObject.Find("ValueSlider_2").GetComponent<ValueSlider>();
        toggleButton_3 = GameObject.Find("ToggleButton_3").GetComponent<ToggleButton>();
        valueSlider_3 = GameObject.Find("ValueSlider_3").GetComponent<ValueSlider>();
        toggleButton_1.SetActive(false);
        valueSlider_1.SetActive(false);
        toggleButton_2.SetActive(false);
        valueSlider_2.SetActive(false);
        toggleButton_3.SetActive(false);
        valueSlider_3.SetActive(false);
    }

    void Update()
    {
        TCPsendTime += Time.deltaTime;
        //TCP送信タイミングかどうか
        if (TCPsendTime > 0.05f)
        {
            _TCPsend = true;
            TCPsendTime = 0.05f;
        }
        if (!_TCPsend)
        {
            TCPsendTime = 0.0f;
        }
    }

    //メニューの定義
    //未実装多数
    void SetOparationMode()
    {
        //4th
        ST_TM_Input = new ItemSlot
        {
            name = "Input Test",
            parent = "Station Test Mode",
            _terminal = true,
        };
        ST_TM_Motor = new ItemSlot
        {
            name = "Motor Test",
            parent = "Station Test Mode",
            _terminal = true,
        };
        ST_TM_Solenoid = new ItemSlot
        {
            name = "Solenoid Test",
            parent = "Station Test Mode",
            _terminal = true,
        };
        ST_TM_LED = new ItemSlot
        {
            name = "LED Test",
            parent = "Station Test Mode",
            _terminal = true,
            processInit = () => { ST_TM_LED_Init(); },
            processDeinit = () => { ST_TM_LED_Deinit(); },
            process = () => { ST_TM_LED_Process(); },
        };
        //3rd
        ST_DataMode = new ItemSlot
        {
            name = "Data Mode",
            parent = "Station Menu",
        };
        ST_ServiceSettings = new ItemSlot
        {
            name = "Service Setting",
            parent = "Station Menu",
        };
        ST_TestMode = new ItemSlot
        {
            name = "Test Mode",
            parent = "Station Menu",
            Items = new List<ItemSlot>
            {
                ST_TM_Input,
                ST_TM_Motor,
                ST_TM_Solenoid,
                ST_TM_LED,
            },
        };
        MAIN_DataMode = new ItemSlot
        {
            name = "Data Mode",
            parent = "Main Menu",
        };
        MAIN_ServiceSettings = new ItemSlot
        {
            name = "Service Setting",
            parent = "Main Menu",
        };
        MAIN_TestMode = new ItemSlot
        {
            name = "Test Mode",
            parent = "Main Menu",
        };
        //second
        StationMenu = new ItemSlot
        {
            name = "Station Menu",
            parent = "Operation Mode",
            Items = new List<ItemSlot>
            {
                ST_DataMode,
                ST_ServiceSettings,
                ST_TestMode,
            },
        };

        MainMenu = new ItemSlot
        {
            name = "Main Menu",
            parent = "Operation Mode",
            Items = new List<ItemSlot>
            {
                MAIN_DataMode,
                MAIN_ServiceSettings,
                MAIN_TestMode,
            },
        };

        GameMode = new ItemSlot
        {
            name = "Game Mode",
            _terminal = true,
            process = () => { canvasControl.GMButtonClick(); }
        };

        //top
        OperationMode = new ItemSlot
        {
            name = "Operation Mode",
            parent = null,
            Items = new List<ItemSlot>
            {
                StationMenu,
                MainMenu,
                GameMode,
            },
        };
    }

    //親階層の入手
    public ItemSlot GetParent(string name)
    {
        switch (name)
        {
            case "Operation Mode":
                return OperationMode;
            case "Game Mode":
                return GameMode;
            case "Main Menu":
                return MainMenu;
            case "Station Menu":
                return StationMenu;
            case "Station Test Mode":
                return ST_TestMode;
        }
        return OperationMode;
    }

    //現在の階層のPWDを入手
    public List<string> GetPWD(ItemSlot display)
    {
        List<string> pwd = new List<string>();
        string parentName = "";
        ItemSlot child = display;

        pwd.Add(child.name);
        if (child.name == "Operation Mode") return pwd;
        while (parentName != "Operation Mode")
        {
            parentName = GetParent(child.parent).name;
            pwd.Add(parentName);
            child = GetParent(child.parent);
        }

        return pwd;
    }

    //ステーションテストモードのLEDテストの初期化処理
    public void ST_TM_LED_Init()
    {
        toggleButton_1.SetPosition(700);
        valueSlider_1.SetPosition(470);
        toggleButton_1.SetText("1st LED");
        valueSlider_1.SetText("  Brightness");
        toggleButton_1.SetActive(true);
        valueSlider_1.SetActive(true);
        toggleButton_2.SetPosition(300);
        valueSlider_2.SetPosition(70);
        toggleButton_2.SetText("2nd LED");
        valueSlider_2.SetText("  Brightness");
        toggleButton_2.SetActive(true);
        valueSlider_2.SetActive(true);
        toggleButton_3.SetPosition(-100);
        valueSlider_3.SetPosition(-330);
        toggleButton_3.SetText("3rd LED");
        valueSlider_3.SetText("  Brightness");
        toggleButton_3.SetActive(true);
        valueSlider_3.SetActive(true);
    }
    //ステーションテストモードのLEDテストの終了処理
    public void ST_TM_LED_Deinit()
    {
        toggleButton_1.SetActive(false);
        valueSlider_1.SetActive(false);
        toggleButton_2.SetActive(false);
        valueSlider_2.SetActive(false);
        toggleButton_3.SetActive(false);
        valueSlider_3.SetActive(false);
        TCPCon.SendData("SET:st1_ResetTestMode:0:");
    }
    //ステーションテストモードのLEDテストのメイン処理
    public void ST_TM_LED_Process()
    {
        if (!_TCPsend || !_enabledTCP) return;
        int value1st;
        int value2nd;
        int value3rd;

        if (toggleButton_1.value)
        {
            value1st = (int)(valueSlider_1.value * 100.0f);
        }
        else
        {
            value1st = 0;
        }
        if (toggleButton_2.value)
        {
            value2nd = (int)(valueSlider_2.value * 100.0f);
        }
        else
        {
            value2nd = 0;
        }
        if (toggleButton_3.value)
        {
            value3rd = (int)(valueSlider_3.value * 100.0f);
        }
        else
        {
            value3rd = 0;
        }
        //データをTCPでサーバに送信
        TCPCon.SendData("SET:st1_1stLED:" +value1st + ":SET:st1_2ndLED:" +value2nd + ":SET:st1_3rdLED:"+value3rd+":");

        _TCPsend = false;
    }

    public void setTCPConnection(TCPConnection con)
    {
        TCPCon = con;
        _enabledTCP = true;
    }
}
