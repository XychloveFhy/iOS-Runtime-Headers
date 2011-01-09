/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */



@interface VMUTaskMemoryCache : NSObject 
{
    struct mapped_memory_t { } *_memoryRegions;
    NSUInteger _task;
    BOOL _taskIs64Bit;
    BOOL _stopped;
    BOOL _shouldTouchPages;
}

+ (id)taskMemoryCacheForTask:(NSUInteger)arg1;
+ (BOOL)taskIs64Bit:(NSUInteger)arg1;

- (void)finalize;
- (void)dealloc;
- (BOOL)copyRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 to:(void*)arg2;
- (NSInteger)peekAtAddress:(NSUInteger)arg1 size:(NSUInteger)arg2 returnsBuf:(void**)arg3;
- (void)flushMemoryCache;
- (NSInteger)startPeeking;
- (NSInteger)readPointerAt:(NSUInteger)arg1 value:(NSUInteger*)arg2;
- (NSInteger)stopPeeking;
- (id)initWithTask:(NSUInteger)arg1;

@end
