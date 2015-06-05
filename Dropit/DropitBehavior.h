//
//  DropitBehavior.h
//  Dropit
//
//  Created by Christine Perinchery on 6/5/15.
//  Copyright (c) 2015 Stanford Lessons App House. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DropitBehavior : UIDynamicBehavior

- (void)addItem:(id <UIDynamicItem>)item;
- (void)removeItem:(id<UIDynamicItem>)item;

@end
