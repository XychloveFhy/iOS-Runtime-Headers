/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString;



@interface MKPanoramaRequest : NSObject 
{
    NSString *panoramaID;
    NSInteger tilePath;
    NSInteger status;
}

@property(readonly) NSInteger zoomLevel;
@property(readonly) NSInteger x;
@property(readonly) NSInteger y;
@property NSInteger status;
@property NSInteger tilePath;
@property(copy) NSString *panoramaID;

+ (id)stringWithStatus:(NSInteger)arg1;
+ (id)stringWithType:(NSInteger)arg1;

- (void)setTilePath:(NSInteger)arg1;
- (NSInteger)tilePath;
- (void)setPanoramaID:(id)arg1;
- (id)panoramaID;
- (void)setStatus:(NSInteger)arg1;
- (NSInteger)y;
- (NSInteger)x;
- (void)cancel;
- (void)dealloc;
- (NSInteger)status;
- (NSInteger)zoomLevel;

@end
