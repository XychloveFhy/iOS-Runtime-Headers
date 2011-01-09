/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSMutableDictionary, AVCallbackRegistry;



@interface AVCMNotificationDispatcher : NSObject 
{
    struct opaqueCMNotificationCenter { } *_cmNotificationCenter;
    AVCallbackRegistry *_callbackRegistry;
    NSMutableDictionary *_listenerObjectsPassedToFig;
    struct dispatch_queue_s { } *_listenerObjectsQueue;
}

@property(readonly) opaqueCMNotificationCenter *CMNotificationCenter;

+ (void)initialize;
+ (id)notificationDispatcherForCMNotificationCenter:(struct opaqueCMNotificationCenter { }*)arg1;

- (void)finalize;
- (void)dealloc;
- (id)initWithCMNotificationCenter:(struct opaqueCMNotificationCenter { }*)arg1;
- (struct opaqueCMNotificationCenter { }*)CMNotificationCenter;
- (id)_callbackRegistry;
- (void)removeListenerWithWeakReference:(id)arg1 callback:(int (*)())arg2 name:(struct __CFString { }*)arg3 object:(const void*)arg4;
- (void)addListenerWithWeakReference:(id)arg1 callback:(int (*)())arg2 name:(struct __CFString { }*)arg3 object:(const void*)arg4 flags:(unsigned long)arg5;

@end
