/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIMovieSnapshotView, MPTransitionController, UIView, MPItem, NSString, MPVideoViewController, MPVideoView, UINavigationController;



@interface UIMoviePlayerController : NSObject 
{
    MPItem *_item;
    NSString *_moviePath;
    id _delegate;
    UIView *_topmostView;
    MPVideoViewController *_activeVideoController;
    MPVideoView *_videoView;
    MPTransitionController *_transitionController;
    NSInteger _transitionCount;
    UINavigationController *_portraitNavigationController;
    struct __CFBag { } *_ignoredChangeTypes;
    NSInteger _pendingInterfaceOrientation;
    MPItem *_pendingItem;
    MPItem *_pendingItemWithDifferentType;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _layoutRect;
    NSInteger _lastSetUIInterfaceOrientation;
    NSInteger _interfaceOrientation;
    NSInteger _interfaceOrientationFromDevice;
    NSString *_playbackErrorDescription;
    NSUInteger _autoRotationMask;
    NSUInteger _displayableParts;
    NSUInteger _unmodifiedDisplayableParts;
    NSUInteger _desiredParts;
    NSUInteger _audioControlsStyle;
    NSUInteger _playableContentTypeOverride;
    double _timeWhenResignedActive;
    UIMovieSnapshotView *_snapshotView;
    struct { 
        unsigned int canShowControlsOverlay : 1; 
        unsigned int wantsControlsOverlayVis : 1; 
        unsigned int wantsControlsOverlayAnim : 1; 
        unsigned int wantsControlsOverlayDisableAutohide : 1; 
        unsigned int wantsFullscreen : 1; 
        unsigned int alwaysFullscreen : 1; 
        unsigned int canAnimateControlsOverlay : 1; 
        unsigned int autoplayWhenLikelyToKeepUp : 1; 
        unsigned int externalSourceManagesStatusBar : 1; 
        unsigned int disallowsVideoOut : 1; 
        unsigned int exited : 1; 
        unsigned int generatingOrientationNotifications : 1; 
        unsigned int forStreaming : 1; 
        unsigned int isExternalTransformationActive : 1; 
        unsigned int controlsVisibleBeforeExternalTransformation : 1; 
        unsigned int isActive : 1; 
        unsigned int resigningActive : 1; 
        unsigned int didResignActive : 1; 
        unsigned int uiPrepared : 1; 
        unsigned int useLegacyControls : 1; 
        unsigned int isChangingMoviePath : 1; 
        unsigned int alwaysAllowHidingControlsOverlay : 1; 
        unsigned int schedulePortraitLoadingIndicator : 1; 
        unsigned int clientClearedMoviePath : 1; 
        unsigned int canCommitStatusBarAndOverlayChanges : 1; 
        unsigned int videoFrameDisplayOnResumeDisabled : 1; 
    } _mpcBitfield;
}

@property NSUInteger options;
@property(copy) NSString *moviePath;
@property(readonly) UIView *view;
@property id delegate;
@property NSUInteger playableContentType;
@property(readonly) BOOL isPreparedForPlayback;
@property(readonly) float playbackRate;
@property(readonly) NSUInteger playbackState;
@property(readonly) double duration;
@property double currentTime;
@property(readonly) BOOL muted;
@property(readonly) float volume;
@property(readonly) NSUInteger bufferingState;
@property(readonly) double playableDuration;
@property(readonly) double playableStartTime;
@property(readonly) double playableEndTime;
@property(readonly) double seekableStartTime;
@property(readonly) double seekableEndTime;
@property(readonly) long long fileSize;
@property(readonly) BOOL videoOutActive;
@property(readonly) BOOL canContinuePlayingWhenLocked;
@property(readonly) MPVideoView *movieView;
@property(readonly) CGSize naturalSize;
@property BOOL disallowsVideoOut;
@property(retain) UIImage *backgroundPlaceholderImage;
@property(getter=isFullscreen) BOOL fullscreen;
@property(readonly) UIView *fullscreenView;
@property BOOL useLegacyControls;
@property BOOL alwaysAllowHidingControlsOverlay;
@property BOOL videoFrameDisplayOnResumeDisabled;
@property(retain) MPItem *item;
@property(copy) NSString *playbackErrorDescription;
@property NSUInteger audioControlsStyle;

+ (struct CGSize { float x1; float x2; })fillSizeForMovieBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 movieNaturalSize:(struct CGSize { float x1; float x2; })arg2 orientation:(NSInteger)arg3 destinationTVOut:(BOOL)arg4;
+ (Class)preferredWindowClass;

