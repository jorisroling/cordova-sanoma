//
//  SKAccountManager.h
//  SanomaKit
//
//  Created by Csengeri Máté on 20/10/14.
//  Copyright (c) 2014 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SKUserProfile.h"

@protocol SMAccountManagerDelegate <NSObject>

- (UIWebView *) accountManagerWebView;

@end

typedef void (^SKAccountManager_LoginCompletionBlock)(SKUserProfile *userProfile, NSError *error);
typedef void (^SKAccountManager_UserProfileCompletionBlock)(SKUserProfile *userProfile, NSError *error);
typedef void (^SKAccountManager_RegistrationCompletionBlock)(SKUserProfile *userProfile, NSError *error);

@interface SKAccountManager : NSObject

@property (nonatomic, weak) id<SMAccountManagerDelegate>delegate;

+ (SKAccountManager*) sharedManager;

- (void) loginUserWithWebViewDelegate:(id<SMAccountManagerDelegate>)delegate completionBlock:(SKAccountManager_LoginCompletionBlock)completionBlock;
- (void) registerUserWithWebViewDelegate:(id<SMAccountManagerDelegate>)delegate completionBlock:(SKAccountManager_RegistrationCompletionBlock)completionBlock;
- (void) getUserProfile:(SKAccountManager_UserProfileCompletionBlock)completionBlock;
- (void) logout;
- (BOOL) isLoggedIn;
- (NSString *) accessToken;

//Login and registration with externap browser is no longer supported:
- (void) registerUserWithCompletionBlock:(SKAccountManager_RegistrationCompletionBlock)completionBlock __attribute__((deprecated));
- (void) loginUserWithCompletionBlock:(SKAccountManager_LoginCompletionBlock)completionBlock __attribute__((deprecated));

@end
