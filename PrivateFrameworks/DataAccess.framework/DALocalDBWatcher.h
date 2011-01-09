/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */



@interface DALocalDBWatcher : NSObject 
{
    NSInteger _lastSavedCalSequenceNumber;
    NSInteger _lastSavedABSequenceNumber;
    void *_abWatcher;
    struct CalDatabase { } *_calWatcher;
    struct __CFDictionary { } *_concernedABPartyToBlockMap;
    struct __CFDictionary { } *_concernedCalPartyToBlockMap;
}

@property NSInteger lastSavedCalSequenceNumber;
@property NSInteger lastSavedABSequenceNumber;

+ (id)sharedDBWatcher;

- (id)init;
- (void)dealloc;
- (void)_handleABChangeNotificationWithInfo:(id)arg1;
- (void)registerConcernedABParty:(id)arg1 withChangedBlock:(id)arg2;
- (void)removeConcernedABParty:(id)arg1;
- (void)_handleCalChangeNotification;
- (void)registerConcernedCalParty:(id)arg1 withChangedBlock:(id)arg2;
- (void)removeConcernedCalParty:(id)arg1;
- (void)setLastSavedABSequenceNumber:(NSInteger)arg1;
- (NSInteger)lastSavedABSequenceNumber;
- (void)setLastSavedCalSequenceNumber:(NSInteger)arg1;
- (NSInteger)lastSavedCalSequenceNumber;
- (void)noteABDBDirChanged;
- (void)noteCalDBDirChanged;

@end
