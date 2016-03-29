//
//  SKLocation.h
//  SanomaKit
//
//  Created by Antti Ahvenlampi on 17/02/14.
//  Copyright (c) 2014 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface SKLocation : NSObject
@property (nonatomic, strong) CLLocation* currentLocation;
@end
