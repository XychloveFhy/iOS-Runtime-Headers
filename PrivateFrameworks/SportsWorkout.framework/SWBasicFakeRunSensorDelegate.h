/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSTimer;



@interface SWBasicFakeRunSensorDelegate : NSObject <SWFakeRunSensorDelegate>
{
    NSTimer *_packetTimer;
    BOOL _firstPacketDelivered;
    unsigned char _payload[28];
    struct SDARunState { 
        NSUInteger sdaContactTime256X; 
        NSUInteger sdaContactTimeDelta256X; 
        NSUInteger sdaRunStepCnt; 
        NSUInteger sdaRunStepCntDelta; 
        NSUInteger sdaRunTstcCnt; 
        NSUInteger sdaRunTstcCntDelta; 
        NSUInteger sdaRunContactTimeMin256X; 
        NSUInteger sdaRunContactTimeMax256X; 
    } _runState;
}


- (id)init;
- (void)dealloc;
- (NSUInteger)remainingBatteryLifetimeInHoursForFakeSensor:(id)arg1;
- (void)beginLinkingForFakeSensor:(id)arg1;
- (void)cancelLinkingForFakeSensor:(id)arg1;
- (void)beginSearchingForFakeSensor:(id)arg1;
- (void)cancelSearchingForFakeSensor:(id)arg1;
- (void)_schedulePacketTimerForFakeSensor:(id)arg1;
- (void)_updatePayload;
- (void)_fakeNextPacketForTimer:(id)arg1;

@end
