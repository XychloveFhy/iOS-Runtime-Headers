/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISwipeGestureRecognizer, UIKBKey, UIKBKeyplane, UIKBKeyboard, UIKBKeyplaneView, UIView, NSMutableArray, NSString, NSMutableSet, NSMutableDictionary, NSTimer;



@interface UIKeyboardLayoutStar : UIKeyboardLayout 
{
    UIKBKeyboard *m_keyboard;
    UIKBKeyplane *m_keyplane;
    NSString *m_keyboardName;
    NSString *m_keyplaneName;
    NSInteger m_appearance;
    UIKBKey *m_activeKey;
    UIKBKeyplaneView *m_keyplaneView;
    UIView *m_savedKeyplaneView;
    UIView *m_animationKeyplaneBackground;
    NSInteger m_keyboardType;
    UIView *m_animationBackgroundView;
    UIView *m_animationFromView;
    UIView *m_animationToView;
    struct CGPoint { 
        float x; 
        float y; 
    } m_initialDragPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } m_dragPrevPoint;
    float m_dragValues[4];
    float m_dragVelocity;
    double m_prevTouchUpTime;
    double m_prevTouchDownTime;
    NSInteger m_prevUpActions;
    NSMutableDictionary *m_keyboards;
    NSMutableDictionary *m_states;
    NSMutableDictionary *m_allKeys;
    NSMutableDictionary *m_renderedKeys;
    NSMutableDictionary *m_variantKeys;
    NSMutableDictionary *m_allKeyplaneViews;
    NSMutableSet *m_allKeyplaneKeycaps;
    NSMutableSet *m_variantKeyTokens;
    NSMutableSet *m_validInputStrings;
    NSString *m_localizedInputMode;
    NSMutableArray *m_keyIndexMap;
    NSMutableDictionary *m_activatedKeys;
    struct __CFDictionary { } *m_extendedTouchInfoMap;
    NSTimer *m_activatedTimer;
    NSInteger m_preferredTrackingChangeCount;
    NSInteger m_shiftTrackingChangeCount;
    NSMutableSet *m_accentInfo;
    NSMutableSet *m_hasAccents;
    id m_spaceTarget;
    SEL m_spaceAction;
    SEL m_spaceLongAction;
    id m_returnTarget;
    SEL m_returnAction;
    SEL m_returnLongAction;
    id m_deleteTarget;
    SEL m_deleteAction;
    SEL m_deleteLongAction;
    BOOL m_secureTextEntry;
    BOOL m_shift;
    BOOL m_autoshift;
    BOOL m_settingShift;
    BOOL m_didLongPress;
    BOOL m_dragged;
    BOOL m_dragChangedKey;
    BOOL m_touchDownInMoreKey;
    BOOL m_touchDownInShiftKey;
    BOOL m_wasShifted;
    BOOL m_dragDismissStarted;
    BOOL m_currentInputModeVariantsOnly;
    BOOL m_previousTouchInMore;
    UISwipeGestureRecognizer *m_rightSwipeRecognizer;
    UISwipeGestureRecognizer *m_leftSwipeRecognizer;
    UISwipeGestureRecognizer *m_upSwipeRecognizer;
    BOOL m_preRotateShift;
    NSString *m_preRotateKeyplaneName;
    struct CGPoint { 
        float x; 
        float y; 
    } m_keyPeripheralInset;
}

@property(getter=isRotating,readonly) BOOL rotating;
@property BOOL didLongPress;
@property BOOL autoShift;
@property BOOL shift;
@property(retain) UIKBKey *activeKey;
@property(copy) NSString *localizedInputMode;
@property(copy) NSString *keyplaneName;
@property(copy) NSString *keyboardName;
@property(readonly) UIKBKeyplane *keyplane;
@property(readonly) UIKBKeyboard *keyboard;

+ (void)_initializeSafeCategory;

