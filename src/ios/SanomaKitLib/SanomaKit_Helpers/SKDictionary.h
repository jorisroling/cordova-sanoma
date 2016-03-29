//
//  SKDictionary.h
//  SanomaKit
//
//  Created by Csengeri Máté on 10/12/13.
//  Copyright (c) 2013 Sanoma Media. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SKDictionary : NSObject

+ (NSString *) get:(NSString *)key;
+ (void)setLanguageCode:(NSString *)languageCode;

@end

#define LocalizedString(key) \
[SKDictionary get:(key)]
