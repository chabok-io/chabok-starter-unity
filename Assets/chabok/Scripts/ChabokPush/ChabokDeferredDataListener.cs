using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChabokDeferredDataListener : AndroidJavaProxy
{
    public delegate void OnReferralReceived(string referralId);
    public delegate void LaunchReceivedDeeplink(AndroidJavaObject exception);

    public event OnReferralReceived onReferral;
    public event LaunchReceivedDeeplink receivedDeeplink;

    public ChabokDeferredDataListener() : base("com.adpdigital.push.DeferredDataListener") { }

    private void onReferralReceived(string referralId)
    {
        if (onReferral != null)
        {
            onReferral.Invoke(referralId);
        }
        Debug.Log("ENTER DeferredDataListener onReferralReceived: " + referralId);
    }

    public bool launchReceivedDeeplink(AndroidJavaObject deeplink)
    {
        if (receivedDeeplink != null)
        {
            receivedDeeplink.Invoke(deeplink);
        }
        Debug.Log("ENTER DeferredDataListener launchReceivedDeeplink: " + deeplink);

        return false;
    }
}
