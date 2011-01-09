/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSUndoManager, NSMutableSet;



@interface NSManagedObjectContext : NSObject <NSCoding, NSLocking>
{
    NSInteger _spinLock;
    id _parentObjectStore;
    NSUndoManager *_undoManager;
    void *_dispatchQueue;
    struct _managedObjectContextFlags { 
        unsigned int _registeredForCallback : 1; 
        unsigned int _propagatesDeletesAtEndOfEvent : 1; 
        unsigned int _exhaustiveValidation : 1; 
        unsigned int _processingChanges : 1; 
        unsigned int _useCommittedSnapshot : 1; 
        unsigned int _registeredUndoTransactionID : 1; 
        unsigned int _retainsAllRegisteredObjects : 1; 
        unsigned int _savingInProgress : 1; 
        unsigned int _wasDisposed : 1; 
        unsigned int _unprocessedChangesPending : 1; 
        unsigned int _isDirty : 1; 
        unsigned int _ignoreUndoCheckpoints : 1; 
        unsigned int _propagatingDeletes : 1; 
        unsigned int _isNSEditorEditing : 1; 
        unsigned int _isMainThreadBlessed : 1; 
        unsigned int _isImportContext : 1; 
        unsigned int _isParentContext : 1; 
        unsigned int _preflightSaveInProgress : 1; 
        unsigned int _reservedFlags : 14; 
    } _flags;
    NSMutableSet *_unprocessedChanges;
    NSMutableSet *_unprocessedDeletes;
    NSMutableSet *_unprocessedInserts;
    NSMutableSet *_insertedObjects;
    NSMutableSet *_deletedObjects;
    NSMutableSet *_changedObjects;
    NSMutableSet *_lockedObjects;
    NSMutableSet *_refreshedObjects;
    id _infoByGID;
    id *_cachedObsInfoByEntity;
    short _undoTransactionID;
    id _lock;
    long _lockCount;
    long _objectStoreLockCount;
    double _fetchTimestamp;
    id _delegate;
    id _referenceQueue;
    id _userinfo;
    id _mergePolicy;
    NSInteger _cd_rc;
    NSInteger _ignoreChangeNotification;
    id _editors;
    id *_debuggingRecords;
    id _childObjectStores;
    void *_reserved2;
}

+ (BOOL)_handleError:(id)arg1 withError:(id*)arg2;
+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;

