//
//  SKAppConfigResponse.h
//  SanomaKitExample
//
//  Created by Horváth Gábor on 27/01/15.
//  Copyright (c) 2015 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_OPTIONS(NSUInteger, SKAppConfigResponseReason) {
    SKAppConfigResponseReasonError = 0,
    SKAppConfigResponseReasonNoUpdate = 1 << 0,
    SKAppConfigResponseReasonNoContent = 1 << 1,
    SKAppConfigResponseReasonUpdate = 1 << 2
};

@interface SKAppConfigResponse : NSObject

@property (nonatomic, strong) NSDictionary* json;
@property (nonatomic) SKAppConfigResponseReason respondReason;
@property (nonatomic, strong) NSString* respondDescription;

@end
