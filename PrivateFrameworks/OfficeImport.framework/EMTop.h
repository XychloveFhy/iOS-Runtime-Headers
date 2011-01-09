/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EMWorkbookMapper, NSString, EMState, CMArchiveManager;



@interface EMTop : NSObject <OIProgressiveReaderDelegate>
{
    CMArchiveManager *_archiver;
    EMState *_state;
    EMWorkbookMapper *_mapper;
    NSString *_inFileName;
    BOOL _xml;
}

+ (void)fillHTMLArchiveForExcelFile:(id)arg1 xmlFlag:(BOOL)arg2 archiver:(id)arg3;
+ (void)fillHTMLArchiveForExcelData:(id)arg1 fileName:(id)arg2 xmlFlag:(BOOL)arg3 archiver:(id)arg4;

- (void)_streamWorkbook:(id)arg1;
- (void)readData:(id)arg1 fileName:(id)arg2 xmlFlag:(BOOL)arg3 archiver:(id)arg4;
- (void)readFile:(id)arg1 xmlFlag:(BOOL)arg2 archiver:(id)arg3;
- (void)readerDidStartDocument:(id)arg1;
- (void)readerDidReadElement:(id)arg1 atIndex:(NSUInteger)arg2 inDocument:(id)arg3 isLastElement:(BOOL)arg4;
- (void)readerDidEndDocument:(id)arg1;
- (void)dealloc;

@end
