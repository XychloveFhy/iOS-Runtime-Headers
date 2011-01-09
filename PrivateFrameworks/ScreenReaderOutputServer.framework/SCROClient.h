/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSLock;



@interface SCROClient : NSObject 
{
    NSLock *_lock;
    NSUInteger _identifier;
    NSUInteger _port;
    struct __CFArray { } *_queue;
    struct __CFSet { } *_callbackSet;
}

+ (void)initialize;
+ (id)addClientGetIdentifier:(NSUInteger*)arg1 getPort:(NSUInteger*)arg2;
+ (long)removeClientWithPort:(NSUInteger)arg1;
+ (void)sendCallback:(id)arg1;
+ (id)callbacksForClientIdentifier:(NSUInteger)arg1;
+ (void)registerCallbackWithKey:(NSInteger)arg1 forClientIdentifier:(NSUInteger)arg2;

- (void)_invalidate;
- (id)init;
- (void)dealloc;
- (void)_unlock;
- (void)_registerCallbackWithKey:(NSInteger)arg1;
- (id)_dequeueCallbacks;
- (BOOL)_wantsCallback:(id)arg1;
- (void)_sendCallback:(id)arg1;
- (void)_lock;

@end
