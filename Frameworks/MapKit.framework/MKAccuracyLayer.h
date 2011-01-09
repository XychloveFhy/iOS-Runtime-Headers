/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */



@interface MKAccuracyLayer : CALayer 
{
}

@property CGColor *fillColor;
@property CGColor *strokeColor;
@property float lineWidth;
@property float accuracy;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForAccuracy:(float)arg1;
+ (BOOL)needsDisplayForKey:(id)arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accuracyRectForPosition:(struct CGPoint { float x1; float x2; })arg1 accuracy:(float)arg2;
+ (id)defaultValueForKey:(id)arg1;

- (BOOL)isHoveringAnimation:(id*)arg1;
- (BOOL)isAccuracyMinBounded:(float)arg1;
- (BOOL)isAccuracyMaxBounded:(float)arg1;
- (BOOL)isAccuracyBounded:(float)arg1;
- (BOOL)sizeToFitAccuracy:(float)arg1 animated:(BOOL)arg2;
- (BOOL)sizeToFitAccuracy;
- (void)drawInContext:(struct CGContext { }*)arg1;

@end