- (void)setPersistentStoreCoordinator:(id)arg1;
- (void)setRetainsRegisteredObjects:(BOOL)arg1;
- (BOOL)retainsRegisteredObjects;
- (void)setMergePolicy:(id)arg1;
- (id)mergePolicy;
- (double)stalenessInterval;
- (void)setStalenessInterval:(double)arg1;
- (void)setUndoManager:(id)arg1;
- (void)processPendingChanges;
- (void)assignObject:(id)arg1 toPersistentStore:(id)arg2;
- (id)registeredObjects;
- (BOOL)propagatesDeletesAtEndOfEvent;
- (void)setPropagatesDeletesAtEndOfEvent:(BOOL)arg1;
- (id)objectRegisteredForID:(id)arg1;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (void)rollback;
- (void)refreshObject:(id)arg1 mergeChanges:(BOOL)arg2;
- (void)detectConflictsForObject:(id)arg1;
- (void)_stopConflictDetectionForObject:(id)arg1;
- (void)mergeChangesFromContextDidSaveNotification:(id)arg1;
- (void)perform:(id)arg1;
- (void)performAndWait:(id)arg1;
- (id)_newSaveRequestForCurrentState;
- (NSUInteger)_countWithNoChangesForRequest:(id)arg1 error:(id*)arg2;
- (NSUInteger)_countWithMergedChangesForRequest:(id)arg1 possibleChanges:(id)arg2 possibleDeletes:(id)arg3 error:(id*)arg4;
- (void)_registerObject:(id)arg1 withID:(id)arg2;
- (void)_forgetObject:(id)arg1 propagateToObjectStore:(BOOL)arg2;
- (void)_forgetObject:(id)arg1 propagateToObjectStore:(BOOL)arg2 removeFromRegistry:(BOOL)arg3;
- (id)_retainedObjectWithID:(id)arg1 error:(id*)arg2;
- (id)_retainedObjectWithID:(id)arg1;
- (void)_disposeObjects:(id*)arg1 count:(unsigned long)arg2 notifyParent:(BOOL)arg3;
- (void)_dispose:(BOOL)arg1;
- (void)_changeIDsForManagedObjects:(id)arg1;
- (void)_initWithParentObjectStore:(id)arg1;
- (void)_resetAllChanges;
- (id)_retainedRegisteredObjects;
- (id)_globalIDsForObjects:(id)arg1;
- (NSUInteger)_batchRetainedObjects:(id*)arg1 forCount:(NSUInteger)arg2 withIDs:(id*)arg3 optionalHandler:(id)arg4 withInlineStorage:(BOOL)arg5;
- (id)_newUnchangedLockedObjects;
- (void)_refaultObject:(id)arg1 globalID:(id)arg2 boolean:(BOOL)arg3;
- (id)_createStoreFetchRequestForFetchRequest:(id)arg1;
- (void)_insertObjectWithGlobalID:(id)arg1 globalID:(id)arg2;
- (BOOL)_handleOptimisticLockingError:(id)arg1 withError:(id*)arg2;
- (BOOL)_validateDeletesUsingTable:(id)arg1 withError:(id*)arg2;
- (BOOL)_validateChangesForSave:(id*)arg1;
- (BOOL)_validateObjects:(id)arg1 forOperation:(NSUInteger)arg2 error:(id*)arg3 exhaustive:(BOOL)arg4 forSave:(BOOL)arg5;
- (void)_didSaveChanges;
- (void)_clearInsertions;
- (void)_clearUnprocessedInsertions;
- (void)_clearDeletions;
- (void)_clearUnprocessedDeletions;
- (void)_clearUpdates;
- (void)_clearUnprocessedUpdates;
- (void)_clearLockedObjects;
- (void)_clearRefreshedObjects;
- (void)_informParentStore:(id)arg1 ofInterestInObjects:(id)arg2;
- (void)_informParentStore:(id)arg1 noLongerInterestedInObjects:(id)arg2;
- (id)_retainedObjectsFromRemovedStore:(id)arg1;
- (BOOL)_stopsValidationAfterFirstError;
- (void)_setStopsValidationAfterFirstError:(BOOL)arg1;
- (id)_debuggingOnly_localObjectForGlobalID:(id)arg1;
- (void)_clearOriginalSnapshotForObject:(id)arg1;
- (void)_clearOriginalSnapshotAndInitializeRec:(id)arg1;
- (id)_globalIDForObject:(id)arg1;
- (id)_committedSnapshotForObject:(id)arg1;
- (id)_currentEventSnapshotForObject:(id)arg1;
- (void)_growRegistrationCollectionForEntitySlot:(NSUInteger)arg1 toSize:(NSUInteger)arg2;
- (void)_setIsUbiquityImportContext:(BOOL)arg1;
- (BOOL)_isImportContext;
- (BOOL)_isPreflightSaveInProgress;
- (void)_establishEventSnapshotsForObject:(id)arg1;
- (void)_undoInsertions:(id)arg1;
- (void)_registerUndoForInsertedObjects:(id)arg1;
- (void)_undoDeletionsMovedToUpdates:(id)arg1;
- (void)_undoDeletions:(id)arg1;
- (void)_registerUndoForDeletedObjects:(id)arg1 withDeletedChanges:(id)arg2;
- (void)_undoUpdates:(id)arg1;
- (void)_registerUndoForModifiedObjects:(id)arg1;
- (void)_registerUndoForOperation:(SEL)arg1 withObjects:(id)arg2 withExtraArguments:(id)arg3;
- (void)_forceInsertionForObject:(id)arg1;
- (void)_incrementUndoTransactionID;
- (void)_clearChangedThisTransaction:(id)arg1;
- (void)_registerClearStateWithUndoManager;
- (void)_updateUnprocessedOwnDestinations:(id)arg1;
- (void)_postRefreshedObjectsNotificationAndClearList;
- (BOOL)_prepareForPushChanges:(id*)arg1;
- (BOOL)_attemptCoalesceChangesForFetch;
- (BOOL)_processRecentChanges:(id*)arg1;
- (id)_processPendingDeletions:(id)arg1 withInsertions:(id)arg2 withUpdates:(id)arg3 withNewlyForgottenList:(id)arg4 withRemovedChangedObjects:(id)arg5;
- (id)_processPendingInsertions:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3;
- (id)_processPendingUpdates:(id)arg1;
- (void)_createAndPostChangeNotification:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3 withRefreshes:(id)arg4;
- (BOOL)_propagatePendingDeletesAtEndOfEvent:(id*)arg1;
- (void)_updateUndoTransactionForThisEvent:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3;
- (void)_processRecentlyForgottenObjects:(id)arg1;
- (void)_undoManagerCheckpoint:(id)arg1;
- (void)_noop:(id)arg1;
- (void)_processOwnedObjects:(id)arg1 set:(id)arg2 boolean:(BOOL)arg3;
- (BOOL)_processDeletedObjects:(id*)arg1;
- (void)_propagateDeletesUsingTable:(id)arg1;
- (void)_processObjectStoreChanges:(id)arg1;
- (void)_enqueueEndOfEventNotification;
- (void)_processEndOfEventNotification:(id)arg1;
- (void)_postObjectsDidChangeNotificationWithUserInfo:(id)arg1;
- (BOOL)_ignoringChangeNotifications;
- (void)_startObservingUndoManagerNotifications;
- (void)_stopObservingUndoManagerNotifications;
- (void)_registerForNotificationsWithCoordinator:(id)arg1;
- (void)_objectsChangedInStore:(id)arg1;
- (void)_storeConfigurationChanged:(id)arg1;
- (void)_processChangedStoreConfigurationNotification:(id)arg1;
- (void)_sendOrEnqueueNotification:(id)arg1 selector:(SEL)arg2;
- (void)_processNotificationQueue;
- (void)objectDidBeginEditing:(id)arg1;
- (void)objectDidEndEditing:(id)arg1;
- (void)discardEditing;
- (BOOL)commitEditing;
- (void)_sendCommitEditingSelectorToTarget:(id)arg1 sender:(id)arg2 selector:(SEL)arg3 flag:(BOOL)arg4 contextInfo:(void*)arg5 delayed:(BOOL)arg6;
- (void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void*)arg3;
- (void)_managedObjectContextEditor:(id)arg1 didCommit:(BOOL)arg2 contextInfo:(struct { id x1; SEL x2; void *x3; }*)arg3;
- (void)setParentContext:(id)arg1;
- (id)parentContext;
- (void)_processReferenceQueue:(BOOL)arg1;
- (void)_copyChildObject:(id)arg1 toParentObject:(id)arg2 fromChildContext:(id)arg3;
- (id)_parentProcessSaveRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)_parentObjectsForFetchRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (void)insertObject:(id)arg1;
- (id)_implicitObservationInfoForEntity:(id)arg1 forResultingClass:(Class*)arg2;
- (NSUInteger)countForFetchRequest:(id)arg1 error:(id*)arg2;
- (void)lockObjectStore;
- (void)unlockObjectStore;
- (BOOL)_handleError:(id)arg1 withError:(id*)arg2;
- (void)_disableChangeNotifications;
- (void)_enableChangeNotifications;
- (id)persistentStoreCoordinator;
- (id)insertedObjects;
- (void)_changeIDsForManagedObjects:(id)arg1 toIDs:(id)arg2;
- (id)deletedObjects;
- (id)updatedObjects;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (BOOL)tryLock;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (id)objectWithID:(id)arg1;
- (id)_retainedObjectWithID:(id)arg1 optionalHandler:(id)arg2 withInlineStorage:(BOOL)arg3;
- (void)deleteObject:(id)arg1;
- (void)reset;
- (BOOL)save:(id*)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)_unregisterForNotifications;
- (void)finalize;
- (void)lock;
- (void)unlock;
- (BOOL)isEditing;
- (id)initWithType:(NSUInteger)arg1;
- (id)userInfo;
- (NSUInteger)retainCount;
- (void)undo;
- (void)redo;
- (id)undoManager;
- (id)init;
- (void)release;
- (id)retain;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (BOOL)hasChanges;

@end
