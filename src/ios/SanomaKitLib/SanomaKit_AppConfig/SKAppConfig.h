//
//  SKAppConfig.h
//  SanomaKit
//
//  Created by Horváth Gábor on 02/12/14.
//  Copyright (c) 2014 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SKAppConfigResponse.h"

@interface SKAppConfig : NSObject

+ (SKAppConfig*)shared;

- (void)appConfigForAppID:(NSString *)appID releaseType:(NSString *)releaseType secureConnection:(BOOL)secureConnection withCompletionHandler:(void (^)(SKAppConfigResponse *appConfigResponse))handler;

@end
