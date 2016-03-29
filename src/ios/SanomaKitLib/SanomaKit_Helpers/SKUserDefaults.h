//
//  SKUserDefaults.h
//  SanomaKit
//
//  Created by Csengeri Máté on 01/04/14.
//  Copyright (c) 2014 Sanoma Media. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SKUserDefaults : NSObject

+ (void) save;

+ (NSInteger) getIntegetForKey:(NSString*)key;
+ (void) setInteger:(NSInteger)value forKey:(NSString*)key;

+ (double) getDoubleForKey:(NSString*)key;
+ (void) setDouble:(double)value forKey:(NSString*)key;

+ (NSString*) getStringForKey:(NSString*)key;
+ (void) setString:(NSString*)value forKey:(NSString*)key;

+ (BOOL) getBOOLForKey:(NSString*)key;
+ (void) setBOOL:(BOOL)value forKey:(NSString*)key;

+ (void) setDate:(NSDate*)value forKey:(NSString*)key;
+ (NSDate *) getDateForKey:(NSString*)key;

+ (long long) getLongLongForKey:(NSString*)key;
+ (void) setLongLong:(long long)value forKey:(NSString*)key;

+ (float) getFloatForKey:(NSString*)key;
+ (void) setFloat:(float)value forKey:(NSString*)key;

+ (void) setData:(NSData*)value forKey:(NSString*)key;
+ (NSData *) getDataForKey:(NSString*)key;

+ (void) setArray:(NSArray *)value forKey:(NSString *)key;
+ (NSArray *) getArrayForKey:(NSString *)key;

@end
