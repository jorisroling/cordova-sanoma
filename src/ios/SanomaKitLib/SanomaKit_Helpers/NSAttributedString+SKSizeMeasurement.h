//
//  NSAttributedString+SKSizeMeasurement.h
//  SanomaKit
//
//  Created by Csengeri Máté on 11/09/14.
//  Copyright (c) 2014 Sanoma Media. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSAttributedString (SKSizeMeasurement)

- (CGFloat)textHeightForWidth:(CGFloat)width;

@end
