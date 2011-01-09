/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMGeometry, GMMKmlInfo, GMMStructuredAddress, GMMAdInfo, NSMutableArray, NSString, GMMRating;



@interface GMMSearchResult : PBCodable 
{
    NSInteger _type;
    NSString *_name;
    GMMGeometry *_geometry;
    NSMutableArray *_addressLines;
    NSString *_phone;
    NSMutableArray *_enhancedContents;
    NSMutableArray *_references;
    BOOL _showIcon;
    BOOL _hasShowIcon;
    NSString *_attributionText;
    NSString *_attributionUrl;
    GMMKmlInfo *_kmlInfo;
    NSMutableArray *_images;
    GMMStructuredAddress *_structuredAddress;
    NSString *_mapsUrl;
    GMMAdInfo *_adInfo;
    NSString *_queryRefinementString;
    GMMRating *_rating;
    unsigned long long _cid;
    BOOL _hasCid;
    NSInteger _locationSource;
    BOOL _hasLocationSource;
    BOOL _inexactPosition;
    BOOL _hasInexactPosition;
    NSString *_streetViewPanoId;
    BOOL _unverifiedListing;
    BOOL _hasUnverifiedListing;
    BOOL _sesameEditable;
    BOOL _hasSesameEditable;
    BOOL _sesameDetailsEditable;
    BOOL _hasSesameDetailsEditable;
    NSString *_sesameFeatureId;
    NSString *_directionsPlacemarkToken;
}

@property(readonly) BOOL hasName;
@property(readonly) BOOL hasGeometry;
@property(readonly) NSInteger addressLinesCount;
@property(readonly) BOOL hasPhone;
@property(readonly) NSInteger enhancedContentsCount;
@property(readonly) NSInteger referencesCount;
@property(readonly) BOOL hasAttributionText;
@property(readonly) BOOL hasAttributionUrl;
@property(readonly) BOOL hasKmlInfo;
@property(readonly) NSInteger imagesCount;
@property(readonly) BOOL hasStructuredAddress;
@property(readonly) BOOL hasMapsUrl;
@property(readonly) BOOL hasAdInfo;
@property(readonly) BOOL hasQueryRefinementString;
@property(readonly) BOOL hasRating;
@property(readonly) BOOL hasStreetViewPanoId;
@property(readonly) BOOL hasSesameFeatureId;
@property(readonly) BOOL hasDirectionsPlacemarkToken;
@property(retain) NSString *directionsPlacemarkToken;
@property(retain) NSString *sesameFeatureId;
@property(readonly) BOOL hasSesameDetailsEditable;
@property BOOL sesameDetailsEditable;
@property(readonly) BOOL hasSesameEditable;
@property BOOL sesameEditable;
@property(readonly) BOOL hasUnverifiedListing;
@property BOOL unverifiedListing;
@property(retain) NSString *streetViewPanoId;
@property(readonly) BOOL hasInexactPosition;
@property BOOL inexactPosition;
@property(readonly) BOOL hasLocationSource;
@property NSInteger locationSource;
@property(readonly) BOOL hasCid;
@property unsigned long long cid;
@property(retain) GMMRating *rating;
@property(retain) NSString *queryRefinementString;
@property(retain) GMMAdInfo *adInfo;
@property(retain) NSString *mapsUrl;
@property(retain) GMMStructuredAddress *structuredAddress;
@property(retain) NSMutableArray *images;
@property(retain) GMMKmlInfo *kmlInfo;
@property(retain) NSString *attributionUrl;
@property(retain) NSString *attributionText;
@property(readonly) BOOL hasShowIcon;
@property BOOL showIcon;
@property(retain) NSMutableArray *references;
@property(retain) NSMutableArray *enhancedContents;
@property(retain) NSString *phone;
@property(retain) NSMutableArray *addressLines;
@property(retain) GMMGeometry *geometry;
@property(retain) NSString *name;
@property NSInteger type;


- (id)phone;
- (void)setPhone:(id)arg1;
- (void)setReferences:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (NSInteger)referencesCount;
- (id)referenceAtIndex:(NSUInteger)arg1;
- (void)addReference:(id)arg1;
- (id)references;
- (id)geometry;
- (void)setGeometry:(id)arg1;
- (void)setImages:(id)arg1;
- (id)images;
- (id)dictionaryRepresentation;
- (NSInteger)type;
- (void)addImage:(id)arg1;
- (void)setImage:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setType:(NSInteger)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)hasName;
- (BOOL)hasGeometry;
- (NSInteger)addressLinesCount;
- (void)setAddressLine:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)addressLineAtIndex:(NSUInteger)arg1;
- (void)addAddressLine:(id)arg1;
- (BOOL)hasPhone;
- (NSInteger)enhancedContentsCount;
- (void)setEnhancedContent:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)enhancedContentAtIndex:(NSUInteger)arg1;
- (void)addEnhancedContent:(id)arg1;
- (void)setReference:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setShowIcon:(BOOL)arg1;
- (BOOL)hasAttributionText;
- (BOOL)hasKmlInfo;
- (NSInteger)imagesCount;
- (id)imageAtIndex:(NSUInteger)arg1;
- (BOOL)hasStructuredAddress;
- (BOOL)hasMapsUrl;
- (BOOL)hasAdInfo;
- (BOOL)hasQueryRefinementString;
- (BOOL)hasRating;
- (void)setCid:(unsigned long long)arg1;
- (void)setLocationSource:(NSInteger)arg1;
- (void)setInexactPosition:(BOOL)arg1;
- (BOOL)hasStreetViewPanoId;
- (void)setUnverifiedListing:(BOOL)arg1;
- (void)setSesameEditable:(BOOL)arg1;
- (void)setSesameDetailsEditable:(BOOL)arg1;
- (BOOL)hasSesameFeatureId;
- (BOOL)hasDirectionsPlacemarkToken;
- (id)directionsPlacemarkToken;
- (void)setDirectionsPlacemarkToken:(id)arg1;
- (id)sesameFeatureId;
- (void)setSesameFeatureId:(id)arg1;
- (BOOL)hasSesameDetailsEditable;
- (BOOL)sesameDetailsEditable;
- (BOOL)hasSesameEditable;
- (BOOL)sesameEditable;
- (BOOL)hasUnverifiedListing;
- (BOOL)unverifiedListing;
- (id)streetViewPanoId;
- (void)setStreetViewPanoId:(id)arg1;
- (BOOL)hasInexactPosition;
- (BOOL)inexactPosition;
- (BOOL)hasLocationSource;
- (NSInteger)locationSource;
- (BOOL)hasCid;
- (unsigned long long)cid;
- (id)queryRefinementString;
- (void)setQueryRefinementString:(id)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (id)mapsUrl;
- (void)setMapsUrl:(id)arg1;
- (id)structuredAddress;
- (void)setStructuredAddress:(id)arg1;
- (id)kmlInfo;
- (void)setKmlInfo:(id)arg1;
- (id)attributionText;
- (void)setAttributionText:(id)arg1;
- (BOOL)hasShowIcon;
- (BOOL)showIcon;
- (id)enhancedContents;
- (void)setEnhancedContents:(id)arg1;
- (id)addressLines;
- (void)setAddressLines:(id)arg1;
- (BOOL)hasAttributionUrl;
- (id)attributionUrl;
- (void)setAttributionUrl:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)rating;
- (void)setRating:(id)arg1;

@end
