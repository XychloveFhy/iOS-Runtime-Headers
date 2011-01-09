/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSDate, NSTimer, UILabel;



@interface PLCameraElapsedTimeView : UIImageView 
{
    UILabel *_hours;
    UILabel *_minutes;
    UILabel *_seconds;
    NSTimer *_timer;
    NSDate *_startTime;
    BOOL _autorotationEnabled;
    BOOL _watchingOrientationChanges;
    NSInteger _orientation;
}

@property BOOL autorotationEnabled;

+ (void)_initializeSafeCategory;

- (BOOL)autorotationEnabled;
- (void)setAutorotationEnabled:(BOOL)arg1;
- (void)_setDeviceOrientation:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)_startWatchingDeviceOrientationChanges;
- (void)_stopWatchingDeviceOrientationChanges;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)stopTimer;
- (void)_update:(id)arg1;
- (void)startTimer;
- (void)setOrientation:(NSInteger)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;

@end
