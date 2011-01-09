/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInputPixelBufferAdaptorInternal;



@interface AVAssetWriterInputPixelBufferAdaptor : NSObject 
{
    AVAssetWriterInputPixelBufferAdaptorInternal *_internal;
}

@property(readonly) AVAssetWriterInput *assetWriterInput;
@property(readonly) NSDictionary *sourcePixelBufferAttributes;
@property(readonly) __CVPixelBufferPool *pixelBufferPool;

+ (id)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2;
+ (id)keyPathsForValuesAffectingPixelBufferPool;

- (void)finalize;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)initWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2;
- (id)assetWriterInput;
- (id)sourcePixelBufferAttributes;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg2;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;

@end
