/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIAccelerometerDelegate>;



@interface UIAccelerometer : NSObject 
{
    double _updateInterval;
    <UIAccelerometerDelegate> *_delegate;
    struct { 
        unsigned int delegateDidAccelerate : 1; 
        unsigned int reserved : 31; 
    } _accelerometerFlags;
}

@property <UIAccelerometerDelegate> *delegate;
@property double updateInterval;

+ (id)sharedAccelerometer;

- (double)updateInterval;
- (void)setUpdateInterval:(double)arg1;
- (void)_acceleratedInX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
