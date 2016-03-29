//
//  SKAppReviewConfig.h
//  SanomaKit
//
//  Created by Horváth Gábor on 2015. 12. 04..
//  Copyright © 2015. Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SKAppReviewViewConfig.h"

@interface SKAppReviewConfig : NSObject

@property (nonatomic, readonly) SKAppReviewViewConfig *firstView;
@property (nonatomic, readonly) SKAppReviewViewConfig *feedbackView;
@property (nonatomic, readonly) SKAppReviewViewConfig *rateView;

- (instancetype)initWithFirstView:(SKAppReviewViewConfig*)firstView andFeedbackView:(SKAppReviewViewConfig*)feedbackView andRateView:(SKAppReviewViewConfig*)rateView;

@end
