//
//  SKAnalyticsBackendSAC.h
//  SanomaKit
//
//  Created by Antti Ahvenlampi on 12/02/14.
//  Copyright (c) 2014 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SKAnalyticsBackend.h"
#import "SKLocation.h"
#import "SKAccount.h"

@interface SKAnalyticsBackendSAC : SKAnalyticsBackend

- (id)initWithSite:(NSString*)site
          language:(NSString*)language
           account:(SKAccount *)account
          location:(SKLocation *)location
     urlConnection:(SKNetworkUrlConnection*)urlConnection;

- (id)initWithSite:(NSString*)site
          language:(NSString*)language
           account:(SKAccount *)account
     urlConnection:(SKNetworkUrlConnection*)urlConnection;

- (id)initWithSite:(NSString*)site
          language:(NSString*)language
     urlConnection:(SKNetworkUrlConnection*)urlConnection;

- (id)initWithSite:(NSString*)site
          language:(NSString*)language;

- (void)sendData:(SKAnalyticsEvent *)event;

@end
