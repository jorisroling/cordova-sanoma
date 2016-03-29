//
//  SKUserProfile.h
//  SanomaKit
//
//  Created by Csengeri Máté on 21/10/14.
//  Copyright (c) 2014 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SKUserProfile : NSObject

@property (nonatomic) NSString *identifier;
@property (nonatomic) NSString *email;
@property (nonatomic) NSString *name;

- (instancetype)initWithDictionary:(NSDictionary *)userProfileDict;

@end
