/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */



@interface GMMDateTime : PBCodable 
{
    long long _secsSinceEpoch;
    NSInteger _timeZoneOffsetMin;
    BOOL _hasTimeZoneOffsetMin;
}

@property(readonly) BOOL hasTimeZoneOffsetMin;
@property NSInteger timeZoneOffsetMin;
@property long long secsSinceEpoch;

+ (id)date;

- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)setTimeZoneOffsetMin:(NSInteger)arg1;
- (BOOL)hasTimeZoneOffsetMin;
- (NSInteger)timeZoneOffsetMin;
- (void)setSecsSinceEpoch:(long long)arg1;
- (void)writeTo:(id)arg1;
- (long long)secsSinceEpoch;
- (id)calendarDate;

@end
