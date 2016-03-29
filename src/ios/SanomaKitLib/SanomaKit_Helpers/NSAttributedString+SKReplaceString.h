//
//  NSAttributedString+SKReplaceString.h
//  SanomaKit
//
//  Created by Csengeri Máté on 11/02/14.
//  Copyright (c) 2014 Sanoma Media. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSAttributedString (SKReplaceString)

- (NSAttributedString *) replaceString:(NSString *)target withString:(NSString *)replacement;

@end
