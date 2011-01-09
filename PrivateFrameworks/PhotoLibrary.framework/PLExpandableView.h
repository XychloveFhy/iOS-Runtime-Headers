/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UITouch, <PLExpandableViewDelegate>, UIView, NSSet;



@interface PLExpandableView : UIView 
{
    <PLExpandableViewDelegate> *_delegate;
    UITouch *_leftTouch;
    UITouch *_rightTouch;
    NSSet *_touches;
    NSUInteger _lastDownCount;
    struct CGPoint { 
        float x; 
        float y; 
    } _touchDownLocation;
    float _expansionFraction;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _expandedFrame;
    UIView *_forwardingView;
    UIView *_contentView;
    struct { 
        unsigned int state : 3; 
        unsigned int prevState : 3; 
        unsigned int tracking : 1; 
        unsigned int forwardedTo : 1; 
        unsigned int delayTouchesBeganUntilMultipleFingersDown : 1; 
        unsigned int fingersAreDown : 1; 
        unsigned int didSendTouchesBegan : 1; 
        unsigned int ignoreSingleTouch : 1; 
        unsigned int autorotationDisabled : 1; 
        unsigned int animationDisabled : 1; 
        unsigned int delegateExpandedFrame : 1; 
        unsigned int delegateWillBeginExpanding : 1; 
        unsigned int delegateWillCompleteExpanding : 1; 
        unsigned int delegateDidCompleteExpanding : 1; 
        unsigned int delegateWillCancelExpanding : 1; 
        unsigned int delegateDidCancelExpanding : 1; 
        unsigned int delegateDidBeginCollapsing : 1; 
        unsigned int delegateWillCompleteCollapsing : 1; 
        unsigned int delegateDidCompleteCollapsing : 1; 
        unsigned int delegateWillCancelCollapsing : 1; 
        unsigned int delegateDidCancelCollapsing : 1; 
        unsigned int delegateExpandedFractionChanged : 1; 
    } _expandFlags;
}

+ (void)_initializeSafeCategory;

- (NSInteger)touchCount;
- (void)collapse:(BOOL)arg1;
- (void)setIgnoreSingleTouch:(BOOL)arg1;
- (void)_setAutorotationDisabled:(BOOL)arg1;
- (void)_notifyDidCompleteCollapsing;
- (void)_notifyWillBeginExpanding;
- (void)_notifyWillCancelCollapsingWithDuration:(double)arg1;
- (void)_notifyWillCompleteCollapsingWithDuration:(double)arg1;
- (void)_notifyWillCompleteExpandingWithDuration:(double)arg1;
- (void)_notifyWillCancelExpandingWithDuration:(double)arg1;
- (void)_notifyDidCompleteExpanding;
- (void)_notifyWillBeginCollapsing;
- (void)_notifyDidCancelExpanding;
- (void)_notifyDidCancelCollapsing;
- (void)_transitionFromContracted:(NSInteger)arg1 withDuration:(double)arg2;
- (void)_transitionFromExpanding:(NSInteger)arg1 withDuration:(double)arg2;
- (void)_transitionFromCompleteExpand:(NSInteger)arg1 withDuration:(double)arg2;
- (void)_transitionFromCancelExpand:(NSInteger)arg1 withDuration:(double)arg2;
- (void)_transitionFromExpanded:(NSInteger)arg1 withDuration:(double)arg2;
- (void)_transitionFromContracting:(NSInteger)arg1 withDuration:(double)arg2;
- (void)_transitionFromCancelContract:(NSInteger)arg1 withDuration:(double)arg2;
- (void)_transitionFromCompleteContract:(NSInteger)arg1 withDuration:(double)arg2;
- (void)_setExpansionFraction:(float)arg1;
- (void)notifyExpansionFraction:(float)arg1 force:(BOOL)arg2;
- (void)_removeForwardingViewForEvent:(id)arg1 touches:(id)arg2;
- (void)touchesDidMove:(id)arg1 withEvent:(id)arg2;
- (void)_finishTouches;
- (void)updateVelocitiesWithTouches:(id)arg1 withEvent:(id)arg2;
- (void)_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pinchRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 insetTouches:(BOOL)arg3;
- (void)collapseWithDuration:(double)arg1;
- (void)expand;
- (void)setDelayTouchesBeganUntilMultipleFingersDown:(BOOL)arg1;
- (void)_setState:(NSInteger)arg1 withDuration:(double)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })expandedFrame;
- (id)_touchesForMe:(id)arg1 withEvent:(id)arg2;
- (void)touchesDidEnd;
- (NSInteger)previousState;
- (void)finishTransitionToState:(NSInteger)arg1;
- (void)expandWithDuration:(double)arg1;
- (void)willBeginForwardingTouchesToView:(id)arg1;
- (id)beginTrackingState:(NSInteger)arg1 withTouches:(id)arg2 event:(id)arg3;
- (float)continueTrackingState:(NSInteger)arg1 withTouches:(id)arg2 event:(id)arg3;
- (float)completeTrackingToState:(NSInteger)arg1 withTouches:(id)arg2 duration:(double)arg3 event:(id)arg4;
- (void)stateDidChangeFrom:(NSInteger)arg1;
- (id)singleTapForwardingViewForPoint:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (NSInteger)snapState;
- (void)setExpandedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setForwardedByExpandableView:(BOOL)arg1;
- (void)firstTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2 usingProvidedTouches:(BOOL)arg3;
- (id)navigationBar;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToSuperview;
- (void)willMoveToWindow:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)isTracking;
- (id)contentView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (NSInteger)state;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
