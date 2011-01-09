/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSData;



@interface GMMTile : PBCodable 
{
    NSInteger _tileXIndex;
    NSInteger _tileYIndex;
    NSData *_tileData;
}

@property(retain) NSData *tileData;
@property NSInteger tileYIndex;
@property NSInteger tileXIndex;

+ (void*)createImageRefFromTileData:(id)arg1 isCompact:(BOOL)arg2;
+ (void*)createImageRefFromTileData:(const char *)arg1 length:(unsigned long)arg2;

- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)tileData;
- (void)setTileData:(id)arg1;
- (NSInteger)tileYIndex;
- (void)setTileYIndex:(NSInteger)arg1;
- (NSInteger)tileXIndex;
- (void)setTileXIndex:(NSInteger)arg1;
- (void)writeTo:(id)arg1;

@end
