/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTableCellStyle, OADTableTextStyle;



@interface OADTablePartStyle : NSObject 
{
    OADTableTextStyle *mTextStyle;
    OADTableCellStyle *mCellStyle;
}

+ (id)defaultStyle;

- (void)setTextStyle:(id)arg1;
- (void)setCellStyle:(id)arg1;
- (id)shallowCopy;
- (void)applyOverridesFrom:(id)arg1;
- (id)textStyle;
- (id)cellStyle;
- (void)dealloc;

@end
