/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDTCell, GQDTTable, GQDTOverlapCell;



@interface GQSTable : NSObject 
{
    GQDTTable *mTable;
    GQDTOverlapCell *mCurrentOverlapCell;
    GQDTCell *mLastCellRead;
    BOOL mIsStreaming;
    BOOL mAlwaysPutReadCellsInArray;
    long mCellCount;
    BOOL mIsCounting;
}


- (id)initWithStreaming:(BOOL)arg1 table:(id)arg2;
- (BOOL)alwaysPutReadCellsInArray;
- (void)setLastCellRead:(id)arg1;
- (id)lastCellRead;
- (void)setAlwaysPutReadCellsInArray:(BOOL)arg1;
- (void)setIsCountingCount:(BOOL)arg1;
- (void)skipCells:(long)arg1;
- (void)incrementCellPosition;
- (long)column;
- (BOOL)isCounting;
- (id)currentOverlapCell;
- (void)setCurrentOverlapCell:(id)arg1;
- (id)table;
- (long)row;
- (void)dealloc;
- (BOOL)isStreaming;

@end
