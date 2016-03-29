//
//  SMAlertViewItem.h
//  SanomaKit
//
//  Created by Varga Gábor on 2014.01.24..
//  Copyright (c) 2014 Sanoma Media. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SKAlertView.h"

@interface SKAlertViewItem : NSObject

@property (strong) NSString *label;
@property (strong) SKAlertViewDelegateBlock action;

+ (id) item;
+ (id) itemWithLabel:(NSString *)inLabel;
+ (id) itemWithLabel:(NSString *)inLabel action:(SKAlertViewDelegateBlock)action;

@end
