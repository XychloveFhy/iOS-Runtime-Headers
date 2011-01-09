/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDate, NSString, GKGame;



@interface GKSubmitAchievementDataRequest : GKDataRequest 
{
    GKGame *_game;
    NSString *_achievementID;
    NSInteger _percentComplete;
    BOOL _isHidden;
    NSDate *_date;
}

@property NSDate *date;
@property BOOL isHidden;
@property NSInteger percentComplete;
@property NSString *achievementID;
@property(retain) GKGame *game;


- (NSInteger)percentComplete;
- (void)setIsHidden:(BOOL)arg1;
- (void)setPercentComplete:(NSInteger)arg1;
- (id)achievementID;
- (void)setAchievementID:(id)arg1;
- (id)invalidateCacheKeys;
- (NSInteger)cacheType;
- (id)game;
- (void)setGame:(id)arg1;
- (id)key;
- (id)request;
- (id)date;
- (void)setDate:(id)arg1;
- (BOOL)isHidden;
- (void)dealloc;

@end
