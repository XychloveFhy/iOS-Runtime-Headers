/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSString;



@interface ABPhonePredicate : ABPredicate 
{
    NSString *_phoneNumber;
    NSString *_country;
}

@property(copy) NSString *country;
@property(copy) NSString *phoneNumber;


- (id)country;
- (void)setCountry:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (BOOL)hasCallback;
- (void)evaluateCallbackWithSqliteContext:(struct sqlite3_context { }*)arg1 predicateContext:(void*)arg2 values:(struct Mem {}**)arg3 count:(NSInteger)arg4;
- (id)queryJoinsInCompound:(BOOL)arg1;
- (id)queryWhereString;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(NSInteger*)arg2 predicateIdentifier:(NSInteger)arg3;
- (id)predicateFormat;
- (id)phoneNumber;
- (BOOL)isValid;

@end
