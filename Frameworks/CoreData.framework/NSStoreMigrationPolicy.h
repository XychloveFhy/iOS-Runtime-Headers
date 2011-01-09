/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSURL, NSMigrationManager, NSArray, NSDictionary, NSString, NSMappingModel, NSPersistentStoreCoordinator, NSManagedObjectModel;



@interface NSStoreMigrationPolicy : NSObject 
{
    NSPersistentStoreCoordinator *_coordinator;
    NSURL *_sourceURL;
    NSString *_sourceConfiguration;
    NSDictionary *_sourceOptions;
    NSManagedObjectModel *_sourceModel;
    NSDictionary *_sourceMetadata;
    NSMappingModel *_mappingModel;
    NSURL *_destinationURL;
    NSString *_destinationType;
    NSString *_destinationConfiguration;
    NSDictionary *_destinationOptions;
    NSMigrationManager *_migrationManager;
    NSArray *_resourceBundles;
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
}

+ (NSInteger)migrationDebugLevel;
+ (void)setMigrationDebugLevel:(NSInteger)arg1;

- (id)sourceModelForStoreAtURL:(id)arg1 metadata:(id)arg2 error:(id*)arg3;
- (id)managerForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id*)arg3;
- (id)migrateStoreAtURL:(id)arg1 withManager:(id)arg2 metadata:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (void)setSourceURL:(id)arg1;
- (id)sourceConfiguration;
- (void)setSourceConfiguration:(id)arg1;
- (id)sourceMetadata;
- (void)setSourceMetadata:(id)arg1;
- (id)sourceOptions;
- (void)setSourceOptions:(id)arg1;
- (void)setSourceModel:(id)arg1;
- (void)setMappingModel:(id)arg1;
- (id)destinationURL;
- (void)setDestinationURL:(id)arg1;
- (id)destinationType;
- (void)setDestinationType:(id)arg1;
- (id)destinationConfiguration;
- (void)setDestinationConfiguration:(id)arg1;
- (id)destinationOptions;
- (void)setDestinationOptions:(id)arg1;
- (id)migrationManager;
- (void)setMigrationManager:(id)arg1;
- (id)mappingModelForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id*)arg3;
- (id)destinationURLForMigration:(id)arg1 sourceURL:(id)arg2 sourceMetadata:(id)arg3 error:(id*)arg4;
- (id)destinationTypeForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id*)arg3;
- (id)destinationConfigurationForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id*)arg3;
- (id)destinationOptionsForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id*)arg3;
- (void)willPerformMigrationWithManager:(id)arg1;
- (BOOL)migrateStoreAtURL:(id)arg1 toURL:(id)arg2 storeType:(id)arg3 options:(id)arg4 withManager:(id)arg5 error:(id*)arg6;
- (void)didPerformMigrationWithManager:(id)arg1;
- (void)handleMigrationError:(id)arg1 inManager:(id)arg2;
- (id)addMigratedStoreToCoordinator:(id)arg1 withType:(id)arg2 configuration:(id)arg3 URL:(id)arg4 options:(id)arg5 error:(id*)arg6;
- (void)setResourceBundles:(id)arg1;
- (id)resourceBundles;
- (void)setPersistentStoreCoordinator:(id)arg1 sourceURL:(id)arg2 configuration:(id)arg3 metadata:(id)arg4 options:(id)arg5;
- (id)_gatherDataAndPerformMigration:(id*)arg1;
- (id)mappingModel;
- (id)sourceModel;
- (id)destinationModel;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (id)persistentStoreCoordinator;
- (id)sourceURL;
- (id)sourceType;
- (void)dealloc;

@end
