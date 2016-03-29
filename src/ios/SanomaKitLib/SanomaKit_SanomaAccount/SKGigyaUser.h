//
//  SKGigyaUser.h
//  SanomaKit
//
//  Created by Csengeri Máté on 25/09/15.
//  Copyright © 2015 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Gigya.h"

@interface SKGigyaUser : NSObject

@property (nonatomic, readonly) NSString *UID;
@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *UIDSignature;
@property (nonatomic, readonly) NSString *signatureTimestamp;
@property BOOL isLoggedIn;


- (instancetype)initWithGSResponse:(GSResponse *)gsResponse;

@end
