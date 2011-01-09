/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSMutableArray;



@interface MKOverlayClusterView : UIView 
{
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    } _viewsLock;
    NSMutableArray *_proxiedViews;
    struct $_713 { 
        unsigned int levelCrossFade : 1; 
        unsigned int drawingDisabled : 1; 
    } _flags;
}

@property BOOL levelCrossFade;
@property BOOL drawingEnabled;

+ (Class)layerClass;

- (void)_setNeedsDisplayForSubview:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)splitAboutView:(id)arg1;
- (void)appendCluster:(id)arg1;
- (BOOL)levelCrossFade;
- (BOOL)tiledLayer:(id)arg1 canDrawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 levelOfDetail:(NSInteger)arg3;
- (void)renderLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)setLevelCrossFade:(BOOL)arg1;
- (void)setDrawingEnabled:(BOOL)arg1;
- (BOOL)drawingEnabled;
- (void)didAddSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)setContentScaleFactor:(float)arg1;
- (BOOL)_canDrawContent;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)init;
- (void)dealloc;

@end
