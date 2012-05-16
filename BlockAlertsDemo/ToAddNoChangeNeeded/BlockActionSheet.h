//
//  BlockActionSheet.h
//
//

#import <UIKit/UIKit.h>
#import "SRAASFactories.h"

/**
 * A simple block-enabled API wrapper on top of UIActionSheet.
 */
@interface BlockActionSheet : NSObject {
@private
  UIView *_view;
  NSMutableArray *_blocks;
  CGFloat _height;
  id <SRAASButtonFactory> _buttonFactory;
}

@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readwrite) BOOL vignetteBackground;
@property (nonatomic, retain) id <SRAASButtonFactory> buttonFactory;

+ (id)sheetWithTitle:(NSString *)title;

- (id)initWithTitle:(NSString *)title;

- (void)setCancelButtonWithTitle:(NSString *) title block:(void (^)()) block;
- (void)setDestructiveButtonWithTitle:(NSString *) title block:(void (^)()) block;
- (void)addButtonWithTitle:(NSString *) title block:(void (^)()) block;

- (void)setCancelButtonWithTitle:(NSString *) title atIndex:(NSInteger)index block:(void (^)()) block;
- (void)setDestructiveButtonWithTitle:(NSString *) title atIndex:(NSInteger)index block:(void (^)()) block;
- (void)addButtonWithTitle:(NSString *) title atIndex:(NSInteger)index block:(void (^)()) block;

- (void)showInView:(UIView *)view;

- (NSUInteger)buttonCount;

@end
