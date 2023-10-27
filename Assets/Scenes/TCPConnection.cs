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

    //接続
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

        if (!_isConnection)
        {
            //Debug.Log("Non Connection");
            return;
        }
    }

    //送信
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

    //受信
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

    private void OnDestroy()
    {
        //インスタンスの破棄
        tcpClient?.Dispose();
        networkStream?.Dispose();

        Debug.Log("Disconnected");
    }


}
