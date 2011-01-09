/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSData, NSString;



@interface ADLogAdEventRequest : PBRequest 
{
    NSData *_impressionIdentifierData;
    NSInteger _impressionSequence;
    BOOL _hasImpressionSequence;
    NSString *_context;
    NSInteger _sourceType;
}

@property(readonly) BOOL hasContext;
@property NSInteger sourceType;
@property(retain) NSString *context;
@property(readonly) BOOL hasImpressionSequence;
@property NSInteger impressionSequence;
@property(retain) NSData *impressionIdentifierData;


- (BOOL)hasContext;
- (void)setImpressionSequence:(NSInteger)arg1;
- (BOOL)hasImpressionSequence;
- (NSInteger)impressionSequence;
- (id)impressionIdentifierData;
- (void)setImpressionIdentifierData:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setSourceType:(NSInteger)arg1;
- (NSInteger)sourceType;
- (void)setContext:(id)arg1;
- (id)context;
- (id)description;
- (id)init;
- (void)dealloc;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (NSUInteger)requestTypeCode;

@end
