//
//  UnityPluginBridge.m
//  Chabok Unity
//
//  Created by Hossein Shooshtari on 12/7/20.
//

#import <Foundation/Foundation.h>

#import <AdpPushClient/AdpPushClient.h>

NSDictionary* dicData(const char *dicKeys[],const char *dicValues,
           const char *valuesTypes,int size) {
    NSString *_dicValues = [[NSString alloc] initWithUTF8String:dicValues];
    NSString *_valuesTypes = [[NSString alloc] initWithUTF8String:valuesTypes];
    NSArray<NSString *> *listItems = [_dicValues componentsSeparatedByString:@","];
    NSArray<NSString *> *listTypes = [_valuesTypes componentsSeparatedByString:@","];
    NSMutableDictionary *data = [[NSMutableDictionary alloc] init];
//    NSLog(@"(CHABOK UNITY) dicValues: %s",dicValues);
    NSString* value;
    NSString* type;
    for(int i=0; i<size;i++) {
        NSString *key = [[NSString alloc] initWithUTF8String:dicKeys[i]];
        value = [listItems objectAtIndex:i];
        type = [listTypes objectAtIndex:i];
        if([type isEqual:@"string"]) {
            [data setValue:[listItems objectAtIndex:i] forKey:key];
        } else if([type isEqual:@"int"]) {
           [data setObject:[NSNumber numberWithInt:value.intValue] forKey:key];
        } else if([type isEqual:@"double"]) {
            [data setObject:[NSNumber numberWithInt:value.doubleValue] forKey:key];
        } else if([type isEqual:@"float"]) {
            [data setObject:[NSNumber numberWithInt:value.floatValue] forKey:key];
        } else if([type isEqual:@"boolean"]) {
            [data setObject:[value isEqual:@"True"]?@YES:@NO forKey:key];
        } else if([type isEqual:@"date"]) {
//            NSLog(@"(CHABOK UNITY) dicValues Date :%@",value);
            NSDateFormatter* dateformat = [[NSDateFormatter alloc]init];
            [dateformat setDateFormat:@"MM/dd/yyyy HH:mm:ss a"];
            NSDate* date = [dateformat dateFromString: value];
            [data setValue:date forKey:key];
//            NSLog(@"(CHABOK UNITY) dicValues: %@",date);
        } else if([type isEqual:@"array"]) {
//            NSLog(@"(CHABOK UNITY) dicValues: %@",value);
            NSArray<NSString *> *listt = [value componentsSeparatedByString:@"#%$"];
//            for(int j=0; j<listt.count;j++) {
//                NSLog(@"(CHABOK UNITY) dicValues: %@",[listt objectAtIndex:j]);
//            }
            [data setValue:listt forKey:key];
        }
    }
    
    return data;
}


