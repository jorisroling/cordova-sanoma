//
//  SKAlertView.h
//  SanomaKit
//
//  Created by Varga Gábor on 2014.01.24..
//  Copyright (c) 2014 Sanoma Media. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^SKAlertViewDelegateBlock)(void);

@class SKAlertViewItem;

@interface SKAlertView : UIAlertView

- (id) initWithTitle:(NSString *)title message:(NSString *)message cancelButtonItem:(SKAlertViewItem *)cancelButtonItem otherButtonItems:(SKAlertViewItem *)otherButtonItem, ... NS_REQUIRES_NIL_TERMINATION;

- (NSInteger) addButtonItem:(SKAlertViewItem *)item;

+ (void) showAlertWithTitle:(NSString *)title message:(NSString *)message;

@end
