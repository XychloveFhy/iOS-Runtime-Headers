/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */



@interface CTMessageStatus : NSObject 
{
    NSUInteger _messageId;
    NSInteger _messageType;
    NSInteger _result;
}

@property(readonly) NSInteger result;
@property(readonly) NSInteger messageType;
@property(readonly) NSUInteger messageId;


- (id)initWithMessageId:(NSUInteger)arg1 messageType:(NSInteger)arg2 result:(NSInteger)arg3;
- (NSInteger)messageType;
- (NSUInteger)messageId;
- (NSInteger)result;

@end
