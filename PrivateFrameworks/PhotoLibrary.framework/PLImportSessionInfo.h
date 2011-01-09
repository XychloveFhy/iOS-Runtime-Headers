/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableIndexSet;



@interface PLImportSessionInfo : NSObject 
{
    BOOL _importComplete;
    BOOL _importingSelection;
    NSMutableIndexSet *_importIndexes;
    NSMutableIndexSet *_importInProgressIndexes;
    NSMutableIndexSet *_importErrorIndexes;
    NSMutableIndexSet *_importCompleteIndexes;
}

@property BOOL importingSelection;
@property(readonly) NSIndexSet *completedIndexes;
@property(readonly) NSIndexSet *errorIndexes;
@property(readonly) NSIndexSet *inProgressIndexes;
@property(readonly) NSIndexSet *importIndexes;
@property BOOL importComplete;


- (BOOL)_isImportCompleteForIndex:(NSUInteger)arg1;
- (BOOL)importComplete;
- (id)completedIndexes;
- (void)beginImportForIndex:(NSUInteger)arg1;
- (id)importIndexes;
- (void)setImportComplete:(BOOL)arg1;
- (id)inProgressIndexes;
- (BOOL)importingSelection;
- (void)completeImportForIndex:(NSUInteger)arg1 error:(BOOL)arg2;
- (id)initWithImportIndexes:(id)arg1;
- (void)setImportingSelection:(BOOL)arg1;
- (void)addIndexToImport:(NSUInteger)arg1;
- (id)errorIndexes;
- (void)dealloc;
- (void)removeIndex:(NSUInteger)arg1;
- (void)shiftIndexesStartingAtIndex:(NSUInteger)arg1 by:(NSUInteger)arg2;

@end
