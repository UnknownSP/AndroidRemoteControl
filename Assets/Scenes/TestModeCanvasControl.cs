using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

//テストモード関係の処理を行う
public class TestModeCanvasControl : MonoBehaviour
{
    private Configuration config;
    public enum DisplayCanvas : int
    {
        MainCanvas = -1,
        TestModeCanvas_1 = 0,
        TestModeCanvas_2 = 1,
    }
    public enum Direction : int
    {
        Right = 1,
        Left = -1,
    }
    public DisplayCanvas displayCanvas = DisplayCanvas.MainCanvas;
    Button testModeButton;
    Button gameModeButton;
    GameObject MainCanvas;
    GameObject TestModeCanvas_1;
    GameObject TestModeCanvas_2;
    GameObject TestModeHeader;
    GameObject ProcessCanvas;
    TextMeshProUGUI pwdText;
    string pwd;
    public bool _canvasMoving = false;
    public bool _testMode = false;
    bool _processItem = false;
    bool _moveTestMode = false;
    bool _moveGameMode = false;
    bool _moveCanvasRight = false;
    bool _moveCanvasLeft = false;
    float deltaTime = 0.0f;
    float moveTMTime = 0.0f;
    float moveGMTime = 0.0f;
    float moveTime = 0.0f;
    DebugControl debugControl;
    KZ_TestMenu KZ_TestMenu;
    TouchHandler touchHandler;
    ItemSlot displayItemSlot = new ItemSlot();
    ItemSlot targetItemSlot = new ItemSlot();
    ItemButtonControl[,] ItemButton = new ItemButtonControl[2,14];
    BackButtonControl backButton;
    int ItemSlotNum = 14;

    void Start()
    {
        //オブジェクトとコンポーネント割り当て
        config = GameObject.Find("Configuration").GetComponent<Configuration>();
        MainCanvas = GameObject.Find("MainCanvas");
        TestModeCanvas_1 = GameObject.Find("TestModeCanvas_1");
        TestModeCanvas_2 = GameObject.Find("TestModeCanvas_2");
        TestModeHeader = GameObject.Find("TestModeHeader");
        pwdText = GameObject.Find("TM_PWD").GetComponent<TextMeshProUGUI>();
        ProcessCanvas = GameObject.Find("ProcessCanvas");
        testModeButton = GameObject.Find("TMButton").GetComponent<Button>();
        gameModeButton = GameObject.Find("TM_GMButton").GetComponent<Button>();
        testModeButton.onClick.AddListener(TMButtonClick);
        gameModeButton.onClick.AddListener(GMButtonClick);
        debugControl = GameObject.Find("MainCamera").GetComponent<DebugControl>();
        KZ_TestMenu = GameObject.Find("MainCamera").GetComponent<KZ_TestMenu>();
        touchHandler = GameObject.Find("MainCamera").GetComponent<TouchHandler>();
        CanvasSet_Default();
        for (int i=0; i<ItemSlotNum; i++)
        {
            ItemButton[0,i] = GameObject.Find("ItemButton1_" + (i + 1)).GetComponent<ItemButtonControl>();
            ItemButton[1,i] = GameObject.Find("ItemButton2_" + (i + 1)).GetComponent<ItemButtonControl>();
        }
        backButton = GameObject.Find("TM_BackButton").GetComponent<BackButtonControl>();
        displayCanvas = DisplayCanvas.MainCanvas;
    }

