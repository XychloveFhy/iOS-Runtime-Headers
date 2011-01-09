/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSAccount;



@interface SSAuthenticateResponse : NSObject 
{
    SSAccount *_authenticatedAccount;
    NSInteger _responseType;
}

@property NSInteger authenticateResponseType;
@property(retain) SSAccount *authenticatedAccount;


- (void)setAuthenticateResponseType:(NSInteger)arg1;
- (void)setAuthenticatedAccount:(id)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)authenticatedAccount;
- (NSInteger)authenticateResponseType;
- (void)dealloc;

@end
