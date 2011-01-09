/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMServicePeopleListGroup, NSArray, NSString, NSDictionary, NSMutableArray, IMOfflinePeopleListGroup;



@interface IMPeopleList : IMDirectlyObservableObject <IMDirectlyObservableObjectObserver>
{
    Class _customPeopleListItemClass;
    NSDictionary *_groupProperties;
    NSMutableArray *_peopleListItems;
    NSMutableArray *_peopleListGroups;
    NSMutableArray *_smartGroups;
    NSString *_collapsedGroupsPrefKey;
    NSString *_searchString;
    NSMutableArray *_items;
    NSArray *_groupsOrdering;
    IMOfflinePeopleListGroup *_offlineGroup;
    IMServicePeopleListGroup *_bonjourGroup;
    NSMutableArray *_itemsToCleanup;
    NSInteger _coalesceCount;
    unsigned int _pendingResort : 1;
    unsigned int _allowsIMHandleSubstitution : 1;
    unsigned int _hideOfflinePeople : 1;
    unsigned int _hideAwayPeople : 1;
    unsigned int _hideIdlePeople : 1;
    unsigned int _hideUnknownPeople : 1;
    unsigned int _hideNoStatusPeople : 1;
    unsigned int _usesOfflineGroup : 1;
    unsigned int _usesBonjourGroup : 1;
    unsigned int _arrangesByGroup : 1;
    unsigned int _allowsGroupOrdering : 1;
    unsigned int _allowsSearching : 1;
    unsigned int _inSearchMode : 1;
}

+ (id)_notificationNames;
+ (id)_notificationSelectors;

- (id)groupProperties;
- (void)objectDidPostDirectNotification:(id)arg1;
- (id)items;
- (id)init;
- (void)dealloc;
- (void)_unobservePeopleListItem:(id)arg1;
- (void)_observePeopleListItem:(id)arg1;
- (void)_peopleListItemNeedsSorting:(id)arg1;
- (void)_peopleListItemSortOrderChangedNotification:(id)arg1;
- (void)_peopleListItemNeedsGroupChange:(id)arg1;
- (BOOL)allowsSearching;
- (void)setAllowsSearching:(BOOL)arg1;
- (BOOL)inSearchMode;
- (void)endSearchMode;
- (BOOL)_allowPeopleListItemInCurrentSearch:(id)arg1;
- (id)peopleListGroups;
- (id)peopleListItems;
- (struct { NSInteger x1[3]; NSInteger x2; BOOL x3; })_sortParameters;
- (BOOL)_isOfflineGroup:(id)arg1;
- (BOOL)_isBonjourGroup:(id)arg1;
- (BOOL)_peopleListItemShouldBeShown:(id)arg1 inGroup:(id)arg2;
- (BOOL)_peopleListItem:(id)arg1 shouldBeInGroup:(id)arg2;
- (void)_rebuildItems;
- (void)_postResortNotification;
- (void)_resortNow;
- (void)_resort;
- (void)_refreshContents;
- (void)refreshList;
- (id)representedPeopleInGroup:(id)arg1;
- (id)peopleInGroup:(id)arg1;
- (void)setAllowsIMHandleSubstitution:(BOOL)arg1;
- (BOOL)allowsIMHandleSubstitution;
- (void)_updateGroupPreferences;
- (NSUInteger)_indexOfGroup:(id)arg1 startingAtIndex:(NSInteger)arg2;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_rangeOfGroupAndItems:(id)arg1 startingAtIndex:(NSUInteger)arg2;
- (id)groupWithName:(id)arg1;
- (BOOL)containsGroup:(id)arg1;
- (void)_addGroup:(id)arg1;
- (void)addGroup:(id)arg1;
- (void)_removeGroup:(id)arg1;
- (void)removeGroup:(id)arg1;
- (id)peopleListGroupSortOrder;
- (void)setGroups:(id)arg1;
- (id)groupForNewIMHandles;
- (void)setUsesOfflineGroup:(BOOL)arg1;
- (BOOL)usesOfflineGroup;
- (void)setUsesBonjourGroup:(BOOL)arg1;
- (void)setGroupProperties:(id)arg1;
- (BOOL)arrangesByGroup;
- (void)setArrangesByGroup:(BOOL)arg1;
- (void)setCollapsedGroupsPrefKey:(id)arg1;
- (id)collapsedGroupsPrefKey;
- (void)setShowsOfflinePeople:(BOOL)arg1;
- (BOOL)showsOfflinePeople;
- (void)setShowsNoStatusPeople:(BOOL)arg1;
- (BOOL)showsNoStatusPeople;
- (void)setShowsUnknownPeople:(BOOL)arg1;
- (BOOL)showsUnknownPeople;
- (void)setShowsAwayPeople:(BOOL)arg1;
- (BOOL)showsAwayPeople;
- (void)setShowsIdlePeople:(BOOL)arg1;
- (BOOL)showsIdlePeople;
- (BOOL)_addIMHandle:(id)arg1 toCollection:(id)arg2 usingOrphanItems:(id)arg3;
- (id)_removeIMHandle:(id)arg1 fromPeopleListItem:(id)arg2;
- (void)_removeIMHandle:(id)arg1 fromPeopleListGroup:(id)arg2;
- (void)removeIMHandle:(id)arg1 fromGroup:(id)arg2;
- (void)removeAllIMHandlesAndGroups:(BOOL)arg1;
- (void)removeAllIMHandles;
- (void)_repopulateIMHandle:(id)arg1 filterGroups:(BOOL)arg2;
- (void)repopulateIMHandle:(id)arg1;
- (void)setCustomPeopleListItemClass:(Class)arg1;
- (Class)customPeopleListItemClass;
- (Class)peopleListItemClass;
- (NSUInteger)numberOfIMHandles;
- (BOOL)containsIMHandle:(id)arg1;
- (void)addPeopleFromArray:(id)arg1 skipMe:(BOOL)arg2;
- (void)addPeopleFromArray:(id)arg1;
- (id)allIMHandles;
- (void)removeIMHandle:(id)arg1;
- (void)addIMHandle:(id)arg1;
- (void)beginChanges;
- (void)removeIMHandle:(id)arg1 fromGroups:(id)arg2;
- (BOOL)makingChanges;
- (void)resort;
- (id)searchString;
- (void)setSearchString:(id)arg1;
- (void)endChanges;

@end
