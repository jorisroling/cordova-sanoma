//
//  SKNetworkUrlConnection.h
//  SanomaKit
//
//  Created by Antti Ahvenlampi on 14/02/14.
//  Copyright (c) 2014 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SKNetworkUrlConnection : NSObject

+ (SKNetworkUrlConnection*)shared;

- (void)sendAsynchronousRequest:(NSURLRequest*) request
                          queue:(NSOperationQueue*) queue
              completionHandler:(void (^)(NSURLResponse* response, NSData* data, NSError* connectionError)) handler;

+ (void) postRawBody:(NSString *)urlString params:(NSDictionary *)params completionBlock:(void(^)(NSURLRequest *request, NSURLResponse *response, id JSONObject, NSError *error))completionBlock;
+ (void) postJSONBody:(NSString *)urlString params:(NSDictionary *)params completionBlock:(void(^)(NSURLRequest *request, NSURLResponse *response, id JSONObject, NSError *error))completionBlock;
+ (void) get:(NSString *)urlString getParams:(NSDictionary *)getParams headerParams:(NSDictionary *)headerParams completionBlock:(void(^)(NSURLRequest *request, NSURLResponse *response, id JSONObject, NSError *error))completionBlock;
@end
