//
//  NSThread+SKPerformBlock.h
//  SanomaKit
//
//  Created by Varga Gábor on 2014.01.17..
//  Copyright (c) 2014 Sanoma Media. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSThread (SKPerformBlock)

+ (void) performBlockOnMainThreadSync:(void(^)(void))block;

+ (void) performBlockOnMainThreadAsync:(void(^)(void))block;

+ (void) performBlockInBackgroundAsync:(void(^)(void))block;

+ (void) performBlockOnMainThreadAsync:(void(^)(void))block afterDelay:(NSTimeInterval)seconds;

@end
