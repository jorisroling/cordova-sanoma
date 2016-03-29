//
//  UIImage+SKCrop.h
//  SanomaKit
//
//  Created by Csengeri Máté on 17/07/14.
//  Copyright (c) 2014 Sanoma Media. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (SKCrop)

- (UIImage *)crop:(CGRect)rect;
- (UIImage *)imageFillSize:(CGSize)targetSize;

@end
