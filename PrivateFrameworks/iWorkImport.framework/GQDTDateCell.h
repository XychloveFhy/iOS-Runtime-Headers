/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDTComputedFormatSpec;



@interface GQDTDateCell : GQDTCell 
{
    struct __CFDate { } *mDate;
    GQDTComputedFormatSpec *mComputedFormat;
}


- (NSInteger)readAttributesForDateCell:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (struct __CFString { }*)getDateFormat;
- (struct __CFString { }*)createStringValue;
- (struct __CFDate { }*)date;
- (void)dealloc;

@end
