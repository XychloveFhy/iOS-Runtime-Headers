/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface DOMHTMLButtonElement : DOMHTMLElement 
{
}

@property(retain,readonly) DOMHTMLFormElement *form;
@property(copy) NSString *accessKey;
@property BOOL disabled;
@property BOOL autofocus;
@property(copy) NSString *name;
@property(copy,readonly) NSString *type;
@property(copy) NSString *value;
@property(readonly) BOOL willValidate;


- (BOOL)formNoValidate;
- (BOOL)autofocus;
- (void)click;
- (id)validity;
- (BOOL)checkValidity;
- (BOOL)willValidate;
- (void)setFormNoValidate:(BOOL)arg1;
- (void)setAutofocus:(BOOL)arg1;
- (id)validationMessage;
- (void)setCustomValidity:(id)arg1;
- (id)accessKey;
- (void)setAccessKey:(id)arg1;
- (void)setDisabled:(BOOL)arg1;
- (NSInteger)structuralComplexityContribution;
- (BOOL)disabled;
- (id)form;
- (id)type;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;

@end
