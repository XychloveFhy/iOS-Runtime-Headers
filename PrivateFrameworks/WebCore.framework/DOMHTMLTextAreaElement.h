/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface DOMHTMLTextAreaElement : DOMHTMLElement 
{
}

@property(copy) NSString *defaultValue;
@property(retain,readonly) DOMHTMLFormElement *form;
@property(copy) NSString *accessKey;
@property NSInteger cols;
@property BOOL disabled;
@property BOOL autofocus;
@property(copy) NSString *name;
@property BOOL readOnly;
@property NSInteger rows;
@property(copy,readonly) NSString *type;
@property(copy) NSString *value;
@property(readonly) BOOL willValidate;
@property NSInteger selectionStart;
@property NSInteger selectionEnd;


- (NSInteger)maxLength;
- (NSInteger)cols;
- (BOOL)autofocus;
- (NSUInteger)textLength;
- (void)setSelectionStart:(NSInteger)arg1;
- (NSInteger)selectionEnd;
- (id)validity;
- (BOOL)checkValidity;
- (NSInteger)selectionStart;
- (id)defaultValue;
- (void)setDefaultValue:(id)arg1;
- (void)setMaxLength:(NSInteger)arg1;
- (void)setReadOnly:(BOOL)arg1;
- (void)setRequired:(BOOL)arg1;
- (void)setSelectionEnd:(NSInteger)arg1;
- (void)setSelectionRange:(NSInteger)arg1 end:(NSInteger)arg2;
- (void)setCols:(NSInteger)arg1;
- (NSInteger)rows;
- (void)setRows:(NSInteger)arg1;
- (void)setAutocorrect:(BOOL)arg1;
- (void)setAutocapitalize:(BOOL)arg1;
- (BOOL)willValidate;
- (void)setAutofocus:(BOOL)arg1;
- (id)validationMessage;
- (void)setCustomValidity:(id)arg1;
- (id)accessKey;
- (void)setAccessKey:(id)arg1;
- (BOOL)required;
- (void)setDisabled:(BOOL)arg1;
- (NSInteger)structuralComplexityContribution;
- (BOOL)_isEdited;
- (void)select;
- (BOOL)readOnly;
- (BOOL)disabled;
- (id)form;
- (BOOL)autocapitalize;
- (BOOL)autocorrect;
- (id)type;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (void)setName:(id)arg1;
- (id)name;
- (id)startPosition;
- (id)endPosition;
- (BOOL)isTextControl;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)textInputTraits;
- (BOOL)nodeCanBecomeFirstResponder;
- (void)_startAssistingDocumentView:(id)arg1;
- (void)_stopAssistingDocumentView:(id)arg1;
- (BOOL)_requiresAccessoryView;
- (BOOL)_requiresInputView;
- (BOOL)_supportsAutoFill;
- (id)_textFormElement;

@end
