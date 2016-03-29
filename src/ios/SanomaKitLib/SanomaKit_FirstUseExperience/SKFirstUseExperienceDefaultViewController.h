//
//  SKFirstUseExperienceDefaultViewController.h
//  SanomaKit
//
//  Created by Horváth Gábor on 17/02/15.
//  Copyright (c) 2015 Sanoma. All rights reserved.
//

#import "SKFirstUseExperienceViewController.h"

@interface SKFirstUseExperienceDefaultViewController : SKFirstUseExperienceViewController <UIScrollViewDelegate>

@property (unsafe_unretained, nonatomic) IBOutlet UIScrollView *scrollView;
@property (unsafe_unretained, nonatomic) IBOutlet UIPageControl *pageControl;

- (void)setCarousel:(NSArray*)carousel;

@end
