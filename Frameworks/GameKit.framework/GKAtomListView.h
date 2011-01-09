/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class MFLabelledAtomList, UITextLabel, UIPushButton;



@interface GKAtomListView : UIView <MFLabelledAtomListDelegate>
{
    MFLabelledAtomList *_atomList;
    UITextLabel *_recipientListLabel;
    UIPushButton *_detailsButton;
    UIPushButton *_hideDetailsButton;
    id _delegate;
    unsigned int _expanded : 1;
}


- (id)_newButtonWithTitle:(id)arg1;
- (void)_buttonTouchUpEvent:(id)arg1;
- (void)_setSizeAndAlphasAnimating:(BOOL)arg1;
- (void)_updateInactiveModeText;
- (void)displayStringsDidChangeForLabelledAtomList:(id)arg1;
- (id)initWithLabel:(id)arg1 totalWidth:(float)arg2 addresses:(id)arg3 arePhoneNumbers:(id)arg4;
- (void)setAddressAtomTarget:(id)arg1 action:(SEL)arg2;
- (void)setExpanded:(BOOL)arg1 animate:(BOOL)arg2;
- (BOOL)isExpanded;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
