//
//  NSString+SKCheckForEnglishAlphabet.h
//  SanomaKit
//
//  Created by Csengeri Máté on 04/06/14.
//  Copyright (c) 2014 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SKCheckForEnglishAlphabet)

- (BOOL) containsSpecialChars;
- (NSString *) stringWithoutAccents;

@end
