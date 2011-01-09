/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class <NSURLAuthenticationChallengeSender>, NSString;



@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge 
{
    NSInteger _failureCount;
    BOOL _hasPassword;
    NSString *_password;
    <NSURLAuthenticationChallengeSender> *_sender;
    NSString *_user;
    BOOL _userNameIsEditable;
}

@property BOOL userNameIsEditable;
@property(retain) NSString *user;
@property <NSURLAuthenticationChallengeSender> *sender;
@property(retain) NSString *password;
@property BOOL hasPassword;
@property NSInteger failureCount;


- (void)setSender:(id)arg1;
- (BOOL)userNameIsEmail;
- (BOOL)userNameIsEditable;
- (void)setUserNameIsEditable:(BOOL)arg1;
- (void)setHasPassword:(BOOL)arg1;
- (void)setFailureCount:(NSInteger)arg1;
- (NSInteger)failureCount;
- (void)setPassword:(id)arg1;
- (BOOL)hasPassword;
- (id)user;
- (id)password;
- (id)sender;
- (id)init;
- (void)dealloc;
- (void)setUser:(id)arg1;

@end
