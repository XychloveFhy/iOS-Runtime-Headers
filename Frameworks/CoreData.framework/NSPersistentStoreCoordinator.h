/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectModel, NSMutableArray;



@interface NSPersistentStoreCoordinator : NSObject <NSLocking>
{
    void *_reserved;
    void *_reserved2;
    void *_reserved3;
    id _externalRecordsHelper;
    NSManagedObjectModel *_managedObjectModel;
    id _coreLock;
    NSMutableArray *_persistentStores;
}

+ (void)_registerCoreDataStoreClass:(Class)arg1 forStoreType:(id)arg2;
+ (void)registerStoreClass:(Class)arg1 forStoreType:(id)arg2;
+ (id)registeredStoreTypes;
+ (Class)_classForPersistentStoreAtURL:(id)arg1;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 error:(id*)arg4;
+ (id)metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 error:(id*)arg3;
+ (id)_storeTypeForStore:(id)arg1;
+ (Class)_storeClassForStoreType:(id)arg1;
+ (void)_registerDefaultStoreClassesAndTypes;
+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;

- (void)setMetadata:(id)arg1 forPersistentStore:(id)arg2;
- (id)metadataForPersistentStore:(id)arg1;
- (id)persistentStores;
- (BOOL)_removePersistentStore:(id)arg1;
- (BOOL)removePersistentStore:(id)arg1 error:(id*)arg2;
- (id)persistentStoreForURL:(id)arg1;
- (id)URLForPersistentStore:(id)arg1;
- (id)migratePersistentStore:(id)arg1 toURL:(id)arg2 options:(id)arg3 withType:(id)arg4 error:(id*)arg5;
- (void)_addPersistentStore:(id)arg1 identifier:(id)arg2;
- (void)_assignObjects:(id)arg1 toStore:(id)arg2;
- (BOOL)_canSaveGraphRootedAtObject:(id)arg1 intoStore:(id)arg2 withPreviouslyChecked:(struct __CFSet { }*)arg3 withAcceptableEntities:(struct __CFSet { }*)arg4;
- (void)_doPreSaveAssignmentsForObjects:(id)arg1;
- (id)_newObjectGraphStyleRecordForRow:(id)arg1 andObject:(id)arg2;
- (id)_newConflictRecordForObject:(id)arg1 andOriginalRow:(id)arg2;
- (id)_conflictsWithRowCacheForObject:(id)arg1 andStore:(id)arg2;
- (id)_checkRequestForStore:(id)arg1 originalRequest:(id)arg2 andOptimisticLocking:(id)arg3;
- (id)_saveRequestForStore:(id)arg1 originalRequest:(id)arg2 andOptimisticLocking:(id)arg3;
- (void)_informAffectedStoresOfInterestByChildContextInObjectsWithObjectIDs:(id)arg1 withSelector:(SEL)arg2;
- (id)_fetchAllInstancesFromStore:(id)arg1 intoContext:(id)arg2 underlyingException:(id*)arg3;
- (void)_postStoresChangedNotificationsForStores:(id)arg1 changeKey:(id)arg2 options:(id)arg3;
- (void)_assignObject:(id)arg1 toPersistentStore:(id)arg2;
- (void)_assignObject:(id)arg1 toPersistentStore:(id)arg2 forConfiguration:(id)arg3;
- (id)_realStoreTypeForStoreWithType:(id)arg1 URL:(id)arg2 error:(id*)arg3;
- (id)_retainedAllMigratedObjectsInStore:(id)arg1 toStore:(id)arg2;
- (BOOL)_destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 error:(id*)arg3;
- (id)initWithManagedObjectModel:(id)arg1;
- (id)addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (void)_copyMetadataFromStore:(id)arg1 toStore:(id)arg2 migrationManager:(id)arg3;
- (id)_persistentStoreForIdentifier:(id)arg1;
- (id)managedObjectIDForURIRepresentation:(id)arg1;
- (id*)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2;
- (id)persistentStoreCoordinator;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)persistentStoreForIdentifier:(id)arg1;
- (id)managedObjectModel;
- (BOOL)tryLock;
- (BOOL)setURL:(id)arg1 forPersistentStore:(id)arg2;
- (void)finalize;
- (void)lock;
- (void)unlock;
- (void)dealloc;

@end
