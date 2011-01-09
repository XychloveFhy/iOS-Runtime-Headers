/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIButton, <ABDateFieldDelegate>, UIDatePicker, <ABDatePickerPresentationDelegate>, NSDate;



@interface ABDateField : ABUILabelWithPlaceholder 
{
    UIButton *_clearButton;
    BOOL _isClearButtonEnabled;
    NSDate *_date;
    UIDatePicker *_datePicker;
    struct CGSize { 
        float width; 
        float height; 
    } _datePickerSize;
    BOOL _usesDatePickerAsInputView;
    BOOL _isFirstResponder;
    BOOL _inBecomeFirstResponder;
    BOOL _editable;
    <ABDateFieldDelegate> *_delegate;
    <ABDatePickerPresentationDelegate> *_presentationDelegate;
}

@property(copy) NSString *text;
@property <ABDatePickerPresentationDelegate> *presentationDelegate;
@property <ABDateFieldDelegate> *delegate;
@property CGSize datePickerSize;
@property(retain) NSDate *date;
@property(getter=isEditable) BOOL editable;


- (void)endEditing;
- (void)setEditable:(BOOL)arg1;
- (BOOL)canResignFirstResponder;
- (BOOL)isEditable;
- (id)inputView;
- (id)_clearButton;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (id)date;
- (void)setDate:(id)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (struct CGSize { float x1; float x2; })_clearButtonSize;
- (float)_extraWidthForClearButton;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_clearButtonRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 isClearButtonPresent:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_shouldEnableClearButton;
- (void)_setClearButtonEnabled:(BOOL)arg1;
- (void)_updateClearButton;
- (void)_clearButtonPressed:(id)arg1;
- (void)_setDate:(id)arg1 andInformDelegate:(BOOL)arg2;
- (void)_dettachFromDatePicker:(id)arg1;
- (void)_attachToDatePicker:(id)arg1;
- (void)datePickerDateDidChange:(id)arg1;
- (id)presentationDelegate;
- (void)setPresentationDelegate:(id)arg1;
- (void)setDatePickerSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })datePickerSize;

@end
