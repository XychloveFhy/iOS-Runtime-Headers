/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSMutableSet, NSString, NSDate, MLPhotoDCFDirectory;



@interface MLPhotoDCFFileGroup : MLPhotoDCFObject 
{
    id _delegate;
    MLPhotoDCFDirectory *_directory;
    NSString *_directoryPath;
    NSString *_prebakedThumbnailPath;
    NSString *_videoFileExtension;
    NSMutableSet *_extensions;
    NSDate *_date;
    NSString *_preferredExtension;
    NSUInteger _hash;
    unsigned int _hashComputed : 1;
    unsigned int _addedExtensions : 1;
    unsigned int _writeIsPending : 1;
}

+ (id)allMetadataFileExtensions;
+ (struct CGImage { }*)createThumbnailOfImage:(struct CGImage { }*)arg1 format:(NSInteger)arg2 fullPath:(id)arg3 orientation:(NSInteger)arg4 outThumbnailData:(id*)arg5;

- (NSInteger)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (BOOL)isValid;
- (id)date;
- (void)setDate:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)directory;
- (id)imageSourceTypeHint;
- (void)deleteObsoleteFiles;
- (BOOL)hasObsoleteFiles;
- (BOOL)isValidImage;
- (void)addExtensionsFromMetadataDirectory;
- (void)forceAddExtensionsFromMetadataDirectory;
- (id)extensions;
- (id)pathForContainingDirectory;
- (id)pathForGroupWithoutExtension;
- (id)pathForMetadata;
- (id)pathForMetadataWithGroupName;
- (void)createMetadataDirectoryIfNecessary;
- (id)pathForFullSizeImage;
- (id)prebakedWildcatThumbnailsFilename;
- (id)lowResolutionFilename;
- (id)pathForPrebakedWildcatThumbnailsFile;
- (id)pathForLowResolutionFile;
- (BOOL)hasThumbnail;
- (BOOL)hasVideoFile;
- (BOOL)hasPrebakedThumbnail;
- (BOOL)hasPrebakedLandscapeScrubberThumbnails;
- (BOOL)hasPrebakedPortraitScrubberThumbnails;
- (BOOL)hasPrebakedWildcatThumbnails;
- (void)createWildcatThumbnailsFromImage:(struct CGImage { }*)arg1 orientation:(NSInteger)arg2 options:(id)arg3 delegate:(id)arg4;
- (id)initWithName:(id)arg1 number:(NSInteger)arg2 directory:(id)arg3;
- (void)deleteFiles;
- (id)pathForVideoFile;
- (BOOL)isWritePending;
- (void)addExtension:(id)arg1;
- (id)thumbnailFilename;
- (id)prebakedThumbnailFilename;
- (id)prebakedLandscapeScrubberThumbnailsFilename;
- (id)prebakedPortraitScrubberThumbnailsFilename;
- (id)videoPreviewFilename;
- (id)pathForVideoPreviewFile;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)pathForTrimmedVideoFile;
- (id)pathForThumbnailFile;
- (id)pathForPrebakedThumbnail;
- (void)setWriteIsPending:(BOOL)arg1;

@end
