//
//  SKSystemInformation.h
//  SanomaKit
//
//  Created by Varga Gábor on 2013.09.27..
//  Copyright (c) 2013 Sanoma Media. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SKSystemInformation : NSObject

+ (NSString *) operatingSystemName;

+ (NSString *) operatingSystemVersion;

+ (NSString *) operatingSystemWithVersion;

+ (NSInteger) operatingSystemVersionNumber;

+ (NSString *) deviceModel;

+ (CGSize) screenSize;

+ (CGFloat) screenWidth;

+ (CGFloat) screenHeight;

+ (CGFloat) screenScale;

+ (BOOL) isRetina4;

+ (NSString*) getSystemLanguageCode;

+ (NSString *) uniqueDeviceIdentifier;

@end