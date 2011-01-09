/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MLTrack, NSDictionary;



@interface MPMediaServerItem : NSObject <NSCoding>
{
    MLTrack *_track;
    NSDictionary *_fetchedProperties;
}

@property(readonly) MLTrack *MLTrack;
@property(readonly) NSDictionary *commonProperties;


- (id)year;
- (id)title;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)albumID;
- (id)globalID;
- (id)filePath;
- (id)artist;
- (id)albumArtist;
- (id)composer;
- (id)genre;
- (id)grouping;
- (id)comments;
- (id)releaseDate;
- (id)sortTitle;
- (id)sortArtist;
- (id)sortAlbumArtist;
- (id)sortComposer;
- (id)storeItemAdamID;
- (id)lyrics;
- (id)seasonNumber;
- (id)episodeNumber;
- (id)discNumber;
- (id)mediaType;
- (id)isRental;
- (id)rating;
- (id)skipCount;
- (id)playCount;
- (id)lastPlayedDate;
- (id)initWithMLTrack:(id)arg1;
- (id)MLTrack;
- (id)commonProperties;
- (id)albumTitle;
- (id)playbackDuration;
- (id)albumTrackNumber;
- (id)albumTrackCount;
- (id)discCount;
- (id)artwork;
- (id)isCompilation;
- (id)beatsPerMinute;
- (id)artworkDataForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)artworkDataForSize:(struct CGSize { float x1; float x2; })arg1 atPlaybackTime:(double)arg2;
- (id)playbackTimesForChapterArtwork;
- (id)podcastTitle;
- (id)seriesName;
- (id)sortAlbumTitle;
- (id)assetURL;
- (id)chapterDictionaries;
- (id)_newTimeMarkersFromChapterTOC:(id)arg1;
- (id)initWithMLTrack:(id)arg1 prefetchProperties:(BOOL)arg2;
- (void)fetchProperty:(id)arg1;

@end
