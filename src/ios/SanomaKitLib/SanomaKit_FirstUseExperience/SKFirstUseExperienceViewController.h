//
//  SKFirstUseExperienceViewController.h
//  Pods
//
//  Created by Horváth Gábor on 03/03/15.
//
//

#define IPAD ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)

#import "SKFirstUseExperience.h"

@interface SKFirstUseExperienceViewController : UIViewController <UIWebViewDelegate>

@property (nonatomic) NSString *viewType;
@property (nonatomic) NSDictionary *settings;
@property (nonatomic) SKFirstUseExperience *delegate;
@property (nonatomic, copy) SKFirstUseExperience_ActionCompletionBlock actionCompletionBlock;
@property (nonatomic, copy) SKFirstUseExperience_OpenURLHandlerBlock openURLHandlerBlock;
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *logoImageView;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *actionButton;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *leftButton;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *rightButton;

- (void)setAssets;

@end
