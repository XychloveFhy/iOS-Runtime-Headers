/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, GKPlayer, GKScore, GKGame;



@interface GKSparseLeaderboard : GKLeaderboard 
{
    GKGame *_game;
    GKPlayer *_player;
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _totalRange;
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _availableRange;
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _displayedRange;
    NSArray *_availableScores;
    NSArray *_showcasedScores;
    NSUInteger _maxLoaded;
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _currentRange;
    GKScore *_comparePlayerScore;
}

@property(retain) NSArray *availableScores;
@property(readonly) _NSRange loadedRange;
@property(readonly) BOOL displayLocalPlayer;
@property(retain) GKScore *comparePlayerScore;
@property _NSRange displayedRange;
@property(readonly) _NSRange availableRange;
@property(readonly) _NSRange totalRange;
@property(retain) GKPlayer *player;
@property(retain) GKGame *game;


- (id)availableScores;
- (void)setAvailableScores:(id)arg1;
- (BOOL)displayLocalPlayer;
- (BOOL)displayComparePlayer;
- (id)scoreAtIndex:(NSUInteger)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })loadedRange;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeToLoadForRank:(NSUInteger)arg1;
- (id)showcasedScoreAtShowcaseIndex:(NSUInteger)arg1;
- (BOOL)showcasedScoresAdjacent;
- (void)swapScores;
- (void)loadScoresInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 withCompletionHandler:(id)arg2;
- (id)comparePlayerScore;
- (void)setComparePlayerScore:(id)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })displayedRange;
- (void)setDisplayedRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })availableRange;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })totalRange;
- (id)initWithGame:(id)arg1;
- (id)game;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void)setGame:(id)arg1;
- (void)dealloc;

@end
