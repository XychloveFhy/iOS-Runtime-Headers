/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, WDTableRowProperties, WDTable;



@interface WDTableRow : NSObject 
{
    NSInteger mIndex;
    WDTable *mTable;
    WDTableRowProperties *mProperties;
    NSMutableArray *mCells;
}


- (id)addCellWithIndex:(NSInteger)arg1;
- (id)initWithTable:(id)arg1 at:(NSInteger)arg2;
- (id)cellIterator;
- (id)newCellIterator;
- (id)addCell;
- (NSInteger)cellCount;
- (id)cellAt:(NSInteger)arg1;
- (NSInteger)index;
- (id)table;
- (void)dealloc;
- (id)properties;

@end
