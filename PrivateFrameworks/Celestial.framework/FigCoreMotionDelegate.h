/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */



@interface FigCoreMotionDelegate : NSObject 
{
    struct __CLClient { } *coreLocationClient;
    struct __IOHIDEventSystemClient { } *eventSystemClient;
    struct __CFRunLoop { } *runLoop;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } ringMutex;
    BOOL manageAccel;
    NSInteger accelRingIndex;
    float accelRingX[64];
    float accelRingY[64];
    float accelRingZ[64];
    double accelRingTime[64];
    BOOL manageRotation;
    NSInteger rotRingIndex;
    float rotRingX[64];
    float rotRingY[64];
    float rotRingZ[64];
    double rotRingTime[64];
    BOOL manageAttitude;
    NSInteger attRingIndex;
    float attRingRoll[64];
    float attRingPitch[64];
    float attRingYaw[64];
    double attRingTime[64];
}


- (id)init;
- (void)dealloc;
- (void)deferOnRunloop_initManagerUsingCL;
- (void)deferOnRunloop_initManagerUsingIOHID;
- (void)deferOnRunloop_stopEvents;
- (id)initWithOptions:(BOOL)arg1 enableRotation:(BOOL)arg2 enableAttitude:(BOOL)arg3;
- (void)didUpdateAcceleration;
- (void)didUpdateAccelerationWithEventInfo:(struct { double x1; double x2; double x3; double x4; }*)arg1;
- (id)copyAccelerationData;
- (void)didUpdateRotationRate;
- (void)getRotation:(float*)arg1 :(float*)arg2 :(float*)arg3 forTimeStamp:(double)arg4;
- (id)copyRotationData;
- (void)didUpdateAttitude;
- (void)getAttitude:(float*)arg1 :(float*)arg2 :(float*)arg3 forTimeStamp:(double)arg4;
- (id)copyAttitudeData;
- (void)getVector:(float*)arg1 :(float*)arg2 :(float*)arg3 forTimeStamp:(double)arg4;

@end
