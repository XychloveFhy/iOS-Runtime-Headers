/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSTimer;



@interface IMThreadedWorkUnit : NSObject 
{
    id _delegate;
    BOOL _kill;
    BOOL _inProgress;
    float _timeout;
    NSTimer *_timeoutTimer;
    BOOL _done;
}


- (void)_clearTimeoutTimer;
- (void)_timeoutHit:(id)arg1;
- (void)_setTimeoutTimer;
- (void)_threadedDoStart;
- (void)_doSendDone;
- (void)_timedOut;
- (void)startThread;
- (void)stopWatchingThread;
- (BOOL)inProgress;
- (void)_workerThread;
- (void)_workerThreadFinished;
- (BOOL)done;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setTimeout:(double)arg1;

@end
