//
//  ButtonFactory.m
//  BlockAlertsDemo
//
//  Created by Romain Champourlier on 16/05/12.
//  Copyright (c) 2012 CodeCrop Software. All rights reserved.
//

#import "ButtonFactory.h"

static ButtonFactory *_sharedButtonFactory;


@implementation ButtonFactory

+ (ButtonFactory *)sharedButtonFactory {
  if (_sharedButtonFactory == nil) {
    _sharedButtonFactory = [[ButtonFactory alloc] init];
  }
  return _sharedButtonFactory;
}

- (UIButton *)buttonWithType:(NSString *)type {
  UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
  
  button.titleLabel.font = [UIFont boldSystemFontOfSize:18];
  button.titleLabel.minimumFontSize = 6;
  button.titleLabel.adjustsFontSizeToFitWidth = YES;
  button.titleLabel.shadowOffset = CGSizeMake(0, -1);
  button.backgroundColor = [UIColor clearColor];

  NSString *color = nil;
  if ([type isEqualToString:@"button"]) {
    color = @"gray";
  }
  else if ([type isEqualToString:@"destructiveButton"]) {
    color = @"red";
  }
  else if ([type isEqualToString:@"cancelButton"]) {
    color = @"black";
  }
  UIImage *image = [UIImage imageNamed:[NSString stringWithFormat:@"action-%@-button.png", color]];
  image = [image stretchableImageWithLeftCapWidth:(int)(image.size.width)>>1 topCapHeight:0];

  [button setBackgroundImage:image forState:UIControlStateNormal];
  [button setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
  [button setTitleShadowColor:[UIColor blackColor] forState:UIControlStateNormal];

  return button;
}

@end
