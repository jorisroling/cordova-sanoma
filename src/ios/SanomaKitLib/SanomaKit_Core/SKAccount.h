//
//  SKAccount.h
//  SanomaKit
//
//  Created by Antti Ahvenlampi on 13/03/14.
//  Copyright (c) 2014 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SKAccount : NSObject

// Set shogun ID. Hashs it if 'hashed' value is NO.
- (void) setShogunID: (NSString*) shogunId isMD5Hashed: (BOOL) hashed __attribute__((deprecated));

// Get MD5 hashed shogun ID.
+ (NSString *)shogunId;
+ (BOOL) hasShogunId;

@end
