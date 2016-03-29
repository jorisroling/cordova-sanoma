//
//  NSDate+SKDays.h
//  SanomaKit
//
//  Created by Varga Gábor on 2013.11.20..
//  Copyright (c) 2013 Sanoma Media. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (SKDays)

- (BOOL) isToday;

- (BOOL) isYesterday;

- (BOOL) isSameDayAsdate:(NSDate *)date;

- (NSDate *) dateByAddingDays:(NSInteger)days;

- (NSDate *) yesterday;

- (NSDate *) tomorrow;

- (NSUInteger) dayOfWeek;

- (NSUInteger) dayOfYear;

- (NSString *) dayName;

@end
