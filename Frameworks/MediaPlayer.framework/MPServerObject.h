/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */



@interface MPServerObject : NSObject 
{
    NSInteger _clientPID;
    struct { NSUInteger x1[8]; } *_clientAuditToken;
}

@property(readonly) ? *clientAuditToken;
@property(readonly) NSInteger clientPID;

+ (id)_center;

- (id)init;
- (NSInteger)clientPID;
- (void)_registerNotificationsForSelectors;
- (id)_forwardMessage:(id)arg1 userInfo:(id)arg2 auditToken:(struct { NSUInteger x1[8]; }*)arg3;
- (struct { NSUInteger x1[8]; }*)clientAuditToken;
- (void)prepareForDecodingWithCoder:(id)arg1;

@end
