//
//  SKAnalyticsBackendKrux.h
//  SanomaKit
//
//  Created by Horváth Gábor on 03/11/14.
//  Copyright (c) 2014 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SKAnalyticsBackend.h"

@interface SKAnalyticsBackendKrux : SKAnalyticsBackend

- (id)initWithConfigId:(NSString *)configId;
- (NSArray *)segments;

@end
