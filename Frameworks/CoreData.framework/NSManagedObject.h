/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectID, NSManagedObjectContext;



@interface NSManagedObject : NSObject 
{
    NSInteger _cd_rc;
    NSUInteger _cd_stateFlags;
    id _cd_rawData;
    id _cd_entity;
    NSManagedObjectContext *_cd_managedObjectContext;
    NSManagedObjectID *_cd_objectID;
    id _cd_faultHandler;
    id _cd_observationInfo;
    id *_cd_snapshots;
    NSUInteger _cd_lockingInfo;
    id _cd_queueReference;
}

+ (BOOL)resolveClassMethod:(SEL)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (struct { NSInteger x1; void *x2; unsigned long x3; unsigned char x4; NSUInteger x5; void *x6; id x7; char *x8; struct _moFactoryClassFlags { unsigned int x_9_1_1 : 1; unsigned int x_9_1_2 : 1; unsigned int x_9_1_3 : 1; unsigned int x_9_1_4 : 1; unsigned int x_9_1_5 : 1; unsigned int x_9_1_6 : 1; unsigned int x_9_1_7 : 26; } x9; }*)_PFMOClassFactoryData;
+ (BOOL)_isGeneratedClass_1;
+ (NSUInteger)allocBatch:(id*)arg1 withEntity:(id)arg2 count:(NSUInteger)arg3;
+ (id)batchAllocateWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 count:(NSUInteger)arg3;
+ (BOOL)_hasOverriddenAwake;
+ (void)_initializePrimitiveAccessorStubs;
+ (void)_initializeAccessorStubs;
+ (id)_PFPlaceHolderSingleton;
+ (BOOL)_useFastValidationMethod;
+ (id)_PFPlaceHolderSingleton_core;
+ (char *)_transientPropertiesChangesMask__;
+ (id)alloc_10_4;
+ (id)allocWithZone_10_4:(struct _NSZone { }*)arg1;
+ (BOOL)contextShouldIgnoreUnmodeledPropertyChanges;
+ (id)allocWithEntity:(id)arg1;
+ (void)_entityDeallocated;
+ (BOOL)_isGeneratedClass;
+ (Class)classForEntity:(id)arg1;
+ (id)_retain_1;
+ (void)_release_1;
+ (void)initialize;
+ (void)release;
+ (id)retain;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)isFault;
- (void)setObservationInfo:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (BOOL)_defaultValidation:(id*)arg1 error:(id*)arg2;
- (BOOL)implementsSelector:(SEL)arg1;
- (void)_setGenericValue:(id)arg1 forKey:(id)arg2 withIndex:(long)arg3 flags:(long)arg4;
- (id)_genericValueForKey:(id)arg1 withIndex:(long)arg2 flags:(long)arg3;
- (id)_descriptionValues;
- (BOOL)isUpdated;
- (BOOL)hasFaultForRelationshipNamed:(id)arg1;
- (id)observationInfo;
- (void)didAccessValueForKey:(id)arg1;
- (void)willChange:(NSUInteger)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)didChange:(NSUInteger)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)awakeFromInsert;
- (void)awakeFromSnapshotEvents:(NSUInteger)arg1;
- (void)prepareForDeletion;
- (void)willSave;
- (void)didSave;
- (BOOL)validateValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3;
- (BOOL)validateForDelete:(id*)arg1;
- (BOOL)validateForInsert:(id*)arg1;
- (BOOL)validateForUpdate:(id*)arg1;
- (id)mutableArrayValueForKey:(id)arg1;
- (id)primitiveValueForKey:(id)arg1;
- (void)setPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (id)committedValuesForKeys:(id)arg1;
- (id)changedValues;
- (void)setNilValueForKey:(id)arg1;
- (NSUInteger)faultingState;
- (void)willRefresh:(BOOL)arg1;
- (void)didRefresh:(BOOL)arg1;
- (id)_initWithEntity:(id)arg1 withID:(id)arg2 withHandler:(id)arg3 withContext:(id)arg4;
- (BOOL)_hasAnyObservers__;
- (BOOL)_hasPendingChanges;
- (void)_clearPendingChanges__;
- (BOOL)_hasUnprocessedChanges__;
- (void)_clearUnprocessedChanges__;
- (BOOL)_hasAnyChanges;
- (void)_clearAllChanges__;
- (BOOL)_isSuppressingChangeNotifications__;
- (BOOL)_isSuppressingKVO__;
- (void)_setPendingDeletion__:(BOOL)arg1;
- (BOOL)_isPendingInsertion__;
- (void)_setPendingInsertion__:(BOOL)arg1;
- (BOOL)_isPendingUpdate__;
- (void)_setPendingUpdate__:(BOOL)arg1;
- (void)_setUnprocessedDeletion__:(BOOL)arg1;
- (BOOL)_isUnprocessedInsertion__;
- (void)_setUnprocessedInsertion__:(BOOL)arg1;
- (BOOL)_isUnprocessedUpdate__;
- (void)_setUnprocessedUpdate__:(BOOL)arg1;
- (BOOL)_isReadOnly__;
- (void)_setReadOnly__:(BOOL)arg1;
- (NSUInteger)_stateFlags;
- (id)_lastSnapshot__;
- (void)_setLastSnapshot__:(id)arg1;
- (id)_reservedCurrentEventSnapshot;
- (void)_nilOutReservedCurrentEventSnapshot__;
- (id)changedValuesForCurrentEvent;
- (NSUInteger)_versionReference__;
- (void)_setManagedObjectContext__:(id)arg1;
- (void)_setObjectID__:(id)arg1;
- (id)_originalSnapshot__;
- (void)_setOriginalSnapshot__:(id)arg1;
- (id)_newPropertiesForRetainedTypes:(NSUInteger*)arg1 andCopiedTypes:(NSUInteger*)arg2 preserveFaults:(BOOL)arg3;
- (id)_newChangedValuesForRefresh__;
- (id)_newSnapshotForUndo__;
- (void)_updateFromUndoSnapshot:(id)arg1;
- (id)_allProperties__;
- (id)_newAllPropertiesWithRelationshipFaultsIntact__;
- (id)_persistentProperties__;
- (id)_newPersistentPropertiesWithRelationshipFaultsIntact__;
- (id)_transientProperties__;
- (id)_changedTransientProperties__;
- (void)_includeObject:(id)arg1 intoPropertyWithKey:(id)arg2 andIndex:(NSUInteger)arg3;
- (void)_excludeObject:(id)arg1 fromPropertyWithKey:(id)arg2 andIndex:(NSUInteger)arg3;
- (void)_setFaultHandler__:(id)arg1;
- (id)_implicitObservationInfo;
- (id)_genericMutableSetValueForKey:(id)arg1 withIndex:(long)arg2 flags:(long)arg3;
- (void)_maintainInverseRelationship:(id)arg1 forProperty:(id)arg2 oldDestination:(id)arg3 newDestination:(id)arg4;
- (void)_maintainInverseRelationship:(id)arg1 forProperty:(id)arg2 forChange:(NSUInteger)arg3 onSet:(id)arg4;
- (void)_didChangeValue:(id)arg1 forRelationship:(id)arg2 named:(id)arg3 withInverse:(id)arg4;
- (void)_propagateDelete:(BOOL)arg1;
- (void)_propagateDelete;
- (void)_prepropagateDeleteForMerge;
- (void)_chainNewError:(id)arg1 toOriginalErrorDoublePointer:(id*)arg2;
- (id)_generateErrorDetailForKey:(id)arg1 withValue:(id)arg2;
- (id)_substituteEntityAndProperty:(id)arg1 inString:(id)arg2;
- (BOOL)_validatePropertiesWithError:(id*)arg1;
- (BOOL)_validateForSave:(id*)arg1;
- (BOOL)_validateValue:(id*)arg1 forProperty:(id)arg2 andKey:(id)arg3 withIndex:(NSUInteger)arg4 error:(id*)arg5;
- (BOOL)_isKindOfEntity:(id)arg1;
- (void)_updateToManyRelationship:(id)arg1 from:(id)arg2 to:(id)arg3 with:(id)arg4;
- (void)_genericUpdateFromSnapshot:(id)arg1;
- (void)_updateFromSnapshot:(id)arg1;
- (void)_updateFromToManyAwareSnapshot:(id)arg1 forUndo:(BOOL)arg2;
- (void)_updateFromRefreshSnapshot:(id)arg1;
- (BOOL)_isUnprocessedDeletion__;
- (BOOL)_isPendingDeletion__;
- (BOOL)_hasRetainedStoreResources__;
- (void)_setSuppressingKVO__:(BOOL)arg1;
- (void)willFireFault;
- (void)_setVersionReference__:(NSUInteger)arg1;
- (void)didFireFault;
- (void)awakeFromFetch;
- (BOOL)isInserted;
- (void)willTurnIntoFault;
- (void)_setSuppressingChangeNotifications__:(BOOL)arg1;
- (void)_clearRawPropertiesWithHint:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)didTurnIntoFault;
- (id)mutableSetValueForKey:(id)arg1;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (void)willAccessValueForKey:(id)arg1;
- (BOOL)_isValidRelationshipDestination__;
- (id)_generateErrorWithCode:(NSInteger)arg1 andMessage:(id)arg2 forKey:(id)arg3 andValue:(id)arg4 additionalDetail:(id)arg5;
- (void)_setHasRetainedStoreResources__:(BOOL)arg1;
- (NSInteger)_batch_release__;
- (id)_referenceQueue__;
- (void)willChangeValueForKey:(id)arg1 withSetMutation:(NSUInteger)arg2 usingObjects:(id)arg3;
- (void)didChangeValueForKey:(id)arg1 withSetMutation:(NSUInteger)arg2 usingObjects:(id)arg3;
- (id)entity;
- (void)_commitPhotoshoperyForRelationshipAtIndex:(NSUInteger)arg1 newValue:(id)arg2;
- (id)managedObjectContext;
- (id)_faultHandler__;
- (id)objectID;
- (BOOL)isDeleted;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (void)finalize;
- (int (*)())methodForSelector:(SEL)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (NSUInteger)retainCount;
- (id)description;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)init;
- (void)release;
- (id)retain;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dealloc;

@end
