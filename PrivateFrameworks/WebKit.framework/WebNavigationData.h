/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebNavigationDataPrivate;



@interface WebNavigationData : NSObject 
{
    WebNavigationDataPrivate *_private;
}


- (id)url;
- (id)clientRedirectSource;
- (BOOL)hasSubstituteData;
- (id)originalRequest;
- (id)initWithURLString:(id)arg1 title:(id)arg2 originalRequest:(id)arg3 response:(id)arg4 hasSubstituteData:(BOOL)arg5 clientRedirectSource:(id)arg6;
- (id)response;
- (id)title;
- (void)dealloc;

@end
