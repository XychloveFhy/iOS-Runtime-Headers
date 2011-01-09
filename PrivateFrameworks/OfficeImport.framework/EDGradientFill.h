/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary;



@interface EDGradientFill : EDFill 
{
    NSInteger mType;
    NSMutableDictionary *mStops;
    double mDegree;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mFocusRect;
}

+ (id)gradientWithType:(NSInteger)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8;
+ (id)gradientWithType:(NSInteger)arg1 degree:(double)arg2 focusRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 stops:(id)arg4 resources:(id)arg5;

- (BOOL)isEqualToGradientFill:(id)arg1;
- (double)degree;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })focusRect;
- (id)colorForStopAtPosition:(id)arg1;
- (id)initWithType:(NSInteger)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8;
- (id)initWithType:(NSInteger)arg1 degree:(double)arg2 focusRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 stops:(id)arg4 resources:(id)arg5;
- (void)setDegree:(double)arg1;
- (void)setFocusRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setStopColor:(id)arg1 atPosition:(id)arg2;
- (id)initWithResources:(id)arg1;
- (id)stops;
- (void)setStops:(id)arg1;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isEmpty;
     /* Encoded args for previous method: B8@0:4 */

- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;

@end
