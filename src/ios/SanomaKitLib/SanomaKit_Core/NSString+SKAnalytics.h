//
//  SKAnalyticsBackend.m
//  HS
//
//  Created by Teemu Korhonen on 12/11/13.
//  Copyright (c) 2013 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSString (SKAnalytics)

+ (NSString *)stringFromURLParameters:(NSDictionary *)parameters;
- (NSString *)URLEncodedString;
- (NSString *)MD5String;
- (NSString *)sanitizeUrl;
- (NSString *)sanomaHash;

@end