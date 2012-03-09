/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLatLng : PBCodable  {
    double _lat;
    double _lng;
}

@property double lat;
@property double lng;


- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;
- (unsigned int)unsignedLatE7;
- (id)coordinateAsString;
- (id)dictionaryRepresentation;
- (BOOL)isValid;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (int)lngE7;
- (int)latE7;
- (void)setLng:(double)arg1;
- (void)setLat:(double)arg1;
- (double)lng;
- (double)lat;
- (id)initWithGMMGeometry:(id)arg1;

@end