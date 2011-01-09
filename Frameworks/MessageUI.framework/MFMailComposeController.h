/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFMailComposeControllerDelegate>, UINavigationItem, OutgoingMessageDelivery, MFComposeSubjectView, MFMailComposeView, OutgoingMessage, MutableMessageHeaders, _MFComposeRecipientView, NSTimer, MailboxUid, MFError, _MFMailCompositionContext, NSArray, UITextContentView, MFComposeBodyField, NSString, MFGenericAttachmentStore;



@interface MFMailComposeController : NSObject <UIActionSheetDelegate, MFMailComposeViewDelegate, MFComposeHeaderViewDelegate, MFComposeSubjectViewDelegate>
{
    <MFMailComposeControllerDelegate> *_delegate;
    MFMailComposeView *_view;
    _MFComposeRecipientView *_toField;
    _MFComposeRecipientView *_ccField;
    MFComposeSubjectView *_subjectField;
    MFComposeBodyField *_bodyField;
    UITextContentView *_bodyTextView;
    UINavigationItem *_navigationItem;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    _MFMailCompositionContext *_compositionContext;
    NSUInteger _options;
    unsigned int _showKeyboardImmediately : 1;
    unsigned int _isDirty : 1;
    unsigned int _shouldAutosaveWithSuspendInfo : 1;
    unsigned int _suspendedPickingTo : 1;
    unsigned int _suspendedPickingCC : 1;
    unsigned int _suspendedToWasSelected : 1;
    unsigned int _suspendedCCWasSelected : 1;
    unsigned int _suspendedBCCWasSelected : 1;
    unsigned int _suspendedSubjectWasSelected : 1;
    unsigned int _suspendedBodyWasSelected : 1;
    unsigned int _keyboardWasVisible : 1;
    unsigned int _fromAddressPickerWasVisible : 1;
    unsigned int _allowDisabledFromAddress : 1;
    unsigned int _disabledAutosave : 1;
    unsigned int _stillLoading : 1;
    unsigned int _hosted : 1;
    NSUInteger _initialAttachmentCount;
    NSString *_lastDraftMessageID;
    MailboxUid *_lastDraftMailboxUid;
    MFGenericAttachmentStore *_attachmentStore;
    OutgoingMessageDelivery *_delivery;
    OutgoingMessage *_message;
    NSString *_originalSendingEmailAddress;
    NSString *_sendingEmailAddress;
    NSInteger _sendingEmailAddressIndex;
    NSArray *_toAddresses;
    NSArray *_ccAddresses;
    NSArray *_bccAddresses;
    NSArray *_originalBccAddresses;
    NSString *_subject;
    id _content;
    MutableMessageHeaders *_savedHeaders;
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _selectedRange;
    NSInteger _resolution;
    NSTimer *_autosaveTimer;
    MFError *_error;
    NSString *_initialTitle;
}

+ (void)_refreshMailAccountsIfNecessary;
+ (BOOL)isSetupForDelivery;
+ (id)_defaultAccount;
+ (id)preferenceForKey:(id)arg1;
+ (id)accountEmailAddresses;
+ (void)tearDownViewOnMainThread:(id)arg1;
+ (id)defaultSignature;
+ (id)_autosavePath;
+ (BOOL)hasAutosavedMessage;
+ (void)removeAutosavedMessage;
+ (void)initialize;
+ (id)signature;

