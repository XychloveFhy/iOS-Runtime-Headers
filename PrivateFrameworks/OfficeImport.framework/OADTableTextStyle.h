/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADFontReference, OADColor;



@interface OADTableTextStyle : NSObject 
{
    OADFontReference *mFontReference;
    OADColor *mColor;
    NSInteger mBold;
    NSInteger mItalic;
}

+ (id)defaultColor;
+ (id)defaultFontReference;
+ (NSInteger)defaultBold;
+ (NSInteger)defaultItalic;
+ (id)defaultStyle;

- (void)setBold:(NSInteger)arg1;
- (void)setItalic:(NSInteger)arg1;
- (id)shallowCopy;
- (void)applyOverridesFrom:(id)arg1;
- (id)fontReference;
- (void)setFontReference:(id)arg1;
- (NSInteger)bold;
- (NSInteger)italic;
- (id)color;
- (void)setColor:(id)arg1;
- (id)init;
- (void)dealloc;

@end
