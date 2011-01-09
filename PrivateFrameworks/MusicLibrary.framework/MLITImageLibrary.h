/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */



@interface MLITImageLibrary : NSObject 
{
    void *_imageLibrary;
    unsigned int _triedToLoadDatabase : 1;
}

+ (BOOL)verifyDatabaseExists;
+ (void)dumpImageInstanceForTrack:(id)arg1;
+ (struct MLArtworkFormatSpec { NSUInteger x1; NSUInteger x2; NSUInteger x3; NSUInteger x4; NSInteger x5; NSInteger x6; })artworkFormatSpecForArtworkFormatID:(NSUInteger)arg1;
+ (id)sharedLibrary;

- (void)dealloc;
- (id)_initSharedInstance;
- (void*)imageLibraryRef;
- (BOOL)_loadImageLibraryIfNecessary;
- (BOOL)loadDatabase;
- (struct ITImageInfo { struct DLinkElement { struct DLinkElement {} *x_1_1_1; struct DLinkElement {} *x_1_1_2; } x1; struct ITImageLibrary {} *x2; NSUInteger x3; unsigned long long x4; NSUInteger x5; NSUInteger x6; NSUInteger x7; unsigned short x8; unsigned short x9; struct SLinkList { struct SLinkElement {} *x_10_1_1; } x10; NSUInteger x11; unsigned char x12; unsigned char x13; unsigned short x14; unsigned short x15; unsigned short x16; struct ITImageFaceInstance {} *x17; NSUInteger x18; NSUInteger x19; double x20; double x21; }*)_lookupITImageInfoForTrack:(id)arg1 artworkType:(NSInteger)arg2;
- (BOOL)isImageDataAvailableForTrack:(id)arg1 artworkType:(NSInteger)arg2;
- (BOOL)isImageDataIdenticalForTrack:(id)arg1 otherTrack:(id)arg2 artworkType:(NSInteger)arg3 artworkFormatID:(NSUInteger)arg4;
- (BOOL)getArtworkData:(id*)arg1 artworkInfo:(struct MLArtworkInstanceInfo { struct MLArtworkFormatSpec { NSUInteger x_1_1_1; NSUInteger x_1_1_2; NSUInteger x_1_1_3; NSUInteger x_1_1_4; NSInteger x_1_1_5; NSInteger x_1_1_6; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; }*)arg2 track:(id)arg3 artworkType:(NSInteger)arg4 formatID:(NSUInteger)arg5 timeInMS:(NSInteger)arg6 size:(struct CGSize { float x1; float x2; })arg7;
- (id)availableArtworkFormatIDsForTrack:(id)arg1 artworkType:(NSInteger)arg2 timeInMS:(NSInteger)arg3;

@end
