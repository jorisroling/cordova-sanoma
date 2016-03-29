//
//  SKVersionNumber.h
//  SanomaKit
//
//  Created by Varga Gábor on 2013.10.14..
//  Copyright (c) 2013 Sanoma Media. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SKVersionNumber : NSObject

- (id) initWithString:(NSString *)versionNumber;

- (NSComparisonResult) compare:(SKVersionNumber *)other;

@end
