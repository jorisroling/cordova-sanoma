//
//  SKPathUtilities.h
//  SanomaKit
//
//  Created by Varga Gábor on 2013.10.15..
//  Copyright (c) 2013 Sanoma Media. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SKPathUtilities : NSObject

+ (NSURL *) temporaryDirectory;

+ (NSURL *) temporaryFile:(NSString *)prefix suffix:(NSString *)suffix;

+ (NSURL *) cacheDirectory;

+ (NSURL *) addAtTwoXSuffix:(NSURL *)url;
+ (NSURL *) addOriginalSizeSuffix:(NSURL *)url;

@end
