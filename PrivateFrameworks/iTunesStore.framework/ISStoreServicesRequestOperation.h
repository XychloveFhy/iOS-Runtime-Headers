/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class SSRequest;



@interface ISStoreServicesRequestOperation : ISOperation 
{
    SSRequest *_request;
}

@property(readonly) SSRequest *request;


- (id)initWithRequest:(id)arg1;
- (void)_requestStateChangedNotification:(id)arg1;
- (void)_delayedStartRequest;
- (void)_delayedStopRequest;
- (void)_timer:(id)arg1;
- (void)stopRunLoop;
- (id)request;
- (void)run;
- (void)cancel;
- (void)dealloc;
- (void)_beginObservingNotifications;
- (void)_endObservingNotifications;

@end
