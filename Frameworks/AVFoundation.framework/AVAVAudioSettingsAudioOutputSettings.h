/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */



@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings <AVReencodedAudioSettingsForFig, AVDecodedAudioSettingsForFig>
{
    BOOL _dictionaryWasFullyFormed;
}

+ (id)eligibleOutputSettingsDictionaryKeys;
+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;

- (id)initWithAVAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
- (BOOL)isDictionaryFullyFormed;
- (BOOL)willYieldCompressedSamples;
- (void)getAudioStreamBasicDescription:(struct AudioStreamBasicDescription { double x1; NSUInteger x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; NSUInteger x6; NSUInteger x7; NSUInteger x8; NSUInteger x9; }*)arg1 forAudioFileTypeID:(unsigned long)arg2 sourceFormatDescription:(struct opaqueCMFormatDescription { }*)arg3;
- (struct AudioChannelLayout { NSUInteger x1; NSUInteger x2; NSUInteger x3; struct AudioChannelDescription { NSUInteger x_4_1_1; NSUInteger x_4_1_2; float x_4_1_3[3]; } x4[1]; }*)copyAudioChannelLayoutAndSize:(NSUInteger*)arg1;
- (id)audioOptions;

@end
