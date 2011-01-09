/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCompositionTrackSegmentInternal;



@interface AVCompositionTrackSegment : AVAssetTrackSegment 
{
    AVCompositionTrackSegmentInternal *_priv;
}

@property(getter=isEmpty,readonly) BOOL empty;
@property(readonly) NSURL *sourceURL;
@property(readonly) NSInteger sourceTrackID;

+ (id)compositionTrackSegmentWithURL:(id)arg1 trackID:(NSInteger)arg2 sourceTimeRange:(struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })arg3 targetTimeRange:(struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })arg4;
+ (id)compositionTrackSegmentWithTimeRange:(struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })arg1;

- (id)sourceURL;
- (void)finalize;
- (BOOL)isEmpty;
- (id)init;
- (void)dealloc;
- (id)initWithURL:(id)arg1 trackID:(NSInteger)arg2 sourceTimeRange:(struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })arg3 targetTimeRange:(struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })arg4;
- (id)initWithTimeRange:(struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (NSInteger)sourceTrackID;

@end
