/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class CPZoneBorder;



@interface CPZoneBorderIntersection : NSObject <NSCopying>
{
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } intersectionRect;
    CPZoneBorder *intersectingBorder;
    BOOL forwardVector;
    BOOL backwardVector;
}


- (void)setIntersectionRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIntersectingBorder:(id)arg1;
- (void)setForwardVector:(BOOL)arg1;
- (void)setBackwardVector:(BOOL)arg1;
- (NSInteger)comparePositionLengthwise:(id)arg1;
- (BOOL)backwardVector;
- (BOOL)forwardVector;
- (id)intersectingBorder;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })intersectionRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
