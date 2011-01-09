/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSMutableArray;



@interface SWFastestDistanceWindowObserver : NSObject <SWRunWorkoutObserver>
{
    float _distanceWindow;
    NSMutableArray *_snapshots;
}


- (void)dealloc;
- (id)initWithDistanceWindowInMiles:(float)arg1;
- (id)fastestTimeForDistanceInSeconds;
- (void)observeRunWorkoutControllerDataChange:(id)arg1 elapsedTime:(NSUInteger)arg2 pace:(float)arg3 distance:(float)arg4 calories:(float)arg5 location:(id)arg6;
- (void)observeRunWorkoutStateChange:(id)arg1 oldState:(id)arg2 newState:(id)arg3;
- (void)observeRunWorkoutUserEvent:(id)arg1 userEvent:(id)arg2;

@end
