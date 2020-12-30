using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using System.Linq;
using System;

public class ChabokPush {

#if UNITY_ANDROID
    static AndroidJavaClass androidChabokPush;
#endif

    private ChabokPush() {
    }

    private static readonly object podlock = new object();
    private static ChabokPush instance = null;
    public static ChabokPush GetInstance()
    {
        if (instance == null)
        {
            lock (podlock)
            {
                if (instance == null)
                {
#if UNITY_ANDROID
                    androidChabokPush = new AndroidJavaClass("io.chabok.unity.ChabokPush");
#endif

                    instance = new ChabokPush();
                }
            }
        }
        return instance;
    }

#if UNITY_IOS

    [DllImport("__Internal")]
    extern static private void iosLogin(string userId);

    [DllImport("__Internal")]
    extern static private void iosLogout();

    [DllImport("__Internal")]
    extern static private void iosSubscribeEvent(string eventName);

    [DllImport("__Internal")]
    extern static private void iosAddTag(string tagName);

    [DllImport("__Internal")]
    extern static private void iosAddTags(string[] tags, int size);

    [DllImport("__Internal")]
    extern static private void iosRemoveTag(string tagName);

    [DllImport("__Internal")]
    extern static private void iosRemoveTags(string[] tags, int size);

    [DllImport("__Internal")]
    extern static private void iosAddToUserAttributeArray(string key, string value);

    [DllImport("__Internal")]
    extern static private void iosSetUserAttribute(string[] attrKeys, string attrValues, string attrTypes, int dicSize);

    [DllImport("__Internal")]
    extern static private void iosUnsetUserAttribute(string key);

    [DllImport("__Internal")]
    extern static private void iosRemoveFromUserAttributeArray(string key, string value);

    [DllImport("__Internal")]
    extern static private void iosIncrementUserAttribute(string key);

    [DllImport("__Internal")]
    extern static private void iosIncrementUserAttributeValue(string key, double value);

    [DllImport("__Internal")]
    extern static private void iosDecrementUserAttribute(string key);

    [DllImport("__Internal")]
    extern static private void iosDecrementUserAttributeValue(string key, double value);

    [DllImport("__Internal")]
    extern static private void iosTrack(string name, string[] attrKeys, string attrValues,
                                    string attrTypes, int dicSize);

    [DllImport("__Internal")]
    extern static private void iosTrackRevenue(double revenue);

    [DllImport("__Internal")]
    extern static private void iosTrackPurchase(string eventName, double revenue, string currency,
        string[] attrKeys, string attrValues, string attrTypes, int dicSize);

    private static void _setUserAttribute(Dictionary<string, object> attributes)
    {
        int dicSize = attributes.Count;
        string[] keys = new string[dicSize];
        object[] values = new object[dicSize];
        string[] types = new string[dicSize];

        for (int i = 0; i < dicSize; i++)
        {
            keys[i] = attributes.ElementAt(i).Key;

            if (attributes.ElementAt(i).Value is Array)
            {
                string[] arr = (string[])attributes.ElementAt(i).Value;
                values[i] = string.Join("#%$", arr);

            }
            else
            {
                values[i] = attributes.ElementAt(i).Value;
            }

            types[i] = variableType(attributes.ElementAt(i).Value);
        }
        iosSetUserAttribute(keys, string.Join(",", values), string.Join(",", types), dicSize);
    }

    private static void _track(string name, Dictionary<string, object> attributes)
    {
        int dicSize = attributes.Count;
        string[] keys = new string[dicSize];
        object[] values = new object[dicSize];
        string[] types = new string[dicSize];

        for (int i = 0; i < dicSize; i++)
        {
            keys[i] = attributes.ElementAt(i).Key;

            if (attributes.ElementAt(i).Value is Array)
            {
                string[] arr = (string[])attributes.ElementAt(i).Value;
                values[i] = string.Join("#%$", arr);

            }
            else
            {
                values[i] = attributes.ElementAt(i).Value;
            }

            types[i] = variableType(attributes.ElementAt(i).Value);
        }
        iosTrack(name, keys, string.Join(",", values), string.Join(",", types), dicSize);
    }

