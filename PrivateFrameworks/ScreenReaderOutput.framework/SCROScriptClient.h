/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@class SCROConnection, SCRCTargetSelectorTimer, NSLock;



@interface SCROScriptClient : NSObject 
{
    NSLock *_lock;
    SCROConnection *_connection;
    SCRCTargetSelectorTimer *_timer;
    BOOL _isReady;
}

+ (id)sharedScriptClient;
+ (void)initialize;

- (void)_killConnection;
- (BOOL)runScriptFile:(id)arg1;
- (id)_lazyConnection;
- (void)handleCallback:(id)arg1;
- (BOOL)_isReady;
- (id)init;
- (void)dealloc;

@end
