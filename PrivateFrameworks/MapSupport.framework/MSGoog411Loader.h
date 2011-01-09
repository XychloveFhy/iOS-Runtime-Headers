/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/MapSupport.framework/MapSupport
 */

@class NSURLConnection, NSURL;



@interface MSGoog411Loader : NSObject 
{
    NSURLConnection *_connection;
    NSURL *_URL;
    id _delegate;
    BOOL _isLoading;
}


- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)stop;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;

@end
