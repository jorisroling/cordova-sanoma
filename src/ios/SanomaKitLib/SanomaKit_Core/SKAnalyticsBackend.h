//
//  SKAnalyticsBackend.h
//  HS
//
//  Created by Teemu Korhonen on 12/11/13.
//  Copyright (c) 2013 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SKAnalyticsEvent.h"
#import "SKAccount.h"
#import "SKNetworkUrlConnection.h"
#import <UIKit/UIKit.h> 

@interface SKAnalyticsBackend : NSObject

- (id)initWithSite:(NSString*)site
     urlConnection:(SKNetworkUrlConnection*)urlConnection;

- (void)sendData:(SKAnalyticsEvent*)event;

- (void)changeAccount: (SKAccount*) account;

@end

@interface SKAnalyticsBackend ()

@property (nonatomic, strong) NSString *site;
@property (nonatomic, strong) NSString *siteUri;
@property (nonatomic, strong) NSString *deviceIdHash;
@property (nonatomic, strong) NSString *deviceType;
@property (nonatomic, strong) NSString *userAgent;
@property (nonatomic, strong) SKNetworkUrlConnection *urlConnection;
// TODO: Cookies

- (NSString*)makeReferer:(SKAnalyticsEvent*)event;
- (void)collectCookies;
- (NSString*) deviceModel;
- (NSURL*)makeUri:(SKAnalyticsEvent*)event;
- (void)makeRequest:(NSURL*)url
              event:(SKAnalyticsEvent*)event;
- (void)makeRequest:(NSURL*)url
               data:(NSData*)data
              event:(SKAnalyticsEvent*)event;

@end
