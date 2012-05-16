//
//  BlockAlertView.h
//
//

#import <UIKit/UIKit.h>
#import "SRAASFactories.h"

@interface BlockAlertView : NSObject {
@protected
  UIView *_view;
  NSMutableArray *_blocks;
  CGFloat _height;
  id <SRAASButtonFactory> _buttonFactory;
}
@property (nonatomic, retain) id <SRAASButtonFactory> buttonFactory;

+ (BlockAlertView *)alertWithTitle:(NSString *)title message:(NSString *)message;

- (id)initWithTitle:(NSString *)title message:(NSString *)message;

- (void)setDestructiveButtonWithTitle:(NSString *)title block:(void (^)())block;
- (void)setCancelButtonWithTitle:(NSString *)title block:(void (^)())block;
- (void)addButtonWithTitle:(NSString *)title block:(void (^)())block;

- (void)show;
- (void)dismissWithClickedButtonIndex:(NSInteger)buttonIndex animated:(BOOL)animated;

@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readwrite) BOOL vignetteBackground;

@end
