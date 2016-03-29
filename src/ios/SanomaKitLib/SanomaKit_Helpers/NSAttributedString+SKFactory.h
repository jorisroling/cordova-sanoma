//
//  NSAttributedString+SKFactory.h
//  SanomaKit
//
//  Created by Csengeri Máté on 22/04/14.
//  Copyright (c) 2014 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSAttributedString (SKFactory)

+ (NSAttributedString *) attributedStringWithString:(NSString *)string font:(UIFont *)font;
+ (NSAttributedString *) attributedStringWithString:(NSString *)string color:(UIColor *)color;
+ (NSAttributedString *) attributedStringWithString:(NSString *)string color:(UIColor *)color font:(UIFont *)font;
+ (NSAttributedString *) attributedStringWithString:(NSString *)string color:(UIColor *)color font:(UIFont *)font underLine:(BOOL)underLine;
+ (NSAttributedString *) attributedStringWithString:(NSString *)string color:(UIColor *)color font:(UIFont *)font underLine:(BOOL)underLine strikeThrough:(BOOL)strikeThrough;
+ (NSAttributedString *) attributedStringWithString:(NSString *)string color:(UIColor *)color font:(UIFont *)font strikeThrough:(BOOL)strikeThrough;

- (NSAttributedString *) attributedStringWithLineSpacing:(CGFloat)lineSpacing;
@end
