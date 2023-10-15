using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CanvasControl : MonoBehaviour
{
    private Configuration config;
    public enum DisplayCanvas
    {
        MainCanvas,
        TestModeCanvas_1,
        TestModeCanvas_2,
    }
    DisplayCanvas displayCanvas = DisplayCanvas.MainCanvas;
    Button testModeButton;
    Button gameModeButton;
    GameObject MainCanvas;
    GameObject TestModeCanvas_1;
    GameObject TestModeCanvas_2;
    GameObject TestModeHeader;
    bool _canvasMoving = false;
    bool _moveTestMode = false;
    bool _moveGameMode = false;
    float deltaTime = 0.0f;
    float moveTMTime = 0.0f;
    float moveGMTime = 0.0f;

    // Start is called before the first frame update
    void Start()
    {
        config = GameObject.Find("Configuration").GetComponent<Configuration>();
        MainCanvas = GameObject.Find("MainCanvas");
        TestModeCanvas_1 = GameObject.Find("TestModeCanvas_1");
        TestModeCanvas_2 = GameObject.Find("TestModeCanvas_2");
        TestModeHeader = GameObject.Find("TestModeHeader");
        testModeButton = GameObject.Find("TMButton").GetComponent<Button>();
        gameModeButton = GameObject.Find("TM_GMButton").GetComponent<Button>();
        testModeButton.onClick.AddListener(TMButtonClick);
        gameModeButton.onClick.AddListener(GMButtonClick);
        CanvasSet_Default();
    }

    // Update is called once per frame
    void Update()
    {
        deltaTime = Time.deltaTime;
        if (_moveTestMode)
        {
            moveTMTime += deltaTime;
            if (CanvasMove_TestMode(moveTMTime))
            {
                moveTMTime = 0.0f;
                _moveTestMode = false;
                displayCanvas = DisplayCanvas.TestModeCanvas_1;
                _canvasMoving = false;
            }
        }
        if (_moveGameMode)
        {
            moveGMTime += deltaTime;
            if (CanvasMove_GameMode(moveGMTime))
            {
                moveGMTime = 0.0f;
                _moveGameMode = false;
                displayCanvas = DisplayCanvas.MainCanvas;
                _canvasMoving = false;
            }
        }
    }

    void TMButtonClick()
    {
        if(!_canvasMoving && displayCanvas == DisplayCanvas.MainCanvas)
        {
            _canvasMoving = true;
            _moveTestMode = true;
            moveTMTime = 0.0f;
            CanvasSet_Default();
        }
    }

    void GMButtonClick()
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

}
