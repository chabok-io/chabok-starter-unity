#import "UnityAppController.h"

#import <AdpPushClient/AdpPushClient.h>

//------- start header ----------------
@interface AppDelegate : UnityAppController

@end


@interface AppDelegate () <PushClientManagerDelegate>

@end

//------- start body ---------------
@implementation AppDelegate

-(void) startUnity: (UIApplication*) application {
   [super startUnity: application];

}

- (BOOL)application:(UIApplication *)application
            didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

    [PushClientManager.defaultManager setLogLevel:ChabokLogLevelVerbose];
    
    [PushClientManager setDevelopment:YES];
    
    [PushClientManager.defaultManager initWithAppId:@"adp-nms-push"
                                             apiKey:@"e2100f0d7e071c7450f04e530bda746da2fc493b"
                                           username:@"adp"
                                           password:@"test"];
    
    [PushClientManager  resetBadge]; //Optional
    [PushClientManager.defaultManager addDelegate:self]; //Optional
//    [PushClientManager.defaultManager configureEnvironment:Sandbox];
    [PushClientManager.defaultManager setEnableRealtime:NO];

    return [super application:application didFinishLaunchingWithOptions:launchOptions];
}

@end

IMPL_APP_CONTROLLER_SUBCLASS( AppDelegate )
