/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSDate, NSString, NSFileHandle;



@interface DARollableLog : NSObject 
{
    NSDate *_lastStatDate;
    NSString *_baseFilename;
    NSString *_generationalFilenameFormat;
    NSFileHandle *_fh;
    struct dispatch_source_s { } *_fdWatcher;
    struct dispatch_queue_s { } *_logQueue;
    struct dispatch_queue_s { } *_logRequestQueue;
}

@property(retain) NSDate *lastStatDate;
@property(retain) NSFileHandle *fh;

+ (void)enableLogRolling;
+ (id)_generationalFormatFromBase:(id)arg1;
+ (id)_filenameWithBase:(id)arg1 generationalFormat:(id)arg2 generation:(NSInteger)arg3;
+ (id)allLogFilesForFilename:(id)arg1;
+ (id)loggerWithFilename:(id)arg1;

- (id)_filenameWithGenerationNumber:(NSInteger)arg1;
- (id)_fullFilePathWithGenerationNumber:(NSInteger)arg1;
- (id)_fullCompressedFilePathWithGenerationNumber:(NSInteger)arg1;
- (void)_loadUpHandle;
- (id)compressFile:(id)arg1;
- (void)slurpDataFromFile:(id)arg1;
- (id)initWithFilename:(id)arg1;
- (void)_rollLogs;
- (void)_statFileIfNecessaryForRollingCheck;
- (id)lastStatDate;
- (void)setLastStatDate:(id)arg1;
- (id)fh;
- (void)setFh:(id)arg1;
- (void)logString:(id)arg1;
- (void)logData:(id)arg1;

@end