#pragma mark - C interface
extern "C" {
    

#pragma mark - Functions

//bool iosIsLoggedIn() {
//    NSLog(@"(CHABOK UNITY) isLoggedIn");
//    [PushClientManager.defaultManager isLoggedIn];
//}

char* iosGetReferralId() {
//    NSString *_userId = [[NSString alloc] initWithUTF8String:userId];
//    NSLog(@"(CHABOK UNITY) login: %s",userId);
//    [PushClientManager.defaultManager login:_userId];
//    -(void) chabokReferralResponse:(NSString *)referralId {
//        // received referralId
//    }
    
//    NSString *_userId =[PushClientManager.defaultManager chabokReferralResponse];
    return strdup("abc");
    
}

void iosLogin(const char *userId) {
    NSString *_userId = [[NSString alloc] initWithUTF8String:userId];
    NSLog(@"(CHABOK UNITY) login: %s",userId);
    [PushClientManager.defaultManager login:_userId];
}

void iosLogout() {
    NSLog(@"(CHABOK UNITY) logout: %s","");
    [PushClientManager.defaultManager logout];
}

#pragma mark - TODO
void iosSubscribeEvent(const char *eventName) {
    NSString *_eventName = [[NSString alloc] initWithUTF8String:eventName];
    NSLog(@"(CHABOK UNITY) subscribeEvent: %s",eventName);
    [PushClientManager.defaultManager subscribeEvent:_eventName];
}

void iosAddTag(const char *name) {
    NSString *_name = [[NSString alloc] initWithUTF8String:name];
    NSLog(@"(CHABOK UNITY) AddTag: %s",name);
    [PushClientManager.defaultManager addTag:_name];
}

void iosAddTags(char *tagsName[],int size) {
    NSMutableArray *array = [NSMutableArray new];
    for(int i=0;i<size;i++) {
        NSString *tags = [[NSString alloc] initWithUTF8String:tagsName[i]];
        [array addObject:tags];
        NSLog(@"(CHABOK UNITY) addTags: %@",tags);
    }
//    NSString *array[] = [[NSArray alloc] initWithArray:tagsName, nil];
    [PushClientManager.defaultManager addTags:array];
}

void iosRemoveTag(const char *name) {
    NSString *_name = [[NSString alloc] initWithUTF8String:name];
    NSLog(@"(CHABOK UNITY) addTags: %s",name);
    [PushClientManager.defaultManager removeTag:_name];
}

void iosRemoveTags(char *tagsName[],int size){
    NSMutableArray *array = [NSMutableArray new];
    for(int i=0;i<size;i++) {
        NSString *tags = [[NSString alloc] initWithUTF8String:tagsName[i]];
        [array addObject:tags];
        NSLog(@"(CHABOK UNITY) addTags: %@",tags);
    }
    [PushClientManager.defaultManager removeTags:array];
}

void iosTrack(const char *trackName,const char *attrKeys[],const char *attrValues,
           const char *attrTypes,int size) {
    NSString *_trackName = [[NSString alloc] initWithUTF8String:trackName];
    NSLog(@"(CHABOK UNITY) track: %s",trackName);
    [PushClientManager.defaultManager track:_trackName data:dicData(attrKeys,attrValues, attrTypes,size)];
}

void iosTrackRevenue(double revenue) {
    NSLog(@"(CHABOK UNITY) trackRevenue: %f",revenue);
    [PushClientManager.defaultManager trackRevenue:revenue];
}

void iosTrackPurchase(const char *event ,double revenue,const char *currency,const char *dataKeys[],const char *dataValues,const char *dataTypes,int size) {
    NSString *_event = [[NSString alloc] initWithUTF8String:event];
    ChabokEvent *chabokEvent = [ChabokEvent new];
    chabokEvent.revenue = revenue;
    chabokEvent.currency = [[NSString alloc] initWithUTF8String:currency];
    chabokEvent.data = [[NSDictionary alloc] initWithDictionary:dicData(dataKeys,dataValues, dataTypes,size)];
    NSLog(@"(CHABOK UNITY) trackPurchase: %s",event);
    [PushClientManager.defaultManager trackPurchase:_event chabokEvent:chabokEvent];
}

void iosSetUserAttribute(const char *attrKeys[],const char *attrValues,
                      const char *attrTypes,int size) {
    NSLog(@"(CHABOK UNITY) setUserAttribute");
    [PushClientManager.defaultManager setUserAttributes:dicData(attrKeys,attrValues, attrTypes,size)];
}

void iosUnsetUserAttribute(const char *attributeKey) {
    NSString *_attributeKey = [[NSString alloc] initWithUTF8String:attributeKey];
    [PushClientManager.defaultManager unsetUserAttribute:_attributeKey];
}

#pragma mark - TODO
void iosUnsetUserAttributes(NSArray<NSString *> *_Nonnull attributes) {
    [PushClientManager.defaultManager unsetUserAttributes:attributes];
}

const char *getUserAttributes() {
    NSError * err;
    NSDictionary *userAttributes = [[NSDictionary alloc] initWithDictionary:[PushClientManager.defaultManager userAttributes]];
    NSData * jsonData = [NSJSONSerialization dataWithJSONObject:userAttributes options:0 error:&err];
    NSString *attributesStr = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
    
    NSLog(@"(CHABOK UNITY) userAttributes : %@", attributesStr);
    return [attributesStr UTF8String];
}

void iosIncrementUserAttribute(const char *attribute) {
    NSString *_attribute = [[NSString alloc] initWithUTF8String:attribute];
    NSLog(@"(CHABOK UNITY) incrementUserAttribute: %s",attribute);
    [PushClientManager.defaultManager incrementUserAttribute:_attribute];
}

#pragma mark - TODO
void iosIncrementUserAttributes(NSArray<NSString *> *_Nonnull attributes) {
    [PushClientManager.defaultManager incrementUserAttributes:attributes];
}

void iosIncrementUserAttributeValue(const char *attribute , double value){
    NSString *_attribute = [[NSString alloc] initWithUTF8String:attribute];
    NSLog(@"(CHABOK UNITY) incrementUserAttributeValue");
    [PushClientManager.defaultManager incrementUserAttributeValue:_attribute value:value];
}

#pragma mark - TODO
void iosIncrementUserAttributeValues(NSDictionary<NSString*, NSNumber*> *_Nonnull attributes) {
    [PushClientManager.defaultManager incrementUserAttributeValues:attributes];
}

void iosDecrementUserAttribute(const char *attribute) {
    NSString *_attribute = [[NSString alloc] initWithUTF8String:attribute];
    NSLog(@"(CHABOK UNITY) decrementUserAttribute: %s",attribute);
    [PushClientManager.defaultManager decrementUserAttribute:_attribute];
}

void iosDecrementUserAttributeValue(const char *attribute , double value) {
    NSString *_attribute = [[NSString alloc] initWithUTF8String:attribute];
    NSLog(@"(CHABOK UNITY) decrementUserAttributeValue");
    [PushClientManager.defaultManager decrementUserAttributeValue:_attribute value:value];
}

#pragma mark - TODO
void iosDecrementUserAttributes(NSArray<NSString *> *_Nonnull attributes){
    [PushClientManager.defaultManager decrementUserAttributes:attributes];
}

#pragma mark - TODO
void iosDecrementUserAttributeValues(NSDictionary<NSString*, NSNumber *> *_Nonnull attributes) {
    [PushClientManager.defaultManager decrementUserAttributeValues:attributes];
}

#pragma mark - TODO
void iosAddToUserAttributeArray(const char *attributeKey , const char *attributeValue) {
    NSString *_attributeKey = [[NSString alloc] initWithUTF8String:attributeKey];
    NSString *_attributeValue = [[NSString alloc] initWithUTF8String:attributeValue];
    NSLog(@"(CHABOK UNITY) addToUserAttributeArray");
    [PushClientManager.defaultManager addToUserAttributeArray:_attributeKey attributeValue:_attributeValue];
}

#pragma mark - TODO
void _iosAddToUserAttributeArrays(const char *attributeKey , NSArray<NSString*>*_Nonnull attributeValues) {
    NSString *_attributeKey = [[NSString alloc] initWithUTF8String:attributeKey];
    [PushClientManager.defaultManager addToUserAttributeArray:_attributeKey attributeValues:attributeValues];
}

void iosRemoveFromUserAttributeArray(const char *attributeKey , const char *attributeValue) {
    NSString *_attributeKey = [[NSString alloc] initWithUTF8String:attributeKey];
    NSString *_attributeValue = [[NSString alloc] initWithUTF8String:attributeValue];
    NSLog(@"(CHABOK UNITY) removeFromUserAttributeArray");
    [PushClientManager.defaultManager removeFromUserAttributeArray:_attributeKey attributeValue:_attributeValue];
}

#pragma mark - TODO
void iosRemoveFromUserAttributeArrays(const char *attributeKey , NSArray<NSString *> *_Nonnull attributeValues) {
    NSString *_attributeKey = [[NSString alloc] initWithUTF8String:attributeKey];
    [PushClientManager.defaultManager removeFromUserAttributeArray:_attributeKey attributeValues:attributeValues];
}

}
