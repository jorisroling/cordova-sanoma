/********* CordovaSanoma.m Cordova Plugin Implementation *******/

#import <Cordova/CDV.h>
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "SKGigyaAccountManager.h"

@interface CordovaSanoma : CDVPlugin {
// Member variables go here.
}

@end


/* Add the following code to AppDelegate.m after CDVPluginHandleOpenURLNotification and before return;

    NSMutableDictionary *notificationObject = [NSMutableDictionary new];
    if (application) {
        [notificationObject setValue:application forKey:@"application"];
    }
    if (url) {
        [notificationObject setValue:url forKey:@"url"];
    }
    if (sourceApplication) {
        [notificationObject setValue:sourceApplication forKey:@"sourceApplication"];
    }
    if (annotation) {
        [notificationObject setValue:annotation forKey:@"annotation"];
    }
    
    [[NSNotificationCenter defaultCenter] postNotification:[NSNotification notificationWithName:@"CordovaSanomaHandleOpenURLNotification" object:notificationObject]];

*/


@implementation CordovaSanoma

- (void)pluginInitialize;
{
	[[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(finishLaunching:) name:UIApplicationDidFinishLaunchingNotification object:nil];
	[[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(didBecomeActive:) name:UIApplicationDidBecomeActiveNotification object:nil];
	[[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(notifiedOpenUrl:) name:@"CordovaSanomaHandleOpenURLNotification" object:nil];

	[super pluginInitialize];
}

// selectors

- (void)finishLaunching:(NSNotification *)notification
{
	[[SKGigyaAccountManager sharedInstance] configureWithAPIKey:@"3_egxGUGAfvigXzuCHyiRdB7MMCqcGR10XB58L6M2m82AutkiXcTo1gdPRn9eTdcwr" loginRegistrationScreenSet:@"feelgoodnl-RegistrationLogin" application:[UIApplication sharedApplication] launchOptions:nil];

	// this is optional:
#ifdef DEBUG
	[SKGigyaAccountManager setDebugMode:YES];
#endif

	NSDictionary *launchOptions = [notification userInfo] ;
	[[FBSDKApplicationDelegate sharedInstance] application:[UIApplication sharedApplication] didFinishLaunchingWithOptions:launchOptions];
		
}

- (void)didBecomeActive:(NSNotification *)notification
{
	[FBSDKAppEvents activateApp];
}

- (void)notifiedOpenUrl:(NSNotification *)notification
{
	// NSLog(@"notifiedOpenUrl");
	// NSURL* url = (NSURL*)notification.object;
	// [[FBSDKApplicationDelegate sharedInstance] application:[UIApplication sharedApplication] openURL:url sourceApplication:nil annotation:nil];
	
    NSDictionary* notificationObject = (NSDictionary*)notification.object;
    [[FBSDKApplicationDelegate sharedInstance] application:[notificationObject valueForKey:@"application"] openURL:[notificationObject valueForKey:@"url"] sourceApplication:[notificationObject valueForKey:@"sourceApplication"] annotation:[notificationObject valueForKey:@"annotation"]];
	
}


// CDV Plugin commands
- (void)logout:(CDVInvokedUrlCommand*)command
{
	[SKGigyaAccountManager logout];
	CDVPluginResult* pluginResult = [CDVPluginResult resultWithStatus:CDVCommandStatus_OK messageAsDictionary:@{@"ok":@1}];
	[self.commandDelegate sendPluginResult:pluginResult callbackId:command.callbackId];
}

- (void)showPluginDialog:(CDVInvokedUrlCommand*)command
{
	NSLog(@"showPluginDialog: %u", (unsigned int) [command.arguments count]);
	NSString* screen = [command.arguments objectAtIndex:0];

	[[SKGigyaAccountManager sharedInstance] showLoginRegistrationWithCompletionBlock:^(SKGigyaUser *user, NSError *error) {
		CDVPluginResult* pluginResult = nil;
		if (error) {
			// Handle error
			NSLog(@"Login error: %@", error);
			
			NSDictionary* userInfo = [error userInfo];
			
			NSDictionary* data = @{
														 @"state": [NSString stringWithString:userInfo[@"state"]],
														 @"regToken": [NSString stringWithString:userInfo[@"regToken"]],
														 @"errorCode": [NSNumber numberWithInteger:error.code],
														 @"errorMessage": [NSString stringWithString:userInfo[@"NSLocalizedDescription"]]
														 };
			
			pluginResult = [CDVPluginResult resultWithStatus:CDVCommandStatus_ERROR messageAsDictionary:data];
		} else {
			pluginResult = [CDVPluginResult resultWithStatus:CDVCommandStatus_OK messageAsDictionary:@{@"isLoggedIn":[NSNumber numberWithBool:user.isLoggedIn],@"UID":user.UID,@"email":user.email,@"firstName":user.firstName,@"lastName":user.lastName,@"UIDSignature":user.UIDSignature,@"signatureTimestamp":user.signatureTimestamp}];
		}
		[self.commandDelegate sendPluginResult:pluginResult callbackId:command.callbackId];
	} showLoginAsOpeningScreen:[screen isEqualToString:@"login"]]; // if you pass YES here, the login screen will appear, otherwise your user will see the registration page
}


@end
