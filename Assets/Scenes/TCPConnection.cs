using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
using System.Net.Sockets;
using System;
using UnityEngine.InputSystem;

public class TCPConnection : MonoBehaviour
{
    [SerializeField] public string IPAddress = "192.168.1.16";
    [SerializeField] public int Port = 2001;

    private TcpClient tcpClient;
    private NetworkStream networkStream;
    private bool _isConnection = false;

    public bool Connect()
    {
        try
        {
            tcpClient = new TcpClient(IPAddress, Port);
            networkStream = tcpClient.GetStream();
            _isConnection = true;

            Debug.Log("Connected");
        }
        catch
        {
            Debug.LogError("Connection Failed");
            return false;
        }
        return true;
    }

    void Update()
    {
        // Awake 関数で接続に失敗した場合はその旨を表示します
        if (!_isConnection)
        {
            //Debug.Log("Non Connection");
            return;
        }

        /*
        var mouseInput = Mouse.current;
        var touchInput = Touchscreen.current;
        bool _isPressed = false;

        if (mouseInput != null)
        {
            _isPressed = mouseInput.leftButton.wasPressedThisFrame;
        }
        if (touchInput != null)
        {
            _isPressed = touchInput.touches[0].press.wasPressedThisFrame;
        }
        // 送信ボタンが押されたら
        
        if (_isPressed)//Input.GetMouseButtonDown(0))
        {
            try
            {
                // サーバに文字列を送信します
                var buffer = Encoding.UTF8.GetBytes(SendMess);
                networkStream.Write(buffer, 0, buffer.Length);

                Debug.LogFormat("Sent：{0}", SendMess);
            }
            catch (Exception)
            {
                // サーバが起動しておらず送信に失敗した場合はここに来ます
                // SocketException 型だと例外のキャッチができないようなので
                // Exception 型で例外をキャッチしています
                Debug.LogError("Send Failed");
            }

            try
            {
                var rcvbuffer = new byte[256];
                var count = networkStream.Read(rcvbuffer, 0, rcvbuffer.Length);
                var RecvMess = Encoding.UTF8.GetString(rcvbuffer, 0, count);
                Debug.Log(RecvMess);
            }
            catch (Exception)
            {
                Debug.LogError("Recv Failed");
            }
        }
        */
    }

    public void SendData(string str)
    {
        if (!_isConnection)
        {
            return;
        }
        try
        {
            //サーバに文字列を送信
            var buffer = Encoding.UTF8.GetBytes(str);
            networkStream.Write(buffer, 0, buffer.Length);

            Debug.Log("Sent:" + str);
        }
        catch (Exception)
        {
            Debug.LogError("Send Failed");
        }
    }

    public string ReceiveData()
    {
        if (!_isConnection)
        {
            return "Non Conncection";
        }
        string returnMess;
        try
        {
            var rcvbuffer = new byte[256];
            var count = networkStream.Read(rcvbuffer, 0, rcvbuffer.Length);
            returnMess = Encoding.UTF8.GetString(rcvbuffer, 0, count);
            Debug.Log(returnMess);
        }
        catch (Exception)
        {
            Debug.LogError("Recv Failed");
            returnMess = "Error";
        }
        return returnMess;
    }

    /// <summary>
    /// 破棄する時に呼び出されます
    /// </summary>
    private void OnDestroy()
    {
        // 通信に使用したインスタンスを破棄します
        // Awake 関数でインスタンスの生成に失敗している可能性もあるので
        // null 条件演算子を使用しています
        tcpClient?.Dispose();
        networkStream?.Dispose();

        Debug.Log("Disconnected");
    }


}
