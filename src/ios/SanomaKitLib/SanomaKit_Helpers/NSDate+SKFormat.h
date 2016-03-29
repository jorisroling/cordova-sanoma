//
//  NSDate+SKFormat.h
//  SanomaKit
//
//  Created by Varga Gábor on 2013.11.18..
//  Copyright (c) 2013 Sanoma Media. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kDateFormat_Simple @"yyyy-MM-dd"
#define kDateFormat_Notification @"yyyy-MM-dd HH:mm:ss"

@interface NSDate (SKFormat)

- (NSString *) formatWithStyle:(NSDateFormatterStyle)style locale:(NSLocale *)locale;
- (NSString *) formatWithStyle:(NSDateFormatterStyle)style localeIdentifier:(NSString *)localeIdentifier;
- (NSString *) formatWithStyle:(NSDateFormatterStyle)style;

- (NSString *) formatWithFullStyle;
- (NSString *) formatWithLongStyle;
- (NSString *) formatWithMediumStyle;
- (NSString *) formatWithShortStyle;

- (NSString *) formatWithFormat:(NSString *)format locale:(NSLocale *)locale;
- (NSString *) formatWithFormat:(NSString *)format localeIdentifier:(NSString *)localeIdentifier;
- (NSString *) formatWithFormat:(NSString *)format;

@end
