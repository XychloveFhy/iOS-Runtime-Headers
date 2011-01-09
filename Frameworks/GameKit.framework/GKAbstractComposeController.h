/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSMutableArray, GKImageBackgroundView, GKRecipientListView, GKRecipientGenerator, GKUITheme, GKRecipientSelectionView, UIFrameAnimation, UINavigationController, NSDictionary, ABPeoplePickerNavigationController, NSString, UITextContentView, UIImageView, UINavigationItem;



@interface GKAbstractComposeController : UIViewController <UIActionSheetDelegate, UIModalViewDelegate, UITableViewDelegate, ABPeoplePickerNavigationControllerDelegate, UITextContentViewDelegate>
{
    UINavigationController *_navigationController;
    UINavigationItem *_navItem;
    GKUITheme *_theme;
    GKImageBackgroundView *_backPlacard;
    GKRecipientListView *_recipientListView;
    GKRecipientSelectionView *_recipientSelectionView;
    UITextContentView *_messageEntryView;
    UIImageView *_messageView;
    UIImageView *_beneathMessageView;
    NSString *_lastMessage;
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _lastSelectedRange;
    id _composeDelegate;
    NSMutableArray *_recipients;
    UIFrameAnimation *_messageEntryViewAnimation;
    unsigned int _needsSetupForNewRecipient : 1;
    unsigned int _visible : 1;
    unsigned int _sending : 1;
    unsigned int _newRecipient : 1;
    unsigned int _willRotateView : 1;
    unsigned int _ignoresOverlayViewsForLayout : 1;
    GKRecipientGenerator *_recipientGenerator;
    NSDictionary *_abPropertiesCache;
    ABPeoplePickerNavigationController *_peoplePickerController;
    UIImageView *_shadowView;
}

@property(retain) UIImageView *shadowView;
@property(readonly) GKRecipientListView *recipientListView;
@property(readonly) ABPeoplePickerNavigationController *peoplePickerController;
@property(readonly) UITextContentView *messageEntryView;
@property(readonly) GKRecipientSelectionView *recipientSelectionView;
@property(readonly) NSMutableArray *recipients;
@property NSUInteger sending;
@property id composeDelegate;
@property(retain) GKUITheme *theme;

+ (id)tableColor;

- (void)setTheme:(id)arg1;
- (id)theme;
- (id)initWithNavigationController:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_stopEntryViewAnimation:(BOOL)arg1;
- (void)_setupRecipientSelectionView;
- (void)updateEnablednessOfSendButton;
- (void)updateTitle;
- (void)updateNavigationButtons;
- (void)cancelButtonClicked:(id)arg1;
- (void)composeControllerCancelled:(id)arg1;
- (id)proposedRecipients;
- (void)setupForNewRecipient;
- (BOOL)isNewRecipient;
- (void)addRecipients:(id)arg1;
- (void)addRecipient:(void*)arg1 property:(NSInteger)arg2 identifier:(NSInteger)arg3 address:(id)arg4 makingContentEntryViewActive:(BOOL)arg5;
- (void)_updateUI;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(NSInteger*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldDismissAfterInsertEditorConfirmed:(BOOL)arg2 withPerson:(void*)arg3;
- (void)dismissPeoplePicker:(id)arg1;
- (void)dismissPeoplePicker;
- (void)showPeoplePickerWithDelegate:(id)arg1;
- (void)transcriptController:(id)arg1 showPeoplePickerWithDelegate:(id)arg2;
- (void)tearDownPeoplePicker;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationController:(id)arg1 displayedMembersOfGroup:(void*)arg2;
- (void)peoplePickerNavigationControllerDisplayedGroups:(id)arg1;
- (void)_setEntryViewVisible:(BOOL)arg1;
- (void)recipientSelectionView:(id)arg1 contentSizeChanged:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)recipientSelectionView:(id)arg1 isValidAddress:(id)arg2;
- (void)recipientSelectionViewTextChanged:(id)arg1;
- (void)recipientSelectionViewReturnPressed:(id)arg1;
- (void)recipientSelectionViewRecipientListChanged:(id)arg1;
- (void)recipientSelectionView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (void)recipientSelectionView:(id)arg1 showPeoplePickerWithDelegate:(id)arg2;
- (void)recipientSelectionViewFinishedWithPeoplePicker:(id)arg1;
- (id)recipientSelectionView:(id)arg1 recipientForAddress:(id)arg2;
- (id)recipientSelectionView:(id)arg1 recipientForRecord:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (id)recipientSelectionView:(id)arg1 recipientsForText:(id)arg2;
- (void)makeRecipientEntryViewActive;
- (void)_resetEntryViewSize;
- (void)_resetEntryViewSizeForInterfaceOrientation:(NSInteger)arg1;
- (float)_maxHeightForOverlayView:(id)arg1 entryViewResize:(NSInteger)arg2;
- (float)_overlayViewMinHeight;
- (id)_overlayView;
- (void)_showRecipientListView;
- (void)_hideRecipientListView;
- (void)_updateRecipientListView;
- (id)shadowView;
- (void)setShadowView:(id)arg1;
- (id)recipientListView;
- (id)peoplePickerController;
- (NSUInteger)sending;
- (void)setSending:(NSUInteger)arg1;
- (id)composeDelegate;
- (void)setComposeDelegate:(id)arg1;
- (id)_recipientGenerator;
- (id)messageEntryView;
- (id)recipientSelectionView;
- (void)makeRecipientEntryViewInactive;
- (void)makeContentEntryViewActive;
- (void)makeContentEntryViewInactive;
- (id)gkBackgroundView;
- (id)recipients;
- (void)layoutSubviewsForOrientation:(NSInteger)arg1;
- (void)textContentViewDidBeginEditing:(id)arg1;
- (BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize { float x1; float x2; })arg2;
- (void)textContentViewDidChange:(id)arg1;
- (void)reload:(BOOL)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)_canReloadView;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; NSInteger x5; float x6; }*)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (id)navigationItem;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)dealloc;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;

@end
