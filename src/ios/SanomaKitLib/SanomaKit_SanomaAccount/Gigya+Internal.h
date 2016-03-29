#import "Gigya.h"
#import "GSLogger.h"
#import "NSDictionary+GSDictionary.h"
#import "NSArray+GSArray.h"
#import "NSString+GSString.h"
#import "NSError+GSError.h"
#import "NSData+GSBase64.h"
#import "NSURL+GSURL.h"
#import "GSProviderSelectionViewController.h"
#import "GSLoginManager.h"
#import "GSLoginRequest.h"
#import "GSObject+Internal.h"
#import "GSFacebookProvider.h"
#import "GSGooglePlusProvider.h"
#import "GSGigyaSafariProvider.h"
#import "GSGigyaWebViewProvider.h"
#import "GSTwitterProvider.h"
#import "GSProviderSelectionViewController.h"
#import "GSWebViewController.h"
#import "GSWebBridge.h"
#import "GSPluginViewController.h"
#import "GSWebBridge+Internal.h"
#import "GSWebBridgeManager.h"
#import "UIView+GSView.h"
#import "GSMBProgressHUD.h"

#define GS_WEB_BRIDGE_SUPPORTED_FEATURES @[\
    GSWebBridgeActionIsSessionValid,\
    GSWebBridgeActionSendRequest,\
    GSWebBridgeActionSendOAuthRequest,\
    GSWebBridgeActionGetIDs,\
    GSWebBridgeActionOnPluginEvent,\
    GSWebBridgeActionOnCustomEvent,\
    GSWebBridgeActionRegisterForNamespaceEvents,\
    GSPluginViewOnJSException,\
    GSWebBridgeActionOnJSLog,\
    GSWebBridgeActionClearSession\
]

// Constants

// Storage keys
static NSString * const GSSessionUserDefaultsKey = @"com.gigya.GigyaSDK:StoredSession";
static NSString * const GSSessionAPIKeyUserDefaultsKey = @"com.gigya.GigyaSDK:StoredSessionAPIKey";
static NSString * const GSUCIDDefaultsKey = @"com.gigya.GigyaSDK:ucid";
static NSString * const GSGMIDDefaultsKey = @"com.gigya.GigyaSDK:gmid";
static NSString * const GSGooglePlusPermissionsDefaultsKey = @"com.gigya.GigyaSDK:StoredGooglePlusPermissions";

// Redirect URLs
static NSString * const GSRedirectURLScheme = @"gsapi";

// GSProviderSelectionViewController redirect actions
static NSString * const GSRedirectURLNetworkSelected = @"gigya_provider_selected";

// GSLoginProvider redirect actions
static NSString * const GSRedirectURLLoginResult = @"gigya_login_result";

// GSPluginView redirect actions
static NSString * const GSPluginViewOnJSLoadError = @"on_js_load_error";
static NSString * const GSPluginViewOnJSException = @"on_js_exception";

// GSWebBridge redirect actions
static NSString * const GSWebBridgeActionIsSessionValid = @"is_session_valid";
static NSString * const GSWebBridgeActionSendRequest = @"send_request";
static NSString * const GSWebBridgeActionSendOAuthRequest = @"send_oauth_request";
static NSString * const GSWebBridgeActionGetIDs = @"get_ids";
static NSString * const GSWebBridgeActionOnPluginEvent = @"on_plugin_event";
static NSString * const GSWebBridgeActionOnCustomEvent = @"on_custom_event";
static NSString * const GSWebBridgeActionRegisterForNamespaceEvents = @"register_for_namespace_events";
static NSString * const GSWebBridgeActionOnJSLog = @"on_js_log";
static NSString * const GSWebBridgeActionClearSession = @"clear_session";

// GSWebBridge JS paths
static NSString * const GSWebBridgeCallbackJSPath = @"gigya._.apiAdapters.mobile.mobileCallbacks";
static NSString * const GSWebBridgeGlobalEventsJSPath = @"gigya._.apiAdapter.onSDKEvent";

// Loading messages
static NSString * const GSDefaultLoadingText = @"Loading";
static NSString * const GSDefaultLoginText = @"Logging In";

typedef NS_ENUM(NSInteger, GSInternalErrorCode) {
	GSErrorCode_MissingAPIKey = 400002,
	GSErrorCode_NonReEntrantCallPending = 400002,
	GSErrorCode_InvalidAPIMethod = 400002,
    GSErrorCode_ProviderSessionExpired = 403009
};

typedef enum GSProviderAction
{
    GSProviderActionLogin,
    GSProviderActionAddConnection
} GSProviderAction;

@interface Gigya (Internal)

@property (nonatomic, strong) GSSession *session;

@property (nonatomic, copy) NSString *APIKey;
@property (nonatomic, copy) NSString *APIDomain;
@property (nonatomic) BOOL useHTTPS;
@property (nonatomic) BOOL dontLeaveApp;
@property (nonatomic) BOOL networkActivityIndicatorEnabled;
@property (nonatomic) NSTimeInterval requestTimeout;


@property (nonatomic) NSTimeInterval serverTimeSkew;
@property (nonatomic, strong) NSArray *errorsToReport;

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
@property (nonatomic, weak) id<GSSessionDelegate> sessionDelegate;
#pragma GCC diagnostic warning "-Wdeprecated-declarations"

@property (nonatomic, weak) id<GSSocializeDelegate> socializeDelegate;
@property (nonatomic, weak) id<GSAccountsDelegate> accountsDelegate;

@property (nonatomic, strong) NSMutableArray *socializeDelegatesArray;
@property (nonatomic, strong) NSMutableArray *accountsDelegatesArray;

@property (nonatomic, strong) NSDictionary *providerPermissions;

@property (nonatomic, copy) NSString *ucid;
@property (nonatomic, copy) NSString *gmid;

+ (Gigya *)sharedInstance;
+ (void)setSession:(GSSession *)session completionHandler:(GSUserInfoHandler)handler;
- (void)clearAllCookies;
- (void)checkSDKInit;
- (void)showNetworkActivityIndicator;

- (void)invokeSelectorOnSocializeDelegates:(SEL)selector withObject:(GSObject *)object;
- (void)invokeSelectorOnAccountsDelegates:(SEL)selector withObject:(GSObject *)object;

- (void)addSocializeDelegate:(id<GSSocializeDelegate>)delegate;
- (void)addAccountsDelegate:(id<GSAccountsDelegate>)delegate;
- (void)removeDelegate:(id)delegate;

- (void)reportURLReferral:(NSURL *)url provider:(NSString *)provider;

@end
