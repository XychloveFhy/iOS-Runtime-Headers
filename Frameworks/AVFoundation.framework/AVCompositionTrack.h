/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCompositionTrackInternal;



@interface AVCompositionTrack : AVAssetTrack 
{
    AVCompositionTrackInternal *_priv;
}

@property(copy,readonly) NSArray *segments;


- (void)finalize;
- (void)dealloc;
- (id)segments;
- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (id)_initWithAsset:(id)arg1 trackID:(NSInteger)arg2 trackIndex:(long)arg3;

@end
