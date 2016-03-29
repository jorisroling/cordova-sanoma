//
//  SKAnalyticsBackEndSpring.h
//  HS
//
//  Created by Teemu Korhonen on 12/11/13.
//  Copyright (c) 2013 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SKAnalyticsBackend.h"
#import "Spring.h"

@interface SKAnalyticsBackendSpring : SKAnalyticsBackend

- (id)initWithSite:(NSString *)site cpValue:(NSString *)cpValue;
- (id)initWithSite:(NSString *)site;
// Spring SDK requires application name
- (id)initWithSite:(NSString *)site application:(NSString *)applicationName;
- (id)initWithSite:(NSString *)site cpValue:(NSString *)cpValue application:(NSString *)applicationName;

// Public access to spring instance, e.g. if tracking should be disabled
@property (nonatomic, readonly, strong) Spring* spring;

@end
