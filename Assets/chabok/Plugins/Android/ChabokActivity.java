package io.chabok.unity;

import com.unity3d.player.UnityPlayerActivity;
import android.os.Bundle;
import android.os.Build;

import com.adpdigital.push.AdpPushClient;
import com.adpdigital.push.AppListener;
import com.adpdigital.push.ChabokMessage;
import com.adpdigital.push.ChabokNotification;
import com.adpdigital.push.ChabokNotificationAction;
import com.adpdigital.push.ConnectionStatus;
import com.adpdigital.push.DeferredDataListener;
import com.adpdigital.push.DeliveryMessage;
import com.adpdigital.push.EventMessage;
import com.adpdigital.push.LogLevel;
import com.adpdigital.push.NotificationHandler;
import com.adpdigital.push.config.Environment;
import android.widget.Toast;

public class ChabokActivity extends UnityPlayerActivity {
   
   

    @Override
	protected String updateUnityCommandLineArguments(String cmdLine) {
		
		
       return cmdLine;
    }

    @Override 
	protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

		//Toast.makeText(this, "", Toast.LENGTH_SHORT).show();
	
    }
	
	
	
	
}