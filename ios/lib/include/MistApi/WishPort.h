/**
 * Copyright (C) 2020, ControlThings Oy Ab
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * @license Apache-2.0
 */
//
//  WishPort.h
//  MistApi
//
//  Created by Jan on 19/04/2018.
//  Copyright © 2018 Jan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Wish : NSObject
-(void)launchWish:(NSString*) appName;
@end
