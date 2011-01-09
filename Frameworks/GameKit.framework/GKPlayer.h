/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString, NSDictionary, NSMutableArray, NSNumber;



@interface GKPlayer : NSObject 
{
    NSString *_playerID;
    NSString *_alias;
    BOOL _isFriend;
    double _lastSeenTime;
    NSString *_status;
    NSInteger _rating;
    NSDictionary *_avatarURLs;
    NSDictionary *_avatarDescription;
    NSMutableArray *_achievementsAchievedList;
    NSArray *_achievementListFromServer;
    double _lastPlayedTime;
    NSInteger _inviteStatus;
    NSString *_firstName;
    NSString *_lastName;
    BOOL _hasDetailInfo;
    NSUInteger _numberOfFriends;
    NSUInteger _numberOfGamesPlayed;
    NSUInteger _numberOfAchievements;
    NSDictionary *_lastPlayedGameDescriptor;
    NSNumber *_numberAchievedForCurrentGame;
    NSString *_friendRequestID;
    NSString *_email;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _rateCompletionHandler;

    NSMutableArray *_cachedAvatars;
}

@property(retain) NSDictionary *avatarURLs;
@property(retain) NSDictionary *avatarDescription;
@property(retain) NSString *alias;
@property BOOL isFriend;
@property double lastSeenTime;
@property double lastPlayedTime;
@property(retain) NSMutableArray *achievementsAchievedList;
@property(retain) NSArray *achievementListFromServer;
@property(readonly) GKGame *lastPlayedGame;
@property(retain,readonly) NSString *cacheKey;
@property NSInteger inviteStatus;
@property BOOL hasDetailInfo;
@property NSUInteger numberOfFriends;
@property NSUInteger numberOfGamesPlayed;
@property NSUInteger numberOfAchievements;
@property(retain) NSNumber *numberAchievedForCurrentGame;
@property(readonly) GKABPlayer *GKABPlayer;
@property(readonly) NSInteger rating;
@property(readonly) NSString *realName;
@property(retain) NSMutableArray *cachedAvatars;
@property(copy) ? *rateCompletionHandler;
@property(retain) NSString *email;
@property(retain) NSString *friendRequestID;
@property(retain) NSNumber *numberAchievedForCurrentGame;
@property(retain) NSDictionary *lastPlayedGameDescriptor;
@property NSUInteger numberOfAchievements;
@property NSUInteger numberOfGamesPlayed;
@property NSUInteger numberOfFriends;
@property BOOL hasDetailInfo;
@property(retain) NSString *lastName;
@property(retain) NSString *firstName;
@property NSInteger inviteStatus;
@property double lastPlayedTime;
@property(retain) NSArray *achievementListFromServer;
@property(retain) NSMutableArray *achievementsAchievedList;
@property(retain) NSDictionary *avatarDescription;
@property(retain) NSDictionary *avatarURLs;
@property NSInteger rating;
@property(copy) NSString *status;
@property double lastSeenTime;
@property BOOL isFriend;
@property(copy) NSString *alias;
@property(retain) NSString *playerID;

+ (void)clearCache;
+ (id)anonymousPlayer;
+ (void)loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadPlayersForIdentifiers:(id)arg1 withDetails:(BOOL)arg2 withCompletionHandler:(id)arg3;
+ (void)updatePlayersWithFriendIDs:(id)arg1;
+ (id)playerWithUniqueID:(id)arg1;
+ (id)playerWithAlias:(id)arg1 playerID:(id)arg2 friendRequestID:(id)arg3;
+ (id)playerWithDictionary:(id)arg1;

- (id)email;
- (void)setEmail:(id)arg1;
- (id)lastName;
- (void)setLastName:(id)arg1;
- (id)firstName;
- (void)setFirstName:(id)arg1;
- (id)alias;
- (void)setAlias:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)initWithPlayerID:(id)arg1;
- (void)getABPersonData;
- (id)realName;
- (void)attachToContact:(void*)arg1;
- (void)_receivedMemoryWarning:(id)arg1;
- (id)cachedAvatars;
- (void)setCachedAvatars:(id)arg1;
- (id)rateCompletionHandler;
- (void)setRateCompletionHandler:(id)arg1;
- (id)friendRequestID;
- (void)setFriendRequestID:(id)arg1;
- (id)numberAchievedForCurrentGame;
- (void)setNumberAchievedForCurrentGame:(id)arg1;
- (id)lastPlayedGameDescriptor;
- (void)setLastPlayedGameDescriptor:(id)arg1;
- (NSUInteger)numberOfAchievements;
- (void)setNumberOfAchievements:(NSUInteger)arg1;
- (NSUInteger)numberOfGamesPlayed;
- (void)setNumberOfGamesPlayed:(NSUInteger)arg1;
- (NSUInteger)numberOfFriends;
- (void)setNumberOfFriends:(NSUInteger)arg1;
- (BOOL)hasDetailInfo;
- (void)setHasDetailInfo:(BOOL)arg1;
- (NSInteger)inviteStatus;
- (void)setInviteStatus:(NSInteger)arg1;
- (double)lastPlayedTime;
- (void)setLastPlayedTime:(double)arg1;
- (id)achievementListFromServer;
- (void)setAchievementListFromServer:(id)arg1;
- (id)achievementsAchievedList;
- (void)setAchievementsAchievedList:(id)arg1;
- (id)avatarDescription;
- (void)setAvatarDescription:(id)arg1;
- (id)avatarURLs;
- (void)setAvatarURLs:(id)arg1;
- (double)lastSeenTime;
- (void)setLastSeenTime:(double)arg1;
- (BOOL)isFriend;
- (void)setIsFriend:(BOOL)arg1;
- (id)GKABPlayer;
- (void)_postChangeNotification;
- (void)postChangeNotification;
- (BOOL)populateWithDictionary:(id)arg1;
- (id)lastPlayedGame;
- (void)acceptFriendRequestForHandle:(id)arg1 withCompletionHandler:(id)arg2;
- (void)declineFriendRequest:(id)arg1;
- (void)loadRecentMatchesForGame:(id)arg1 block:(id)arg2;
- (void)loadGamesPlayed:(id)arg1;
- (void)reloadDetails;
- (void)loadInfoDetailed:(BOOL)arg1 withCompletionHandler:(id)arg2;
- (void)clearDetails;
- (void)submitRating:(NSInteger)arg1 withCompletionHandler:(id)arg2;
- (void)displayRatingViewWithCompletionHandler:(id)arg1;
- (id)avatarURLForSize:(NSInteger)arg1;
- (void)sendFriendRequestWithMessage:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_loadAvatarImageForSize:(NSInteger)arg1 withCompletionHandler:(id)arg2;
- (void)loadAvatarImageForSize:(NSInteger)arg1 withCompletionHandler:(id)arg2;
- (void)loadAvatarForSize:(NSInteger)arg1 withCompletionHandler:(id)arg2;
- (void)setPlayerID:(id)arg1;
- (id)playerID;
- (id)cacheKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)dealloc;
- (id)status;
- (NSInteger)rating;
- (void)setRating:(NSInteger)arg1;

@end