    void Update()
    {
        deltaTime = Time.deltaTime;
        //テストモードへ移行中の場合
        if (_moveTestMode)
        {
            moveTMTime += deltaTime;
            //キャンバスの移動処理が完了した場合
            if (CanvasMove_TestMode(moveTMTime))
            {
                moveTMTime = 0.0f;
                _moveTestMode = false;
                displayCanvas = DisplayCanvas.TestModeCanvas_1;
                _canvasMoving = false;
                //表示中のアイテムを変更
                displayItemSlot = targetItemSlot;
                //アイテムボタン有効
                EnableItemButton(displayItemSlot);
                touchHandler.ResetTap();
                backButton.Enable();
                //現在のテストモード階層をセット
                SetPWD(displayItemSlot);
            }
        }
        //ゲームモードへ移行中の場合
        if (_moveGameMode)
        {
            moveGMTime += deltaTime;
            //キャンバスの移動処理が完了した場合
            if (CanvasMove_GameMode(moveGMTime))
            {
                moveGMTime = 0.0f;
                _moveGameMode = false;
                displayCanvas = DisplayCanvas.MainCanvas;
                _canvasMoving = false;
                //全てのアイテムを非表示
                DisableAllItemSlot();
                backButton.Disable();
                backButton.SetActive(false);
                pwdText.text = "";
            }
        }
        //キャンバスが右方向へ移動の場合(より深い階層へ移動する場合)
        if (_moveCanvasRight)
        {
            moveTime += deltaTime;
            //キャンバスの移動処理が完了した場合
            if (CanvasMove(moveTime, displayCanvas, Direction.Right))
            {
                moveTime = 0.0f;
                _moveCanvasRight = false;
                //1つ前の階層のアイテムを非表示
                DisableCanvasItemSlot(displayCanvas);
                if (displayCanvas == DisplayCanvas.TestModeCanvas_1)
                {
                    displayCanvas = DisplayCanvas.TestModeCanvas_2;
                }
                else
                {
                    displayCanvas = DisplayCanvas.TestModeCanvas_1;
                }
                _canvasMoving = false;
                //表示中のアイテムを変更
                displayItemSlot = targetItemSlot;
                //処理アイテムでない場合アイテムボタン有効
                if (!_processItem) EnableItemButton(displayItemSlot);
                //戻るボタンも有効
                backButton.Enable();
                //現在のテストモード階層をセット
                SetPWD(displayItemSlot);
            }
        }
        //キャンバスが左方向へ移動の場合(より浅い階層へ移動する場合)
        if (_moveCanvasLeft)
        {
            moveTime += deltaTime;
            //キャンバスの移動処理が完了した場合
            if (CanvasMove(moveTime, displayCanvas, Direction.Left))
            {
                moveTime = 0.0f;
                _moveCanvasLeft = false;
                //1つ前の階層のアイテムスロットを非表示
                if (!_processItem) DisableCanvasItemSlot(displayCanvas);
                if (displayCanvas == DisplayCanvas.TestModeCanvas_1)
                {
                    displayCanvas = DisplayCanvas.TestModeCanvas_2;
                }
                else
                {
                    displayCanvas = DisplayCanvas.TestModeCanvas_1;
                }
                _canvasMoving = false;
                //表示中のアイテムスロットを変更
                displayItemSlot = targetItemSlot;
                EnableItemButton(displayItemSlot);
                //戻るボタンも有効
                backButton.Enable();
                //現在のテストモード階層をセット
                SetPWD(displayItemSlot);
            }
        }

        //テストモード時の処理
        if (_testMode && !_canvasMoving && !_processItem)
        {
            //表示されてる全ボタンをループで監視
            for (int i=0; i<displayItemSlot.Items.Count; i++)
            {
                //表示されているボタンがタップされた場合
                if (ItemButton[(int)displayCanvas, i]._tapped)
                {
                    //他のボタンをDisable
                    for (int j=0; j< displayItemSlot.Items.Count; j++)
                    {
                        if (j == i) continue;
                        ItemButton[(int)displayCanvas, j].Disable();
                    }
                    //タップされた先が処理アイテムの場合
                    if (displayItemSlot.Items[i]._terminal)
                    {
                        //ゲームモードボタンは例外
                        if (displayItemSlot.Items[i].name == "Game Mode")
                        {
                            displayItemSlot.Items[i].process();
                            backButton.Disable();
                            touchHandler.ResetTap();
                            break;
                        }
                        //次アイテムをセット
                        targetItemSlot = displayItemSlot.Items[i];
                        //次アイテムの初期化処理
                        targetItemSlot.processInit();
                        //次アイテムが処理アイテムであるフラグを立てる
                        _processItem = true;
                    }
                    else
                    {
                        //処理アイテムでない場合は通常通り次のアイテムをセット
                        targetItemSlot = displayItemSlot.Items[i];
                        SetNextItemSlot(targetItemSlot);
                    }
                    moveTime = 0.0f;
                    //キャンバスの右移動
                    _moveCanvasRight = true;
                    _canvasMoving = true;
                    CanvasSet(displayCanvas, Direction.Right);
                    backButton.Disable();
                    touchHandler.ResetTap();
                    break;
                }
                else if (ItemButton[(int)displayCanvas, i]._longtapped)
                {
                    //ロングタップされた場合の処理は今後追加
                    //iPhoneのように対象の次階層を少し小さく表示
                }
            }
        }

        //処理アイテムの場合
        if (_processItem && !_canvasMoving)
        {
            displayItemSlot.process();
        }

        //戻るボタンが押された場合
        if (backButton._tapped && !_canvasMoving)
        {
            //今階層の親が存在する場合
            if (displayItemSlot.parent != null)
            {
                //親階層をセット
                targetItemSlot = KZ_TestMenu.GetParent(displayItemSlot.parent);
                SetNextItemSlot(targetItemSlot);
                moveTime = 0.0f;
                _moveCanvasLeft = true;
                _canvasMoving = true;
                CanvasSet(displayCanvas, Direction.Left);
                if (_processItem) displayItemSlot.processDeinit();
                _processItem = false;
            }
            else
            {
                //今階層の親が存在しない場合はゲームモードへ
                GMButtonClick();
            }
            //Debug.Log(displayItemSlot.name);
            //Debug.Log(displayItemSlot.parent.name);
            touchHandler.ResetTap();
            backButton.ResetTap();
            backButton.Disable();
        }
    }

