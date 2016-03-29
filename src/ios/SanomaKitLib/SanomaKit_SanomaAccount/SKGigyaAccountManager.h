//
//  SKGigyaAccountManager.h
//  SanomaKit
//
//  Created by Csengeri Máté on 25/09/15.
//  Copyright © 2015 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SKGigyaUser.h"

@interface SKGigyaAccountManager : NSObject

+ (SKGigyaAccountManager*) sharedInstance;
+ (void) setDebugMode:(BOOL)debug;
+ (void) logout;
+ (BOOL) isLoggedIn;
+ (NSString *) sessionToken;
+ (BOOL) debugMode;

- (void) configureWithAPIKey:(NSString *)apiKey loginRegistrationScreenSet:(NSString *)loginRegistrationScreenSet application:(UIApplication *)application launchOptions:(NSDictionary *)launchOptions;
- (void) showLoginRegistrationWithCompletionBlock:(void (^)(SKGigyaUser *user, NSError *error))completionBlock showLoginAsOpeningScreen:(BOOL)showLoginAsOpeningScreen;

@end