    private static void _trackPurchase(string eventName, double revenue, string currency,
        Dictionary<string, object> attributes)
    {
        int dicSize = attributes.Count;
        string[] keys = new string[dicSize];
        object[] values = new object[dicSize];
        string[] types = new string[dicSize];

        for (int i = 0; i < dicSize; i++)
        {
            keys[i] = attributes.ElementAt(i).Key;

            if (attributes.ElementAt(i).Value is Array)
            {
                string[] arr = (string[])attributes.ElementAt(i).Value;
                values[i] = string.Join("#%$", arr);

            }
            else
            {
                values[i] = attributes.ElementAt(i).Value;
            }

            types[i] = variableType(attributes.ElementAt(i).Value);
        }
        iosTrackPurchase(eventName, revenue, currency, keys, string.Join(",", values), string.Join(",", types), dicSize);
    }

    private static string variableType(object variable)
    {
        if (variable is null) return "";
        else
        {
            if (variable is string) return "string";
            else if (variable is int) return "int";
            else if (variable is float) return "float";
            else if (variable is double) return "double";
            else if (variable is bool) return "boolean";
            else if (variable is DateTime) return "date";
            else if (variable is Array) return "array";
            else return "string";
        }

    }
#endif

    public void Login(string userId)
    {
#if UNITY_ANDROID
        androidChabokPush.CallStatic("login",userId);
#elif UNITY_IOS
        iosLogin(userId);
#endif

    }

    public void Logout()
    {
#if UNITY_ANDROID
        androidChabokPush.CallStatic("logout");
#elif UNITY_IOS
        iosLogout();
#endif

    }

    public void AddTag(string tagName, AndroidPluginCallback callback = null)
    {
#if UNITY_ANDROID
        androidChabokPush.CallStatic("addTag", tagName, callback);
#elif UNITY_IOS
        iosAddTag(tagName);
#endif

    }

    public void RemoveTag(string tagName, AndroidPluginCallback callback = null)
    {
#if UNITY_ANDROID
        androidChabokPush.CallStatic("removeTag", tagName, callback);
#elif UNITY_IOS
        iosRemoveTag(tagName);
#endif

    }

    public void SetUserAttributes(Dictionary<string, object> attributes)
    {
#if UNITY_ANDROID
        androidChabokPush.CallStatic("setUserAttributes", ConvertDictionaryToJavaMap(attributes));
#elif UNITY_IOS
        _setUserAttribute(attributes);
#endif

    }

//    public string chabokGetUserAttributes()
//    {
//#if UNITY_ANDROID
//return "";
//        //return androidChabokPush.CallStatic("getUserAttributes");
//#elif UNITY_IOS
//        return getUserAttributes();
//#endif

//    }

    public void IncrementUserAttribute(string attribute, double value)
    {
#if UNITY_ANDROID
        androidChabokPush.CallStatic("incrementUserAttribute", attribute, value);
#elif UNITY_IOS
        iosIncrementUserAttributeValue(attribute, value);
#endif

    }

    public void DecrementUserAttribute(string attribute, double value)
    {
#if UNITY_ANDROID
        androidChabokPush.CallStatic("decrementUserAttribute", attribute, value);
#elif UNITY_IOS
        iosDecrementUserAttributeValue(attribute, value);
#endif

    }

    public void AddToUserAttributeArray(string key, string value)
    {
#if UNITY_ANDROID
        androidChabokPush.CallStatic("addToUserAttributeArray", key, value);
#elif UNITY_IOS
        iosAddToUserAttributeArray(key, value);
#endif

    }

    public void RemoveFromUserAttributeArray(string key, string value)
    {
#if UNITY_ANDROID
        androidChabokPush.CallStatic("removeFromUserAttributeArray", key, value);
#elif UNITY_IOS
        iosRemoveFromUserAttributeArray(key, value);
#endif

    }

