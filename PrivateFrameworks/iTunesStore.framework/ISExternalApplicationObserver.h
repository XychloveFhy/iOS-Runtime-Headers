/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */



@interface ISExternalApplicationObserver : NSObject 
{
    NSInteger _lock;
    NSUInteger _ignoreCount;
    NSUInteger _syncCount;
    NSUInteger _watchCount;
}

+ (id)sharedInstance;

- (void)beginIgnoringChanges:(NSUInteger)arg1;
- (void)cancelIgnoringChanges:(NSUInteger)arg1;
- (BOOL)isWatching;
- (void)startWatching;
- (void)stopWatching;
- (void)_handleExternalApplicationChange;
- (void)_reallyHandleExternalApplicationChange;
- (id)init;
- (void)dealloc;
- (void)iTunesSyncRequestedStart;
- (void)iTunesSyncHasCompleted:(NSInteger)arg1;

@end
