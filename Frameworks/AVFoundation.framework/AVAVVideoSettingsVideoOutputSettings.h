/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */



@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig>
{
    BOOL _dictionaryWasFullyFormed;
}

@property(readonly) NSDictionary *videoCompressionProperties;
@property(readonly) void *videoEncoderSpecification;
@property(readonly) NSUInteger videoCodecType;
@property(readonly) NSDictionary *videoScalingProperties;
@property(readonly) NSInteger height;
@property(readonly) NSInteger width;

+ (id)eligibleOutputSettingsDictionaryKeys;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;

- (NSInteger)height;
- (NSInteger)width;
- (id)initWithAVVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
- (BOOL)isDictionaryFullyFormed;
- (BOOL)willYieldCompressedSamples;
- (unsigned long)videoCodecType;
- (id)videoScalingProperties;
- (void*)videoEncoderSpecification;
- (id)videoCompressionProperties;

@end
