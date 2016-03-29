//
//  SKAnalyticsBackendInsight.h
//  HS
//
//  Created by Teemu Korhonen on 12/11/13.
//  Copyright (c) 2013 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SKAnalyticsBackend.h"
#import "SKAccount.h"

@interface SKAnalyticsBackendInsight : SKAnalyticsBackend

- (id)initWithSite:(NSString *)site;
- (id)initWithSite:(NSString *)site
        backendUrl:(NSString *)backendUrl
  parameterMapping:(NSDictionary *)parameterMapping
           account:(SKAccount*)account;

@end
