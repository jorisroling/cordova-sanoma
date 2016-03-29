//
//  SKAnalyticsEvent.h
//
//
//  Created by Teemu Korhonen on 12/10/13.
//  Copyright (c) 2013 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SKAnalyticsAction.h"
#import "SKAnalyticsAdInfo.h"

// Enums
typedef NS_ENUM(NSInteger, SKAnalyticsAppEventType) {
    SKAnalyticsAppLaunch,
    SKAnalyticsAppClose,
    SKAnalyticsAppActivation,
    SKAnalyticsAppDeactivation
};

typedef NS_ENUM(NSInteger, SKAnalyticsViewType) {
    SKAnalyticsViewAppear,
    SKAnalyticsViewDisappear,
    SKAnalyticsViewClick,
    SKAnalyticsViewSave,
    SKAnalyticsViewFavorite
    
};

typedef NS_ENUM(NSInteger, SKAnalyticsAdType) {
    SKAnalyticsAdFullScreen,
    SKAnalyticsAdInPage
};

typedef NS_ENUM(NSInteger, SKAnalyticsSocialActionType) {
    SKAnalyticsSocialActionShare,
    SKAnalyticsSocialActionLike,
    SKANAlyticsSocialActionComment
};

typedef NS_ENUM(NSInteger, SKAnalyticsSocialNetworkType) {
    SKAnalyticsSocialNetworkFacebook,
    SKAnalyticsSocialNetworkTwitter,
    SKAnalyticsSocialNetworkGooglePlus,
    SKAnalyticsSocialNetworkLinkedIn,
    SKAnalyticsSocialNetworkMail,
    SKAnalyticsSocialNetworkSms,
    SKANAlyticsSocialNetworkOther
};

/*
typedef NS_ENUM(NSInteger, SKAnalyticsSocialNetworkType) {
    SKAnalyticsSocialNetworkFacebook,
    SKAnalyticsSocialNetworkTwitter,
    SKAnalyticsSocialNetworkGooglePlus,
    SKAnalyticsSocialNetworkLinkedIn,
    SKAnalyticsSocialNetworkMail,
    SKAnalyticsSocialNetworkSms,
    SKANAlyticsSocialNetworkOther
};*/

@class SKAnalyticsEventAd;
@class SKAnalyticsEventApp;
@class SKAnalyticsEventArticle;
@class SKAnalyticsEventOtherContent;
@class SKAnalyticsEventPaywall;
@class SKAnalyticsEventSearch;
@class SKAnalyticsEventSection;
@class SKAnalyticsEventSocial;
@class SKAnalyticsEventTimeTracking;
@class SKAnalyticsEventVideo;
@class SKAnalyticsEventWeb;
@class SKAnalyticsEventSettingChange;
@class SKAnalyticsEventCustom;

// Protocols
@protocol SKAnalyticsEventProcessor

- (id) processAdEvent: (SKAnalyticsEventAd*) event;
- (id) processAppEvent: (SKAnalyticsEventApp*) event;
- (id) processArticleEvent: (SKAnalyticsEventArticle*) event;
- (id) processOtherContentEvent: (SKAnalyticsEventOtherContent*) event;
- (id) processPaywallEvent: (SKAnalyticsEventPaywall*) event;
- (id) processSearchEvent: (SKAnalyticsEventSearch*) event;
- (id) processSectionEvent: (SKAnalyticsEventSection*) event;
- (id) processSocialEvent: (SKAnalyticsEventSocial*) event;
- (id) processTimeTrackingEvent: (SKAnalyticsEventTimeTracking*) event;
- (id) processVideoEvent: (SKAnalyticsEventVideo*) event;
- (id) processWebEvent: (SKAnalyticsEventWeb*) event;
- (id) processSettingChangeEvent: (SKAnalyticsEventSettingChange*) event;

@end

// Abstract classes
@interface SKAnalyticsEvent : NSObject

@property (nonatomic, strong) NSMutableDictionary* customParameters;
@property (nonatomic, strong) NSDate *eventTime;
@property (nonatomic, strong) NSMutableDictionary *customAttributes;

- (void)addCustomParameterWithKey:(NSString*)key value:(NSString*)value;

- (id)process:(id <SKAnalyticsEventProcessor>)processor;

-(void)setGAEventTrackingWithCategory:(NSString *)category action:(NSString *)action label:(NSString *)label value:(NSNumber *)value;

@end

@interface SKAnalyticsEventUi : SKAnalyticsEvent

@property (nonatomic, strong) SKAnalyticsAction* action;

@end

@interface SKAnalyticsEventContent : SKAnalyticsEventUi

@property (nonatomic, strong) NSArray* sectionHierarchy;
@property (nonatomic, strong) NSString* title;
@property (nonatomic, strong) NSString* content;
@property (nonatomic, strong) NSNumber* visibilityTime;
@property (nonatomic) SKAnalyticsViewType viewType;

@end

// Instantiable events
@interface SKAnalyticsEventArticle : SKAnalyticsEventContent

@property (nonatomic, strong) NSString* articleId;

- (id)initWithSectionHierarchy:(NSArray*)sectionHierarchy
                         title:(NSString*)title
                     articleId:(NSString*)articleId
                        action:(SKAnalyticsAction*)action;

- (id)initWithSectionHierarchy:(NSArray*)sectionHierarchy
                         title:(NSString*)title
                     articleId:(NSString*)articleId
                        action:(SKAnalyticsAction*)action
                visibilityTime:(double)visibilityTime
                      viewType:(SKAnalyticsViewType)viewType;

@end

@interface SKAnalyticsEventVideo : SKAnalyticsEventContent

@property (nonatomic, strong) NSString* videoId;
@property (nonatomic) float position;
@property (nonatomic, strong) NSDictionary* labels;

