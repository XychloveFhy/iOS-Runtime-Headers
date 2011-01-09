/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, GKPlayer;



@interface GKGetGamesPlayedDataRequest : GKDataRequest 
{
    GKPlayer *_player;
    NSArray *_games;
}

@property(readonly) NSArray *games;
@property(retain) GKPlayer *player;


- (NSInteger)cachePriority;
- (NSInteger)cacheType;
- (id)player;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (void)setPlayer:(id)arg1;
- (id)games;
- (id)cacheKey;
- (id)key;
- (id)request;
- (void)dealloc;

@end