- (long long)fileSize;
- (void)stop;
- (float)volume;
- (void)pause;
- (void)setOptions:(NSUInteger)arg1;
- (BOOL)isFullScreen;
- (id)initWithPlayerSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setFullscreen:(BOOL)arg1;
- (void)setManagesStatusBar:(BOOL)arg1;
- (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)arg1;
- (void)prepareAndSetupUI;
- (BOOL)setUIOrientation:(NSInteger)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3;
- (void)setVideoFrameDisplayOnResumeDisabled:(BOOL)arg1;
- (id)movieView;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)playerView;
- (double)currentTime;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)_removeSnapshotView;
- (void)setCurrentTime:(double)arg1;
- (NSUInteger)options;
- (void)_unregisterForNotifications;
- (id)item;
- (id)backgroundView;
- (void)_registerForNotifications;
- (double)duration;
- (id)view;
- (NSInteger)orientation;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)tearDownUI;
- (NSUInteger)playbackState;
- (void)play;
- (void)setItem:(id)arg1;
- (BOOL)muted;
- (void)delayedDebugSetup;
- (void)debugSetup;
- (id)initWithPlayerSize:(struct CGSize { float x1; float x2; })arg1 options:(NSUInteger)arg2;
- (void)unlockMoviePlaybackResources;
- (BOOL)canContinuePlayingWhenLocked;
- (BOOL)disallowsVideoOut;
- (id)moviePath;
- (void)setItem:(id)arg1 animated:(BOOL)arg2;
- (void)setMoviePath:(id)arg1;
- (void)setDisallowsVideoOut:(BOOL)arg1;
- (BOOL)videoOutActive;
- (void)setPlayableContentType:(NSUInteger)arg1;
- (NSUInteger)playableContentType;
- (BOOL)isPreparedForPlayback;
- (void)prepareForPlayback;
- (float)playbackRate;
- (double)playableStartTime;
- (double)playableEndTime;
- (double)seekableStartTime;
- (double)seekableEndTime;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(NSUInteger)arg2;
- (void)view:(id)arg1 willMoveToWindow:(id)arg2;
- (void)view:(id)arg1 didMoveToWindow:(id)arg2;
- (id)_topView;
- (void)_setActiveViewController:(id)arg1 forTransition:(BOOL)arg2;
- (id)createTransitionControllerForChangeToInterfaceOrientation:(NSInteger)arg1 fromInterfaceOrientation:(NSInteger)arg2;
- (id)createViewControllerForItem:(id)arg1 interfaceOrientation:(NSInteger)arg2 reusingController:(id)arg3;
- (void)_initializeVideoViewController:(id)arg1 orientation:(NSInteger)arg2;
- (id)_containerViewForController:(id)arg1;
- (id)_parentViewControllerForController:(id)arg1;
- (void)_prepareContainersForSwitchToActiveController:(id)arg1;
- (void)_tearDownContainersForSwitchFromViewController:(id)arg1;
- (void)_commitFinishInitializeActiveViewController:(id)arg1 animate:(BOOL)arg2;
- (void)_finishInitializeActiveViewController:(id)arg1 forTransition:(BOOL)arg2;
- (void)portraitDoneButtonAction:(id)arg1;
- (void)portraitScaleButtonAction:(id)arg1;
- (id)_portraitNavigationController:(BOOL)arg1;
- (void)_preparePortraitViewControllerContainers;
- (void)_tearDownPortraitViewControllerContainers;
- (id)_portraitNavigationRootController:(BOOL)arg1;
- (BOOL)shouldDisplayTitles;
- (id)_titlesForPortraitNavigationBarAtTime:(double)arg1;
- (id)_titlesViewForNavigationItem:(id)arg1;
- (id)_portraitNavigationControllerTitleView;
- (void)_reconfigurePortraitNavigationItem:(id)arg1 time:(double)arg2 animate:(BOOL)arg3;
- (void)_delayedShowPortraitLoading;
- (void)_setPortraitLoadingShowing:(BOOL)arg1;
- (void)_hideLoadingForStateChange:(id)arg1;
- (void)_schedulePortraitLoadingIndicatorIfNeeded;
- (void)_reconfigurePortraitNavigationBarNowIfNecessary;
- (void)crossedChapterTimeMarker:(id)arg1;
- (void)beginIgnoringChangeTypes:(NSUInteger)arg1;
- (BOOL)_noteStoppedIgnoringChangeType:(NSUInteger)arg1;
- (BOOL)_shouldIgnoreChangeType:(NSUInteger)arg1;
- (void)endIgnoringChangeTypes:(NSUInteger)arg1;
- (void)beginTransition;
- (void)endTransition;
- (void)_transitionFinished:(id)arg1;
- (void)viewController:(id)arg1 beginIgnoringChangeTypes:(NSUInteger)arg2;
- (void)viewController:(id)arg1 endIgnoringChangeType:(NSUInteger)arg2;
- (void)performTransition:(id)arg1;
- (void)_performTransition:(id)arg1 toController:(id)arg2;
- (void)_reloadForTransitionFromInterfaceOrientation:(NSInteger)arg1 toInterfaceOrientation:(NSInteger)arg2 animated:(BOOL)arg3;
- (BOOL)setOrientation:(NSInteger)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3;
- (NSUInteger)autoRotationMask;
- (void)setAutoRotationMask:(NSUInteger)arg1;
- (void)setDesiredMovieParts:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)setDisplayableMovieParts:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)setDisplayable:(BOOL)arg1 movieParts:(NSUInteger)arg2 animated:(BOOL)arg3;
- (void)setCanAnimateControlsOverlay:(BOOL)arg1;
- (void)setControlsOverlayVisible:(BOOL)arg1 disableAutohide:(BOOL)arg2 animate:(BOOL)arg3;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)setAudioControlsStyle:(NSUInteger)arg1;
- (void)setPlaybackErrorDescription:(id)arg1;
- (void)layoutUIInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })moviePlaceholderImageRectForMovieWithAspectRatio:(float)arg1;
- (void)_prepareAndSetupUI;
- (void)_prepareAndSetupUIForClient;
- (void)setBackgroundPlaceholderImage:(id)arg1;
- (id)backgroundPlaceholderImage;
- (void)beginExternalTransformation;
- (void)endExternalTransformation;
- (id)fullscreenView;
- (BOOL)useLegacyControls;
- (void)setUseLegacyControls:(BOOL)arg1;
- (BOOL)alwaysAllowHidingControlsOverlay;
- (void)setAlwaysAllowHidingControlsOverlay:(BOOL)arg1;
- (BOOL)videoFrameDisplayOnResumeDisabled;
- (BOOL)videoControllerShouldShowPositionInQueueUI:(id)arg1;
- (void)videoControllerWillShowOverlay:(id)arg1;
- (void)videoControllerDidShowOverlay:(id)arg1;
- (void)videoControllerWillHideOverlay:(id)arg1;
- (void)videoControllerDidHideOverlay:(id)arg1;
- (void)videoControllerDidCreateFullscreenView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })videoControllerFrameAfterFullscreenExit:(id)arg1;
- (void)snapshotViewWasTapped:(id)arg1;
- (void)_bufferingStateChangedNotification:(id)arg1;
- (void)_itemChangedNotification:(id)arg1;
- (void)_serverDeathNotification:(id)arg1;
- (void)_validityChangedNotification:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_tvOutCapabilityChanged:(id)arg1;
- (void)_itemTypeAvailableNotification:(id)arg1;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)_itemPlaybackDidFailNotification:(id)arg1;
- (void)_tickNotification:(id)arg1;
- (void)_volumeDidChangeNotification:(id)arg1;
- (void)_mutedDidChangeNotification:(id)arg1;
- (void)_addSnapshotViewForTime:(double)arg1;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (NSUInteger)_convertedPartsMask:(NSUInteger)arg1;
- (NSUInteger)_convertedVisiblePartsMask:(NSUInteger)arg1;
- (void)_exitPlayer:(NSInteger)arg1;
- (NSInteger)_exitReasonForMPViewControllerExitReason:(NSUInteger)arg1;
- (void)_updateEnabledParts;
- (void)_beginDeviceOrientationNotifications;
- (void)_endDeviceOrientationNotifications;
- (BOOL)_canAutoRotateToInterfaceOrientation:(NSInteger)arg1;
- (void)_autoRotateToCurrentOrientationAnimated:(BOOL)arg1;
- (void)_autoRotateToInterfaceOrientation:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)_updatePlayableContentTypeOverride;
- (id)_backgroundPlaceholderView;
- (void)_updateForStreamingOptions;
- (id)playbackErrorDescription;
- (NSUInteger)audioControlsStyle;
- (id)_activeVideoController;
- (id)initWithPlayerSize:(struct CGSize { float x1; float x2; })arg1 isFullScreen:(BOOL)arg2;
- (id)initWithPlayerSize:(struct CGSize { float x1; float x2; })arg1 isFullScreen:(BOOL)arg2 options:(NSUInteger)arg3;
- (void)layoutUIInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fullScreen:(BOOL)arg2;
- (NSUInteger)bufferingState;
- (void)setCanShowControlsOverlay:(BOOL)arg1;
- (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isFullscreen;
- (double)playableDuration;
- (BOOL)videoControllerShouldAutohide:(id)arg1;
- (void)videoControllerWillEnterFullscreen:(id)arg1;
- (void)videoControllerDidEnterFullscreen:(id)arg1;
- (void)videoControllerWillExitFullscreen:(id)arg1;
- (void)videoControllerDidExitFullscreen:(id)arg1;
- (void)viewControllerRequestsExit:(id)arg1 reason:(NSUInteger)arg2;
- (BOOL)videoController:(id)arg1 tappedButtonPart:(NSUInteger)arg2;
- (void)_itemReadyToPlayNotification:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (void)_timedMetadataAvailableNotification:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_videoViewScaleModeDidChangeNotification:(id)arg1;
- (void)_videoViewPathWillChangeNotification:(id)arg1;
- (void)_moviePlayerWillBecomeActiveNotification:(id)arg1;
- (void)_moviePlayerDidBecomeActiveNotification:(id)arg1;
- (void)_ensureActive;
- (void)_resignActive;
- (void)_pausePlaybackForNotification:(id)arg1;
- (void)_willSuspendNotification:(id)arg1;
- (void)_willBeginSuspendAnimationNotification:(id)arg1;
- (void)_willResignNotification:(id)arg1;
- (void)_willTerminateNotification:(id)arg1;
- (void)_simpleRemoteNotification:(id)arg1;

@end
