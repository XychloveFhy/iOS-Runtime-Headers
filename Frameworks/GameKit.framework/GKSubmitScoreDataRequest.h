/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKScore;



@interface GKSubmitScoreDataRequest : GKDataRequest 
{
    GKScore *_score;
}

@property(retain) GKScore *score;


- (id)invalidateCacheKeys;
- (NSInteger)cacheType;
- (id)score;
- (void)setScore:(id)arg1;
- (id)key;
- (id)request;
- (void)dealloc;

@end
