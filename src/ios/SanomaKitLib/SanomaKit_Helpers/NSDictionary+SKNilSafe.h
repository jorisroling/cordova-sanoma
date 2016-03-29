//
//  NSDictionary+SKNilSafe.h
//  SanomaKit
//
//  Created by Csengeri Máté on 27/08/14.
//  Copyright (c) 2014 Sanoma Media. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (SKNilSafe)

- (BOOL) getBOOLForKey:(NSString *)key;
- (BOOL) getBOOLForKey:(NSString *)key defaultValue:(BOOL)defaultValue;
- (NSInteger) getIntegerForKey:(NSString *)key;
- (NSInteger) getIntegerForKey:(NSString *)key defaultValue:(NSInteger)defaultValue;
- (float) getFloatForKey:(NSString *)key;
- (float) getFloatForKey:(NSString *)key defaultValue:(float)defaultValue;
- (NSString *) getStringForKey:(NSString *)key defaultValue:(NSString *)defaultValue;
- (NSString *) getStringForKey:(NSString *)key;
- (double) getDoubleForKey:(NSString *)key;
- (double) getDoubleForKey:(NSString *)key defaultValue:(double)defaultValue;
- (NSDate *) getDateForKey:(NSString *)key defaultValue:(NSDate *)defaultValue;
- (NSDate *) getDateForKey:(NSString *)key;
- (NSNumber *) getNumberForKey:(NSString *)key defaultValue:(NSNumber *)defaultValue;
- (NSNumber *) getNumberForKey:(NSString *)key;

@end
