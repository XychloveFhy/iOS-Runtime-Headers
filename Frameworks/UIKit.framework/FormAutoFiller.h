/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMHTMLInputElement, NSMutableArray, NSMutableDictionary, DOMElement, WebFrame;



@interface FormAutoFiller : NSObject 
{
    WebFrame *_frame;
    DOMElement *_form;
    NSInteger _formType;
    DOMHTMLInputElement *_usernameElement;
    DOMHTMLInputElement *_passwordElement;
    NSMutableArray *_autoFilledControls;
    NSMutableDictionary *_fieldsFilledFromAB;
    NSMutableArray *_continuationFields;
    BOOL _hasAutoFilled;
}

+ (id)autoFillerForFrame:(id)arg1 form:(id)arg2 create:(BOOL)arg3;
+ (id)matchForControl:(id)arg1 rep:(id)arg2 fieldLabels:(id)arg3 useFieldName:(BOOL)arg4 foundByPageScan:(BOOL*)arg5;
+ (id)abMatchInFrame:(id)arg1 form:(id)arg2 fieldName:(id)arg3;
+ (BOOL)isContinuationField:(id)arg1 inFrame:(id)arg2 form:(id)arg3;
+ (void)recordABMatch:(id)arg1 inFrame:(id)arg2 form:(id)arg3 fieldName:(id)arg4;
+ (void)clearAutoFillStateForFrame:(id)arg1;
+ (void)clearAutoFilledTextField:(id)arg1 inFrame:(id)arg2 form:(id)arg3;
+ (NSInteger)indexOfItemInSelectElement:(id)arg1 forSynonyms:(id)arg2;
+ (id)radioButtonGroupContaining:(id)arg1 inFormElements:(id)arg2;
+ (NSInteger)indexOfItemInRadioButtonGroup:(id)arg1 forSynonyms:(id)arg2;
+ (id)fieldNameForAutoFillOfControl:(id)arg1 rep:(id)arg2 respectHTMLAutocompleteAttribute:(BOOL)arg3;

- (id)visibleControlsInForm;
- (void)_scanElements;
- (NSInteger)formType;
- (id)usernameElement;
- (id)passwordElement;
- (NSInteger)_itemInSelectElement:(id)arg1 forMatch:(id)arg2;
- (id)_decomposeStreetAddress:(id)arg1 style:(NSInteger)arg2;
- (void)_insertABValue:(id)arg1 inTextFieldElement:(id)arg2 match:(id)arg3 fieldName:(id)arg4;
- (NSInteger)_reflectMultiFieldMatch:(id)arg1 inControls:(id)arg2 currIndex:(NSUInteger)arg3 fieldName:(id)arg4 isPhoneNumber:(BOOL)arg5;
- (NSInteger)_reflectAutoFillMatch:(id)arg1 inControls:(id)arg2 currIndex:(NSInteger)arg3 fieldName:(id)arg4;
- (BOOL)hasAutoFilled;
- (BOOL)autoFill;
- (void)autoFillAddressStartingAtControl:(id)arg1 match:(id)arg2;
- (NSInteger)autoFillPhoneOrZipStartingAtControl:(id)arg1 match:(id)arg2;
- (void)recordABMatch:(id)arg1 fieldName:(id)arg2;
- (void)recordABContinuationField:(id)arg1;
- (void)clearAutoFilledTextField:(id)arg1;
- (id)init;
- (void)dealloc;

@end
