/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSEnumerator, NSString;



@interface AVAssetTrackEnumerator : NSEnumerator 
{
    NSString *_mediaType;
    NSString *_mediaCharacteristic;
    NSEnumerator *_enumerator;
}

+ (id)trackEnumeratorWithAsset:(id)arg1;

- (id)nextObject;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1 mediaType:(id)arg2;
- (id)initWithAsset:(id)arg1 mediaCharacteristic:(id)arg2;
- (void)setMediaType:(id)arg1;
- (void)setMediaCharacteristic:(id)arg1;

@end
