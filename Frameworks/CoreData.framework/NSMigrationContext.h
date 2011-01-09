/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSMigrationManager, NSPropertyMapping, NSEntityMapping;



@interface NSMigrationContext : NSObject 
{
    NSMutableDictionary *_bySourceAssociationTable;
    NSMutableDictionary *_byDestinationAssociationTable;
    NSMutableDictionary *_byMappingBySourceAssociationTable;
    NSMutableDictionary *_byMappingByDestinationAssociationTable;
    NSMigrationManager *_migrationManager;
    NSEntityMapping *_currentMapping;
    NSUInteger _currentStep;
    NSPropertyMapping *_currentPropertyMapping;
}


- (id)initWithMigrationManager:(id)arg1;
- (void)clearAssociationTables;
- (id)currentEntityMapping;
- (void)setCurrentEntityMapping:(id)arg1;
- (id)currentPropertyMapping;
- (NSUInteger)currentMigrationStep;
- (void)setCurrentMigrationStep:(NSUInteger)arg1;
- (void)_createAssociationsBySource:(id)arg1 withDestination:(id)arg2 forEntityMapping:(id)arg3;
- (void)_createAssociationsByDestination:(id)arg1 fromSource:(id)arg2 forEntityMapping:(id)arg3;
- (id)destinationInstancesForEntityMapping:(id)arg1 sourceInstance:(id)arg2;
- (id)sourceInstancesForEntityMapping:(id)arg1 destinationInstance:(id)arg2;
- (void)setCurrentPropertyMapping:(id)arg1;
- (void)associateSourceInstance:(id)arg1 withDestinationInstance:(id)arg2 forEntityMapping:(id)arg3;
- (void)dealloc;

@end
