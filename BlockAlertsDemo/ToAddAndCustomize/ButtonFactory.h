//
//  ButtonFactory.h
//  BlockAlertsDemo
//
//  Created by Romain Champourlier on 16/05/12.
//  Copyright (c) 2012 CodeCrop Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SRAASFactories.h"

@interface ButtonFactory : NSObject <SRAASButtonFactory>

+ (ButtonFactory *)sharedButtonFactory;

@end
