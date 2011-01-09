/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString, NSLock;



@interface ISClient : NSObject 
{
    NSString *_appleClientApplication;
    NSString *_appleClientVersions;
    NSString *_identifier;
    NSLock *_lock;
    NSString *_mediaLibraryIdentifier;
    NSString *_partnerHeader;
    BOOL _prefersHighQuality;
    NSString *_softwareLibraryIdentifier;
}

@property(readonly) NSString *appleClientVersions;
@property(readonly) NSString *mediaLibraryIdentifier;
@property(retain) NSString *softwareLibraryIdentifier;
@property BOOL prefersHighQuality;
@property(retain) NSString *partnerHeader;
@property(retain) NSString *identifier;
@property(retain) NSString *appleClientApplication;

+ (id)currentClient;

- (id)localStoreFrontID;
- (void)_softwareMapInvalidatedNotification:(id)arg1;
- (void)_syncDidEndNotification:(id)arg1;
- (BOOL)_defaultPrefersHighQuality;
- (void)_registerForMainThreadNotifications;
- (BOOL)prefersHighQuality;
- (id)mediaLibraryIdentifier;
- (id)softwareLibraryIdentifier;
- (id)appleClientVersions;
- (void)setPrefersHighQuality:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)init;
- (void)dealloc;
- (id)appleClientApplication;
- (void)setAppleClientApplication:(id)arg1;
- (void)setPartnerHeader:(id)arg1;
- (void)setSoftwareLibraryIdentifier:(id)arg1;
- (id)partnerHeader;

@end
