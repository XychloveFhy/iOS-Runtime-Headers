/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIPeripheralHostView : UIView 
{
    NSInteger _explicitLayoutCount;
}

@property(retain,readonly) UIPeripheralHostLayer *layer;

+ (Class)layerClass;
+ (void)_initializeSafeCategory;

- (void)beginExplicitLayout;
- (void)endExplicitLayout;
- (NSInteger)textEffectsVisibilityLevel;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)layer;
- (BOOL)_shouldUseKeyWindowStack;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;

@end
