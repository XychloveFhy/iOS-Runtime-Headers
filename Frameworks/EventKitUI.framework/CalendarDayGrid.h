/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UIView, NSTimer, UIColor, CalendarCurrentTimeMarker, NSMutableArray;



@interface CalendarDayGrid : UIView 
{
    float _timeWidth;
    unsigned int _leftBorder : 1;
    unsigned int _rightBorder : 1;
    unsigned int _drawsContent : 1;
    unsigned int _showsTimeMarker : 1;
    unsigned int _showsTimeLine : 1;
    NSInteger _selected;
    UIColor *_backgroundColor;
    CalendarCurrentTimeMarker *_timeMarker;
    NSTimer *_timeMarkerTimer;
    NSMutableArray *_leftBorderViews;
    UIView *_rightBorderView;
    NSUInteger _daysToDisplay;
    UIView *_translucentGridView;
}

+ (void)_clearCaches;
+ (id)cachedBackgroundImageForKey:(id)arg1;
+ (void)cacheBackgroundImage:(id)arg1 forKey:(id)arg2;

- (void)setShowsRightBorder:(BOOL)arg1;
- (float)widthForOccurrences;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 backgroundColor:(id)arg2 opaque:(BOOL)arg3 numberOfDaysToDisplay:(NSUInteger)arg4;
- (float)timeInset;
- (void)setDrawsContent:(BOOL)arg1;
- (void)_setMarkerTimer;
- (void)_invalidateMarkerTimer;
- (void)updateMarkerPosition;
- (void)_updateTimeMarker;
- (void)setShowsTimeLine:(BOOL)arg1;
- (void)setShowsTimeMarker:(BOOL)arg1;
- (void)setShowsLeftBorder:(BOOL)arg1;
- (BOOL)showsLeftBorder;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForStartSeconds:(NSInteger)arg1 endSeconds:(NSInteger)arg2;
- (float)timeWidth;
- (float)positionOfSecond:(NSInteger)arg1;
- (NSInteger)secondAtPosition:(float)arg1;
- (id)_generateGridImage;
- (void)setSelected:(BOOL)arg1;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)layoutSubviews;

@end
