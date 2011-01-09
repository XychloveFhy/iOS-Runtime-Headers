/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSDate, NSMutableDictionary, NSMutableString;



@interface CMProgressiveArchiveManager : CMArchiveManager 
{
    void *mClient;
    struct { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); } *mCallBacks;
    NSMutableDictionary *mDataCache;
    NSMutableDictionary *mStyleCache;
    NSMutableString *mCssString;
    BOOL mMainDataInited;
    NSDate *mStartDate;
    NSDate *mLastCommitDate;
    NSMutableString *mHtmlLogString;
}


- (id)initWithClient:(const void*)arg1 andCallBacks:(struct { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg2;
- (id)createResourceWithName:(id)arg1;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (id)addCssStyle:(id)arg1;
- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (id)cssStylesheetString;
- (BOOL)isProgressive;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (void)pushCssToPath:(id)arg1;
- (void)commitDataAtPath:(id)arg1;
- (void)closeResourceAtPath:(id)arg1;
- (void)dealloc;
- (BOOL)isCancelled;

@end
