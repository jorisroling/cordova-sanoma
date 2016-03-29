#import <Foundation/Foundation.h>
#import "Gigya.h"

@interface NSURL (GSURL)

+ (NSURL *)URLForGigyaProviderSelection:(NSDictionary *)params;
+ (NSURL *)URLForGigyaLoginMethod:(NSString *)method
                       parameters:(NSDictionary *)params
                redirectURLScheme:(NSString *)urlScheme;
+ (NSURL *)URLForGigyaReferralReportForURL:(NSURL *)url provider:(NSString *)provider;


@end
