/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, GMMMapPoint;



@interface GMMLocationShiftResponse : PBCodable 
{
    NSInteger _status;
    NSMutableArray *_coefficients;
    GMMMapPoint *_originalPoint;
    NSInteger _validSquareLength;
    BOOL _hasValidSquareLength;
    NSInteger _cacheSquareLength;
    BOOL _hasCacheSquareLength;
}

@property(readonly) NSInteger coefficientsCount;
@property(readonly) BOOL hasOriginalPoint;
@property(readonly) BOOL hasCacheSquareLength;
@property NSInteger cacheSquareLength;
@property(readonly) BOOL hasValidSquareLength;
@property NSInteger validSquareLength;
@property(retain) GMMMapPoint *originalPoint;
@property(retain) NSMutableArray *coefficients;
@property NSInteger status;


- (void)setStatus:(NSInteger)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (NSInteger)status;
- (NSInteger)coefficientsCount;
- (void)setCoefficient:(long long)arg1 atIndex:(NSUInteger)arg2;
- (long long)coefficientAtIndex:(NSUInteger)arg1;
- (void)addCoefficient:(long long)arg1;
- (BOOL)hasOriginalPoint;
- (void)setValidSquareLength:(NSInteger)arg1;
- (void)setCacheSquareLength:(NSInteger)arg1;
- (BOOL)hasCacheSquareLength;
- (NSInteger)cacheSquareLength;
- (BOOL)hasValidSquareLength;
- (NSInteger)validSquareLength;
- (id)coefficients;
- (void)setCoefficients:(id)arg1;
- (id)originalPoint;
- (void)setOriginalPoint:(id)arg1;
- (void)writeTo:(id)arg1;

@end
