/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIMovieScrubberTrackView, <UIMovieScrubberDelegate>, UIImageView, UILabel, UIImage, <UIMovieScrubberDataSource>, UIMovieScrubberEditingView;



@interface UIMovieScrubber : UIControl <UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate>
{
    UIImageView *_thumbView;
    UIMovieScrubberTrackView *_trackView;
    UIMovieScrubberEditingView *_editingView;
    UILabel *_elapsedLabel;
    UILabel *_remainingLabel;
    NSInteger _timeComponents;
    UIImage *_fillImage;
    UIImage *_innerShadowImage;
    UIImage *_maskImage;
    UIImage *_shadowImage;
    <UIMovieScrubberDataSource> *_dataSource;
    <UIMovieScrubberDelegate> *_delegate;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _trackRect;
    float _hitOffset;
    float _zoomDelay;
    BOOL _showTimeViews;
    BOOL _editable;
    double _value;
    double _maximumValue;
    double _minimumValue;
    struct CGPoint { 
        float x; 
        float y; 
    } _touchLocationWhenTrackPressBegan;
    double _trimStartValue;
    double _trimEndValue;
    double _minTrimmedLength;
    double _maxTrimmedLength;
    double _zoomAnimationDuration;
    double _zoomAnimationDelay;
    struct { 
        unsigned int continuous : 1; 
        unsigned int animating : 1; 
        unsigned int creatingSnapshot : 1; 
        unsigned int needsReload : 1; 
        unsigned int layoutTimeViews : 1; 
        unsigned int computeTrackRect : 1; 
        NSUInteger clampingTrimRange; 
        unsigned int zoomed : 1; 
        unsigned int zoomAnimating : 1; 
        unsigned int trackIsPressed : 1; 
        unsigned int trackAnimating : 1; 
        unsigned int thumbIsVisible : 1; 
        unsigned int handleIsPressed : 1; 
        unsigned int willBeginEditing : 1; 
        unsigned int editing : 1; 
        NSUInteger editingHandle; 
        NSUInteger rotationDisabled; 
        unsigned int isInNavigationBar : 1; 
        unsigned int delegateValueDidChange : 1; 
        unsigned int delegateStartValueDidChange : 1; 
        unsigned int delegateEndValueDidChange : 1; 
        unsigned int delegateWillBeginRequestingThumbnails : 1; 
        unsigned int delegateDidFinishRequestingThumbnails : 1; 
        unsigned int delegateWillBeginEditing : 1; 
        unsigned int delegateDidBeginEditing : 1; 
        unsigned int delegateDidCancelEditing : 1; 
        unsigned int delegateEditingAnimationFinished : 1; 
        unsigned int delegateWidthDeltaOriginXDelta : 1; 
    } _sliderFlags;
}

@property BOOL thumbIsVisible;
@property(getter=isEditable) BOOL editable;
@property(getter=isContinuous) BOOL continuous;
@property <UIMovieScrubberDataSource> *dataSource;
@property <UIMovieScrubberDelegate> *delegate;
@property(readonly) BOOL isInsideNavigationBar;
@property(getter=isEditing) BOOL editing;
@property double trimEndValue;
@property double trimStartValue;
@property double minimumTrimLength;
@property double maximumTrimLength;
@property double duration;
@property double value;
@property BOOL showTimeViews;
@property float zoomDelay;

+ (id)timeStringForSeconds:(NSInteger)arg1 forceFullWidthComponents:(BOOL)arg2 isElapsed:(BOOL)arg3;
+ (void)_initializeSafeCategory;

