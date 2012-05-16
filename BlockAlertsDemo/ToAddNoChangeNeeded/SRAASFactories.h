//
//  SRAASFactories.h
//  BlockAlertsDemo
//
//  Created by Romain Champourlier on 16/05/12.
//  Copyright (c) 2012 CodeCrop Software. All rights reserved.
//

@protocol SRAASButtonFactory <NSObject>

/**
 This method should return an UIButton instance configured as necessary
 to be inserted in the alert/action sheet.
 
 @param type is a NSString which can be:
    - @"button" for a standard button
    - @"destructiveButton" for a destructive button
    - @"cancelButton" for a cancel button
 
 This allows you to provide your own custom button and define different
 styles for standard, destructive and cancel buttons.
 */
- (UIButton *)buttonWithType:(NSString *)type;

@end

@protocol SRAASBackgroundFactory <NSObject>
- (UIView *)backgroundView;
@end
