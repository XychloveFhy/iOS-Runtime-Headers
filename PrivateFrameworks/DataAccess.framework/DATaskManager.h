/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableArray, NSMutableSet, DAAccount, <DATask>;



@interface DATaskManager : NSObject 
{
    DAAccount *_account;
    NSMutableArray *_queuedExclusiveTasks;
    <DATask> *_activeExclusiveTask;
    NSMutableSet *_independentTasks;
    NSMutableSet *_heldIndependentTasks;
    NSMutableSet *_modalHeldIndependentTasks;
    NSMutableArray *_queuedTasks;
    <DATask> *_activeQueuedTask;
    <DATask> *_modalHeldActiveQueuedTask;
    NSMutableArray *_queuedModalTasks;
    <DATask> *_activeModalTask;
    NSInteger _state;
}

@property(readonly) NSArray *allTasks;
@property(readonly) NSArray *queuedTasks;
@property(readonly) <DATask> *activeQueuedTask;
@property(readonly) <DATask> *activeModalTask;
@property DAAccount *account;


- (id)activeModalTask;
- (void)cancelTask:(id)arg1 withUnderlyingError:(id)arg2;
- (id)allTasks;
- (void)_populateVersionDescriptions;
- (id)_version;
- (void)taskManagerDidAddTask:(id)arg1;
- (void)taskManagerWillRemoveTask:(id)arg1;
- (void)taskRequestModal:(id)arg1;
- (void)taskEndModal:(id)arg1;
- (id)userAgent;
- (void)taskDidFinish:(id)arg1;
- (void)submitExclusiveTask:(id)arg1;
- (void)cancelAllTasks;
- (id)accountPersistentUUID;
- (void)submitExclusiveTask:(id)arg1 toFrontOfQueue:(BOOL)arg2;
- (void)submitQueuedTask:(id)arg1;
- (void)cancelTask:(id)arg1;
- (void)submitIndependentTask:(id)arg1;
- (id)identityPersist;
- (id)stateString;
- (BOOL)useSSL;
- (id)deviceID;
- (id)deviceType;
- (void)shutdown;
- (NSInteger)port;
- (id)user;
- (id)password;
- (id)server;
- (id)scheme;
- (id)init;
- (void)dealloc;
- (BOOL)_useFakeDescriptions;
- (void)_performTask:(id)arg1;
- (void)_requestCancelTasksWithReason:(NSInteger)arg1;
- (void)_startModal:(id)arg1;
- (void)_reactivateHeldTasks;
- (void)_makeStateTransition;
- (void)_scheduleSelector:(SEL)arg1 withArgument:(id)arg2;
- (void)_schedulePerformTask:(id)arg1;
- (void)_scheduleStartModal:(id)arg1;
- (void)_cancelTasksWithReason:(NSInteger)arg1;
- (void)_retainPowerAssertionForTask:(id)arg1;
- (void)_releasePowerAssertionForTask:(id)arg1;
- (id)_getQueuedExclusiveTasks;
- (id)_getIndependentTasks;
- (id)_getHeldIndependentTasks;
- (id)_getModalHeldIndependentTasks;
- (id)_getQueuedTasks;
- (id)_getQueuedModalTasks;
- (id)queuedTasks;
- (id)activeQueuedTask;
- (void)setAccount:(id)arg1;
- (id)account;
- (id)initWithAccount:(id)arg1;
- (id)accountID;

@end
