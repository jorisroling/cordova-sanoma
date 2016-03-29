//
//  SKGigyaAccountUtils.h
//  SanomaKit
//
//  Created by Csengeri Máté on 25/09/15.
//  Copyright © 2015 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SKGigyaUser.h"

@interface SKGigyaAccountUtils : NSObject

+ (void) saveShogunID:(NSString *)shogunID;
+ (void) removeShogunID;
+ (SKGigyaUser *) userFromGSResponse:(GSResponse *)gsResponse;
+ (void) setLoginTypeWithUID:(NSString *)uid;

@end
