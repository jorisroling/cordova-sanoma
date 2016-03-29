//
//  SKAppReviewView.h
//  SanomaKit
//
//  Created by Horváth Gábor on 2015. 12. 04..
//  Copyright © 2015. Sanoma. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SKAppReviewConfig.h"

@class SKAppReviewView;

@protocol SKAppReviewDelegate <NSObject>
@required
- (void)appReviewFeedbackClicked:(SKAppReviewView*)appReviewView;
- (void)appReviewRateClicked:(SKAppReviewView*)appReviewView;
- (void)appReviewFeedbackNoClicked:(SKAppReviewView*)appReviewView;
- (void)appReviewRateNoClicked:(SKAppReviewView*)appReviewView;
@end

@interface SKAppReviewView : UIView

@property (nonatomic) SKAppReviewConfig *config;
@property (nonatomic, weak) NSObject<SKAppReviewDelegate> *delegate;

- (instancetype)initWithFrame:(CGRect)frame andConfig:(SKAppReviewConfig*)config;
- (void)setDelegate:(NSObject<SKAppReviewDelegate>*)delegate;
- (BOOL)shouldRatingRequestBeShown;
- (BOOL)isRated;
- (void)addAsPopup;
- (int)getMinStartCount;
- (void)setMinStartCount:(int)count;

@end
