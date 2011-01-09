/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSMutableArray, MLQueryImpl, MLCompoundPredicate;



@interface MLQuery : NSObject <NSCoding, NSCopying>
{
    MLQueryImpl *_queryImpl;
    MLCompoundPredicate *_cpred;
    NSMutableArray *_filterPredicates;
    NSUInteger _groupingProperty;
    NSUInteger _customSortingProperty;
    void *_cachedPrefixOccurrenceInfo;
    NSUInteger *_indexMapping;
    NSUInteger _numberOfEntities;
    NSUInteger _groupingThreshold;
    unsigned int _indexMappingIsShort : 1;
    unsigned int _needsEvaluation : 1;
    unsigned int _isEvaluating : 1;
    unsigned int _disableAutoInvalidatesForDatabaseChanges : 1;
    unsigned int _filterChanged : 1;
    unsigned int _groupingChanged : 1;
    unsigned int _entityType : 2;
    unsigned int _effectiveEntityType : 2;
    unsigned int _entityOrderType : 4;
    unsigned int _unshuffledEntityOrder : 4;
    unsigned int _preserveIndexMappingForNextEvaluate : 1;
    unsigned int _evaluationType : 2;
    unsigned int _tracksGroupMembers : 1;
    NSUInteger _lastGroupTrackSearchUID;
    NSUInteger _lastGroupTrackSearchMatchIndex;
    unsigned int _disableEvaluation : 1;
    unsigned int _forceSectionsOff : 1;
    unsigned int _backgroundLoadingForcedOff : 1;
}

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)copy;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)_commonInit_MLQuery;
- (id)indexMappingDescription;
- (void)_normailizeFilterPredicates;
- (void)_filterPredicatesChanged;
- (void)filterByAppendingPredicate:(id)arg1;
- (void)replaceFirstFilterForProperty:(unsigned long)arg1 withPredicate:(id)arg2;
- (void)_addExplicitContentSystemPredicateToArray:(id)arg1;
- (void)_removeSystemPredicateWithProperty:(unsigned long)arg1;
- (void)replaceSystemPredicatesWithDefaultValues;
- (void)setFilterPredicates:(id)arg1;
- (id)filterPredicates;
- (id)stringValueForPredicateFilterProperty:(unsigned long)arg1;
- (unsigned long long)unsignedValueForPredicateFilterProperty:(unsigned long)arg1;
- (BOOL)isFilteredByAnyPropertyExcluding:(NSUInteger*)arg1 count:(NSInteger)arg2;
- (BOOL)isFilteredByProperty:(unsigned long)arg1;
- (void)setGroupingProperty:(unsigned long)arg1;
- (unsigned long)groupingProperty;
- (unsigned long)coalescingProperty;
- (void)setGroupingThreshold:(NSUInteger)arg1;
- (NSUInteger)groupingThreshold;
- (void)setEntityType:(NSInteger)arg1;
- (NSInteger)entityType;
- (NSInteger)effectiveEntityType;
- (NSInteger)entityOrder;
- (void)setCustomEntitySortOrderProperty:(unsigned long)arg1;
- (unsigned long)customEntitySortOrderProperty;
- (void)_debugLogAllEntitiesWithMessage:(id)arg1;
- (void)_noteIndexMappingTypeForEntityCount:(NSUInteger)arg1 oldEntityCount:(NSUInteger)arg2 anchorIndex:(NSUInteger*)arg3 currentIndex:(NSUInteger*)arg4;
- (NSUInteger)shuffleTrackOrderWithAnchorIndex:(NSUInteger)arg1;
- (NSUInteger)shuffleTrackOrderWithAnchorIndex:(NSUInteger)arg1 currentIndex:(NSUInteger*)arg2;
- (NSUInteger)shuffleTrackOrderByAlbumWithAnchorIndex:(NSUInteger)arg1;
- (BOOL)_needsEvaluationForAnyReason;
- (void)_evaluateIfNecessary;
- (void)setAutoInvalidatesForDatabaseChanges:(BOOL)arg1;
- (void)setSectionsAreForcedOff:(BOOL)arg1;
- (BOOL)sectionsAreForcedOff;
- (void)setBackgroundLoadingForcedOff:(BOOL)arg1;
- (BOOL)backgroundLoadingForcedOff;
- (NSUInteger)indexOfFirstGroupContainingTrack:(id)arg1;
- (void)setTracksGroupMembers:(BOOL)arg1;
- (BOOL)tracksGroupMembers;
- (id)stringValuesForProperty:(unsigned long)arg1 ofEntitiesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)unsignedValuesForProperty:(unsigned long)arg1 ofEntitiesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)firstFrequentLongPrefixForStringProperty:(unsigned long)arg1 occurrenceCount:(NSUInteger*)arg2;
- (NSUInteger*)_copyIndexMappingByRemovingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (NSUInteger*)_copyIndexMappingByInsertingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (NSUInteger*)_copyIndexMappingByMovingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 toIndex:(NSUInteger)arg2;
- (id)copyByRemovingUnshuffledRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)copyByInsertingUnshuffledRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)copyByMovingUnshuffledRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 toIndex:(NSUInteger)arg2;
- (id)entityIndicesForUnshuffledRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)unshuffledIndicesForEntityRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (BOOL)isEqual:(id)arg1 compareUnshuffledEquivalence:(BOOL)arg2;
- (void)_setupDefaultFilterPredicates;
- (void)_calculateFirstFrequentLongPrefixInfo:(struct __MLPrefixOccurrenceInfo { NSUInteger x1; id x2; NSUInteger x3; }*)arg1;
- (id)initWithEntities:(id)arg1;
- (id)_cpred;
- (BOOL)querySearchCriteriaIsEqualTo:(id)arg1;
- (NSUInteger)querySearchCriteriaHash;
- (id)copyForReevaluation;
- (NSInteger)unshuffledEntityOrder;
- (void)setEntityOrder:(NSInteger)arg1;
- (NSUInteger)_queryImplEntityIndexForQueryIndex:(NSUInteger)arg1;
- (BOOL)countOfEntitiesIsNonZero;
- (NSUInteger)countOfEntitiesNoLoad;
- (BOOL)wasSortedAlphabetically;
- (void)loadAllEntities;
- (id)entityAtIndex:(NSUInteger)arg1;
- (NSUInteger)indexOfEntity:(id)arg1;
- (NSUInteger)indexOfFirstEntityMatchingPredicates:(id)arg1;
- (NSUInteger)indexOfFirstEntityMatchingPredicate:(id)arg1;
- (BOOL)entityMatchesPredicates:(id)arg1 entityIndex:(NSUInteger)arg2;
- (BOOL)entityMatchesPredicate:(id)arg1 entityIndex:(NSUInteger)arg2;
- (NSInteger)entityTypeOfEntityAtIndex:(NSUInteger)arg1;
- (id)stringValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (unsigned long long)unsignedValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (double)timeValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (void)visitGroupMembersOfEntityAtIndex:(NSUInteger)arg1 visitor:(int (*)())arg2 context:(void*)arg3;
- (NSUInteger)countOfEntitiesGroupedByEntityAtIndex:(NSUInteger)arg1;
- (id)representativeTrackForEntityAtIndex:(NSUInteger)arg1;
- (id)containingPlaylist;
- (unsigned long)containedMediaTypes;
- (unsigned long)containedMediaTypesForEntityAtIndex:(NSUInteger)arg1;
- (id)sectionDataForStringProperty:(unsigned long)arg1;
- (id)representativeTracksForAlbumsGetTrackCount:(NSUInteger*)arg1;
- (NSUInteger)countOfEntities;
- (id)_queryImpl;
- (void)getValues:(id*)arg1 forProperties:(NSUInteger*)arg2 count:(NSUInteger)arg3 ofEntityAtIndex:(NSUInteger)arg4;
- (NSInteger)_filteredMediaType;
- (void)_filterByRemovingPredicatesForProperty:(unsigned long)arg1;
- (id)predicateForProperty:(unsigned long)arg1;
- (unsigned long long)playlistPersistentUID;

@end
