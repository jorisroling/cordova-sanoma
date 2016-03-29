#import <Foundation/Foundation.h>
#import "Gigya.h"
#import "GSNativeLoginProvider.h"

@interface GSFacebookProvider : GSNativeLoginProvider

- (void)requestNewPublishPermissions:(NSString *)permissions
                     responseHandler:(GSPermissionRequestResultHandler)handler;
- (void)requestNewReadPermissions:(NSString *)permissions
                  responseHandler:(GSPermissionRequestResultHandler)handler;


@end
