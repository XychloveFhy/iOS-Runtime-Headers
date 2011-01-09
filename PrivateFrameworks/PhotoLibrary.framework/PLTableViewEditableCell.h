/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLTextView, UITextField, UILabel;



@interface PLTableViewEditableCell : UITableViewCell <UITextViewDelegate, UITextFieldDelegate>
{
    PLTextView *_textView;
    UITextField *_textField;
    UILabel *_sizeTextLabel;
    id _delegate;
    BOOL _forceFirstResponder;
    NSInteger _cellStyle;
}

@property NSInteger style;

+ (id)posterCellIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 multiLine:(BOOL)arg2;
- (id)initHDSDCell;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 cellStyle:(NSInteger)arg2;
- (void)forceFirstResponder:(BOOL)arg1;
- (id)sizeTextLabel;
- (void)setPlaceholderText:(id)arg1;
- (void)_textFieldChanged;
- (id)value;
- (void)textViewDidBeginEditing:(id)arg1;
- (BOOL)textViewShouldEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)isEditing;
- (NSInteger)style;
- (void)setStyle:(NSInteger)arg1;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;

@end
