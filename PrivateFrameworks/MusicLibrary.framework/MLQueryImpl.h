/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MLQuery;



@interface MLQueryImpl : NSObject 
{
    MLQuery *_query;
    struct __CFArray { } *_queryResults;
    NSInteger _generation;
    NSUInteger _countOfUniqueItemsByGroupingProperty;
    unsigned int _trackGroupMembers : 1;
    unsigned int _mixedResultsAllowed : 1;
    unsigned int _orderingIsSorted : 1;
    unsigned int _wasSortedAlphabetically : 1;
    unsigned int _registeredAsCachedQuery : 1;
    unsigned int _evaluationType : 2;
    unsigned int _evaluateEntityExistenceOnlyResult : 1;
    unsigned int _registeredForNotificationsAffectingEvaluationResults : 1;
    unsigned int _usingSections : 1;
}

+ (void)reset;
+ (id)findCachedQueryImplMatchingCriteriaOfQuery:(id)arg1;
+ (void)registerQueryImpl:(id)arg1 forCriteriaOfQuery:(id)arg2;
+ (void)setEvaluationCachingEnabled:(BOOL)arg1;
+ (void)resetAndInvalidate:(id)arg1;
+ (void)resetAndInvalidate;
+ (id)_recursiveEvaluationLock;
+ (void)recursiveEvaluationLockLock;
+ (void)recursiveEvaluationLockUnlock;

- (id)description;
- (void)dealloc;
- (void)freeQueryResults;
- (id)copyQueryResultsDescription;
- (id)shallowDebugDescription;
- (void)_updateOptionalNotificationObserving:(BOOL)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)_unregisterForNotificationsAffectingEvaluationResults;
- (void)_registerForNotificationsAffectingEvaluationResults;
- (BOOL)_contentsAffectedByDynamicChangesToTrack:(id)arg1 changeInfo:(id)arg2;
- (void)_trackDynamicPropertiesWillChangeNotification:(id)arg1;
- (void)_trackDynamicPropertiesDidChangeNotification:(id)arg1;
- (void)evaluate;
- (id)evaluationQuery;
- (void)prepareToEvaluate;
- (void)evaluateQuery:(id)arg1;
- (void)evaluateQuery:(id)arg1 withEntities:(id)arg2;
- (void)setEvaluationType:(NSInteger)arg1;
- (BOOL)countOfEntitiesIsNonZero;
- (NSUInteger)countOfEntitiesNoLoad;
- (BOOL)orderingIsSorted;
- (BOOL)wasSortedAlphabetically;
- (void)loadAllEntities;
- (id)entityAtIndex:(NSUInteger)arg1;
- (NSUInteger)indexOfEntity:(id)arg1;
- (NSUInteger)indexOfPersistentID:(long long)arg1;
- (NSUInteger)indexOfFirstEntityMatchingPredicates:(id)arg1;
- (NSUInteger)indexOfFirstEntityMatchingPredicate:(id)arg1;
- (BOOL)entityMatchesPredicates:(id)arg1 entityIndex:(NSUInteger)arg2;
- (BOOL)entityMatchesPredicate:(id)arg1 entityIndex:(NSUInteger)arg2;
- (NSInteger)entityTypeOfEntityAtIndex:(NSUInteger)arg1;
- (id)stringValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (id)sectionTitleForStringProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (unsigned long long)unsignedValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (double)timeValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (void)visitGroupMembersOfEntityAtIndex:(NSUInteger)arg1 visitor:(int (*)())arg2 context:(void*)arg3;
- (NSUInteger)countOfEntitiesGroupedByEntityAtIndex:(NSUInteger)arg1;
- (id)representativeTrackForEntityAtIndex:(NSUInteger)arg1;
- (id)containingPlaylist;
- (unsigned long)containedMediaTypes;
- (unsigned long)containedMediaTypesForEntityAtIndex:(NSUInteger)arg1;
- (id)sectionDataForStringProperty:(unsigned long)arg1;
- (id)sectionDataByBucketizingEntitiesWithStringProperty:(unsigned long)arg1;
- (id)representativeTracksForAlbumsGetTrackCount:(NSUInteger*)arg1;
- (BOOL)evalutionIsCurrent;
- (NSUInteger)countOfEntities;
- (void)getValues:(id*)arg1 forProperties:(NSUInteger*)arg2 count:(NSUInteger)arg3 ofEntityAtIndex:(NSUInteger)arg4;

@end
