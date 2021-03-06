/* Generated by RuntimeBrowser.
 */

@protocol HKExtendedServerInterface <NSObject>

@required

- (void)remote_addAchievement:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: _HKAchievement *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)remote_deleteAchievementWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)remote_deleteAllAchievementsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)remote_fetchAchievementAssetsServerURLWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)remote_fetchAchievementsWithCompletedDateBetweenStart:(void *)arg1 end:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_fetchHiddenUnearnedAchievementDefinitionIdentifiersAmongIdentifiers:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_fetchNumberOfUnviewedAchievementsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSError *, void*
- (void)remote_fetchUnviewedAchievementDefinitionIdentifiersWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_markAchievementAsViewed:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: _HKAchievement *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _HKAchievement *, NSError *, void*
- (void)remote_markAchievementDefinitionIdentifierAlertViewed:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)remote_markAchievementsAlerted:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)remote_registerForAchievementDefinitionNotificationsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)remote_registerForAchievementNotificationsAndFetchUnalertedCountWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSError *, void*
- (void)remote_runAchievementsFixupAsDryRun:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, BOOL, NSError *, void*
- (void)remote_setAchievementAssetsServerURL:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)remote_setCurrentActivityCacheOverrideDate:(void *)arg1 timeZone:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDate *, NSTimeZone *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)remote_updateAllAchievementAssetsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
