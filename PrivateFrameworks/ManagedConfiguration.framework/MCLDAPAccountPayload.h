/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSArray;



@interface MCLDAPAccountPayload : MCPayload 
{
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    BOOL _useSSL;
    NSArray *_searchSettings;
    NSString *_accountPersistentUUID;
}

@property(copy) NSString *accountPersistentUUID;
@property(readonly) NSArray *searchSettings;
@property(readonly) BOOL useSSL;
@property(retain) NSString *password;
@property(retain) NSString *username;
@property(readonly) NSString *hostname;
@property(readonly) NSString *accountDescription;

+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(NSUInteger)arg1;

- (id)hostname;
- (id)accountPersistentUUID;
- (id)accountDescription;
- (id)username;
- (void)setUsername:(id)arg1;
- (BOOL)useSSL;
- (void)setPassword:(id)arg1;
- (id)password;
- (id)title;
- (id)description;
- (void)dealloc;
- (id)searchSettings;
- (void)setAccountPersistentUUID:(id)arg1;
- (id)subtitle1Label;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (id)subtitle1Description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)stubDictionary;

@end
