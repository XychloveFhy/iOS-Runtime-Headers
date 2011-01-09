/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKComposeRecipientAtom, NSArray, NSTimer, UITextField, NSMutableArray, NSMutableDictionary;



@interface GKComposeRecipientView : GKComposeHeaderView <UITextFieldDelegate, ABPeoplePickerNavigationControllerDelegate, GKComposeRecipientAtomDelegate>
{
    NSMutableArray *_recipients;
    NSMutableDictionary *_atoms;
    GKComposeRecipientAtom *_selectedAtom;
    BOOL _editable;
    BOOL _editing;
    BOOL _picking;
    NSArray *_properties;
    NSInteger _maxRecipients;
    BOOL _parentIsClosing;
    NSTimer *_delayTimer;
    double _inputDelay;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInsetsWhileEditing;
    UITextField *_textField;
}

@property UIEdgeInsets contentInsetsWhileEditing;
@property(getter=isEditing) BOOL editing;
@property(getter=isEditable) BOOL editable;


- (id)addresses;
- (void)removeRecipient:(id)arg1;
- (void)recipientWasUpdated:(id)arg1;
- (void)addRecord:(void*)arg1 identifier:(NSInteger)arg2;
- (void)addRecord:(void*)arg1 property:(NSInteger)arg2 identifier:(NSInteger)arg3;
- (void)removeAddresses;
- (BOOL)_addable;
- (BOOL)shouldShowCardForPerson:(void*)arg1;
- (void)_dismissPicker:(id)arg1;
- (BOOL)textFieldShouldBecomeFirstResponder:(id)arg1;
- (void)setInputDelay:(double)arg1;
- (void)_cancelDelayTimer;
- (void)_delayTimerFired:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)_deselectAtom;
- (void)_deleteSelectedAtom;
- (float)offsetForRowWithTextField;
- (float)textFieldOffsetForNumberOfRowsToScroll:(NSUInteger)arg1 numberOfRowsAboveField:(NSInteger)arg2;
- (NSInteger)numberOfRowsOfTextInField;
- (void)parentWillClose;
- (void)parentDidClose;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsetsWhileEditing;
- (void)selectComposeRecipientAtom:(id)arg1;
- (void)composeRecipientAtomShowPersonCard:(id)arg1;
- (void)composeRecipientAtomSelectPrevious:(id)arg1;
- (void)composeRecipientAtomSelectNext:(id)arg1;
- (void)removeAddressAtIndex:(NSInteger)arg1;
- (void)addAddress:(id)arg1;
- (void)showAtoms;
- (void)setContentInsetsWhileEditing:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)reflow;
- (void)setMaxRecipients:(NSInteger)arg1;
- (void)addRecipient:(id)arg1;
- (NSInteger)maxRecipients;
- (void)setAddresses:(id)arg1;
- (id)recipients;
- (id)textField;
- (void)setEditable:(BOOL)arg1;
- (BOOL)hasContent;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textChanged:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (void)clearText;
- (void)setLabel:(id)arg1;
- (BOOL)isEditable;
- (void)setEditing:(BOOL)arg1;
- (BOOL)isEditing;
- (BOOL)becomeFirstResponder;
- (id)text;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (void)setProperty:(NSInteger)arg1;
- (void)setProperties:(id)arg1;

@end
