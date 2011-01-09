/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIStatusBar;



@interface UIStatusBarWindow : UIWindow 
{
    UIStatusBar *_statusBar;
    NSInteger _orientation;
    UIImageView *_bottomLeftCorner;
    UIImageView *_bottomRightCorner;
}


- (void)_fadeAnimationStopped:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_rotate;
- (id)_imageForCorner:(NSInteger)arg1;
- (void)setCornerStyle:(NSInteger)arg1;
- (BOOL)_disableViewScaling;
- (BOOL)_isStatusBarWindow;
- (void)setStatusBar:(id)arg1;
- (void)setOrientation:(NSInteger)arg1 animationParameters:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (NSInteger)orientation;
- (void)dealloc;

@end
