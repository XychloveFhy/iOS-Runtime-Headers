/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSString;



@interface DAContactsSearchQuery : DASearchQuery 
{
    NSString *_searchBase;
    NSString *_searchScope;
}

@property(readonly) NSString *searchScope;
@property(readonly) NSString *searchBase;

+ (id)contactsSearchQueryWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;

- (id)initWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)searchBase;
- (id)searchScope;

@end
