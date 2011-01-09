/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSData;



@interface ADLogImpressionRequest : PBRequest 
{
    NSInteger _impressionSequence;
    BOOL _hasImpressionSequence;
    NSData *_impressionIdentifierData;
}

@property(readonly) BOOL hasImpressionIdentifierData;
@property(retain) NSData *impressionIdentifierData;
@property(readonly) BOOL hasImpressionSequence;
@property NSInteger impressionSequence;


- (void)setImpressionSequence:(NSInteger)arg1;
- (BOOL)hasImpressionSequence;
- (NSInteger)impressionSequence;
- (BOOL)hasImpressionIdentifierData;
- (id)impressionIdentifierData;
- (void)setImpressionIdentifierData:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (NSUInteger)requestTypeCode;

@end
