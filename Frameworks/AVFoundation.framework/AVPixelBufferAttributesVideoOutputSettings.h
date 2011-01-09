/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */



@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig>
{
}

@property(readonly) NSDictionary *pixelBufferAttributes;

+ (id)eligibleOutputSettingsDictionaryKeys;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;

- (id)initWithPixelBufferAttributes:(id)arg1 exceptionReason:(id*)arg2;
- (BOOL)isDictionaryFullyFormed;
- (BOOL)willYieldCompressedSamples;
- (id)pixelBufferAttributes;

@end
