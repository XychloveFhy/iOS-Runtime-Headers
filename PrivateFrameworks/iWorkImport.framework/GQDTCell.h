/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDSStyle;



@interface GQDTCell : NSObject 
{
    unsigned short mColumnIndex;
    unsigned short mRowIndex;
    unsigned short mColumnSpan;
    unsigned short mRowSpan;
    GQDSStyle *mStyle;
}


- (unsigned short)rowSpan;
- (unsigned short)rowIndex;
- (NSInteger)readBaseAttributesForBaseCell:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (void)incrementColumnSpan;
- (NSInteger)readAttributesForBaseCell:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (NSInteger)readAttributesForBaseTabularCell:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (unsigned short)columnIndex;
- (void)setCellStyle:(id)arg1;
- (id)cellStyle;
- (unsigned short)columnSpan;
- (void)dealloc;

@end
