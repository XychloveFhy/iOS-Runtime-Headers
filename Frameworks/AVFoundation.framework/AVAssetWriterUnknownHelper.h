/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */



@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper 
{
}


- (void)startWriting;
- (void)setMetadata:(id)arg1;
- (NSInteger)status;
- (id)initWithURL:(id)arg1 fileType:(id)arg2;
- (BOOL)_canAddInput:(id)arg1 exceptionReason:(id*)arg2;
- (id)initWithConfigurationState:(id)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
- (void)setShouldOptimizeForNetworkUse:(BOOL)arg1;
- (BOOL)canAddInput:(id)arg1;
- (void)addInput:(id)arg1;
- (void)cancelWriting;

@end
