//
//  UIColor+HexString.h
//  SanomaKit
//
//  Created by Varga Gábor on 2013.10.07..
//  Copyright (c) 2013 Sanoma Media. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (SKHexString)

+ (UIColor *) colorWithHexString: (NSString *) hexString;

- (NSString *) hexString;

@end