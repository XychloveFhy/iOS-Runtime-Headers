/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSArray, NSThread, GMMRequester;



@interface GMMRequester : PBRequester 
{
    GMMRequester *_pbRequester;
    NSArray *_bundleIdentifiers;
    BOOL _anonymous;
    NSThread *_thread;
    BOOL _automaticallyCancelled;
    BOOL _disableReplay;
}

@property(readonly) BOOL wasAutomaticallyCancelled;
@property BOOL disableReplay;
@property(retain) NSArray *bundleIdentifiers;
@property(getter=isAnonymous) BOOL anonymous;

+ (void)_resetRequestCounts;
+ (void)_setupNetworkConfiguration;
+ (BOOL)allowRequestForType:(NSInteger)arg1;
+ (id)_requestHTTPHeaders;

- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)start;
- (void)dealloc;
- (void)setLoading:(BOOL)arg1;
- (id)initWithRequesterDelegate:(id)arg1;
- (void)_prepareClientProperties;
- (void)handleResponse:(id)arg1 forInternalRequest:(id)arg2;
- (id)requestPreamble;
- (void)writeRequest:(id)arg1 into:(id)arg2;
- (BOOL)readResponsePreamble:(id)arg1;
- (id)tryReadResponseData:(id)arg1 forRequest:(id)arg2 forResponseClass:(Class)arg3;
- (void)_handleResumeOnThread;
- (BOOL)wasAutomaticallyCancelled;
- (BOOL)disableReplay;
- (void)setDisableReplay:(BOOL)arg1;
- (id)bundleIdentifiers;
- (void)setBundleIdentifiers:(id)arg1;
- (BOOL)isAnonymous;
- (void)setAnonymous:(BOOL)arg1;
- (void)_handleSuspendOnThread;

@end
