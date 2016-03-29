//
//  NSError+SKFactory.h
//  SanomaKit
//
//  Created by Csengeri Máté on 21/10/14.
//  Copyright (c) 2014 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSError (SKFactory)

+ (NSError *) errorWithLocalizedDescription:(NSString*)localizedDescription;
+ (NSError *) errorWithLocalizedDescription:(NSString*)localizedDescription errorCode:(NSInteger)errorCode;
+ (NSError *) errorWithLocalizedDescription:(NSString *)localizedDescription errorDomain:(NSString*)errorDomain;
+ (NSError *) errorWithLocalizedDescription:(NSString*)localizedDescription errorCode:(NSInteger)errorCode errorDomain:(NSString*)errorDomain;

@end
