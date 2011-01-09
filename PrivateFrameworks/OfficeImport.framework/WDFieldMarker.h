/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDCharacterProperties;



@interface WDFieldMarker : WDRun 
{
    WDCharacterProperties *mProperties;
    NSInteger mFieldPosition;
    NSInteger mMarkerType;
    unsigned char mFieldType;
    unsigned int mZombieEmbed : 1;
    unsigned int mResultDirty : 1;
    unsigned int mResultEdited : 1;
    unsigned int mLocked : 1;
    unsigned int mPrivateResult : 1;
    unsigned int mNested : 1;
    unsigned int mHasSeparator : 1;
}


- (long)fieldPosition;
- (void)setFieldPosition:(long)arg1;
- (BOOL)zombieEmbed;
- (void)setZombieEmbed:(BOOL)arg1;
- (BOOL)resultDirty;
- (void)setResultDirty:(BOOL)arg1;
- (BOOL)resultEdited;
- (void)setResultEdited:(BOOL)arg1;
- (BOOL)locked;
- (BOOL)privateResult;
- (void)setPrivateResult:(BOOL)arg1;
- (BOOL)nested;
- (void)setNested:(BOOL)arg1;
- (BOOL)hasSeparator;
- (void)setHasSeparator:(BOOL)arg1;
- (void)clearProperties;
- (void)setFieldType:(unsigned char)arg1;
- (void)setFieldMarkerType:(NSInteger)arg1;
- (id)initWithParagraph:(id)arg1;
- (NSInteger)runType;
- (unsigned char)fieldType;
- (NSInteger)fieldMarkerType;
- (void)setLocked:(BOOL)arg1;
- (void)dealloc;
- (id)properties;

@end
