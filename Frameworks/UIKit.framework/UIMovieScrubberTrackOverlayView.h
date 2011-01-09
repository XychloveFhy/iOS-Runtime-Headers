/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;



@interface UIMovieScrubberTrackOverlayView : UIView 
{
    double _value;
    double _minimumValue;
    double _maximumValue;
    double _startValue;
    double _endValue;
    UIView *_leftFillView;
    UIView *_rightFillView;
    UIView *_innerShadowView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _leftFillFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _rightFillFrame;
    NSUInteger _editingHandle;
    unsigned int _editing : 1;
    unsigned int _zoomed : 1;
}


- (void)_updateLeftFill;
- (void)_updateRightFill;
- (void)animateFillFramesAway;
- (void)_clampValueAndLayout;
- (void)setStartValue:(double)arg1;
- (void)setEndValue:(double)arg1;
- (void)setIsZoomed:(BOOL)arg1;
- (void)setEditingHandle:(NSInteger)arg1;
- (void)setMinimumValue:(double)arg1;
- (void)setMaximumValue:(double)arg1;
- (void)setValue:(double)arg1;
- (void)setEditing:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
