/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */



@interface ABPredicate : NSPredicate 
{
}

+ (id)personPredicateWithNameLike:(id)arg1 addressBook:(void*)arg2;
+ (id)personPredicateWithNameLike:(id)arg1 group:(void*)arg2 source:(void*)arg3 account:(id)arg4 showingPersonLinks:(BOOL)arg5 addressBook:(void*)arg6;
+ (id)personPredicateWithNameLike:(id)arg1 showingPersonLinks:(BOOL)arg2 addressBook:(void*)arg3;
+ (id)personPredicateWithValue:(id)arg1 comparison:(long)arg2 forProperty:(NSInteger)arg3;
+ (id)personPredicateWithAnyValueForProperty:(NSInteger)arg1;
+ (id)personPredicateWithPhoneLike:(id)arg1 countryHint:(id)arg2 addressBook:(void*)arg3;
+ (id)personPredicateWithGroup:(void*)arg1 source:(void*)arg2 account:(id)arg3;
+ (id)newQueryWithProperties:(id)arg1 joins:(id)arg2 whereString:(id)arg3 sortOrder:(NSUInteger)arg4 groupByProperties:(id)arg5 addressBook:(void*)arg6 propertyIndices:(const struct __CFDictionary {}**)arg7;
+ (id)newQueryFromABPredicate:(id)arg1 withSortOrder:(NSUInteger)arg2 addressBook:(void*)arg3 propertyIndices:(const struct __CFDictionary {}**)arg4;
+ (id)newQueryFromCompoundPredicate:(id)arg1 withSortOrder:(NSUInteger)arg2 addressBook:(void*)arg3 propertyIndices:(const struct __CFDictionary {}**)arg4;
+ (void)searchPeopleWithPredicate:(id)arg1 sortOrder:(NSUInteger)arg2 inAddressBook:(void*)arg3 withDelegate:(id)arg4;

- (id)querySelectProperties;
- (id)queryGroupByProperties;
- (BOOL)hasCallback;
- (void*)callbackContext;
- (void)evaluateCallbackWithSqliteContext:(struct sqlite3_context { }*)arg1 predicateContext:(void*)arg2 values:(struct Mem {}**)arg3 count:(NSInteger)arg4;
- (BOOL)ab_hasCallback;
- (void)ab_addCallbackContextToArray:(struct __CFArray { }*)arg1;
- (id)ab_newQueryWithSortOrder:(NSUInteger)arg1 addressBook:(void*)arg2 propertyIndices:(const struct __CFDictionary {}**)arg3;
- (id)queryJoinsInCompound:(BOOL)arg1;
- (void)bindString:(id)arg1 toStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg2 withBindingOffset:(NSInteger*)arg3;
- (id)queryWhereString;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(NSInteger*)arg2 predicateIdentifier:(NSInteger)arg3;
- (id)predicateFormat;
- (BOOL)isValid;
- (id)init;
- (void)dealloc;

@end
