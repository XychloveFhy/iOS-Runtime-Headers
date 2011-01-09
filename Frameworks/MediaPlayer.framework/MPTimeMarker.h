/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSURL, NSString, NSDictionary;



@interface MPTimeMarker : NSObject 
{
    double _duration;
    NSUInteger _index;
    id _thumbnail;
    double _time;
    NSString *_title;
    NSURL *_url;
    NSInteger _markerType;
    NSDictionary *_metadata;
}

@property(readonly) double comparableTime;
@property(readonly) double maxTime;
@property(retain) NSDictionary *metadata;
@property(readonly) NSInteger markerType;
@property(retain) NSURL *url;
@property(retain) NSString *title;
@property double time;
@property(retain) id thumbnail;
@property NSUInteger index;
@property double duration;


- (id)url;
- (void)setUrl:(id)arg1;
- (void)setIndex:(NSUInteger)arg1;
- (NSInteger)markerType;
- (id)thumbnail;
- (NSUInteger)index;
- (void)setTime:(double)arg1;
- (double)time;
- (id)title;
- (id)description;
- (void)setDuration:(double)arg1;
- (double)duration;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (id)urlTitleTrimmingCharacterSet;
- (double)comparableTime;
- (void)setThumbnail:(id)arg1;
- (id)initWithMarkerType:(NSInteger)arg1;
- (double)maxTime;

@end
