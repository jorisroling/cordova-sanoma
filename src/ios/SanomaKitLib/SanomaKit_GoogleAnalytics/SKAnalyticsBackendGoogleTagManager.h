//
//  SKAnalyticsBackendGoogleTagManager.h
//  SanomaKit
//
//  Created by Tuukka Puumala on 17.4.2015.
//  Copyright (c) 2015 Sanoma. All rights reserved.
//

#import "SKAnalyticsBackend.h"

@interface SKAnalyticsBackendGoogleTagManager : SKAnalyticsBackend

-(id)initWithSite:(NSString*)site containerId:(NSString*)containerId domain:(NSString*)domain;

@end
