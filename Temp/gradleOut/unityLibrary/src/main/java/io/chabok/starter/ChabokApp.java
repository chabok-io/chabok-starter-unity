package io.chabok.starter;

import android.app.Application;
import android.content.Context;
import android.net.Uri;
import android.util.Log;

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

import java.util.Locale;

public class ChabokApp extends Application {

    AdpPushClient adpPush = null;

    

    @Override
    public void onCreate() {
        super.onCreate();

        AdpPushClient.setLogLevel(LogLevel.VERBOSE);
		AdpPushClient.setApplicationContext(this);
		AdpPushClient.setEnvironment(Environment.SANDBOX);
		
		AdpPushClient.init(getApplicationContext(),
                ChabokActivity.class,
                "adp-nms-push",
               "e2100f0d7e071c7450f04e530bda746da2fc493b",
                "adp",
                 "test");
				 
				 
		AdpPushClient.get().setEnableRealtime(false);
		AdpPushClient.get().setDevelopment(true);
				 
				 
		String userId = AdpPushClient.get().getUserId();
        if (userId != null) {
            AdpPushClient.get().login(userId);
        } else {
            AdpPushClient.get().logout();
        }
				 
    }

    
}
