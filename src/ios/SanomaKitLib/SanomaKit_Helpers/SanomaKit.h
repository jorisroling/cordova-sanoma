//
//  SanomaKit.h
//  SanomaKit
//
//  Created by Antti Ahvenlampi on 26/03/14.
//  Copyright (c) 2014 Sanoma. All rights reserved.
//

#define SanomaKit_Version @"1.5-beta2"
#ifndef SanomaKit_SanomaKit_h
#define SanomaKit_SanomaKit_h

#ifdef DEBUG
#define DLog(...) NSLog(__VA_ARGS__)
#else
#define DLog(...)
#endif

#define kUserDefaultsKey_ShogunId @"UserDefaultsKey_ShogunId"

#endif
