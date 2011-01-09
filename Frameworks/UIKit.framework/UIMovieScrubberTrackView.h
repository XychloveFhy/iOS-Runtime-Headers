/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIMovieScrubberTrackOverlayView, <UIMovieScrubberTrackViewDataSource>, <UIMovieScrubberTrackViewDelegate>, UIView, NSDictionary, NSMutableDictionary, NSArray;



@interface UIMovieScrubberTrackView : UIView 
{
    <UIMovieScrubberTrackViewDataSource> *_dataSource;
    <UIMovieScrubberTrackViewDelegate> *_delegate;
    NSArray *_summaryThumbnailViews;
    NSArray *_summaryThumbnailTimestamps;
    NSArray *_summaryThumbnailChildTimestamps;
    NSDictionary *_thumbnailStartXValues;
    NSDictionary *_childThumbnailViews;
    NSMutableDictionary *_thumbnailViews;
    NSArray *_timestamps;
    UIMovieScrubberTrackOverlayView *_overlayView;
    UIView *_maskView;
    UIView *_maskContainerView;
    struct CGSize { 
        float width; 
        float height; 
    } _thumbnailSize;
    float _zoomOriginXDelta;
    float _zoomWidthDelta;
    float _unclampedZoomWidthDelta;
    float _zoomAnimationDuration;
    double _duration;
    double _value;
    double _startValue;
    double _endValue;
    struct { 
        unsigned int delegateSizeOriginDelta : 1; 
        unsigned int delegateDidExpand : 1; 
        unsigned int delegateDidCollapse : 1; 
        unsigned int delegateWillRequestThumbs : 1; 
        unsigned int delegateDidRequestThumbs : 1; 
        unsigned int delegateZoomAnimationDuration : 1; 
        unsigned int delegateZoomAnimationDelay : 1; 
        unsigned int needsReload : 1; 
        unsigned int editing : 1; 
        NSUInteger editingHandle; 
        unsigned int zoomIsDisabled : 1; 
    } _trackFlags;
}

@property <UIMovieScrubberTrackViewDataSource> *dataSource;
@property <UIMovieScrubberTrackViewDelegate> *delegate;


- (void)setThumbnailImage:(struct CGImage { }*)arg1 forTimestamp:(id)arg2;
- (id)_createImageViewForTimestamp:(id)arg1;
- (void)clear;
- (void)_reallyReloadData;
- (void)setZoomAnimationDuration:(float)arg1;
- (float)zoomAnimationDuration;
- (BOOL)zoomAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setOverlayViewIsZoomed:(BOOL)arg1 minValue:(float)arg2 maxValue:(float)arg3;
- (void)unzoom;
- (void)_zoomAnimation:(id)arg1 didFinish:(id)arg2 context:(void*)arg3;
- (void)_unzoomAnimation:(id)arg1 didFinish:(id)arg2 context:(void*)arg3;
- (void)animateFillFramesAway;
- (void)setStartValue:(double)arg1;
- (void)setEndValue:(double)arg1;
- (void)setValue:(double)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)reloadData;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)dataSource;

@end
