/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface _UIAlertOverlayWindow : UIWindow 
{
    BOOL _shouldDeferDisplay;
}

@property BOOL shouldDeferDisplay;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })constrainFrameToScreen:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

- (float)_contentScaleFactor;
- (void)setShouldDeferDisplay:(BOOL)arg1;
- (BOOL)shouldDeferDisplay;
- (void)setContentScaleFactor:(float)arg1;
- (void)_handleMouseUp:(struct __GSEvent { }*)arg1;
- (BOOL)isInternalWindow;
- (id)representation;
- (BOOL)_shouldUseKeyWindowStack;

@end