- (BOOL)thumbIsVisible;
- (void)setThumbIsVisible:(BOOL)arg1;
- (void)_animateAfterEdit:(BOOL)arg1;
- (void)animateAfterEdit;
- (void)animateCancelEdit;
- (void)_trimAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_computeTrackRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })trackRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_editingRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbRectForValue:(float)arg1;
- (void)_updateTimes;
- (void)_updateThumbLocation;
- (float)_editingFrameDeltaXForValue:(float)arg1 handle:(NSInteger)arg2;
- (double)trimStartValue;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_editingViewFrameForStartValueWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTrimStartValue:(double)arg1;
- (double)trimEndValue;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_editingViewFrameForEndValueWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTrimEndValue:(double)arg1;
- (float)_valueForTouch:(id)arg1;
- (void)setRotationDisabled:(BOOL)arg1;
- (void)_trackPressWasHeld;
- (void)_beginTrackPressWithTouch:(id)arg1 touchesBegan:(BOOL)arg2;
- (void)_cancelTrackPress:(BOOL)arg1;
- (void)_cancelTrackPressIfNeccessaryWithTouch:(id)arg1;
- (BOOL)pointInsideThumb:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (NSInteger)_editingHandleWithTouch:(id)arg1;
- (void)_sliderValueDidChange:(id)arg1;
- (id)movieScrubberTrackView:(id)arg1 timestampsStartingAt:(id)arg2 endingAt:(id)arg3 maxCount:(NSInteger)arg4;
- (double)minimumTrimLength;
- (void)setMinimumTrimLength:(double)arg1;
- (double)maximumTrimLength;
- (void)setMaximumTrimLength:(double)arg1;
- (BOOL)showTimeViews;
- (void)setShowTimeViews:(BOOL)arg1;
- (float)zoomDelay;
- (void)setZoomDelay:(float)arg1;
- (void)movieScrubberTrackView:(id)arg1 clampedSizeWidthDelta:(float)arg2 actualSizeWidthDelta:(float)arg3 originXDelta:(float)arg4 minimumVisibleValue:(float)arg5 maximumVisibleValue:(float)arg6;
- (void)movieScrubberTrackViewDidExpand:(id)arg1;
- (void)movieScrubberTrackViewDidCollapse:(id)arg1;
- (void)movieScrubberTrackViewWillBeginRequestingThumbnails:(id)arg1;
- (void)movieScrubberTrackViewDidFinishRequestingThumbnails:(id)arg1;
- (float)movieScrubberTrackViewZoomAnimationDuration:(id)arg1;
- (float)movieScrubberTrackViewZoomAnimationDelay:(id)arg1;
- (void)movieScrubberTrackView:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
- (float)movieScrubberTrackViewThumbnailAspectRatio:(id)arg1;
- (double)movieScrubberTrackViewDuration:(id)arg1;
- (id)movieScrubberTrackView:(id)arg1 evenlySpacedTimestamps:(NSInteger)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (BOOL)isInsideNavigationBar;
- (void)setThumbnailImage:(struct CGImage { }*)arg1 forTimestamp:(id)arg2;
- (void)setZoomAnimationDuration:(float)arg1;
- (void)_initSubviews;
- (void)setContinuous:(BOOL)arg1;
- (BOOL)isContinuous;
- (void)setValue:(double)arg1 animated:(BOOL)arg2;
- (void)_setValue:(double)arg1 andSendAction:(BOOL)arg2;
- (void)_sliderAnimationWillStart:(id)arg1 context:(void*)arg2;
- (void)_sliderAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (BOOL)isAnimatingValueChange;
- (double)value;
- (void)setEditable:(BOOL)arg1;
- (void)setValue:(double)arg1;
- (BOOL)isEditable;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_sendDelayedActions;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setEditing:(BOOL)arg1;
- (BOOL)isEditing;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)didMoveToSuperview;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (id)_scriptingInfo;
- (id)scriptingInfoWithChildren;
- (BOOL)cancelTouchTracking;
- (void)setDuration:(double)arg1;
- (double)duration;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)reloadData;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)dataSource;
- (void)_accessibilityNotifyDelegateEditingEndValueDidChange:(double)arg1;
- (void)_accessibilityNotifyDelegateScrubberDidEndScrubbingWithHandle:(NSInteger)arg1;
- (void)_accessibilityNotifyDelegateEditingStartValueDidChange:(double)arg1;
- (double)_accessibilitySliderDeltaForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_accessibilityNotifyDelegateScrubberDidBeginScrubbingWithHandle:(NSInteger)arg1;
- (void)_accessibilityNotifyDelegateWillBeginEditing;
- (void)_accessibilityDecrementMockSlider:(id)arg1;
- (void)_accessibilityIncrementMockSlider:(id)arg1;
- (BOOL)isAccessibilityElement;
- (id)accessibilityContainerElements;

@end
