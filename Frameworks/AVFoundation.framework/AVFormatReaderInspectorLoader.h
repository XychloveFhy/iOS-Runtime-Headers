/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */



@interface AVFormatReaderInspectorLoader : AVAssetInspectorLoader 
{
    struct OpaqueFigFormatReaderLoader { } *_formatReaderLoader;
    BOOL _prefersAccurateTiming;
}

+ (id)formatReaderInspectorLoaderWithURL:(id)arg1 options:(id)arg2;

- (void)finalize;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;
- (void)_removeFormatReaderLoaderNotifications;
- (BOOL)_providesAccurateTiming;
- (id)_formatReaderLoaderProductsForKeys:(id)arg1;
- (void)_loadDurationSynchronously;
- (void)_loadLyricsSynchronously;
- (struct OpaqueFigFormatReader { }*)_copyFormatReaderFromFigObjectWithFigErrorCode:(NSInteger*)arg1;
- (id)_dictionaryOfSpecialTestsOfKeys;
- (BOOL)_loadValuesForKeys:(id)arg1;
- (id)_lyrics;
- (id)assetInspector;
- (struct OpaqueFigFormatReaderLoader { }*)_formatReaderLoader;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (void)cancelLoading;

@end
