/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSOperationQueue, NSOperation;



@interface __NSOperationInternal : NSObject 
{
    NSOperation *__outerOp;
    NSOperation *__nextOp;
    NSOperationQueue *__queue;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } __wait_mutex;
    struct _opaque_pthread_cond_t { 
        long __sig; 
        BOOL __opaque[24]; 
    } __wait_cond;
    NSInteger __deps_count;
    NSInteger __unfinished_deps;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __completion;

    double __thread_prio;
    void *__implicitObsInfo;
    void *__obsInfo;
    NSInteger __outerRC;
    NSInteger __RC;
    NSInteger __state;
    BOOL __prio;
    unsigned char __cached_isReady;
    unsigned char __isCancelled;
}

@property(copy) ? *completionBlock;

+ (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(NSUInteger)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void*)arg7;

- (BOOL)isReady;
- (BOOL)isFinished;
- (NSInteger)queuePriority;
- (void)setQueuePriority:(NSInteger)arg1;
- (id)completionBlock;
- (void)waitUntilFinishedOrTimeout:(double)arg1;
- (void)addDependency:(id)arg1;
- (void)removeDependency:(id)arg1;
- (id)dependencies;
- (void)waitUntilFinished;
- (void)finalize;
- (void)start;
- (void)cancel;
- (NSUInteger)retainCount;
- (id)init;
- (void)release;
- (id)retain;
- (void)dealloc;
- (void)setCompletionBlock:(id)arg1;
- (BOOL)isExecuting;
- (BOOL)isCancelled;
- (double)threadPriority;
- (void)setThreadPriority:(double)arg1;

@end
