//
//  SKLocationMonitor.h
//  SanomaKit
//
//  Created by Antti Vekkeli on 06/05/14.
//  Copyright (c) 2014 Sanoma. All rights reserved.
//
 
#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "SKLocation.h"

@class SKLocationMonitor;

@protocol SKLocationMonitorDelegate <NSObject>
@optional
- (void) locationMonitor: (SKLocationMonitor*) monitor updatedLocation: (SKLocation*) location;

@end

@interface SKLocationMonitor : NSObject <CLLocationManagerDelegate>

+ (SKLocationMonitor*) shared;

+ (void) startMonitoringLocation;
+ (void) stopMonitoringLocation;

+ (SKLocation*) location; // This location is updated automatically

+ (void) setDelegate: (NSObject<SKLocationMonitorDelegate>*) delegate;

@property (nonatomic) NSTimeInterval locationUpdateInterval;

@end
