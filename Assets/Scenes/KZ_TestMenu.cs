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
}

public class KZ_TestMenu : MonoBehaviour
{

    public ItemSlot ST_DataMode = new ItemSlot();
    public ItemSlot ST_ServiceSettings = new ItemSlot();
    public ItemSlot ST_TestMode = new ItemSlot();
    public ItemSlot MAIN_DataMode = new ItemSlot();
    public ItemSlot MAIN_ServiceSettings = new ItemSlot();
    public ItemSlot MAIN_TestMode = new ItemSlot();
    public ItemSlot StationMenu = new ItemSlot();
    public ItemSlot MainMenu = new ItemSlot();
    public ItemSlot GameMode = new ItemSlot();
    public ItemSlot OperationMode = new ItemSlot();

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
        }
        return OperationMode;
    }
}
