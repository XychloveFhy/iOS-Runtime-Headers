/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UISharedImageStatistics : NSObject 
{
    double _loadTime;
    double _requestTime;
    NSUInteger _requests;
    NSUInteger _flushes;
}

@property NSUInteger flushes;
@property NSUInteger requests;
@property double requestTime;
@property double loadTime;


- (void)setFlushes:(NSUInteger)arg1;
- (void)setRequests:(NSUInteger)arg1;
- (void)setRequestTime:(double)arg1;
- (void)setLoadTime:(double)arg1;
- (double)loadTime;
- (double)requestTime;
- (NSUInteger)requests;
- (NSUInteger)flushes;

@end
