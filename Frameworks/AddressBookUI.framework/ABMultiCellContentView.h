/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIView, <ABMultiCellContentViewUpdateDelegate>, ABAbstractPropertyGroup, ABMultiCell;



@interface ABMultiCellContentView : ABPersonCellContentView <ABResponderDelegate>
{
    ABMultiCell *_cell;
    UIView *_labelDivider;
    BOOL _isImportant;
    BOOL _isEmphasized;
    BOOL _isHighlighted;
    BOOL _allowsEditing;
    BOOL _isEditing;
    BOOL _shouldIgnoreEndEditing;
    NSInteger _property;
    ABAbstractPropertyGroup *_pg;
    id _pgInfo;
    BOOL _needsReload;
    UIView *_touchedView;
    <ABMultiCellContentViewUpdateDelegate> *_updateDelegate;
}

@property BOOL shouldIgnoreEndEditing;
@property ABMultiCell *cell;
@property <ABMultiCellContentViewUpdateDelegate> *updateDelegate;
@property(getter=isEmphasized) BOOL emphasized;
@property(getter=isImportant) BOOL important;
@property BOOL allowsEditing;
@property(getter=isEditing) BOOL editing;
@property(retain) id propertyGroupInfo;
@property(readonly) ABAbstractPropertyGroup *propertyGroup;

+ (void)setupTextField:(id)arg1 withStyleProvider:(id)arg2;
+ (struct CGSize { float x1; float x2; })layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize { float x1; float x2; })arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6;
+ (id)reuseIdentifierForPropertyGroup:(id)arg1 info:(id)arg2;
+ (Class)classForProperty:(NSInteger)arg1;
+ (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 forPropertyGroup:(id)arg2 info:(id)arg3 styleProvider:(id)arg4 whenEditing:(BOOL)arg5;

- (void)setLabelText:(id)arg1;
- (id)cell;
- (BOOL)allowsEditing;
- (void)setAllowsEditing:(BOOL)arg1;
- (BOOL)canResignFirstResponder;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1;
- (BOOL)isEditing;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)reload;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForLabelDivider;
- (id)labelTextColorWhenEditing:(BOOL)arg1;
- (id)initCommonWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 property:(NSInteger)arg2;
- (BOOL)entryFieldShouldReturn:(id)arg1;
- (BOOL)canBeginEditingAnytime;
- (BOOL)shouldIgnoreEndEditing;
- (BOOL)isEmphasized;
- (BOOL)isImportant;
- (void)setKeyboardSettings:(id)arg1 onTextField:(id)arg2;
- (void)clearTextFieldDelegates:(id)arg1;
- (id)newTextFieldWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 tag:(NSInteger)arg2 keyboardSettings:(id)arg3 delegate:(id)arg4 styleProvider:(id)arg5;
- (id)displayTextColor;
- (void)entryField:(id)arg1 valueDidChange:(id)arg2 forKey:(id)arg3;
- (BOOL)entryFieldShouldBeginEditing:(id)arg1;
- (BOOL)entryFieldShouldEndEditing:(id)arg1;
- (void)entryFieldDidEndEditing:(id)arg1;
- (void)entryFieldDidBeginEditing:(id)arg1;
- (BOOL)canHandleProperty:(NSInteger)arg1;
- (void)updateSubviewsForNewStateAnimated:(BOOL)arg1;
- (BOOL)wantsLabelDivider;
- (id)viewForFirstResponder;
- (id)hitTestForTouches:(id)arg1 withEvent:(id)arg2;
- (BOOL)shouldSendTouchesToSuperviewForHitView:(id)arg1;
- (BOOL)isValidValue:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundRectForView:(id)arg1;
- (void)layoutLabel;
- (void)entryFieldBeginAttemptBecomeFirstResponder:(id)arg1;
- (void)entryFieldEndAttemptBecomeFirstResponder:(id)arg1;
- (id)updateDelegate;
- (void)setUpdateDelegate:(id)arg1;
- (id)propertyGroup;
- (id)propertyGroupInfo;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 property:(NSInteger)arg2;
- (void)setPropertyGroup:(id)arg1 andInfo:(id)arg2;
- (void)setEmphasized:(BOOL)arg1;
- (void)setImportant:(BOOL)arg1;
- (void)reloadIfNeeded:(BOOL)arg1 reloadFromModel:(BOOL)arg2;
- (id)pickerView;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 forPropertyGroup:(id)arg2 info:(id)arg3 styleProvider:(id)arg4 whenEditing:(BOOL)arg5;
- (void)reloadLabelFromModel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })focusRectForView:(id)arg1;
- (void)setPropertyGroupInfo:(id)arg1;
- (void)setShouldIgnoreEndEditing:(BOOL)arg1;
- (BOOL)tabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (BOOL)ABTabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (void)reloadFromModel;
- (void)setCell:(id)arg1;

@end