- (void)resume;
- (id)error;
- (void)setContent:(id)arg1;
- (void)_close;
- (void)initializeUI;
- (id)initForContentSize:(struct CGSize { float x1; float x2; })arg1 navigationItem:(id)arg2;
- (id)initForContentSize:(struct CGSize { float x1; float x2; })arg1 navigationItem:(id)arg2 options:(NSUInteger)arg3;
- (void)_pickInitialFirstResponder;
- (NSInteger)composeType;
- (void)setCompositionContext:(id)arg1;
- (void)_setupForNewMessage;
- (void)_setupForDraft:(id)arg1;
- (void)_setupForOutbox:(id)arg1;
- (void)_setupForReplyToMessage:(id)arg1;
- (void)_setupForReplyAllToMessage:(id)arg1;
- (void)_setupForForwardOfMessage:(id)arg1;
- (void)_setupForAutosavedMessage:(id)arg1;
- (void)_setupForExistingNewMessage:(id)arg1 headers:(id)arg2;
- (void)_quoteReplyMessage:(id)arg1 content:(id)arg2;
- (void)_quoteForwardedMessage:(id)arg1 content:(id)arg2;
- (void)_quoteBody:(id)arg1;
- (void)_loadAttachments:(id)arg1;
- (void)_loadingContextDidLoad:(id)arg1;
- (BOOL)_shouldPrependBlankLineForAttachments;
- (void)setQuotedContent:(id)arg1 includeAttachments:(BOOL)arg2;
- (id)sendingEmailAddress;
- (void)setSendingEmailAddress:(id)arg1;
- (BOOL)sendingEmailDirtied;
- (void)_focusGained:(id)arg1;
- (void)_setComposeBodyFieldSelectedRangeDeferred:(id)arg1;
- (void)resumeWithSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_searchBegan:(id)arg1;
- (void)_searchEnded:(id)arg1;
- (void)_composeViewDidDraw:(id)arg1;
- (void)_bodyTextChanged:(id)arg1;
- (void)close:(id)arg1;
- (void)clearAllFields;
- (void)emptyContent;
- (id)navigationBarTitle;
- (void)setInitialTitle:(id)arg1;
- (void)clearInitialTitle;
- (void)prependQuotedMarkup:(id)arg1;
- (void)prependPreamble:(id)arg1;
- (void)addSignature:(BOOL)arg1;
- (void)addSignature;
- (void)_setRecipients:(id)arg1 forField:(NSInteger)arg2;
- (void)setCcRecipients:(id)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(BOOL)arg2;
- (void)_updateOriginalBccStatusForRestoreAddingAddress:(BOOL)arg1;
- (void)_tryAddSenderToBccRecipients;
- (void)_updateOriginalBccStatusForRestore;
- (void)setDraftMessageID:(id)arg1 mailbox:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfAttachment:(id)arg1;
- (void)_unthrottleScalingAfterDelay;
- (BOOL)_addAttachment:(id)arg1;
- (id)_markupForInlineAttachment:(id)arg1 willBeIncluded:(BOOL)arg2 prependBlankLine:(BOOL)arg3;
- (void)_insertInlineAttachmentWithWrapper:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)addInlineAttachmentAtPath:(id)arg1;
- (void)addInlineAttachmentAtPath:(id)arg1 includeDirectoryContents:(BOOL)arg2;
- (void)addInlineAttachmentWithData:(id)arg1 preferredFilename:(id)arg2 mimeType:(id)arg3;
- (void)_insertInlineAttachment:(id)arg1;
- (void)addInlineAttachment:(id)arg1;
- (void)attachmentsRemoved:(id)arg1;
- (void)_inlinedAttachmentFinishedLoading:(id)arg1;
- (void)attachmentFinishedLoading:(id)arg1;
- (void)accountsChanged:(id)arg1;
- (void)_reallyAutosaveImmediately:(id)arg1;
- (void)scheduleAutosaveAfterDelay:(id)arg1;
- (void)cancelAutosave;
- (id)_autosavedMessage;
- (id)headersUseSuspendInfo:(BOOL)arg1;
- (BOOL)_fromAccountAllowsEmoji;
- (void)_setCodePointTranslationEnabled:(BOOL)arg1;
- (id)messageUseSuspendInfo:(BOOL)arg1 endingEditing:(BOOL)arg2;
- (id)messageUseSuspendInfo:(BOOL)arg1;
- (void)_getMessage:(id)arg1;
- (id)messageEndingEditing:(BOOL)arg1;
- (id)_lastDraftWithLibrary:(id)arg1;
- (void)_removeLastDraftWithStore:(id)arg1;
- (void)markMessageAsReplied:(id)arg1;
- (void)markMessageAsForwarded:(id)arg1;
- (void)_setUpDeliveryObject;
- (unsigned long)_estimateMessageSize;
- (id)addressesForField:(NSInteger)arg1;
- (void)addAddress:(id)arg1 field:(NSInteger)arg2;
- (void)setAddresses:(id)arg1 field:(NSInteger)arg2;
- (void)removeAddressAtIndex:(NSInteger)arg1 field:(NSInteger)arg2;
- (NSInteger)resolution;
- (BOOL)needsDelivery;
- (void)_setupForSaveAsDraft;
- (id)draftMessage;
- (BOOL)isSavingAsDraft;
- (BOOL)deliverMessage;
- (BOOL)deliverMessageRemotely;
- (id)errorTitle;
- (void)setRecipientsKeyboardType:(NSInteger)arg1;
- (void)didSelectCellAtRow:(NSUInteger)arg1;
- (void)_updateTableCell:(id)arg1 isChecked:(BOOL)arg2;
- (void)composeSubjectViewTextFieldDidResignFirstResponder:(id)arg1;
- (void)composeHeaderViewDidChangeValue:(id)arg1;
- (void)composeHeaderViewDidConfirmValue:(id)arg1;
- (id)addInlineAttachmentForInclusion:(id)arg1;
- (BOOL)canShowFromField;
- (id)sendingEmailAddressIfExists;
- (BOOL)bccAddressesDirtied;
- (void)composeBodyFieldDidFinishLoad;
- (void)selectCurrentEntryForFromAddressPickerView:(id)arg1;
- (void)scrollToSelectedEntryInFromAddressTableView:(id)arg1;
- (id)attachments;
- (void)setPercentDone:(double)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForAttachmentWithIdentifier:(id)arg1;
- (void)setContentVisible:(BOOL)arg1;
- (id)errorDescription;
- (BOOL)isDirty;
- (void)send:(id)arg1;
- (BOOL)hosted;
- (void)setHosted:(BOOL)arg1;
- (id)message;
- (id)bottomView;
- (id)topView;
- (void)alertSheet:(id)arg1 buttonClicked:(NSInteger)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (id)view;
- (id)init;
- (void)suspend;
- (NSInteger)numberOfComponentsInPickerView:(id)arg1;
- (NSUInteger)pickerView:(id)arg1 numberOfRowsInComponent:(NSUInteger)arg2;
- (id)pickerView:(id)arg1 viewForRow:(NSInteger)arg2 forComponent:(NSInteger)arg3 reusingView:(id)arg4;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)autosaveImmediately;
- (void)recoverAutosavedMessage;
- (void)setSubject:(id)arg1;
- (void)tearDownUI;
- (void)saveAsDraft;
- (void)_textChanged:(id)arg1;
- (void)sendMessage;
- (void)setToRecipients:(id)arg1;
- (BOOL)hasAttachments;

@end
