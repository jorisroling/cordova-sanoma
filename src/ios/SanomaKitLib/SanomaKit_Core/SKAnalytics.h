//
//  SKAnalytics.h
//
//
//  Created by Teemu Korhonen on 12/10/13.
//  Copyright (c) 2013 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SKAccount.h"
#import "SKLocationMonitor.h"

#define LogAnalytics(...) if ([SKAnalytics shared].loggingEnabled) { NSLog(__VA_ARGS__); }

static NSString* const SKDispatchRequestsKey = @"SKDispatchRequests";
static NSString* const SKDispatchLastTimeKey = @"SKDispatchLastTime";

typedef NS_ENUM(NSInteger, SKAnalyticsCollectOption) {
    SKAnalyticsCollectData,
    SKAnalyticsCollectLocation,
    SKAnalyticsCollectBehavioural
};

typedef NS_ENUM(NSInteger, SKAnalyticsLoginType) {
    SKAnalyticsLoginTypeGigya,
    SKAnalyticsLoginTypeOther
};

@class SKAnalytics;
@class SKAnalyticsEvent;
@class SKAnalyticsBackend;

typedef void(^SKAnalyticsSuccessBlock)(void);
typedef void(^SKAnalyticsFailureBlock)(NSError* error);


@protocol SKAnalyticsDelegate <NSObject>
@optional

// Called when option changes (opt in/out).
- (void) analytics: (SKAnalytics*) analytics changedOptOutOption: (SKAnalyticsCollectOption) option value: (BOOL) value;

// Called when new RATAS key-value is received. Triggers if account or location changes.
// PlainString is raw "adkv" value.
// KeyValue contains keys and values parsed from "adkv" string.
- (void) analytics: (SKAnalytics*) analytics receivedNewRATAS: (NSDictionary*) keyValue plainString: (NSString*) plainString;

@end



@interface SKAnalytics : NSObject <SKLocationMonitorDelegate>

+ (SKAnalytics*)shared;

+ (void)addBackend:(SKAnalyticsBackend*)backend;

+ (void)sendEvent:(SKAnalyticsEvent *)event;

+ (void)sendEvent:(SKAnalyticsEvent *)event
          success:(SKAnalyticsSuccessBlock)onSuccess
          failure:(SKAnalyticsFailureBlock)onFailure;

// Turn data collection or off
+ (void)optOut: (SKAnalyticsCollectOption) option;
+ (void)optIn: (SKAnalyticsCollectOption) option;
+ (BOOL)isOptOut: (SKAnalyticsCollectOption) option;

// Change login information.
+ (void) setAccount: (SKAccount*) account;
+ (SKAccount*) account;

// Set custom login
+ (void)setLogin:(NSString*)login forType:(SKAnalyticsLoginType)type;
+ (NSString*)loginForType:(SKAnalyticsLoginType)type;
+ (void)removeLoginForType:(SKAnalyticsLoginType)type;

+ (void) setDelegate: (NSObject<SKAnalyticsDelegate>*) delegate;

+ (NSArray *)getSegmentsFromKrux;

+ (void)dispatch;

@property (strong, nonatomic, readonly) NSString *userEmail __attribute__((deprecated));
@property (strong, nonatomic, readonly) NSString *uniqueUserIdentifier;
@property (strong, nonatomic, readonly) NSString *advertisingIdentifier;
@property (strong, nonatomic, readonly) NSString *identifierForVendor;
@property (assign, nonatomic) NSTimeInterval dispatchInterval;
@property (assign, nonatomic) BOOL developmentMode; // Default is NO
@property (assign, nonatomic) BOOL loggingEnabled; // Default is NO
@property (assign, nonatomic) BOOL useRatas; // Default is YES

+ (int)getAppStartCounter;
+ (void)resetAppStartCounter;


@end

