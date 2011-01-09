/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMMapPoint;



@interface GMMLocationShiftRequest : PBRequest 
{
    GMMMapPoint *_originalPoint;
}

@property(retain) GMMMapPoint *originalPoint;


- (BOOL)readFrom:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)originalPoint;
- (void)setOriginalPoint:(id)arg1;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (NSUInteger)requestTypeCode;

@end
