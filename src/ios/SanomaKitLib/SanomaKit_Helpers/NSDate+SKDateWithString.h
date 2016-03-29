//
//  NSDate+SKDateFromString.h
//  SanomaKit
//
//  Created by Varga Gábor on 2013.10.15..
//  Copyright (c) 2013 Sanoma Media. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (SKDateWithString)

+ (NSDate *) dateWithString:(NSString *)string;
+ (NSDate *) dateTimeWithString:(NSString *)string;

+ (NSDate *) dateWithString:(NSString *)string format:(NSString *)format;

@end
