/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */



@interface MKUserLocationSearchResult : MKSearchResult 
{
    double _lastUserLocationUpdateTime;
    struct { 
        double latitude; 
        double longitude; 
    } _lastUserLocationCoordinate;
}

+ (id)searchResult;

- (BOOL)needsReverseGeocodeCheck;
- (BOOL)performsReverseGeocodeCheck;
- (BOOL)requiresPanoramaIDCheck;
- (struct CGPoint { float x1; float x2; })longLat;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;

@end
