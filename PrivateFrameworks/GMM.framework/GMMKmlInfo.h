/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMDocumentInfo;



@interface GMMKmlInfo : PBCodable 
{
    GMMDocumentInfo *_sourceDocument;
    BOOL _isUserCreated;
    BOOL _hasIsUserCreated;
}

@property(readonly) BOOL hasSourceDocument;
@property(readonly) BOOL hasIsUserCreated;
@property BOOL isUserCreated;
@property(retain) GMMDocumentInfo *sourceDocument;


- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)hasSourceDocument;
- (void)setIsUserCreated:(BOOL)arg1;
- (BOOL)hasIsUserCreated;
- (BOOL)isUserCreated;
- (id)sourceDocument;
- (void)setSourceDocument:(id)arg1;
- (void)writeTo:(id)arg1;

@end
