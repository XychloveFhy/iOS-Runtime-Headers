/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */



@interface NSMutableArray : NSArray 
{
}

+ (id)arrayWithCapacity:(NSUInteger)arg1;
+ (id)nonRetainingArray;

- (void)replaceObjectsInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 withObjects:(id*)arg2 count:(NSUInteger)arg3;
- (void)replaceObjectsInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 withObjectsFromArray:(id)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (void)setObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)removeObject:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 identical:(BOOL)arg3;
- (void)removeObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)sortUsingComparator:(id)arg1;
- (void)sortRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 options:(NSUInteger)arg2 usingComparator:(id)arg3;
- (void)sortWithOptions:(NSUInteger)arg1 usingComparator:(id)arg2;
- (void)sortUsingFunction:(int (*)())arg1 context:(void*)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (void)replaceObjectsInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 withObjectsFromArray:(id)arg2;
- (void)replaceObjectAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (id)initWithObjects:(id*)arg1 count:(NSUInteger)arg2;
- (void)sortUsingSelector:(SEL)arg1;
- (void)exchangeObjectAtIndex:(NSUInteger)arg1 withObjectAtIndex:(NSUInteger)arg2;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)removeObjectIdenticalTo:(id)arg1;
- (void)removeObjectsInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)sortUsingFunction:(int (*)())arg1 context:(void*)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (void)removeObject:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)removeObjectsInArray:(id)arg1;
- (id)initWithCapacity:(NSUInteger)arg1;
- (void)removeLastObject;
- (void)removeObject:(id)arg1;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)setArray:(id)arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (void)removeObjectsFromIndices:(NSUInteger*)arg1 numIndices:(NSUInteger)arg2;
- (Class)classForCoder;
- (id)initWithContentsOfFile:(id)arg1;
- (void)sortUsingDescriptors:(id)arg1;
- (void)filterUsingPredicate:(id)arg1;
- (void)_addObjectsFromArray:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)_kb_reverse;
- (void)removeViewsFromSuperview;
- (void)setObject:(id)arg1 atIndex:(NSInteger)arg2;
- (void)addItemsMatchingExtensions:(id)arg1 orTypes:(id)arg2 fromFolder:(id)arg3;
- (void)addItemsMatchingType:(id)arg1 fromFolder:(id)arg2;
- (id)_mapkit_popLastObject;
- (void)_mapkit_sortUsingLatitude;
- (void)_mapkit_sortUsingLatitudeAscending:(BOOL)arg1;
- (void)_mapkit_sortUsingLongitude;
- (void)_mapkit_sortUsingLongitudeAscending:(BOOL)arg1;
- (void)_mapkit_sortUsingDistanceFromCoordinate:(struct { double x1; double x2; })arg1 ascending:(BOOL)arg2;
- (void)_mapkit_makeObjectsPerformSelector:(SEL)arg1;
- (void)_mapkit_sortUsingDistanceFromCoordinate:(struct { double x1; double x2; })arg1;
- (NSUInteger)_mapkit_insertSortedAnnotationView:(id)arg1;
- (NSUInteger)_mapkit_insertSortedAnnotationView:(id)arg1 reverse:(BOOL)arg2;
- (void)movePlacesWithOnePhotoInto:(id)arg1;
- (NSUInteger)mf_removeObject:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3;
- (NSUInteger)mf_insertObject:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3 allowDuplicates:(BOOL)arg4;
- (BOOL)mf_addObjectIfAbsentAccordingToEquals:(id)arg1;
- (BOOL)mf_addObjectIfAbsent:(id)arg1;
- (id)mf_remove;
- (BOOL)mf_isEmpty;
- (id)top;
- (void)push:(id)arg1;
- (id)pop;

@end
