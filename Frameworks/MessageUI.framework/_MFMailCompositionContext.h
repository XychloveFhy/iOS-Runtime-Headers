/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFMessageViewingContext, MailMessage;



@interface _MFMailCompositionContext : MFMailCompositionContext 
{
    NSInteger _composeType;
    MailMessage *_originalMessage;
    id _originalContent;
    MFMessageViewingContext *_loadingContext;
    struct { 
        unsigned int loadRest : 1; 
        unsigned int includeAttachments : 1; 
    } _mailComposeFlags;
}

@property BOOL loadRest;
@property BOOL includeAttachments;
@property(retain) MFMessageViewingContext *loadingContext;
@property(retain) id originalContent;
@property(retain,readonly) MailMessage *originalMessage;
@property(readonly) NSInteger composeType;


- (id)initWithComposeType:(NSInteger)arg1 originalMessage:(id)arg2;
- (id)initReplyToMessage:(id)arg1;
- (id)initReplyAllToMessage:(id)arg1;
- (id)initForwardOfMessage:(id)arg1;
- (id)initDraftRestoreOfMessage:(id)arg1;
- (id)initOutboxRestoreOfMessage:(id)arg1;
- (void)setLoadingContext:(id)arg1;
- (void)setOriginalContent:(id)arg1;
- (void)setLoadRest:(BOOL)arg1;
- (void)setIncludeAttachments:(BOOL)arg1;
- (id)loadingContext;
- (id)originalMessage;
- (BOOL)loadRest;
- (id)originalContent;
- (BOOL)includeAttachments;
- (NSInteger)composeType;
- (id)initWithComposeType:(NSInteger)arg1;
- (void)dealloc;

@end
