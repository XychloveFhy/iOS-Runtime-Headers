/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVVideoCompositionCoreAnimationToolInternal;



@interface AVVideoCompositionCoreAnimationTool : NSObject 
{
    AVVideoCompositionCoreAnimationToolInternal *_videoCompositionTool;
}

+ (id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)arg1 asTrackID:(NSInteger)arg2;
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)arg1 inLayer:(id)arg2;

- (void)finalize;
- (void)dealloc;
- (id)initWithMagicTrackID:(NSInteger)arg1 animationLayer:(id)arg2 videoLayer:(id)arg3;
- (BOOL)_hasLayerAsAuxiliaryTrack;
- (id)_auxiliaryTrackLayer;
- (BOOL)_hasPostProcessingLayers;
- (id)_postProcessingRootLayer;
- (NSInteger)_auxiliaryTrackID;
- (id)_postProcessingVideoLayer;

@end
