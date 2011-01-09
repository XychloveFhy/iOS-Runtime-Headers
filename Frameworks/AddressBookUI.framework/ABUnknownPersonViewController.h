/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABUnknownPersonViewControllerDelegate>;



@interface ABUnknownPersonViewController : UIViewController 
{
    id _helper;
    <ABUnknownPersonViewControllerDelegate> *_unknownPersonViewDelegate;
    id _reserved;
}

@property void *addressBook;
@property void *displayedPerson;
@property(copy) NSString *alternateName;
@property(copy) NSString *message;
@property BOOL allowsActions;
@property BOOL allowsAddingToAddressBook;
@property(retain) <ABStyleProvider> *styleProvider;
@property BOOL allowsSendingTextMessage;
@property BOOL allowsConferencing;
@property(retain) UIView *personHeaderView;
@property(copy) NSString *attribution;
@property BOOL allowsSharing;
@property BOOL savesNewContactOnSuspend;
@property <ABUnknownPersonViewControllerDelegate> *unknownPersonViewDelegate;

+ (id)defaultLabelsForProperty:(NSInteger)arg1 person:(void*)arg2 addressBook:(void*)arg3;

- (id)alternateName;
- (id)helper;
- (void)updateNavigationButtons;
- (void)setAddressBook:(void*)arg1;
- (id)messageFont;
- (void)setMessage:(id)arg1;
- (id)message;
- (void)dismissAnimated:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)_allowsAutorotation;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; NSInteger x5; float x6; }*)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (id)init;
- (void)applicationDidResume;
- (void)dealloc;
- (void*)addressBook;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(NSInteger)arg4 withActionGrouping:(NSInteger)arg5 ordering:(NSInteger)arg6;
- (void)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(NSInteger)arg5 withActionGrouping:(NSInteger)arg6 ordering:(NSInteger)arg7;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(NSInteger)arg3 withActionGrouping:(NSInteger)arg4 ordering:(NSInteger)arg5;
- (id)initWithVCardData:(id)arg1;
- (id)_vCards;
- (id)_vCardProperties;
- (id)_alertSheet;
- (id)_unmergedAlertSheet;
- (id)_unmergedRecords;
- (id)_vCardTable;
- (id)_forwarder;
- (void)tellHelperToShow:(BOOL)arg1 actionWithSelector:(SEL)arg2 target:(id)arg3 localizableTitle:(id)arg4 property:(NSInteger)arg5 withActionGrouping:(NSInteger)arg6 ordering:(NSInteger)arg7;
- (void)tellHelperToShow:(BOOL)arg1 actionWithSelector:(SEL)arg2 localizableTitle:(id)arg3 property:(NSInteger)arg4 withActionGrouping:(NSInteger)arg5 ordering:(NSInteger)arg6;
- (void)setAlternateName:(id)arg1;
- (void)setAllowsAddingToAddressBook:(BOOL)arg1;
- (BOOL)allowsAddingToAddressBook;
- (void)setAllowsSendingTextMessage:(BOOL)arg1;
- (BOOL)allowsSendingTextMessage;
- (void)setStringValue:(id)arg1 forProperty:(NSInteger)arg2;
- (void)setPrimaryProperty:(NSInteger)arg1 countryCode:(id)arg2;
- (void)setPrimaryProperty:(NSInteger)arg1;
- (BOOL)personViewControllerHelper:(id)arg1 shouldContinueAfterSelectingPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3;
- (void)_createNewContacts;
- (void)_addUnmergedRecords;
- (void)_showUnmergedContactsAlert;
- (id)_findMatchingCardsForRecord:(void*)arg1;
- (void)_addToExistingContacts;
- (id)_viewControllerForCardAtIndex:(NSInteger)arg1;
- (void)_unselectTable;
- (void)_showCardViewerForIndex:(NSInteger)arg1;
- (id)unknownPersonViewDelegate;
- (void)setUnknownPersonViewDelegate:(id)arg1;
- (BOOL)allowsSharing;
- (void)setAllowsSharing:(BOOL)arg1;
- (void)setAllowsConferencing:(BOOL)arg1;
- (BOOL)allowsConferencing;
- (void)setMessageFont:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (id)messageDetail;
- (id)messageDetailFont;
- (void)setMessageDetailFont:(id)arg1;
- (id)customMessageView;
- (void)setCustomMessageView:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (id)personHeaderView;
- (void)setCustomHeaderView:(id)arg1;
- (id)customHeaderView;
- (id)attribution;
- (void)setAttribution:(id)arg1;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (BOOL)shareMessageBodyIsHTML;
- (void)setShareMessageBodyIsHTML:(BOOL)arg1;
- (id)shareMessageBody;
- (void)setShareMessageBody:(id)arg1;
- (id)shareMessageSubject;
- (void)setShareMessageSubject:(id)arg1;
- (void)setHighlightedItemForProperty:(NSInteger)arg1 withIdentifier:(NSInteger)arg2;
- (void)setHighlightedItemForProperty:(NSInteger)arg1 withIdentifier:(NSInteger)arg2 important:(BOOL)arg3;
- (void)setHighlightedItemForProperty:(NSInteger)arg1 withIdentifier:(NSInteger)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (BOOL)savesNewContactOnSuspend;
- (float)ab_heightToFitForViewInPopoverView;
- (void)setSavesNewContactOnSuspend:(BOOL)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (BOOL)allowsActions;
- (void*)displayedPerson;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (id)_mf_initWithEmailAddress:(id)arg1;

@end
