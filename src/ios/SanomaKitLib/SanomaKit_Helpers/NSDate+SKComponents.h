//
//  NSDate+SKComponents.h
//  SanomaKit
//
//  Created by Csengeri Máté on 04/02/14.
//  Copyright (c) 2014 Sanoma Media. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (SKComponents)

- (NSInteger) year;
- (NSInteger) month;
- (NSInteger) day;
- (NSInteger) hour;
- (NSDate *) dateWithHourMinute:(NSInteger) hourMinute;
- (NSInteger) hourMinute;

@end
