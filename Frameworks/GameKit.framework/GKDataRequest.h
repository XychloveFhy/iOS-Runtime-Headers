/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface GKDataRequest : NSObject 
{
    struct dispatch_source_s { } *_serverSource;
    struct dispatch_source_s { } *_replySource;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

}

@property(readonly) NSArray *invalidateCacheKeys;
@property(readonly) NSInteger cachePriority;
@property(readonly) NSInteger cacheType;
@property(readonly) BOOL authenticationRequired;
@property(copy) ? *completionBlock;
@property(readonly) NSDictionary *request;
@property(readonly) NSDictionary *header;
@property(readonly) NSString *cacheKey;
@property(readonly) NSString *key;

+ (BOOL)useTestProtocol;
+ (NSUInteger)bootstrapPort;
+ (NSUInteger)serverPort;
+ (id)protocolVersion;

- (id)header;
- (id)completionBlock;
- (void)_cleanupSources;
- (id)invalidateCacheKeys;
- (id)errorForResponse:(id)arg1;
- (NSInteger)cachePriority;
- (NSInteger)cacheType;
- (BOOL)authenticationRequired;
- (id)demarshalResponseData:(id)arg1;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (void)wasCancelledByServer;
- (id)cacheKey;
- (void)send;
- (id)key;
- (id)request;
- (void)cancel;
- (void)dealloc;
- (void)setCompletionBlock:(id)arg1;

@end
