//
//  SKAnalyticsAdInfo.h
//  SanomaKit
//
//  Created by Antti Vekkeli on 12/05/14.
//  Copyright (c) 2014 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SKAnalyticsAdInfoItem : NSObject

@property (nonatomic, strong) NSString* shopId;
@property (nonatomic, strong) NSString* category;
@property (nonatomic, strong) NSString* sku;
@property (nonatomic, assign) BOOL clicked;

- (id) initWithShopId: (NSString*) shopId
             category: (NSString*) category
                  sku: (NSString*) sku
              clicked: (BOOL) clicked;

@end

@interface SKAnalyticsAdInfo : NSObject

@property (nonatomic, strong) NSString* campaignId;
@property (nonatomic, strong) NSString* creativeVersionId;
@property (nonatomic, strong) NSString* testGroup;
@property (nonatomic, assign) int width;
@property (nonatomic, assign) int height;
@property (nonatomic, strong) NSArray* items; // AdInfoItem

- (id) initWithCampaignId: (NSString*) campaignId
        creativeVersionId: (NSString*) creativeVersionId
                testGroup: (NSString*) testgroup
                    width: (int) width
                   height: (int) height
                    items: (NSArray*) items;

@end
