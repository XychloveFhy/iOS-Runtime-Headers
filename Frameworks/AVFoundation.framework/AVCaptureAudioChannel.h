/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureAudioChannelInternal;



@interface AVCaptureAudioChannel : NSObject 
{
    AVCaptureAudioChannelInternal *_internal;
}

@property(readonly) float averagePowerLevel;
@property(readonly) float peakHoldLevel;


- (void)invalidate;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (float)averagePowerLevel;
- (float)peakHoldLevel;

@end
