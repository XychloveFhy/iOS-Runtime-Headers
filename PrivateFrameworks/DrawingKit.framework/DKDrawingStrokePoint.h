/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
 */

@interface DKDrawingStrokePoint : NSObject <NSCopying> {
    float  _force;
    struct CGPoint { 
        float x; 
        float y; 
    }  _location;
    float  _velocity;
}

@property (nonatomic) float force;
@property (nonatomic) struct CGPoint { float x1; float x2; } location;
@property (nonatomic) float velocity;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (float)force;
- (id)init;
- (struct CGPoint { float x1; float x2; })location;
- (void)setForce:(float)arg1;
- (void)setLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setVelocity:(float)arg1;
- (float)velocity;

@end