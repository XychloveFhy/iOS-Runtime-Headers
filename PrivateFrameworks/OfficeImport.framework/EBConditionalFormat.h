/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface EBConditionalFormat : NSObject 
{
}

+ (void)readXlConditionalFormat:(struct XlConditionalFormat { int (**x1)(); struct CsSimpleHeapVector<XlRecord> { struct ChVector<XlRecord*> { struct XlRecord {} **x_1_2_1; struct XlRecord {} **x_1_2_2; NSUInteger x_1_2_3; NSUInteger x_1_2_4; NSUInteger x_1_2_5; } x_2_1_1; } x2; struct XlCondFmt {} *x3; }*)arg1 toEDConditionalFormatting:(id)arg2 state:(id)arg3;
+ (void)convertTokensToSharedTokens:(id)arg1;
+ (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)validXlCf:(struct XlCf { int (**x1)(); struct XlHeader { NSUInteger x_2_1_1; short x_2_1_2; unsigned char x_2_1_3; } x2; NSInteger x3; NSInteger x4; short x5; short x6; struct XlDXf {} *x7; char *x8; char *x9; }*)arg1;
     /* Encoded args for previous method: B12@0:4^{XlCf=^^?{XlHeader=IsC}iiss^{XlDXf}**}8 */

+ (NSInteger)convertEDConditionalFmtTypeEnumToXl:(NSInteger)arg1;
+ (NSInteger)convertXlConditionalFmtTypeEnumToED:(NSInteger)arg1;
+ (NSInteger)convertXlConditionalFmtOperatorEnumToED:(NSInteger)arg1;
+ (NSInteger)convertEDConditionalFmtOperatorEnumToXl:(NSInteger)arg1;


@end
