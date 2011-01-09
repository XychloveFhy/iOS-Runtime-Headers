/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

@class NSString;



@interface SPSpotlightManager : NSObject 
{
    NSString *_displayID;
}

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)eraseIndexForApplication:(id)arg1 category:(id)arg2;
- (void)application:(id)arg1 modifiedRecordIDs:(id)arg2 forCategory:(id)arg3;
- (void)_processIdentifiers:(id)arg1 forApplication:(id)arg2 andCategory:(id)arg3;
- (void)appModifiedRecordIDs:(id)arg1 forCategory:(id)arg2;

@end
