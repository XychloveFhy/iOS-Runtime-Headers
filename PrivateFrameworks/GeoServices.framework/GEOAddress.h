/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;



@interface GEOAddress : PBCodable 
{
    NSMutableArray *_formattedAddressLines;
    NSMutableArray *_components;
}

@property(readonly) NSInteger formattedAddressLinesCount;
@property(readonly) NSInteger componentsCount;
@property(retain) NSMutableArray *components;
@property(retain) NSMutableArray *formattedAddressLines;


- (BOOL)readFrom:(id)arg1;
- (id)components;
- (void)setComponents:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)init;
- (void)dealloc;
- (NSInteger)formattedAddressLinesCount;
- (void)setFormattedAddressLine:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)formattedAddressLineAtIndex:(NSUInteger)arg1;
- (void)addFormattedAddressLine:(id)arg1;
- (id)formattedAddressLines;
- (void)setFormattedAddressLines:(id)arg1;
- (NSInteger)componentsCount;
- (void)setComponent:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)componentAtIndex:(NSUInteger)arg1;
- (void)addComponent:(id)arg1;
- (void)writeTo:(id)arg1;

@end
