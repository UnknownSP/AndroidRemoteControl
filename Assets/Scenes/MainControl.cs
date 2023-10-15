using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainControl : MonoBehaviour
{
    [SerializeField] private TCPConnection TCPcon;
    [SerializeField] private LaunchButtonControl launchButtonControl;
    private bool _TCPConnected = false;
    private Configuration config;
    // Start is called before the first frame update
    void Start()
    {
        config = GameObject.Find("Configuration").GetComponent<Configuration>();

        if (config._useTCP)
        {
            if (TCPcon.Connect())
            {
                _TCPConnected = true;
                launchButtonControl.setTCPConnection(TCPcon);
            }
        }
        launchButtonControl._enabledLaunch = true;
    }

    // Update is called once per frame
    void Update()
    {
        if (!_TCPConnected && config._useTCP)
        {
            Debug.Log("Non TCP Connection");
            return;
        }

    }
}
