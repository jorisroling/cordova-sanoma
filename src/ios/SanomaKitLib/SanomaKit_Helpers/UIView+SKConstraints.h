//
//  UIView+SKConstraints.h
//  SanomaKit
//
//  Created by Csengeri Máté on 03/12/13.
//  Copyright (c) 2013 Sanoma Media. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (SKConstraints)

- (void) matchFrameToView:(UIView *)childView;
- (void) addFrameAsConstraints:(CGRect)constraintsFrame;
- (void) addOriginAsConstraint:(CGPoint)origin;
- (NSLayoutConstraint*) addHeightAsConstraint:(CGFloat)height;
- (NSLayoutConstraint*) addWidthAsConstraint:(CGFloat)width;

- (void) addEdgeConstraints:(UIEdgeInsets)edgeInsets;

- (void) addHorizontalEdgeConstraints:(UIEdgeInsets)edgeInsets;
- (void) addVerticalEdgeConstraints:(UIEdgeInsets)edgeInsets;

- (void) addBottomEdgeConstraint:(CGFloat)bottomEdge;
- (void) addTopEdgeConstraint:(CGFloat)topEdge;
- (void) addLeadingEdgeConstraint:(CGFloat)leadingEdge;
- (void) addTrailingEdgeConstraint:(CGFloat)trailingEdge;

- (void) addVerticalSpaceBetweenChildViews:(CGFloat)verticalSpace upperView:(UIView *)upperView bottomView:(UIView *)bottomView;
- (void) addHorizontalSpaceBetweenChildViews:(CGFloat)horizontalSpace leftView:(UIView *)leftView rightView:(UIView *)rightView;

@end
