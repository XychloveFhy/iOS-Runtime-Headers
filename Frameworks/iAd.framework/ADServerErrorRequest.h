/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADAdResponse;



@interface ADServerErrorRequest : PBRequest 
{
    ADAdResponse *_badResponse;
    NSInteger _errorCode;
    BOOL _hasErrorCode;
}

@property(readonly) BOOL hasBadResponse;
@property(readonly) BOOL hasErrorCode;
@property NSInteger errorCode;
@property(retain) ADAdResponse *badResponse;


- (BOOL)hasBadResponse;
- (id)badResponse;
- (BOOL)hasErrorCode;
- (void)setErrorCode:(NSInteger)arg1;
- (void)setBadResponse:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (NSInteger)errorCode;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (NSUInteger)requestTypeCode;

@end
