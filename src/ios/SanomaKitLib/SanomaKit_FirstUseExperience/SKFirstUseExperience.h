//
//  SKFirstUseExperience.h
//  SanomaKit
//
//  Created by Horváth Gábor on 16/02/15.
//  Copyright (c) 2015 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SKSystemInformation.h"

typedef NS_OPTIONS(NSUInteger, SKFirstUseExperienceViewType) {
    SKFirstUseExperienceViewWelcome = 1 << 0,
    SKFirstUseExperienceViewPush = 1 << 1,
    SKFirstUseExperienceViewLocation = 1 << 2,
    SKFirstUseExperienceViewThankyou = 1 << 3,
    //SKFirstUseExperienceViewAccount = 1 << 4
};

typedef void (^SKFirstUseExperience_ActionCompletionBlock)();
typedef void (^SKFirstUseExperience_OpenURLHandlerBlock)(NSURL *url);
typedef void (^SKFirstUseExperience_CompletionBlock)();

@interface SKFirstUseExperience : NSObject

+ (SKFirstUseExperience*)shared;

- (void)useConfig:(NSDictionary*)config;
- (void)addView:(SKFirstUseExperienceViewType)viewType withActionCompletionBlock:(SKFirstUseExperience_ActionCompletionBlock)actionCompletionBlock andOpenURLHandlerBlock:(SKFirstUseExperience_OpenURLHandlerBlock)openURLHandlerBlock;
- (void)showAnimated:(BOOL)animated;
- (void)showAnimated:(BOOL)animated withCompletionBlock:(SKFirstUseExperience_CompletionBlock)completionBlock;
- (void)showAnimated:(BOOL)animated withSameBackgroundAsset:(NSString*)filename;
- (void)showAnimated:(BOOL)animated withSameBackgroundAsset:(NSString*)filename andCompletionBlock:(SKFirstUseExperience_CompletionBlock)completionBlock;

- (UIViewController*)currentView;
- (void)next;
- (void)skip;
- (BOOL)isVideo:(NSString*)asset;

@end
