//
//  SKFonts.h
//  SanomaKit
//
//  Created by Csengeri Máté on 11/04/14.
//  Copyright (c) 2014 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SKFonts : NSObject

+ (void) logAvailableFontNames;

@end

@interface UIButton (Font)

- (void) updateFont:(NSString *)fontName;

@end

@interface UILabel (Font)

- (void) updateFont:(NSString *)fontName;

@end

@interface UITextField (Font)

- (void) updateFont:(NSString *)fontName;

@end
