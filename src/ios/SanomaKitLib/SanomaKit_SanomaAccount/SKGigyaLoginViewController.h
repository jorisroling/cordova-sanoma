//
//  SKGigyaLoginViewController.h
//  SanomaKit
//
//  Created by Csengeri Máté on 25/09/15.
//  Copyright © 2015 Sanoma. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Gigya.h"

@interface SKGigyaLoginViewController : UIViewController

@property (nonatomic) id<UIWebViewDelegate> webViewDelegate;
@property (nonatomic) id<GSWebBridgeDelegate> webBridgeDelegate;
@property (nonatomic) id<GSPluginViewDelegate> puginViewDelegate;
@property (nonatomic) NSString *screenSet;
@property BOOL showLoginAsOpeningScreen;
- (void) dismiss;
@end
