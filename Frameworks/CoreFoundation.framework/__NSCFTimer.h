/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */



@interface __NSCFTimer : NSTimer 
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)fire;
- (unsigned long)_cfTypeID;
- (id)fireDate;
- (void)finalize;
- (double)timeInterval;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6;
- (id)userInfo;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (NSUInteger)retainCount;
- (BOOL)isValid;
- (void)setFireDate:(id)arg1;
- (void)invalidate;
- (id)init;
- (oneway void)release;
- (id)retain;

@end
