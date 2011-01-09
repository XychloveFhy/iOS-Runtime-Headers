/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSURL;



@interface GEOQueryCollector : NSObject 
{
    NSURL *_serverURL;
}

+ (id)sharedCollector;

- (void)submitQuery:(id)arg1 requestType:(NSInteger)arg2 centerCoordinate:(id)arg3 latSpan:(NSInteger)arg4 lonSpan:(NSInteger)arg5 zoomLevel:(NSInteger)arg6;
- (void)cancelAllSubmissions;
- (id)init;
- (void)dealloc;

@end
