/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVSynchronizedLayerInternal;



@interface AVSynchronizedLayer : CALayer 
{
    AVSynchronizedLayerInternal *_syncLayer;
}

@property(retain) AVPlayerItem *playerItem;

+ (id)synchronizedLayerWithPlayerItem:(id)arg1;

- (void)finalize;
- (id)init;
- (void)dealloc;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;

@end
