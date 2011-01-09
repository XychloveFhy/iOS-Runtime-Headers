/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSMutableDictionary, NSString;



@interface WebUIGeolocationSupport : NSObject 
{
    NSMutableDictionary *_sites;
    BOOL _allowed;
    NSInteger _challengeCount;
    NSString *_key;
}

+ (id)sharedWebUIGeolocationSupport;

- (id)siteFile;
- (BOOL)webFrame:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2;
- (void)load;
- (void)clear;
- (void)save;
- (void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;

@end
