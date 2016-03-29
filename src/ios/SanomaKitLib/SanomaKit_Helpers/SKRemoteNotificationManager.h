//
//  SKRemoteNotificationManager.h
//  SanomaKit
//
//  Created by Varga Gábor on 2013.10.11..
//  Copyright (c) 2013 Sanoma Media. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SKRemoteNotificationManager : NSObject

+ (SKRemoteNotificationManager *) sharedManager;

- (void) registerForNotifications:(void(^)(NSData *deviceToken, NSError *error))completionBlock;

- (void) registerForNotifications;

- (void) success:(NSData *)deviceToken;

- (void) failure:(NSError *)error;

- (NSData *) deviceToken;

@end
