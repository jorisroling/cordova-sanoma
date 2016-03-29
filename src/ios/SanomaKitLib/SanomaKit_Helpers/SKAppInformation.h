//
//  SKAppInformation.h
//  SanomaKit
//
//  Created by Varga Gábor on 2013.09.27..
//  Copyright (c) 2013 Sanoma Media. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SKAppInformation : NSObject

+ (NSString *) bundleIdentifier;

+ (NSString *) displayName;

+ (NSString *) version;

+ (NSString *) shortVersionString;

+ (BOOL) isInstalledFromAppStore;

@end