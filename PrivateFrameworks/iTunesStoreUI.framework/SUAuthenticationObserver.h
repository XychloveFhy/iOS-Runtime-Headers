/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUAuthenticationDelegate>, NSTimer;



@interface SUAuthenticationObserver : NSObject 
{
    <SUAuthenticationDelegate> *_delegate;
    double _timeout;
    NSTimer *_timeoutTimer;
    NSInteger _watchingAuthenticationCount;
}

@property(getter=isWatchingForAuthentication,readonly) BOOL watchingForAuthentication;
@property double timeout;
@property <SUAuthenticationDelegate> *delegate;


- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_authenticationTimeout:(id)arg1;
- (void)_cancelTimeoutTimer;
- (void)_sendFailureToDelegate;
- (void)_sendSuccessToDelegate;
- (void)_sendTimeoutToDelegate;
- (void)_teardown;
- (double)timeout;
- (void)endWatchingForAuthentication;
- (void)setTimeout:(double)arg1;
- (BOOL)isWatchingForAuthentication;
- (void)beginWatchingForAuthentication;

@end
