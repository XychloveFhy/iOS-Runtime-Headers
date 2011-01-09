/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GQDTTable;



@interface GQHTableState : NSObject 
{
    NSInteger mPrevRowIndex;
    NSInteger mPrevColumnIndex;
    GQDTTable *mTable;
    struct vector<short unsigned int,std::allocator<short unsigned int> > { struct _Vector_impl { 
            unsigned short *_M_start; 
            unsigned short *_M_finish; 
            unsigned short *_M_end_of_storage; 
        } x1; } *mCellCountInColumns;
    NSInteger mGroupLevel;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mSplitTable;

    double mCurrentTablePosition;
    double mLastAttachmentPosition;
    long mSplitTableIndex;
    double mOriginalTableHeight;
}


- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)splitTable;
     /* Encoded args for previous method: B8@0:4 */

- (double)currentTablePosition;
- (void)addRowHeight:(float)arg1;
- (struct vector<short unsigned int,std::allocator<short unsigned int> > { struct _Vector_impl { unsigned short *x_1_1_1; unsigned short *x_1_1_2; unsigned short *x_1_1_3; } x1; }*)cellCountInColumns;
- (NSInteger)prevRowIndex;
- (NSInteger)prevColumnIndex;
- (void)setSplitTable:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (void)setSplitTableIndex:(long)arg1;
- (void)setOriginalTableHeight:(double)arg1;
- (void)setTable:(id)arg1;
- (void)setLastAttachmentPosition:(double)arg1;
- (void)setPrevRowIndex:(NSInteger)arg1 columnIndex:(NSInteger)arg2;
- (void)setGroupLevel:(NSInteger)arg1;
- (NSInteger)groupLevel;
- (double)lastAttachmentPosition;
- (long)nextSplitTableIndex;
- (double)originalTableHeight;
- (id)table;
- (id)init;
- (void)dealloc;

@end
