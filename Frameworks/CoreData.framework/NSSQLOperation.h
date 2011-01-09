/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObject, NSSQLRow, NSMutableArray, NSMutableDictionary;



@interface NSSQLOperation : NSObject 
{
    NSUInteger _databaseOperator;
    NSSQLRow *_rowForUpdate;
    NSMutableArray *_adapterOps;
    NSManagedObject *_object;
    NSSQLRow *_dbSnapshot;
    NSMutableDictionary *_mtmDeltas;
}


- (void)removeAdapterOperation:(id)arg1;
- (id)adapterOperations;
- (id)rowForUpdate;
- (void)setDatabaseOperator:(NSUInteger)arg1;
- (id)dbSnapshot;
- (id)initWithObject:(id)arg1 entity:(id)arg2;
- (void)setDBSnapshot:(id)arg1;
- (void)setRowForUpdate:(id)arg1;
- (void)addDelta:(id)arg1 forManyToManyKey:(id)arg2;
- (id)manyToManyDeltas;
- (void)addAdapterOperation:(id)arg1;
- (NSUInteger)databaseOperator;
- (id)objectID;
- (id)object;
- (id)description;
- (void)dealloc;

@end
