/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, AVURLAsset, AVWeakReference, AVAudioMix, NSString, NSURL, AVVideoComposition, NSArray;



@interface AVAssetExportSessionInternal : NSObject 
{
    AVWeakReference *weakReference;
    struct dispatch_queue_s { } *readWriteQueue;
    struct OpaqueFigRemaker { } *remaker;
    NSInteger status;
    NSError *error;
    float progress;
    AVURLAsset *asset;
    NSString *preset;
    NSString *preset16x9;
    NSURL *outputURL;
    NSString *outputFileType;
    AVAudioMix *audioMix;
    AVVideoComposition *videoComposition;
    NSArray *metadata;
    struct { 
        struct { 
            long long value; 
            NSInteger timescale; 
            NSUInteger flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            NSInteger timescale; 
            NSUInteger flags; 
            long long epoch; 
        } duration; 
    } timeRange;
    long long maxFileSize;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id handler;

    BOOL optimizeForNetworkUse;
    BOOL outputFileCreatedByRemaker;
    struct dispatch_queue_s { } *remakerNotificationSerializationQueue;
}



@end
