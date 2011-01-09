/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADErrorInfo;



@interface ADAdSpecificationResponse : PBCodable 
{
    ADErrorInfo *_errorInfo;
}

@property(readonly) BOOL hasErrorInfo;
@property(retain) ADErrorInfo *errorInfo;


- (BOOL)hasErrorInfo;
- (id)errorInfo;
- (void)setErrorInfo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)writeTo:(id)arg1;

@end