    public void Track(string title, Dictionary<string, object> eventData)
    {
#if UNITY_ANDROID
        androidChabokPush.CallStatic("track", title, ConvertDictionaryToJavaMap(eventData));
#elif UNITY_IOS
        _track(title, eventData);
#endif

    }

    public void TrackRevenue(double value)
    {
#if UNITY_ANDROID
        androidChabokPush.CallStatic("trackRevenue", value);
#elif UNITY_IOS
        iosTrackRevenue(value);
#endif

    }

    public void TrackPurchase(string title, double value, string currency, Dictionary<string, object> purchaseData)
    {
#if UNITY_ANDROID
        if(!purchaseData.ContainsKey("currency")) purchaseData.Add("currency", currency);
        androidChabokPush.CallStatic("trackPurchase", title,value, ConvertDictionaryToJavaMap(purchaseData));
#elif UNITY_IOS
        if (purchaseData.ContainsKey("currency")) purchaseData.Remove("currency");
        _trackPurchase(title, value, "IRR", purchaseData);
#endif

    }

#if UNITY_ANDROID
    public AndroidJavaObject ConvertDictionaryToJavaMap(Dictionary<string, object> dictionary)
    {

        AndroidJavaObject map = new AndroidJavaObject("java.util.HashMap");

        IntPtr method_Put = AndroidJNIHelper.GetMethodID(map.GetRawClass(), "put",
                "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");

        object[] args = new object[2];
        foreach (KeyValuePair<string, object> kvp in dictionary)
        {

            AndroidJavaObject k = new AndroidJavaObject("java.lang.String", kvp.Key);
            AndroidJavaObject v;

            if (kvp.Value is int)
            {
                v = new AndroidJavaObject("java.lang.Integer", kvp.Value);

            }
            else if (kvp.Value is string)
            {
                v = new AndroidJavaObject("java.lang.String", kvp.Value);
            }
            else if (kvp.Value is double)
            {
                v = new AndroidJavaObject("java.lang.Double", kvp.Value);
            }
            else if (kvp.Value is float)
            {
                v = new AndroidJavaObject("java.lang.Float", kvp.Value);
            }
            else if (kvp.Value is bool)
            {
                v = new AndroidJavaObject("java.lang.Boolean", kvp.Value);
            }
            else if (kvp.Value is Array)
            {
                IEnumerable<object> collection = (IEnumerable<object>)kvp.Value;
                List<object> list = new List<object>();

                int size = 0;
                foreach (object item in collection)
                {
                    size++;
                    //Console.WriteLine(item.ToString());
                    //Log("array item: " + item.ToString());
                    list.Add(item);
                }

                object[] array = list.ToArray();

                AndroidJavaClass arrayClass = new AndroidJavaClass("java.lang.reflect.Array");
                AndroidJavaObject arrayObject = arrayClass.CallStatic<AndroidJavaObject>("newInstance", new AndroidJavaClass("java.lang.String"), size);
                for (int i = 0; i < size; ++i)
                {
                    arrayClass.CallStatic("set", arrayObject, i, new AndroidJavaObject("java.lang.String", array[i]));
                }

                v = arrayObject;
            }
            else if (kvp.Value is DateTime)
            {
                string cSharpDate = Convert.ToDateTime(kvp.Value).ToString("MM/dd/yyyy hh:mm:ss tt");
                AndroidJavaObject simpleDateFormat = new AndroidJavaObject("java.text.SimpleDateFormat", new object[] { "MM/dd/yyyy hh:mm:ss aa" });
                AndroidJavaObject date = new AndroidJavaObject("java.util.Date");
                date = simpleDateFormat.Call<AndroidJavaObject>("parse", cSharpDate);

                v = new AndroidJavaObject("com.adpdigital.push.Datetime", date);
            }
            else
            {
                v = new AndroidJavaObject("java.lang.String", kvp.Value);
            }

            args[0] = k;
            args[1] = v;

            AndroidJNI.CallObjectMethod(map.GetRawObject(),
                method_Put, AndroidJNIHelper.CreateJNIArgArray(args));
        }

        return map;

    }

#endif

}
