/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3MutableDatabaseImport : ML3DatabaseImport

@property (nonatomic, retain) NSFileHandle *fileHandle;
@property (nonatomic) unsigned int homeSharingBasePlaylistID;
@property (nonatomic) BOOL isServerImport;
@property (nonatomic, copy) NSString *libraryPath;
@property (getter=isPendingMatch, nonatomic) BOOL pendingMatch;
@property (nonatomic, copy) NSData *playlistData;
@property (nonatomic) BOOL playlistsAreLibraryOwnedContent;
@property (nonatomic) long long preferredVideoQuality;
@property (getter=isResetSync, nonatomic) BOOL resetSync;
@property (getter=isSagaEnabled, nonatomic) BOOL sagaEnabled;
@property (nonatomic) long long storeAccountID;
@property (nonatomic, copy) NSString *syncAnchor;
@property (nonatomic, copy) NSString *syncLibraryID;
@property (nonatomic, copy) NSData *trackData;
@property (nonatomic) BOOL tracksAreLibraryOwnedContent;

- (void)setFileHandle:(id)arg1;
- (void)setHomeSharingBasePlaylistID:(unsigned int)arg1;
- (void)setIsServerImport:(BOOL)arg1;
- (void)setLibraryPath:(id)arg1;
- (void)setPendingMatch:(BOOL)arg1;
- (void)setPlaylistData:(id)arg1;
- (void)setPlaylistsAreLibraryOwnedContent:(BOOL)arg1;
- (void)setPreferredVideoQuality:(long long)arg1;
- (void)setResetSync:(BOOL)arg1;
- (void)setSagaEnabled:(BOOL)arg1;
- (void)setStoreAccountID:(long long)arg1;
- (void)setSyncAnchor:(id)arg1;
- (void)setSyncLibraryID:(id)arg1;
- (void)setTrackData:(id)arg1;
- (void)setTracksAreLibraryOwnedContent:(BOOL)arg1;

@end