/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSTimer;



@interface NetworkController : NSObject 
{
    struct __SCDynamicStore { } *_store;
    unsigned int _waitingForDialToFinish : 1;
    unsigned int _checkedNetwork : 1;
    unsigned int _isNetworkUp : 1;
    unsigned int _isFatPipe : 1;
    NSTimer *_notificationTimer;
}

+ (id)sharedInstance;

- (BOOL)isNetworkUp;
- (void*)createPacketContextAssertionWithIdentifier:(id)arg1;
- (void)_postNotification:(id)arg1;
- (void)_postNetworkChangeNotification:(id)arg1;
- (void)_triggerDialForHostname:(id)arg1;
- (void)_registerForNotificationKeys:(id)arg1 patterns:(id)arg2;
- (BOOL)inAirplaneMode;
- (BOOL)isFatPipe;
- (id)init;
- (void)dealloc;

@end
