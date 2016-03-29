//
//  SKAnalyticsBackendGoogleAnalytics.h
//  SanomaKit
//
//  Created by Horváth Gábor on 09/03/15.
//  Copyright (c) 2015 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SKAnalyticsBackend.h"

@interface SKAnalyticsBackendGoogleAnalytics : SKAnalyticsBackend

- (id)initWithTrackingId:(NSString *)trackingId;
- (id)initWithTrackingId:(NSString *)trackingId dispatchInterval:(NSTimeInterval)dispatchInterval allowIDFACollection:(BOOL)allowIDFACollection;

@end
