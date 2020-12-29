package io.chabok.starter;

import android.os.Bundle;
import android.util.Log;

import com.adpdigital.push.AdpPushClient;
import com.adpdigital.push.Callback;
import com.adpdigital.push.ChabokEvent;
import com.adpdigital.push.Datetime;

import org.json.JSONException;
import org.json.JSONObject;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

public class ChabokPush {

    public static AdpPushClient chabok = AdpPushClient.get();

    public static AdpPushClient getAdpPushClient () {
        return chabok;
    }

    public static String getUserId() {
        return chabok.getUserId();
    }

    public static void login(String userId) {
        chabok.login(userId);
    }

    public static void login(String userId, Callback<String> callback) {
        chabok.login(userId,callback);
    }

    public static void login(String userId,String[] tagsName) {
        chabok.login(userId, tagsName);
    }

    public static void login(String userId, String userHash) {
        chabok.login(userId,userHash);
    }

    public static void logout() {
        chabok.logout();
    }

    public static void addTag(String tagName, Callback callback) {
        chabok.addTag(tagName, callback);
    }

    public static void addTag(String[] tagsName, Callback callback) {
        chabok.addTag(tagsName, callback);
    }

    public static void removeTag(String tagName, Callback callback) {
        chabok.removeTag(tagName, callback);
    }

    public static void removeTag(String[] tagsName, Callback callback) {
        chabok.removeTag(tagsName, callback);
    }

    public static void setUserAttributes(HashMap<String, Object> attribute) {
        chabok.setUserAttributes(attribute);
    }

    public static void unsetUserAttribute(String attributeKey) {
        unsetUserAttributes(new String[]{attributeKey});
    }

    public static void unsetUserAttributes(String[] attributeKeys) {
        chabok.unsetUserAttributes(attributeKeys);
    }

    public static void addToUserAttributeArray(String attributeKey, String attributeValue) {
        chabok.addToUserAttributeArray(attributeKey, attributeValue);
    }

    public static void addToUserAttributeArray(String attributeKey, String[] attributeValues) {
        chabok.addToUserAttributeArray(attributeKey, attributeValues);
    }

    public static void removeFromUserAttributeArray(String attributeKey, String attributeValue) {
        chabok.removeFromUserAttributeArray(attributeKey, attributeValue);
    }

    public static void removeFromUserAttributeArray(String attributeKey, String[] attributeValues) {
        chabok.removeFromUserAttributeArray(attributeKey, attributeValues);
    }

    public  static HashMap<String, Object> getUserAttributes() {
        return chabok.getUserAttributes();
    }

    public static void incrementUserAttribute(String attributeName) {
        chabok.incrementUserAttribute(attributeName);
    }

    public static void incrementUserAttribute(String attributeName,double value) {
        chabok.incrementUserAttribute(attributeName, value);
    }

    public static void incrementUserAttribute(ArrayList<String> attributes) {
        chabok.incrementUserAttribute(attributes);
    }

    public static void incrementUserAttribute(HashMap<String, Double> attributes) {
        chabok.incrementUserAttribute(attributes);
    }

    public static void decrementUserAttribute(String attributeName) {
        chabok.decrementUserAttribute(attributeName);
    }

    public static void decrementUserAttribute(String attributeName,double value) {
        chabok.decrementUserAttribute(attributeName, value);
    }

    public static void decrementUserAttribute(ArrayList<String> attributes) {
        chabok.decrementUserAttribute(attributes);
    }

    public static void decrementUserAttribute(HashMap<String, Double> attributes) {
        chabok.decrementUserAttribute(attributes);
    }

    public static void track(String eventName) {
        chabok.track(eventName);
    }

    public static void track(String eventName, HashMap<String, Object> data) {
        Bundle bundle;
        bundle = hashMapToBundle(data);
        JSONObject objData = new JSONObject();
        for (Map.Entry<String, Object> entry : data.entrySet()) {
            Log.d("chaaaaaaa","" +entry);
            try {
                if(entry.getValue() instanceof Datetime) {
                    objData.put(entry.getKey(), ((Datetime) entry.getValue()).getDate());
                    Log.d("chaaaaaaa","" +((Datetime) entry.getValue()).getDate());
                }
                else {
                    objData.put(entry.getKey(), entry.getValue());
                }
            } catch (JSONException e) {
                e.printStackTrace();
            }
            // Do things with the list
        }
//        Log.d("chaaaaaaa","" +data.get("EditDate"));
        chabok.track(eventName, bundle);
    }

    public static void trackPurchase(String eventName,double revenue, HashMap<String, Object> data) {
        Bundle bundle;
        bundle = hashMapToBundle(data);
        ChabokEvent chabokEvent = new ChabokEvent(revenue);
//        JSONObject objData = new JSONObject(data);
        chabokEvent.setData(bundle);
        chabok.trackPurchase(eventName, chabokEvent);
    }

    public static void trackRevenue(double revenue) {
        chabok.trackRevenue(revenue);
    }

    public static Bundle hashMapToBundle (HashMap<String,Object> data) {
        Bundle bundle = new Bundle();
        for (Map.Entry<String, Object> entry : data.entrySet()) {
            if (entry.getValue() instanceof String) {
                bundle.putString(entry.getKey(), (String) entry.getValue());
            } else if (entry.getValue() instanceof Double) {
                bundle.putDouble(entry.getKey(), ((Double) entry.getValue()));
            } else if (entry.getValue() instanceof Integer) {
                bundle.putInt(entry.getKey(), (Integer) entry.getValue());
            } else if (entry.getValue() instanceof Float) {
                bundle.putFloat(entry.getKey(), ((Float) entry.getValue()));
            } else if (entry.getValue() instanceof Boolean) {
                bundle.putBoolean(entry.getKey(), ((Boolean) entry.getValue()));
            } else if (entry.getValue() instanceof Object[]) {
                bundle.putStringArray(entry.getKey(), (String[]) entry.getValue());
            } else if (entry.getValue() instanceof Datetime) {
                bundle.putParcelable(entry.getKey(), (Datetime) entry.getValue());
            } else {
                bundle.putString(entry.getKey(), "" +entry.getValue());

            }
        }

        return bundle;
    }

}