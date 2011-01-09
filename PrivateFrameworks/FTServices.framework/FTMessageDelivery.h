/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSMutableData, PCPersistentTimer, NSDate, FTMessageQueue, NSURLConnection, NSString, NSData, NSArray;



@interface FTMessageDelivery : NSObject <FTMessageQueueDelegate>
{
    NSNumber *_playerID;
    NSNumber *_protocolVersion;
    NSString *_userID;
    NSData *_signature;
    NSString *_deviceID;
    NSString *_deviceIDPrefix;
    NSString *_userAgent;
    NSData *_pushToken;
    struct __SecIdentity { } *_clientIdentity;
    NSArray *_clientCertificates;
    id _delegate;
    NSURLConnection *_currentURLConnection;
    NSMutableData *_currentResponseData;
    FTMessageQueue *_queue;
    PCPersistentTimer *_retryTimer;
    NSDate *_retryDate;
    unsigned int _shouldQueue : 1;
    NSUInteger _retries;
}

@property double messageTimeoutTime;
@property __SecIdentity *clientIdentity;
@property(readonly) BOOL hasQueuedItems;
@property(readonly) BOOL busy;
@property BOOL shouldQueueItems;
@property(readonly) FTMessage *currentMessage;
@property(readonly) NSArray *queuedMessages;
@property(copy) NSData *signature;
@property(copy) NSData *pushToken;
@property <FTMessageDeliveryDelegate> *delegate;
@property(copy) NSString *deviceIDPrefix;
@property(copy) NSString *deviceID;
@property(copy) NSString *userID;
@property(copy) NSString *userAgent;
@property(copy) NSNumber *protocolVersion;
@property(copy) NSArray *clientCertificates;

+ (id)_errorForTDMessageDeliveryStatus:(NSInteger)arg1 userInfo:(id)arg2;

- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)setDeviceID:(id)arg1;
- (double)messageTimeoutTime;
- (void)setMessageTimeoutTime:(double)arg1;
- (id)_urlRequestWithURL:(id)arg1 andData:(id)arg2 message:(id)arg3;
- (id)_processResultData:(id)arg1 forMessage:(id)arg2 error:(id*)arg3;
- (void)_updateWiFiAssertions;
- (void)_informDelegateAboutMessage:(id)arg1 error:(id)arg2 result:(id)arg3;
- (void)_clearRetryTimer;
- (void)_setRetryTimer:(double)arg1;
- (void)_notifyDelegateAboutError:(id)arg1 forMessage:(id)arg2;
- (id)_sendMessageSynchonously:(id)arg1 error:(id*)arg2;
- (struct __SecIdentity { }*)clientIdentity;
- (void)setClientIdentity:(struct __SecIdentity { }*)arg1;
- (BOOL)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2;
- (void)setShouldQueueItems:(BOOL)arg1;
- (BOOL)shouldQueueItems;
- (void)_dequeueIfNeeded;
- (void)_cleanupURLConnection;
- (id)queuedMessages;
- (id)currentMessage;
- (BOOL)busy;
- (BOOL)hasQueuedItems;
- (void)_retryTimerHit:(id)arg1;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (void)cancelMessage:(id)arg1;
- (NSInteger)sendMessage:(id)arg1 error:(id*)arg2;
- (void)_serverBagLoaded:(id)arg1;
- (id)pushToken;
- (void)setPushToken:(id)arg1;
- (id)deviceIDPrefix;
- (void)setDeviceIDPrefix:(id)arg1;
- (id)userID;
- (void)setUserID:(id)arg1;
- (id)clientCertificates;
- (void)setClientCertificates:(id)arg1;
- (id)userAgent;
- (id)deviceID;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)invalidate;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)protocolVersion;
- (void)setProtocolVersion:(id)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (void)setUserAgent:(id)arg1;

@end
