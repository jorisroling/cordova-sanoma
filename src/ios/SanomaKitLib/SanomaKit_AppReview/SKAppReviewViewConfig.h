//
//  SKAppReviewViewConfig.h
//  SanomaKit
//
//  Created by Horváth Gábor on 2015. 12. 04..
//  Copyright © 2015. Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_OPTIONS(NSUInteger, SKAppReviewBorderType) {
    SKAppReviewBorderTypeNone = 1 << 0,
    SKAppReviewBorderTypeEdge = 1 << 1,
    SKAppReviewBorderTypeRound = 1 << 2,
};

@interface SKAppReviewViewConfig : NSObject

// Text
@property (nonatomic) NSString *requestText;
@property (nonatomic) NSString *yesButtonText;
@property (nonatomic) NSString *noButtonText;

// Background color
@property (nonatomic) UIColor *rootViewBackgroundColor;
@property (nonatomic) UIColor *yesButtonBackgroundColor;
@property (nonatomic) UIColor *noButtonBackgroundColor;

// Text color
@property (nonatomic) UIColor *requestTextTextColor;
@property (nonatomic) UIColor *yesButtonTextColor;
@property (nonatomic) UIColor *noButtonTextColor;

// Border width
@property (nonatomic) UIColor *rootViewBorderColor;
@property (nonatomic) UIColor *yesButtonBorderColor;
@property (nonatomic) UIColor *noButtonBorderColor;

// Border width
@property (nonatomic) CGFloat rootViewBorderWidth;
@property (nonatomic) CGFloat yesButtonBorderWidth;
@property (nonatomic) CGFloat noButtonBorderWidth;

// Border radius
@property (nonatomic) CGFloat rootViewBorderRadius;
@property (nonatomic) CGFloat yesButtonBorderRadius;
@property (nonatomic) CGFloat noButtonBorderRadius;

-(instancetype)initWithRequestText:(NSString*)requestText andYesButtonText:(NSString*)yesButtonText andNoButtonText:(NSString*)noButtonText;

@end
