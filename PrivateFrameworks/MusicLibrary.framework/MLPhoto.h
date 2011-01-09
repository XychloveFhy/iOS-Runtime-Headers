/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */



@interface MLPhoto : NSObject <MLPhotoBakedThumbnailsDelegate>
{
}

+ (NSInteger)fullSizeImageFormat;
+ (struct CGImage { }*)createUnrotatedImageWithSize:(struct CGSize { float x1; float x2; })arg1 originalImage:(struct CGImage { }*)arg2 imageOrientation:(NSInteger)arg3;
+ (NSInteger)posterThumbnailFormat;
+ (NSInteger)landscapeScrubberThumbnailFormat;
+ (NSInteger)portraitScrubberThumbnailFormat;
+ (NSInteger)indexSheetFormat;
+ (NSInteger)thumbnailFormat;
+ (void)_initializeSafeCategory;
+ (struct CGImage { }*)createUnrotatedImageWithSize:(struct CGSize { float x1; float x2; })arg1 originalImage:(struct CGImage { }*)arg2 imageOrientation:(NSInteger)arg3;
+ (NSInteger)posterThumbnailFormat;
+ (NSInteger)landscapeScrubberThumbnailFormat;
+ (NSInteger)portraitScrubberThumbnailFormat;
+ (NSInteger)indexSheetFormat;
+ (NSInteger)thumbnailFormat;

- (id)mimeType;
- (BOOL)isEditable;
- (id)title;
- (void)setType:(NSInteger)arg1;
- (double)duration;
- (NSInteger)orientation;
- (void)setDate:(id)arg1;
- (void)dealloc;
- (void)deleteFiles;
- (NSInteger)imageID;
- (void)setDurationInMilliseconds:(double)arg1;
- (double)durationInMilliseconds;
- (NSInteger)photoType;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (BOOL)hasGPS;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceRectangles:(id)arg1;
- (id)pathForImageFormat:(NSInteger)arg1;
- (NSInteger)sortByImageIDComparison:(id)arg1;
- (NSInteger)sortByDateComparison:(id)arg1;
- (double)captureTime;
- (void)setCaptureTime:(double)arg1;
- (void)setCaptureDateFromITunes:(unsigned long)arg1;
- (BOOL)isImage;
- (BOOL)isVideo;
- (BOOL)isAudio;
- (BOOL)allowsRotation;
- (BOOL)didSetPhotoData;
- (id)pathForOriginalFile;
- (BOOL)hasFullSizeImageData;
- (id)fullSizeImagePath;
- (id)fileExtensions;
- (void)_setFilenameFromFullSizeVideoPath:(id)arg1;
- (id)filenameWithoutExtension;
- (void)_setMetadataPathFromFullSizeVideoPath:(id)arg1;
- (id)_metadataPath;
- (void)setPathForVideoFile:(id)arg1;
- (id)pathForVideoFile;
- (BOOL)_isValidMimeType:(id)arg1 forService:(id)arg2;
- (id)mimeTypeForService:(id)arg1;
- (id)_mimeTypeForVideoFileExtension:(id)arg1;
- (id)_mimeTypeForImageFileExtension:(id)arg1;
- (id)fileExtension;
- (BOOL)_isValidFileExtension:(id)arg1 forService:(id)arg2;
- (id)fileExtensionForService:(id)arg1;
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
- (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)setWriteIsPending:(BOOL)arg1;
- (void)saveBakedVideoThumbnail;
- (id)previewFrameImageFromDatabase;
- (id)createFullSizeImageForImagePickerClient;
- (id)newImageData;
- (id)newEmailImageData;
- (id)createLowResolutionFullScreenImage;
- (id)createFullScreenImage:(const struct __CFDictionary {}**)arg1;
- (id)createFullSizeImage;
- (id)imageWithFormat:(NSInteger)arg1;
- (id)imageWithFormat:(NSInteger)arg1 outImageProperties:(const struct __CFDictionary {}**)arg2;
- (id)indexSheetImage;
- (id)textBadgeString;
- (BOOL)hasFullSizeImage;
- (id)newEmailImageData:(id*)arg1;
- (struct __CFData { }*)createEmailImageDataWithLargeImage:(id)arg1 withExtension:(id)arg2 scaledImage:(id*)arg3 maximumSize:(struct CGSize { float x1; float x2; })arg4;
- (void)copyToPasteboard;
- (id)date;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)previewFrameImageFromDatabase;
- (id)createFullSizeImageForImagePickerClient;
- (id)newImageData;
- (id)newEmailImageData;
- (id)createLowResolutionFullScreenImage;
- (id)createFullScreenImage:(const struct __CFDictionary {}**)arg1;
- (id)createFullSizeImage;
- (id)imageWithFormat:(NSInteger)arg1;
- (id)imageWithFormat:(NSInteger)arg1 outImageProperties:(const struct __CFDictionary {}**)arg2;
- (id)indexSheetImage;
- (id)textBadgeString;
- (BOOL)hasFullSizeImage;
- (id)newEmailImageData:(id*)arg1;
- (struct __CFData { }*)createEmailImageDataWithLargeImage:(id)arg1 withExtension:(id)arg2 scaledImage:(id*)arg3 maximumSize:(struct CGSize { float x1; float x2; })arg4;
- (void)copyToPasteboard;
- (id)date;

@end
