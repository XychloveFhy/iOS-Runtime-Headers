/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSString;



@interface ABGroupMembershipPredicate : ABPredicate 
{
    void *_group;
    void *_store;
    NSString *_accountIdentifier;
}

@property(copy) NSString *accountIdentifier;
@property void *store;
@property void *group;


- (id)queryWhereString;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(NSInteger*)arg2 predicateIdentifier:(NSInteger)arg3;
- (void)setGroup:(void*)arg1;
- (void*)store;
- (void)setStore:(void*)arg1;
- (void*)group;
- (id)description;
- (BOOL)isValid;
- (void)dealloc;
- (void)setAccountIdentifier:(id)arg1;
- (id)accountIdentifier;

@end
