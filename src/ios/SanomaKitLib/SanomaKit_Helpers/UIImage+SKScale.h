//
//  UIImage+SKScale.h
//  SanomaKit
//
//  Created by Varga Gábor on 2013.10.16..
//  Copyright (c) 2013 Sanoma Media. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (SKScale)

- (UIImage *)skImageScaledToSize:(CGSize)size;

- (UIImage *)skImageScaledToWidth:(CGFloat)width;

- (UIImage *)skImageScaledToHeight:(CGFloat)height;

- (UIImage *)skImageShrinkedToSize:(CGSize)size;

- (UIImage *)skImageShrinkedToWidth:(CGFloat)width;

- (UIImage *)skImageShrinkedToHeight:(CGFloat)height;

- (UIImage *)skImageShrinkedToScreenWidth;

- (UIImage *)skImageShrinkedToFillSize:(CGSize)size;

+ (CGSize) skSizeFromURL:(NSURL *)url;

@end