    //テストモードボタンが押された場合
    void TMButtonClick()
    {
        if(!_canvasMoving && displayCanvas == DisplayCanvas.MainCanvas)
        {
            _canvasMoving = true;
            _moveTestMode = true;
            moveTMTime = 0.0f;
            CanvasSet_Default();
            //debugControl.SetActive(true);
            targetItemSlot = KZ_TestMenu.OperationMode;
            SetNextItemSlot(targetItemSlot);
            _testMode = true;
            backButton.Disable();
            backButton.SetActive(true);
        }
    }

    //ゲームモードボタンが押された場合
    public void GMButtonClick()
    {
        if (!_canvasMoving && (displayCanvas == DisplayCanvas.TestModeCanvas_1 || displayCanvas == DisplayCanvas.TestModeCanvas_2))
        {
            _canvasMoving = true;
            _moveGameMode = true;
            moveGMTime = 0.0f;
            switch (displayCanvas)
            {
                case DisplayCanvas.TestModeCanvas_1:
                    CanvasSet_1ToGM();
                    break;
                case DisplayCanvas.TestModeCanvas_2:
                    CanvasSet_2ToGM();
                    break;
            }
            //debugControl.SetActive(false);
            _testMode = false;
            touchHandler.ResetTap();
            backButton.Disable();
            if (_processItem)
            {
                displayItemSlot.processDeinit();
                _processItem = false;
            }
        }
    }

    void CanvasSet_Default()
    {
        MainCanvas.transform.position = new Vector3(0, 0, 0);
        TestModeCanvas_1.transform.position = new Vector3(config.displayWidth, 0, -2);
        TestModeHeader.transform.position = new Vector3(config.displayWidth, 0, -2);
        TestModeCanvas_2.transform.position = new Vector3(config.displayWidth * 2, 0, -2);
    }

    void CanvasSet_TMDefault()
    {
        MainCanvas.transform.position = new Vector3(-config.displayWidth, 0, 0);
        TestModeCanvas_1.transform.position = new Vector3(0, 0, -2);
        TestModeHeader.transform.position = new Vector3(0, 0, -2);
        TestModeCanvas_2.transform.position = new Vector3(config.displayWidth, 0, -2);
    }

    void CanvasSet_1ToGM()
    {
        MainCanvas.transform.position = new Vector3(-config.displayWidth, 0, 0);
        TestModeCanvas_1.transform.position = new Vector3(0, 0, -2);
        TestModeHeader.transform.position = new Vector3(0, 0, -2);
        TestModeCanvas_2.transform.position = new Vector3(config.displayWidth, 0, -2);
    }

