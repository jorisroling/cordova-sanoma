//
//  UIImage+SKTint.h
//  SanomaKit
//
//  Created by Varga Gábor on 2013.10.02..
//  Copyright (c) 2013 Sanoma Media. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (SKTint)

- (UIImage *)imageTintedWithColor:(UIColor *)color;

- (UIImage *)imageTintedWithColor:(UIColor *)color fraction:(CGFloat)fraction;

@end
