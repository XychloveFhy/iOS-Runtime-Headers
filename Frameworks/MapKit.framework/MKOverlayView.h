/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKOverlay>;



@interface MKOverlayView : UIView 
{
    <MKOverlay> *_overlay;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    } _boundingMapRect;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _mapTransform;
    id _geometryDelegate;
    id _canDrawCache;
    double _lastTile;
    struct __CFRunLoopTimer { } *_scheduledScaleTimer;
    struct $_721 { 
        unsigned int keepAlive : 1; 
        unsigned int levelCrossFade : 1; 
        unsigned int drawingDisabled : 1; 
        unsigned int usesTiledLayer : 1; 
    } _flags;
}

@property(readonly) <MKOverlay> *overlay;

+ (BOOL)_useMiniTiledLayer;
+ (Class)layerClass;

- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })_miniLayerRectForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithOverlay:(id)arg1;
- (struct CGPoint { float x1; float x2; })pointForMapPoint:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })mapPointForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)canDrawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2;
- (void)drawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2 inContext:(struct CGContext { }*)arg3;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2;
- (void)_cancelScheduledScaleTimer;
- (void)_scheduledScaleTimerFired;
- (void)set_boundingMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_visibleMapRect;
- (void)set_geometryDelegate:(id)arg1;
- (void)set_keepAlive:(BOOL)arg1;
- (BOOL)_keepAlive;
- (NSUInteger)_prefetchedTiles;
- (struct { double x1; double x2; })_originMapPoint;
- (void)_displayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2;
- (void)_displayInMapRectObj:(id)arg1 zoomScaleObj:(id)arg2 flush:(id)arg3;
- (void)_scheduleDisplayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2 preFlush:(BOOL)arg3 inBackground:(BOOL)arg4;
- (BOOL)_levelCrossFade;
- (void)set_levelCrossFade:(BOOL)arg1;
- (BOOL)_drawingEnabled;
- (BOOL)_cachingCanDrawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2;
- (id)overlay;
- (id)_canDrawCache;
- (id)_geometryDelegate;
- (BOOL)tiledLayer:(id)arg1 canDrawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 levelOfDetail:(NSInteger)arg3;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_boundingMapRect;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })mapTransform;
- (void)set_prefetchedTiles:(NSUInteger)arg1;
- (void)_setZoomScale:(float)arg1;
- (void)_scheduleSetZoomScale;
- (void)_visibleRectChanged;
- (void)_scheduleVisibleRectChanged;
- (void)set_drawingEnabled:(BOOL)arg1;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_invalidateTilesInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMapTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (double)_edgePadding;
- (void)setContentScaleFactor:(float)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_canDrawContent;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)setNeedsDisplay;
- (void)dealloc;

@end
