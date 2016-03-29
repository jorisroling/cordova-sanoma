//
//  SKLogPresenter.h
//  SanomaKit
//
//  Created by Csengeri Máté on 04/12/15.
//  Copyright © 2015 Sanoma. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SKLogPresenter : NSObject

+ (void) showLog;
+ (void) hideLog;
+ (void) log:(NSString *)format, ...;
+ (void) logCutIfLong:(BOOL)cutIfLong format:(NSString *)format, ...;
+ (void) clearLog;
@end
