/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICircleSegmentedControl : UIControl {
    UIImage * _activeImage;
    UIImage * _buttonImage;
    <PSUICircleSegmentedControlDelegate> * _delegate;
    UIImage * _highlightedImage;
    UILabel * _label;
    UIImage * _placeholderImage;
    NSMutableArray * _segmentConstraints;
    NSMutableArray * _segmentPlaceholders;
    NSMutableArray * _segments;
    PSUICircleSegment * _selectedSegment;
    NSMutableArray * _selectedSegmentConstraints;
    UIStackView * _stack;
}

@property (nonatomic) <PSUICircleSegmentedControlDelegate> *delegate;
@property (nonatomic, retain) UILabel *label;

- (void).cxx_destruct;
- (id)_circleImageWithColor:(id)arg1 fillColor:(id)arg2 diameter:(float)arg3;
- (void)addSegmentWithTitle:(id)arg1;
- (id)delegate;
- (id)init;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (id)label;
- (void)menuButtonPressed;
- (void)segmentTapped:(id)arg1;
- (void)selectSegmentAtIndex:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPositionConstraintsActive:(BOOL)arg1 forButtonAtIndex:(unsigned int)arg2;
- (void)setSelectedSegmentIndex:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
