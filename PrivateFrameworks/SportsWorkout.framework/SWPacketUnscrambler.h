/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */



@interface SWPacketUnscrambler : NSObject 
{
    struct IapSimpleRemoteButtonState { 
        NSUInteger buttonStatus; 
    } m_ButtonState[135];
}


- (void)_descramblePayload:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (unsigned char)_getBlanSrcFlags:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (unsigned char)_getBlanSrcTypeLen:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (NSUInteger)_getBlanSrcType:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (NSUInteger)_getBlanSrcAddr:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (unsigned char)_getBlanDstFlags:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (unsigned char)_getBlanDstTypeLen:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (NSUInteger)_getBlanDstType:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (unsigned char)_getBlanSrcAddrLen:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (NSUInteger)_getBlanDstAddr:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (unsigned char)_getBlanTimingByte:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (unsigned char)_getBlanDstAddrLen:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (unsigned char)_getBlanPayloadLen:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (char *)_getBlanPayloadPtr:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (id)_handleButtonsPressedForCommandId:(NSInteger)arg1 newButtonStatus:(NSUInteger)arg2;
- (id)buttonStatesForDataFrame:(id)arg1;
- (id)unscrambleRunSensorDataFrame:(id)arg1;
- (id)sourceTypeForBlanPayload:(id)arg1;
- (id)dataFrameForBlanPayload:(id)arg1 radioId:(NSUInteger*)arg2;
- (id)payloadForDataFrame:(id)arg1;

@end
