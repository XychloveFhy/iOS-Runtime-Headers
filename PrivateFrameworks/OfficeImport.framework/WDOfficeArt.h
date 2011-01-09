/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class OADDrawable, WDCharacterProperties;



@interface WDOfficeArt : WDRun 
{
    WDCharacterProperties *mProperties;
    OADDrawable *mDrawable;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mFloating;

}

+ (NSInteger)textBoxTextTypeForRegularTextType:(NSInteger)arg1;

- (id)overrideDrawable;
- (void)clearDrawable;
- (id)imageBlipRef;
- (void)setImageBlipRef:(id)arg1;
- (id)imageData;
- (void)setTextType:(NSInteger)arg1 recursivelyToDrawable:(id)arg2;
- (void)checkForFloating:(id)arg1;
- (void)clearProperties;
- (void)propagateTextTypeToDrawables;
- (void)setFloating:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (id)initWithParagraph:(id)arg1;
- (void)setDrawable:(id)arg1;
- (BOOL)isDrawableOverridden;
- (id)drawable;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isFloating;
     /* Encoded args for previous method: B8@0:4 */

- (NSInteger)runType;
- (id)imageName;
- (void)dealloc;
- (id)properties;
- (void)setProperties:(id)arg1;

@end
