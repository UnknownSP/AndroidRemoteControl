using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemOperation
{
    public string name;
    public Action process;
}

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
    TestModeCanvasControl canvasControl;

    // Start is called before the first frame update
    void Start()
    {
        SetOparationMode();
        canvasControl = GameObject.Find("MainCamera").GetComponent<TestModeCanvasControl>();
        toggleButton_1 = GameObject.Find("ToggleButton_1").GetComponent<ToggleButton>();
        valueSlider_1 = GameObject.Find("ValueSlider_1").GetComponent<ValueSlider>();
        toggleButton_1.SetActive(false);
        valueSlider_1.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

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

    public void ST_TM_LED_Init()
    {
        toggleButton_1.SetPosition(700);
        valueSlider_1.SetPosition(460);
        toggleButton_1.SetText("1st LED");
        valueSlider_1.SetText("Brightness");
        toggleButton_1.SetActive(true);
        valueSlider_1.SetActive(true);
    }
    public void ST_TM_LED_Deinit()
    {
        toggleButton_1.SetActive(false);
        valueSlider_1.SetActive(false);
    }
    public void ST_TM_LED_Process()
    {

    }
}
