/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */



@interface CAKeyframeAnimation : CAPropertyAnimation 
{
}

@property(copy) NSArray *values;
@property CGPath *path;
@property(copy) NSArray *keyTimes;
@property(copy) NSArray *timingFunctions;
@property(copy) NSString *calculationMode;
@property(copy) NSArray *tensionValues;
@property(copy) NSArray *continuityValues;
@property(copy) NSArray *biasValues;
@property(copy) NSString *rotationMode;


- (id)keyTimes;
- (id)timingFunctions;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setTimingFunctions:(id)arg1;
- (void)setKeyTimes:(id)arg1;
- (id)values;
- (void)setValues:(id)arg1;
- (void)setCalculationMode:(id)arg1;
- (struct CGPath { }*)path;
- (id)calculationMode;
- (id)tensionValues;
- (void)setTensionValues:(id)arg1;
- (id)continuityValues;
- (void)setContinuityValues:(id)arg1;
- (id)biasValues;
- (void)setBiasValues:(id)arg1;
- (id)rotationMode;
- (void)setRotationMode:(id)arg1;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (struct Animation { int (**x1)(); struct Atomic { struct { NSInteger x_1_2_1; } x_2_1_1; } x2; float x3; struct Timing {} *x4; struct Vector {} *x5; void *x6; NSUInteger x7; NSUInteger x8; }*)_copyRenderAnimationForLayer:(id)arg1;
- (void)CA_prepareRenderValue;

@end
