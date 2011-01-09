/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWindow, UISnapshotView, UIView;



@interface UIClientRotationContext : NSObject 
{
    UIView *_headerView;
    UIView *_footerView;
    UIView *_contentView;
    UIView *_rotatingSnapshotView;
    UIView *_footerStartSnapshotView;
    UIView *_footerEndSnapshotView;
    BOOL _headerWasHidden;
    BOOL _footerWasHidden;
    BOOL _contentWasHidden;
    BOOL _orderKeyboardInAfterRotating;
    BOOL _skipFooterRotation;
    BOOL _skipHeaderRotation;
    NSInteger _fromOrientation;
    NSInteger _toOrientation;
    float _duration;
    UISnapshotView *_headerSnapshotViewStart;
    UISnapshotView *_footerSnapshotViewStart;
    UISnapshotView *_contentSnapshotViewStart;
    float _contentTopAdjustmentStart;
    id _rotatingClient;
    struct { 
        BOOL animateContentRotation; 
        BOOL preserveHeight; 
        BOOL avoidFadingBottomOfContent; 
        float contentStretchRightEdgeInset; 
        NSInteger edgeClip; 
        float contentBottomInset; 
    } _rotationSettings;
    UIWindow *_window;
}

@property(readonly) NSInteger toOrientation;
@property(readonly) NSInteger fromOrientation;
@property(readonly) float duration;
@property(readonly) UIView *contentView;
@property(readonly) id rotatingClient;


- (void)_slideFooterWithStartSnapshot:(id)arg1 endSnapshot:(id)arg2 duration:(double)arg3;
- (BOOL)_isHeaderTranslucent;
- (BOOL)_isFooterTranslucent;
- (id)initWithClient:(id)arg1 toOrientation:(NSInteger)arg2 duration:(float)arg3 andWindow:(id)arg4;
- (void)slideHeaderViewAndFooterViewOffScreen:(BOOL)arg1 forInterfaceOrientation:(NSInteger)arg2;
- (void)setupRotationOrderingKeyboardInAfterRotation:(BOOL)arg1;
- (void)rotateSnapshots;
- (id)rotatingClient;
- (void)finishFirstHalfRotation;
- (NSInteger)toOrientation;
- (NSInteger)fromOrientation;
- (void)finishFullRotateUsingOnePartAnimation:(BOOL)arg1;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(BOOL)arg3 forInterfaceOrientation:(NSInteger)arg4;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(NSInteger)arg3;
- (id)contentView;
- (float)duration;
- (void)dealloc;

@end
