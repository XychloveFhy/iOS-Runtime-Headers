/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMusicPlayerControllerServerInternal;



@interface MPMusicPlayerControllerServer : NSObject 
{
    MPMusicPlayerControllerServerInternal *_internal;
}

+ (void)initialize;
+ (id)sharedInstance;
+ (void)startMusicPlayerControllerServer;

- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)init;
- (void)dealloc;
- (void)_runMigServer;

@end
