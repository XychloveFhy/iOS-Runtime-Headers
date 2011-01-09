/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPPushButton;



@interface TPCallWaitingButton : UIThreePartButton 
{
    TPPushButton *_innerButton;
    unsigned int _type : 1;
}

+ (struct CGSize { float x1; float x2; })defaultSizeForType:(NSInteger)arg1;
+ (float)defaultVerticalCenteringOffset;
+ (void)_initializeSafeCategory;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 type:(NSInteger)arg2;
- (id)initTopForIncomingCallWaiting;
- (id)initTopForTTY;
- (id)initBottomForIncomingCallWaiting;
- (id)initBottomForSecondIncomingCallWaiting;
- (id)initForIncomingCallWaitingOnVideoCall;
- (id)initBottomForTTYWithTitle:(id)arg1;
- (void)removeTarget:(id)arg1 forControlEvents:(NSUInteger)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(NSInteger)arg3;
- (void)removeTarget:(id)arg1 forEvents:(NSInteger)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(NSUInteger)arg3;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)dealloc;
- (BOOL)isAccessibilityElement;

@end
