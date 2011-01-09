/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSLock;



@interface SCROHandler : NSObject <SCROHandlerProtocol>
{
    id _callbackDelegate;
    NSLock *_lock;
    BOOL isInvalid;
}


- (NSInteger)handlePerformActionForKey:(NSInteger)arg1 trusted:(BOOL)arg2;
- (NSInteger)handleRegisterCallbackForKey:(NSInteger)arg1 trusted:(BOOL)arg2;
- (NSInteger)handleSetValue:(id)arg1 forKey:(NSInteger)arg2 trusted:(BOOL)arg3;
- (NSInteger)handleGetValue:(id*)arg1 forKey:(NSInteger)arg2 trusted:(BOOL)arg3;
- (void)lock;
- (void)unlock;
- (void)invalidate;
- (id)init;
- (void)dealloc;
- (void)setCallbackDelegate:(id)arg1;
- (id)callbackDelegate;
- (NSInteger)handleGetValue:(id*)arg1 forKey:(NSInteger)arg2 withObject:(id)arg3 trusted:(BOOL)arg4;

@end