- (id)keyboardWithName:(id)arg1;
- (void)setKeyboardName:(id)arg1 appearance:(NSInteger)arg2;
- (void)localizeUndoKeys;
- (void)setKeyplaneName:(id)arg1;
- (void)setCurrencyKeysForCurrentLocale:(id)arg1;
- (NSInteger)displayTypeHintForMoreKey;
- (NSInteger)displayTypeHintForShiftKey;
- (void)setKeyViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (id)findMoreKeyOnKeyPlane:(id)arg1 onLeftMostSide:(BOOL)arg2;
- (void)updateLatinAccentsKey;
- (void)updateMoreAndInternationalKeys;
- (NSInteger)stateForKey:(id)arg1;
- (void)setState:(NSInteger)arg1 forKey:(id)arg2;
- (void)addKeyToActivatedSet:(id)arg1;
- (void)removeKeyFromActivatedSet:(id)arg1;
- (void)schedulePeriodicProcessActivatedSet;
- (void)cancelPeriodicProcessActivatedSet;
- (void)periodicProcessActivatedSet:(id)arg1;
- (void)deactivateAllInActivatedSet;
- (id)cacheIdentifierForState:(NSInteger)arg1 ofKey:(id)arg2;
- (id)cacheIdentifierForKeyplaneNamed:(id)arg1 withVisualStyle:(id)arg2;
- (BOOL)showingSplitKeyboard;
- (void)showSplitAlternateKeyboard;
- (void)splitAlternateKeyboardFirstHalfAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)splitAlternateKeyboardSecondHalfAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)keyHitTestContainingPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)keyHitTestClosestToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)keyHitTestWithoutCharging:(struct CGPoint { float x1; float x2; })arg1;
- (id)keyHitTest:(struct CGPoint { float x1; float x2; })arg1 touchStage:(NSInteger)arg2 atTime:(double)arg3 withTouch:(id)arg4;
- (void)uninstallGestureRecognizers;
- (void)swipeDetected:(id)arg1;
- (id)infoForTouch:(id)arg1;
- (id)generateInfoForTouch:(id)arg1;
- (void)clearInfoForTouch:(id)arg1;
- (void)clearAllTouchInfo;
- (id)touchForKey:(id)arg1;
- (id)spaceKey;
- (BOOL)keyHasAccentedVariants:(id)arg1;
- (void)downActionShiftWithKey:(id)arg1;
- (void)upActionShift;
- (NSUInteger)stateForShiftKey:(id)arg1;
- (void)updateShiftKeyState;
- (void)updateKeyCentroids;
- (BOOL)shouldRetestKey:(id)arg1 withKeyplane:(id)arg2;
- (BOOL)didLongPress;
- (void)setDidLongPress:(BOOL)arg1;
- (BOOL)autoShift;
- (BOOL)shift;
- (void)setActiveKey:(id)arg1;
- (void)setLocalizedInputMode:(id)arg1;
- (void)setKeyboardName:(id)arg1;
- (id)keyplane;
- (id)keyWithRepresentedString:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForKeyWithRepresentedString:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForLastKeyWithRepresentedString:(id)arg1;
- (id)popupKeyViews;
- (void)setKeyForTouchInfo:(id)arg1 key:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)installGestureRecognizers;
- (NSUInteger)downActionFlagsForKey:(id)arg1;
- (NSUInteger)upActionFlagsForKey:(id)arg1;
- (void)nextCandidatesAction;
- (void)confirmAction;
- (void)sendStringAction:(id)arg1 forKey:(id)arg2;
- (void)deleteAction;
- (id)activeKey;
- (id)keyHitTest:(struct CGPoint { float x1; float x2; })arg1;
- (void)showPopupVariantsForKey:(id)arg1;
- (BOOL)isLongPressedKey:(id)arg1;
- (void)touchDownWithKey:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)zoomGestureRecognized:(id)arg1;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)setTarget:(id)arg1 forKey:(id)arg2;
- (void)setAction:(SEL)arg1 forKey:(id)arg2;
- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;
- (void)restoreDefaultsForKey:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)touchDragged:(id)arg1;
- (void)touchUp:(id)arg1;
- (void)touchCancelled:(id)arg1;
- (BOOL)doesKeyCharging;
- (BOOL)shouldShowIndicator;
- (id)activationIndicatorView;
- (void)willRotate;
- (void)didRotate;
- (void)deactivateActiveKeys;
- (BOOL)performReturnAction;
- (void)showKeyboardType:(NSInteger)arg1 appearance:(NSInteger)arg2 orientation:(id)arg3 withShift:(BOOL)arg4;
- (void)setAutoShift:(BOOL)arg1;
- (BOOL)usesAutoShift;
- (void)didClearInput;
- (void)restoreDefaultsForAllKeys;
- (BOOL)canProduceString:(id)arg1;
- (float)hitBuffer;
- (void)setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(NSInteger)arg3;
- (BOOL)isShiftKeyPlaneChooser;
- (BOOL)isShiftKeyBeingHeld;
- (void)setAutoshift:(BOOL)arg1;
- (id)keyplaneName;
- (id)keyboardName;
- (id)localizedInputMode;
- (void)setShift:(BOOL)arg1;
- (id)candidateList;
- (void)longPressAction;
- (id)keyboard;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)scriptingInfoWithChildren;
- (BOOL)isRotating;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)_accessibilityCreateElementForKey:(id)arg1;
- (id)_accessibilityInternalData;
- (id)_accessibilityKeys;
- (id)accessibilityLabel;
- (NSInteger)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(NSInteger)arg1;
- (NSInteger)accessibilityElementCount;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)accessibilityTreeHidden;

@end