    void CanvasSet_2ToGM()
    {
        MainCanvas.transform.position = new Vector3(-config.displayWidth, 0, 0);
        TestModeCanvas_1.transform.position = new Vector3(config.displayWidth, 0, -2);
        TestModeHeader.transform.position = new Vector3(0, 0, -2);
        TestModeCanvas_2.transform.position = new Vector3(0, 0, -2);
    }

    void CanvasSet(DisplayCanvas nowCanvas, Direction direction)
    {
        if (nowCanvas == DisplayCanvas.TestModeCanvas_1)
        {
            MainCanvas.transform.position = new Vector3(-config.displayWidth * 2, 0, 0);
            TestModeCanvas_1.transform.position = new Vector3(0, 0, -2);
            if (direction == Direction.Right)
            {
                TestModeCanvas_2.transform.position = new Vector3(config.displayWidth, 0, -2);
                ProcessCanvas.transform.position = new Vector3(config.displayWidth, 0, -3);
            }
            if (direction == Direction.Left)
            {
                TestModeCanvas_2.transform.position = new Vector3(-config.displayWidth, 0, -2);
            }
        }
        if (nowCanvas == DisplayCanvas.TestModeCanvas_2)
        {
            MainCanvas.transform.position = new Vector3(-config.displayWidth * 2, 0, 0);
            TestModeCanvas_2.transform.position = new Vector3(0, 0, -2);
            if (direction == Direction.Right)
            {
                TestModeCanvas_1.transform.position = new Vector3(config.displayWidth, 0, -2);
                ProcessCanvas.transform.position = new Vector3(config.displayWidth, 0, -3);
            }
            if (direction == Direction.Left)
            {
                TestModeCanvas_1.transform.position = new Vector3(-config.displayWidth, 0, -2);
            }
        }
    }

    //次アイテムのセット
    void SetNextItemSlot(ItemSlot item)
    {
        if (displayCanvas == DisplayCanvas.TestModeCanvas_1)
        {
            for (int i = 0; i < ItemSlotNum; i++)
            {
                if (i < item.Items.Count)
                {
                    ItemButton[1, i].Disable();
                    ItemButton[1,i].SetActive(true);
                    ItemButton[1,i].SetText(item.Items[i].name);
                }
                else
                {
                    ItemButton[1,i].SetActive(false);
                }
            }
        }

        if (displayCanvas == DisplayCanvas.MainCanvas || displayCanvas == DisplayCanvas.TestModeCanvas_2)
        {
            for (int i=0; i<ItemSlotNum; i++)
            {
                if (i < item.Items.Count)
                {
                    ItemButton[0, i].Disable();
                    ItemButton[0,i].SetActive(true);
                    ItemButton[0,i].SetText(item.Items[i].name);
                }
                else
                {
                    ItemButton[0,i].SetActive(false);
                }
            }
        }
    }

    void EnableItemButton(ItemSlot item)
    {
        for (int i = 0; i < ItemSlotNum; i++)
        {
            if (i < item.Items.Count)
            {
                ItemButton[(int)displayCanvas, i].Enable();
            }
        }
    }

    void DisableAllItemSlot()
    {
        for (int i=0; i<ItemSlotNum; i++)
        {
            ItemButton[0,i].SetActive(false);
            ItemButton[1,i].SetActive(false);
        }
    }

    void DisableCanvasItemSlot(DisplayCanvas canvasNum)
    {
        for (int i = 0; i < ItemSlotNum; i++)
        {
            ItemButton[(int)canvasNum, i].SetActive(false);
        }
    }

