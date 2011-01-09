/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray;



@interface CKLoopbackService : CKService 
{
    NSMutableArray *_conversations;
}

+ (id)sharedLoopbackService;

- (NSInteger)unreadCount;
- (void)dealloc;
- (void)addMessageToStore:(id)arg1 incrementUnreadCount:(BOOL)arg2;
- (void)_reallySendMessage:(id)arg1;
- (void)_receiveMessageForMessage:(id)arg1;
- (BOOL)supportsMediaAttachments;
- (NSInteger)unreadCountForConversation:(id)arg1;
- (id)messagesForConversation:(id)arg1 limit:(NSInteger)arg2 moreToLoad:(BOOL*)arg3;
- (NSInteger)unreadConversationCount;
- (BOOL)dbFull;
- (NSInteger)createConversationWithRecipients:(id)arg1;
- (id)lookupRecipientsForConversation:(id)arg1;
- (id)conversationSummaries:(id*)arg1 groupIDs:(id*)arg2;
- (id)placeholderMessageForConversation:(id)arg1 withDate:(id)arg2;
- (id)newMessageWithComposition:(id)arg1 forConversation:(id)arg2;
- (void)fixupNames;
- (void)sendMessage:(id)arg1;

@end
