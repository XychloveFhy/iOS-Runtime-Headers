/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class <SCROServerDelegate>;



@interface SCROServer : NSObject 
{
    <SCROServerDelegate> *_delegate;
    struct __CFRunLoopSource { } *_serverSource;
    struct __CFRunLoopSource { } *_deathSource;
    struct __CFRunLoopTimer { } *_deathTimer;
    NSUInteger _serverPort;
    NSUInteger _deathPort;
    NSInteger _clientCount;
    BOOL _isRegisteredWithMach;
}

+ (id)sharedServer;
+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (struct __CFRunLoopSource { }*)serverSource;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)retainCount;
- (id)init;
- (void)release;
- (id)retain;
- (id)autorelease;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_setClientCount:(long)arg1;
- (BOOL)isRegisteredWithMach;
- (BOOL)registerWithMach;
- (void)unregisterWithMach;
- (long)_clientCount;
- (NSUInteger)_deathPort;
- (struct __CFRunLoopTimer { }*)_deathTimer;

@end
