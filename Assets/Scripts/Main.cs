
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class Main : MonoBehaviour
{
    public Text txt;

    public Image PopUp;
    string error;

#if UNITY_ANDROID
    AndroidPluginCallback callback;
    
#endif

    ChabokPush chabokPush;

    void Start()
    {

        //txt.color = Color.white;

        chabokPush = ChabokPush.GetInstance();

#if UNITY_ANDROID
        callback = new AndroidPluginCallback();

        //callback.OnSuccess += (count) =>
        //{
        //    Log("add tag on success");
        //};
        //callback.OnError += (exception) =>
        //{
        //    Log("add tag on failure");
        //};

        

        
        //String userId = chbokPush.CallStatic<String>("getUserId");
        //chbokPush.CallStatic("addTag", "Smooke", callback);
        //chbokPush.CallStatic("setUserAttribute", "rating");
        //chbokPush.CallStatic("unsetUserAttribute", "rating");
        //var UserAttributes = chbokPush.CallStatic<AndroidJavaObject>("getUserAttributes");
#endif

        bool checkLoggedIn = chabokPush.isLoggedIn();

        ChabokDeferredDataListener deferredDataListener;

        deferredDataListener = new ChabokDeferredDataListener();

        deferredDataListener.onReferral += (referralId) =>
        {
            Log(referralId);
        };

        chabokPush.setDeferredDataListener(deferredDataListener);

        if (checkLoggedIn)
        {

            Log("   Chabok --> is Logged in : true");
            Log(chabokPush.getUserId());
        }
        else
        {

            Log("   Chabok --> is Logged in : false");
            chabokPush.Login("SMOOKE");
        }

        //chabokPush.Login("SMOOKE");
        //Log("   Chabok --> Login : Succeeded");

        chabokPush.AddTag("Hoss");
        Log("   Chabok --> AddTag : Succeeded");


        var birthdayDate = new DateTime(1993, 5, 19, 20, 10, 33);
        string[] favorites = { "Sport", "TV", "Book", "Coding" };
        Dictionary<string, object> attributes = new Dictionary<string, object>();
        attributes.Add("FirstName", "Hossein");
        attributes.Add("Age", 26);
        attributes.Add("Rating", 20);
        attributes.Add("Ration", 3.85);
        attributes.Add("Male", false);
        attributes.Add("Birthday", birthdayDate);
        attributes.Add("Favorites", favorites);

        chabokPush.SetUserAttributes(attributes);
        Log("   Chabok --> SetUserAttributes : Succeeded");

        chabokPush.IncrementUserAttribute("Age", 2.0);
        Log("   Chabok --> IncrementUserAttribute : Succeeded");

        chabokPush.DecrementUserAttribute("Rating", 7.0);
        Log("   Chabok --> DecrementUserAttribute : Succeeded");

        chabokPush.AddToUserAttributeArray("Favorites", "Sleeping");
        Log("   Chabok --> AddToUserAttributeArray : Succeeded");

        //Log("   Chabok --> UserAttributes : " + chabokPush.chabokGetUserAttributes());

        chabokPush.RemoveFromUserAttributeArray("Favorites", "Book");
        Log("   Chabok --> RemoveFromUserAttributeArray : Succeeded");


        var expDate = new DateTime(2021, 10, 14, 11, 22, 33);
        string[] editedFields = { "name", "family", "phone" };
        Dictionary<string, object> eventData = new Dictionary<string, object>();
        eventData.Add("Edited Profile Title2", "Smooke");
        eventData.Add("Edited2", false);
        eventData.Add("Edited items2", 12);
        eventData.Add("ExpDate", expDate);
        eventData.Add("EditedFields", editedFields);
        chabokPush.Track("Profile Edits", eventData);
        Log("   Chabok --> Track : Succeeded");

        chabokPush.TrackRevenue(20000.0);
        Log("   Chabok --> TrackRevenue : Succeeded");

        var purchaseDate = new DateTime(2021, 10, 14, 11, 22, 33);
        string[] card = { "rice", "tuna" };
        Dictionary<string, object> revenueDic = new Dictionary<string, object>();
        revenueDic.Add("Badge", "VIP");
        revenueDic.Add("Discount", "18%");
        revenueDic.Add("PurchaseDate", purchaseDate);
        revenueDic.Add("Card", card);
        chabokPush.TrackPurchase("VIP Purchase", 500000.0, "IRR", revenueDic);
        Log("   Chabok --> TrackPurchase : Succeeded");

    }

    private void Log(object text)
    {
        txt.text += "\n";
        txt.text += text;
    }

    void Update()
    {

    }

    void OnEnable()
    {
        Application.logMessageReceived += HandleLog;
    }

    void OnDisable()
    {
        Application.logMessageReceived -= HandleLog;
    }

    void HandleLog(string logString, string stackTrace, LogType type)
    {

        if (type == LogType.Error)
        {
            error = error + "\n" + logString;
            PopUp.gameObject.SetActive(true);
            PopUp.transform.GetChild(0).GetComponent<Text>().text = "Error";
            PopUp.transform.GetChild(1).GetComponent<Text>().text = error;
        }
    }

    public void Dismiss()
    {
        PopUp.gameObject.SetActive(false);
    }

}