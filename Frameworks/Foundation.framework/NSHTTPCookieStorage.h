/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSHTTPCookieStorageInternal;



@interface NSHTTPCookieStorage : NSObject 
{
    NSHTTPCookieStorageInternal *_internal;
}

+ (id)sharedHTTPCookieStorage;

- (void)setCookie:(id)arg1;
- (id)cookiesForURL:(id)arg1;
- (void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3;
- (NSUInteger)cookieAcceptPolicy;
- (void)_readAcceptCookiesPreference;
- (id)_internalInit;
- (void)_setPrivateBrowsingEnabled:(BOOL)arg1;
- (struct OpaqueCFHTTPCookieStorage { }*)_cookieStorage;
- (void)_saveCookies;
- (id)cookies;
- (void)deleteCookie:(id)arg1;
- (id)cookieRequestHeaderFieldsForURL:(id)arg1;
- (void)setCookiesFromResponseHeader:(id)arg1 forURL:(id)arg2 policyBaseURL:(id)arg3;
- (void)setCookieAcceptPolicy:(NSUInteger)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end