- (id)initWithSectionHierarchy:(NSArray*)sectionHierarchy
                         title:(NSString*)title
                       videoId:(NSString*)videoId
                        action:(SKAnalyticsAction*)action;

- (id)initWithSectionHierarchy:(NSArray*)sectionHierarchy
                         title:(NSString*)title
                       videoId:(NSString*)videoId
                        action:(SKAnalyticsAction*)action
                visibilityTime:(double)visibilityTime
                      viewType:(SKAnalyticsViewType)viewType;

- (id)initWithAction:(SKAnalyticsAction*)action position:(long)position;
- (id)initWithAction:(SKAnalyticsAction*)action position:(long)position labels:(NSDictionary*)labels;

@end

@interface SKAnalyticsEventAd : SKAnalyticsEventContent

@property (nonatomic) SKAnalyticsAdType adType;
@property (nonatomic, strong) SKAnalyticsAdInfo* ad;

- (id)initWithSectionHierarchy:(NSArray*)sectionHierarchy
                         title:(NSString*)title
                        action:(SKAnalyticsAction*)action
                        adType:(SKAnalyticsAdType)adType;

- (id)initWithSectionHierarchy:(NSArray*)sectionHierarchy
                         title:(NSString*)title
                        action:(SKAnalyticsAction*)action
                        adType:(SKAnalyticsAdType)adType
                visibilityTime:(double)visibilityTime
                      viewType:(SKAnalyticsViewType)viewType;

@end

@interface SKAnalyticsEventSection : SKAnalyticsEventContent

@property (nonatomic) BOOL isFrontPage;

- (id)initWithSectionHierarchy:(NSArray*)sectionHierarchy
                        action:(SKAnalyticsAction*)action;

- (id)initWithSectionHierarchy:(NSArray*)sectionHierarchy
                        action:(SKAnalyticsAction*)action
                visibilityTime:(double)visibilityTime
                      viewType:(SKAnalyticsViewType)viewType
                   isFrontPage:(BOOL)isFrontPage;

@end

@interface SKAnalyticsEventOtherContent : SKAnalyticsEventContent

- (id)initWithSectionHierarchy:(NSArray*)sectionHierarchy
                         title:(NSString*)title
                        action:(SKAnalyticsAction*)action;

- (id)initWithSectionHierarchy:(NSArray*)sectionHierarchy
                         title:(NSString*)title
                        action:(SKAnalyticsAction*)action
                visibilityTime:(double)visibilityTime
                      viewType:(SKAnalyticsViewType)viewType;

@end

@interface SKAnalyticsEventPaywall : SKAnalyticsEvent

@property (nonatomic, strong) NSString* ajaxFunc;
@property (nonatomic, strong) NSString* ajaxPhase;
@property (nonatomic, strong) NSString* shogPhase;

- (id)initWithAjaxFunc:(NSString*)ajaxFunc
             ajaxPhase:(NSString*)ajaxPhase
             shogPhase:(NSString*)shogPhase;

@end

@interface SKAnalyticsEventTimeTracking : SKAnalyticsEvent

@property (nonatomic, strong) NSString* trackingEvent;
@property (nonatomic, strong) NSString* trackingType;
@property (nonatomic, strong) NSString* category;
@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSString* label;
@property (nonatomic) double timingInterval;

- (id)initWithTrackingEvent:(NSString*)trackingEvent
               trackingType:(NSString*)trackingType;

- (id)initWithCategory:(NSString*)category
                  name:(NSString*)name
                 label:(NSString*)label;
- (id)initWithCategory:(NSString*)category
                  name:(NSString*)name
                 label:(NSString*)label
             autoStart:(BOOL)autostart;
- (void)startTimer;
- (void)stopTimer;
- (void)stopTimerAndSendEvent;

@end

@interface SKAnalyticsEventSocial : SKAnalyticsEvent

@property (nonatomic, strong) NSArray* sectionHierarchy;
@property (nonatomic) SKAnalyticsSocialActionType action;
@property (nonatomic) SKAnalyticsSocialNetworkType network;
@property (nonatomic, strong) NSString* contentId;

- (id)initWithSectionHierarchy:(NSArray*)sectionHierarchy
                        action:(SKAnalyticsSocialActionType)action
                       network:(SKAnalyticsSocialNetworkType)network
                     contentId:(NSString*)contentId;

@end

@interface SKAnalyticsEventSearch : SKAnalyticsEvent

@property (nonatomic, strong) NSString* terms;

- (id)initWithTerms:(NSString*)terms;

@end

@interface SKAnalyticsEventWeb : SKAnalyticsEvent

@property (nonatomic, strong) NSString* url;

- (id)initWithUrl:(NSString*)url;

@end

@interface SKAnalyticsEventApp : SKAnalyticsEvent

@property (nonatomic) SKAnalyticsAppEventType type;

- (id)initWithEventType: (SKAnalyticsAppEventType)type;

@end

@interface SKAnalyticsEventSettingChange : SKAnalyticsEvent

@property (nonatomic, strong) NSString* type;
@property (nonatomic, strong) NSString* target;

- (id)initWithType: (NSString*)type target: (NSString*) target;

@end

@interface SKAnalyticsEventCustom : SKAnalyticsEvent

@property (nonatomic, strong) NSString* custom;
@property (nonatomic, strong) NSMutableDictionary* attributes;

- (id)initWithCustom: (NSString*)custom attributes:(NSMutableDictionary*)attibutes;

@end

@interface SKAnalyticsEventParamaters : SKAnalyticsEvent

@property (nonatomic, strong) NSMutableDictionary *parameters;

//- (id)initWithParameters:(NSMutableDictionary *)parameters;
- (id)initEventParameters;
-(void)setParameterName:(NSString *)name forIndex:(NSInteger)num;

@end

