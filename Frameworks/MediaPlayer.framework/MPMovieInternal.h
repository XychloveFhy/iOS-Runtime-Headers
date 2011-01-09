/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSURL, AVFileValidator, MPItem;



@interface MPMovieInternal : NSObject 
{
    MPItem *_item;
    NSURL *_url;
    AVFileValidator *_fileValidator;
    NSInteger _movieSourceType;
    double _startPlaybackTime;
    double _endPlaybackTime;
    BOOL _explicitlySetMovieSourceType;
    BOOL _movieIsUnplayable;
    double _lastKnownDuration;
    struct CGSize { 
        float width; 
        float height; 
    } _lastKnownNaturalSize;
    NSUInteger _lastKnownType;
}



@end
