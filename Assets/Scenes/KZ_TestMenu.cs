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
    public ItemSlot parent;
    public List<ItemSlot> Items = new List<ItemSlot>();
    public List<ItemOperation> operation = new List<ItemOperation>();
    public Action process;
}

public class KZ_TestMenu : MonoBehaviour
{

    public ItemSlot ST_DataMode;
    public ItemSlot ST_ServiceSettings;
    public ItemSlot ST_TestMode;
    public ItemSlot MAIN_DataMode;
    public ItemSlot MAIN_ServiceSettings;
    public ItemSlot MAIN_TestMode;
    public ItemSlot StationMenu;
    public ItemSlot MainMenu;
    public ItemSlot GameMode;
    public ItemSlot OperationMode;

    TestModeCanvasControl canvasControl;

    // Start is called before the first frame update
    void Start()
    {
        SetOparationMode();
        canvasControl = GameObject.Find("MainCamera").GetComponent<TestModeCanvasControl>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void SetOparationMode()
    {
        //third
        ST_DataMode = new ItemSlot
        {
            name = "Data Mode",
            parent = StationMenu,
        };
        ST_ServiceSettings = new ItemSlot
        {
            name = "Service Setting",
            parent = StationMenu,
        };
        ST_TestMode = new ItemSlot
        {
            name = "Test Mode",
            parent = StationMenu,
        };
        MAIN_DataMode = new ItemSlot
        {
            name = "Data Mode",
            parent = MainMenu,
        };
        MAIN_ServiceSettings = new ItemSlot
        {
            name = "Service Setting",
            parent = MainMenu,
        };
        MAIN_TestMode = new ItemSlot
        {
            name = "Test Mode",
            parent = MainMenu,
        };
        //second
        StationMenu = new ItemSlot
        {
            name = "Station Menu",
            parent = OperationMode,
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
            parent = OperationMode,
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
            name = "Oparation Mode",
            parent = null,
            Items = new List<ItemSlot>
            {
                StationMenu,
                MainMenu,
                GameMode,
            },
        };
    }
}
