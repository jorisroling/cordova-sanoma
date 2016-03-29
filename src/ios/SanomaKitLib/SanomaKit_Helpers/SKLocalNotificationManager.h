//
//  SKLocalNotificationManager.h
//  SanomaKit
//
//  Created by Varga Gábor on 2014.01.17..
//  Copyright (c) 2014 Sanoma Media. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kNotificationUserInfoKey_Id @"notificationId"

@interface SKLocalNotificationManager : NSObject

+ (SKLocalNotificationManager *) sharedManager;

- (void) showNotification:(NSString *)message;

- (void) showNotification:(NSString *)message sound:(NSString *)sound;

- (void) scheduleNotification:(NSString *)message date:(NSDate *)date;

- (void) scheduleNotification:(NSString *)message date:(NSDate *)date sound:(NSString *)sound userInfo:(NSDictionary *)userInfo;

- (void) cancelScheduledNotifications;

+ (NSDate *) localNotificationTimeForNewContentNotification:(NSDate *)date;

- (NSArray *) localNotificationsForId:(NSString *)identifier;

- (void) cancelNotificationsForId:(NSString *)identifier;

- (void) cancelNextNotificationForIdentifier:(NSString *)identifier;

+ (BOOL) hasLocalNotificationPermission;

@end
