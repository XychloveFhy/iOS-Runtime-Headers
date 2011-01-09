/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, NSString, GEOAddress;



@interface GEOFeature : PBCodable 
{
    NSString *_name;
    NSInteger _featureType;
    GEOAddress *_address;
    GEOLatLng *_center;
}

@property(readonly) BOOL hasCenter;
@property(retain) GEOLatLng *center;
@property(retain) GEOAddress *address;
@property NSInteger featureType;
@property(retain) NSString *name;


- (BOOL)readFrom:(id)arg1;
- (id)address;
- (id)dictionaryRepresentation;
- (void)setName:(id)arg1;
- (id)name;
- (void)setCenter:(id)arg1;
- (id)center;
- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)hasCenter;
- (void)setAddress:(id)arg1;
- (NSInteger)featureType;
- (void)setFeatureType:(NSInteger)arg1;
- (void)writeTo:(id)arg1;

@end
