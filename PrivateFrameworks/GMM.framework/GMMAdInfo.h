/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;



@interface GMMAdInfo : PBCodable 
{
    NSString *_uniqueId;
    NSString *_headline;
    NSString *_creativeLine1;
    NSString *_creativeLine2;
    NSString *_linkText;
    NSString *_linkUrl;
}

@property(readonly) BOOL hasHeadline;
@property(readonly) BOOL hasCreativeLine1;
@property(readonly) BOOL hasCreativeLine2;
@property(readonly) BOOL hasLinkText;
@property(readonly) BOOL hasLinkUrl;
@property(retain) NSString *linkUrl;
@property(retain) NSString *linkText;
@property(retain) NSString *creativeLine2;
@property(retain) NSString *creativeLine1;
@property(retain) NSString *headline;
@property(retain) NSString *uniqueId;


- (BOOL)readFrom:(id)arg1;
- (id)uniqueId;
- (id)dictionaryRepresentation;
- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)hasHeadline;
- (BOOL)hasCreativeLine1;
- (BOOL)hasCreativeLine2;
- (BOOL)hasLinkUrl;
- (id)linkUrl;
- (void)setLinkUrl:(id)arg1;
- (id)creativeLine2;
- (void)setCreativeLine2:(id)arg1;
- (id)creativeLine1;
- (void)setCreativeLine1:(id)arg1;
- (id)headline;
- (void)setHeadline:(id)arg1;
- (void)setUniqueId:(id)arg1;
- (BOOL)hasLinkText;
- (id)linkText;
- (void)setLinkText:(id)arg1;
- (void)writeTo:(id)arg1;

@end
