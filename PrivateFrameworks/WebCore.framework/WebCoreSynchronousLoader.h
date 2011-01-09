/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSURLResponse, NSString, NSMutableData, NSError, NSURL;



@interface WebCoreSynchronousLoader : NSObject 
{
    NSURL *m_url;
    NSString *m_user;
    NSString *m_pass;
    struct Credential { 
        struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_user; 
        struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_password; 
        NSInteger m_persistence; 
        struct RetainPtr<__SecIdentity*> { 
            struct __SecIdentity {} *m_ptr; 
        } m_identity; 
        struct RetainPtr<const __CFArray*> { 
            struct __CFArray {} *m_ptr; 
        } m_certificates; 
        NSInteger m_type; 
    } m_initialCredential;
    BOOL m_allowStoredCredentials;
    NSURLResponse *m_response;
    NSMutableData *m_data;
    NSError *m_error;
    BOOL m_isDone;
}

+ (id)loadRequest:(id)arg1 allowStoredCredentials:(BOOL)arg2 returningResponse:(id*)arg3 error:(id*)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (BOOL)_isDone;
- (id)_data;
- (id)_response;
- (id)_error;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)dealloc;

@end
