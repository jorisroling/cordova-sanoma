//
//  SKUpdate.h
//  SanomaKit
//
//  Created by Horváth Gábor on 01/12/14.
//  Copyright (c) 2014 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SKUpdate : NSObject

+ (SKUpdate*)shared;

- (void)checkUpdateForAppID:(NSString *)appID language:(NSString *)language withCompletionHandler:(void (^)(NSDictionary *json, NSError *error))handler;

@end
