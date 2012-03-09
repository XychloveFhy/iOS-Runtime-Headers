/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGame;

@interface GKSubmitGameRatingDataRequest : GKDataRequest  {
    GKGame *_game;
    float _rating;
}

@property(retain) GKGame * game;
@property float rating;


- (void)dealloc;
- (void)setRating:(float)arg1;
- (float)rating;
- (id)game;
- (void)setGame:(id)arg1;
- (id)key;
- (id)request;

@end