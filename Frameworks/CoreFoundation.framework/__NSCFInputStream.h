/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */



@interface __NSCFInputStream : NSInputStream 
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)open;
- (id)initWithFileAtPath:(id)arg1;
- (BOOL)getBuffer:(char **)arg1 length:(NSUInteger*)arg2;
- (id)propertyForKey:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (NSUInteger)streamStatus;
- (id)streamError;
- (BOOL)_setCFClientFlags:(unsigned long)arg1 callback:(int (*)())arg2 context:(struct { NSInteger x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (BOOL)hasBytesAvailable;
- (NSInteger)read:(char *)arg1 maxLength:(NSUInteger)arg2;
- (id)initWithURL:(id)arg1;
- (void)close;
- (void)finalize;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (NSUInteger)retainCount;
- (oneway void)release;
- (id)retain;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
