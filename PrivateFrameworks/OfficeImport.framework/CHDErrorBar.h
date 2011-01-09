/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CHDChart, CHDData, OADGraphicProperties;



@interface CHDErrorBar : NSObject 
{
    CHDChart *mChart;
    double mValue;
    NSInteger mType;
    NSInteger mValueType;
    NSInteger mDirection;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mNoEndCap;

    CHDData *mMinusValues;
    CHDData *mPlusValues;
    OADGraphicProperties *mGraphicProperties;
}

+ (id)errorBarWithChart:(id)arg1;

- (NSInteger)valueType;
- (void)setValueType:(NSInteger)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isNoEndCap;
     /* Encoded args for previous method: B8@0:4 */

- (id)minusValues;
- (id)plusValues;
- (void)setNoEndCap:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (void)setPlusValues:(id)arg1;
- (void)setMinusValues:(id)arg1;
- (void)setGraphicProperties:(id)arg1;
- (id)initWithChart:(id)arg1;
- (id)graphicProperties;
- (NSInteger)direction;
- (NSInteger)type;
- (double)value;
- (void)setValue:(double)arg1;
- (void)setDirection:(NSInteger)arg1;
- (void)setType:(NSInteger)arg1;
- (void)dealloc;

@end
