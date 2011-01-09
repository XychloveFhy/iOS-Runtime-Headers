/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString;



@interface AVCMNotificationDispatcherListenerKey : NSObject <NSCopying>
{
    id _listener;
    int (*_callback)();
    NSString *_name;
    void *_object;
}

+ (id)listenerKeyWithListener:(id)arg1 callback:(int (*)())arg2 name:(id)arg3 object:(const void*)arg4;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;
- (id)initWithListener:(id)arg1 callback:(int (*)())arg2 name:(id)arg3 object:(const void*)arg4;

@end
