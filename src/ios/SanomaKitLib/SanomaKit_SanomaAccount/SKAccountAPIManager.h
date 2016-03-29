//
//  SKTokenHandler.h
//  Pods
//
//  Created by Csengeri Máté on 14/04/15.
//
//

#import <Foundation/Foundation.h>

@interface SKAccountAPIManager : NSObject

+ (SKAccountAPIManager*) sharedInstance;

- (void) requestTokenWithCompletionHandler:(void(^)(NSError *error))completionBlock;
- (void) getUserPorfileWithCompletionBlock:(void(^)(id responseObject, NSError *error))completionBlock;

@end
