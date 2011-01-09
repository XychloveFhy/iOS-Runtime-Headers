/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/MediaToolbox.framework/MediaToolbox
 */

@class FigCaptionLayerPrivate;



@interface FigCaptionLayer : CALayer 
{
    FigCaptionLayerPrivate *_priv;
}


- (void)finalize;
- (void)tearDown;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)init;
- (void)dealloc;
- (void)setFontName:(const char *)arg1;
- (void)resetCaptions;
- (void)processCaptionCommand:(NSUInteger)arg1 data:(id)arg2;
- (void)layoutSublayers;
- (void)renderer:(id)arg1 didChangeRows:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;

@end
