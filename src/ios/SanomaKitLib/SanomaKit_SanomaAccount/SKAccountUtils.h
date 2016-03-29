//
//  SKAccountUtils.h
//  Pods
//
//  Created by Csengeri Máté on 14/04/15.
//
//

#import <Foundation/Foundation.h>

@interface SKAccountUtils : NSObject

+ (NSString *) redirectURI;
+ (NSString *) clientId;
+ (NSString *)codeFromURL:(NSURL *)url;
+ (NSString *) appState;
+ (NSString *) loginURL;
+ (NSString *) registrationURL;
+ (NSString *) tokenURL;
+ (NSString *) baseURL;
+ (NSString *) accessToken;
+ (void) saveAccessToken:(NSString *)accessToken;
+ (void) saveCode:(NSString *)code;
+ (NSString *) code;
+ (NSString *) userProfileURL;
+ (void) saveSessionCookie;
+ (NSHTTPCookie *) sessionCookie;
+ (NSString *) tokenRenewalURL;
+ (BOOL) useStagingEnvironment;
+ (void) saveShogunId;

@end
