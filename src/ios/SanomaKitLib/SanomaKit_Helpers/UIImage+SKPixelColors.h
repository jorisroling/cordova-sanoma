//
//  UIImage+SKPixelColors.h
//  SanomaKit
//
//  Created by Csengeri Máté on 25/03/14.
//  Copyright (c) 2014 Sanoma Media. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (SKPixelColors)

- (NSArray *) getColorsForEveryXPixels:(NSInteger)pixelDensity;
- (NSArray*) getColorsAtX:(NSInteger)xx andY:(NSInteger)yy count:(NSInteger)count pixelDensity:(NSInteger)pixelDensity;

@end
