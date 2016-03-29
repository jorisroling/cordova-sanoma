//
//  SKAnalyticsAction.h
//
//
//  Created by Teemu Korhonen on 12/10/13.
//  Copyright (c) 2013 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, SKAnalyticsActionType) {
    SKAnalyticsActionBack,
    SKAnalyticsActionClick,
    SKAnalyticsActionSwipeRight,
    SKAnalyticsActionSwipeLeft,
    SKAnalyticsActionSwipeUp,
    SKAnalyticsActionSwipeDown,
    SKAnalyticsActionButtonRight,
    SKAnalyticsActionButtonLeft,
    SKAnalyticsActionShare,
    SKAnalyticsActionVideoPlay,
    SKAnalyticsActionVideoBuffer,
    SKAnalyticsActionVideoPause,
    SKAnalyticsActionVideoEnd,
    SKAnalyticsActionVideoKeepAlive,
    SKAnalyticsActionVideoHeartbeat,
    SKAnalyticsActionVideoAdPlay,
    SKAnalyticsActionVideoAdPause,
    SKAnalyticsActionVideoAdEnd,
    SKAnalyticsActionVideoAdClick,
    SKAnalyticsActionVideoCustom
};

@interface SKAnalyticsAction : NSObject

@property (nonatomic, strong) NSString* value;
@property (nonatomic) SKAnalyticsActionType type;

+ (id)action:(SKAnalyticsActionType)actionType;
+ (id)actionWithCustom:(NSString*)custom;

+ (NSMutableDictionary*)overrides;

@end
