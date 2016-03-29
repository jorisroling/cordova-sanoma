//
//  SKNetworkLogger.h
//  SanomaKit
//
//  Created by Csengeri Máté on 20/02/15.
//  Copyright (c) 2015 Sanoma MDC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SKNetworkLogger : NSObject

+ (void) showNetworkLogForTask:(NSURLSessionDataTask *)task response:(id)response;
+ (void) showNetworkLogForTask:(NSURLSessionDataTask *)task error:(NSError *)error;
+ (void) showNetworkLogForRequest:(NSURLRequest *)request response:(NSURLResponse *)response responseObject:(id)responseObject error:(NSError *)error;
+ (void) showNetworkLogForRequest:(NSURLRequest *)request response:(NSURLResponse *)response responseObject:(id)responseObject;
+ (void) showNetworkLogForRequest:(NSURLRequest *)request response:(NSURLResponse *)response error:(NSError *)error;

@end
