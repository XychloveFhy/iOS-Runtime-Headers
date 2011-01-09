/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;



@interface LBSGAppProfile : PBCodable 
{
    NSString *_appName;
    NSString *_appKey;
    NSInteger _requestType;
    BOOL _hasRequestType;
    NSInteger _searchType;
    BOOL _hasSearchType;
    NSString *_searchTerm;
    NSInteger _zoomLevel;
    BOOL _hasZoomLevel;
}

@property(readonly) BOOL hasAppName;
@property(readonly) BOOL hasAppKey;
@property(readonly) BOOL hasSearchTerm;
@property(readonly) BOOL hasZoomLevel;
@property NSInteger zoomLevel;
@property(retain) NSString *searchTerm;
@property(readonly) BOOL hasSearchType;
@property NSInteger searchType;
@property(readonly) BOOL hasRequestType;
@property NSInteger requestType;
@property(retain) NSString *appKey;
@property(retain) NSString *appName;


- (NSInteger)requestType;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)hasAppName;
- (BOOL)hasAppKey;
- (void)setRequestType:(NSInteger)arg1;
- (void)setSearchType:(NSInteger)arg1;
- (BOOL)hasSearchTerm;
- (id)searchTerm;
- (void)setSearchTerm:(id)arg1;
- (BOOL)hasSearchType;
- (NSInteger)searchType;
- (BOOL)hasRequestType;
- (id)appKey;
- (void)setAppKey:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (void)setZoomLevel:(NSInteger)arg1;
- (BOOL)hasZoomLevel;
- (NSInteger)zoomLevel;
- (void)writeTo:(id)arg1;

@end