    //キャンバスの移動処理
    bool CanvasMove(float nowTime, DisplayCanvas nowCanvas, Direction direction)
    {
        float timeDiffRatio = (config.canvasMovingTime - nowTime) / config.canvasMovingTime;
        //キャンバス移動速度カーブの定義
        float movingRatio = 1.0f - timeDiffRatio * timeDiffRatio * timeDiffRatio * timeDiffRatio;
        if (timeDiffRatio > 0.0f)
        {
            if (nowCanvas == DisplayCanvas.TestModeCanvas_1)
            {
                TestModeCanvas_1.transform.position = new Vector3(-config.displayWidth * movingRatio * (float)direction, 0, -2);
                TestModeCanvas_2.transform.position = new Vector3(config.displayWidth * (float)direction - config.displayWidth * movingRatio * (float)direction, 0, -2);
            }
            else if (nowCanvas == DisplayCanvas.TestModeCanvas_2)
            {
                TestModeCanvas_1.transform.position = new Vector3(config.displayWidth * (float)direction - config.displayWidth * movingRatio * (float)direction, 0, -2);
                TestModeCanvas_2.transform.position = new Vector3(-config.displayWidth * movingRatio * (float)direction, 0, -2);
            }
            ProcessCanvas.transform.position = new Vector3(config.displayWidth * (float)direction - config.displayWidth * movingRatio * (float)direction, 0, -3);
        }
        else
        {
            if (nowCanvas == DisplayCanvas.TestModeCanvas_1)
            {
                CanvasSet_2ToGM();
            }
            else if (nowCanvas == DisplayCanvas.TestModeCanvas_2)
            {
                CanvasSet_1ToGM();
            }
            ProcessCanvas.transform.position = new Vector3(0, 0, -3);
            return true;
        }

        return false;
    }

    //テストモード移行時のキャンバスの移動処理
    bool CanvasMove_TestMode(float nowTime)
    {
        float timeDiffRatio = (config.canvasMovingTime - nowTime) / config.canvasMovingTime;
        float movingRatio = 1.0f - timeDiffRatio * timeDiffRatio * timeDiffRatio * timeDiffRatio;
        if (timeDiffRatio > 0.0f)
        {
            MainCanvas.transform.position = new Vector3(-config.displayWidth * movingRatio, 0, 0);
            TestModeCanvas_1.transform.position = new Vector3(config.displayWidth - config.displayWidth * movingRatio, 0, -2);
            TestModeHeader.transform.position = new Vector3(config.displayWidth - config.displayWidth * movingRatio, 0, -2);
            TestModeCanvas_2.transform.position = new Vector3(config.displayWidth * 2 - config.displayWidth * movingRatio, 0, -2);
        }
        else
        {
            CanvasSet_TMDefault();
            return true;
        }

        return false;
    }

    //ゲームモード移行時のキャンバスの移動処理
    bool CanvasMove_GameMode(float nowTime)
    {
        float timeDiffRatio = (config.canvasMovingTime - nowTime) / config.canvasMovingTime;
        float movingRatio = 1.0f - timeDiffRatio * timeDiffRatio * timeDiffRatio * timeDiffRatio;
        if (timeDiffRatio > 0.0f)
        {
            switch (displayCanvas)
            {
                case DisplayCanvas.TestModeCanvas_1:
                    MainCanvas.transform.position = new Vector3(-config.displayWidth + config.displayWidth * movingRatio, 0, 0);
                    TestModeCanvas_1.transform.position = new Vector3(config.displayWidth * movingRatio, 0, -2);
                    TestModeHeader.transform.position = new Vector3(config.displayWidth * movingRatio, 0, -2);
                    TestModeCanvas_2.transform.position = new Vector3(config.displayWidth + config.displayWidth * movingRatio, 0, -2);
                    break;
                case DisplayCanvas.TestModeCanvas_2:
                    MainCanvas.transform.position = new Vector3(-config.displayWidth + config.displayWidth * movingRatio, 0, 0);
                    TestModeCanvas_1.transform.position = new Vector3(config.displayWidth + config.displayWidth * movingRatio, 0, -2);
                    TestModeHeader.transform.position = new Vector3(config.displayWidth * movingRatio, 0, -2);
                    TestModeCanvas_2.transform.position = new Vector3(config.displayWidth * movingRatio, 0, -2);
                    break;
            }
        }
        else
        {
            CanvasSet_Default();
            return true;
        }

        return false;
    }

    //現在の階層をセット
    private void SetPWD(ItemSlot display)
    {
        int count = 1;
        List<string> getPWD = KZ_TestMenu.GetPWD(display);
        pwd = getPWD[getPWD.Count-1];
        for (int i = getPWD.Count-2; i >= 0; i--)
        {
            pwd += " > " + getPWD[i];
            count++;
            if (count % 2 == 0) pwd += "\n";
        }
        pwdText.text = pwd;
    }

}
