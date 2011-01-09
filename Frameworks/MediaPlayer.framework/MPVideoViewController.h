/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIAlertView, UIProgressIndicator, UIColor, MPVideoBackgroundView, MPSwipableView, MPTVOutWindow;



@interface MPVideoViewController : MPViewController <MPSwipableViewDelegate, MPVideoTransferViewController, UIModalViewDelegate>
{
    MPVideoBackgroundView *_backgroundView;
    MPSwipableView *_backstopView;
    NSUInteger _desiredParts;
    NSUInteger _disabledParts;
    NSUInteger _visibleParts;
    unsigned int _tvOutEnabled : 1;
    NSUInteger _itemTypeOverride;
    UIAlertView *_alertSheet;
    UIColor *_backstopColor;
    UIProgressIndicator *_loadingIndicator;
    MPTVOutWindow *_tvOutWindow;
    NSUInteger _scaleMode;
    unsigned int _canAnimateControlsOverlay : 1;
    unsigned int _canShowControlsOverlay : 1;
    unsigned int _disableControlsAutohide : 1;
    unsigned int _ownsStatusBar : 1;
    unsigned int _ownsVideoView : 1;
    unsigned int _playAfterPop : 1;
    unsigned int _scheduledLoadingIndicator : 1;
    unsigned int _displayPlaybackErrorAlerts : 1;
    unsigned int _allowsDetailScrubbing : 1;
    unsigned int _attemptAutoPlayWhenControlsHidden : 1;
    unsigned int _alwaysAllowHidingControlsOverlay : 1;
    unsigned int _usePosterForEmbeddedArtwork : 1;
}

@property(readonly) BOOL canChangeScaleMode;
@property BOOL ownsStatusBar;
@property BOOL TVOutEnabled;
@property(retain,readonly) MPVideoView *videoView;
@property(readonly) BOOL viewControllerWillRequestExit;
@property BOOL displayPlaybackErrorAlerts;
@property BOOL allowsDetailScrubbing;
@property BOOL attemptAutoPlayWhenControlsHidden;
@property(getter=isFullscreen) BOOL fullscreen;
@property(readonly) BOOL usePosterForTVOut;
@property BOOL usePosterForEmbeddedArtwork;
@property(readonly) UIView *posterImageView;
@property(readonly) CGRect backgroundViewSnapshotFrame;
@property BOOL inhibitOverlay;
@property BOOL canAnimateControlsOverlay;
@property BOOL canShowControlsOverlay;
@property BOOL disableControlsAutohide;
@property BOOL controlsOverlayVisible;
@property BOOL alwaysAllowHidingControlsOverlay;
@property(readonly) BOOL canShowQTAudioOnlyUI;
@property(readonly) UIView *backgroundView;
@property NSUInteger itemTypeOverride;
@property(retain) UIColor *backstopColor;
@property NSUInteger visibleParts;
@property NSUInteger scaleMode;
@property NSUInteger disabledParts;
@property NSUInteger desiredParts;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calculatePosterImageViewFrameInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (BOOL)supportsFullscreenDisplay;
+ (id)sharedVideoView:(BOOL)arg1;
+ (BOOL)isPlayingToTVOut;
+ (void)_initializeSafeCategory;

- (void)setFullscreen:(BOOL)arg1;
- (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)arg1;
- (void)setScaleMode:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)setScaleMode:(NSUInteger)arg1;
- (void)toggleScaleMode:(BOOL)arg1;
- (id)videoView;
- (void)setOrientation:(NSInteger)arg1;
- (void)loadView;
- (void)viewDidUnload;
- (void)removeChildViewController:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)backgroundView;
- (id)init;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)dealloc;
- (void)setItem:(id)arg1;
- (void)_updateIdleTimerDisabledFromPlaybackState:(NSUInteger)arg1;
- (void)_itemEmbeddedArtworkAvailableNotification:(id)arg1;
- (BOOL)usePosterForEmbeddedArtwork;
- (BOOL)canShowPosterArtwork;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calculatePosterImageViewFrame;
- (void)_updateAlwaysPlayWheneverPossible;
- (BOOL)attemptAutoPlayWhenControlsHidden;
- (BOOL)displayPlaybackErrorAlerts;
- (BOOL)infoOverlayShouldDisplayQueuePositionUI:(id)arg1;
- (void)chapterList:(id)arg1 selectedChapter:(NSUInteger)arg2;
- (void)chapterListDidDisappear:(id)arg1;
- (void)_videoView_applicationSuspendedNotification:(id)arg1;
- (void)_videoView_playbackErrorNotification:(id)arg1;
- (void)_exitPlayerForPlaybackError;
- (void)_videoView_playbackStateChangedNotification:(id)arg1;
- (void)_videoVideo_batteryStateDidChangeNotification:(id)arg1;
- (void)_videoView_scaleModeChangedNotification:(id)arg1;
- (void)_videoView_effectiveScaleModeChangedNotification:(id)arg1;
- (void)_videoView_validityChangedNotification:(id)arg1;
- (void)_videoView_sizeChangedNotification:(id)arg1;
- (void)_videoView_timedImageMetadataAvailableNotification:(id)arg1;
- (void)_delayedUpdateBackgroundView;
- (void)_updateBackgroundView:(BOOL)arg1;
- (void)_popForTimeJump:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_itemDurationDidChange:(id)arg1;
- (void)_delayedPopForTimeJump;
- (void)_delayedShowLoading;
- (void)_orderOutTVOutWindow;
- (void)displayVideoViewOnTV;
- (void)handleScaleModeChange;
- (void)_showStillFrameIfNotAlreadyPlaying;
- (void)_scheduleLoadingIndicatorIfNeeded;
- (void)setControlsOverlayVisible:(BOOL)arg1;
- (BOOL)canShowQTAudioOnlyUI;
- (void)backgroundViewDidUpdate;
- (void)_hideLoadingIndicator;
- (void)_updateProgressControlForItem:(id)arg1;
- (NSUInteger)itemTypeOverride;
- (BOOL)ownsStatusBar;
- (void)reloadPosterImageView;
- (BOOL)canAnimateControlsOverlay;
- (void)showChaptersControllerAndFadeViews:(id)arg1;
- (NSUInteger)desiredParts;
- (NSUInteger)disabledParts;
- (BOOL)disableControlsAutohide;
- (void)showAlternateTracksController:(id)arg1;
- (id)posterImageView;
- (id)newAlternateTracksTransition;
- (void)displayVideoViewOnScreen;
- (BOOL)canHideOverlay:(BOOL)arg1;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
- (BOOL)usePosterForTVOut;
- (void)videoView_resumeEventsOnlyNotification:(id)arg1;
- (id)createChapterFlipTransition;
- (void)showChaptersController;
- (BOOL)allowsDetailScrubbing;
- (BOOL)canChangeScaleMode;
- (void)crossedArtworkTimeMarker:(id)arg1;
- (void)setUsePosterForEmbeddedArtwork:(BOOL)arg1;
- (void)setDesiredParts:(NSUInteger)arg1;
- (void)noteIgnoredChangeTypes:(NSUInteger)arg1;
- (void)setDesiredParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (BOOL)controlsOverlayVisible;
- (void)setControlsNeedLayout;
- (BOOL)viewControllerWillRequestExit;
- (void)displayVideoView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundViewSnapshotFrame;
- (void)setDisabledParts:(NSUInteger)arg1;
- (void)_hideLoadingForStateChange:(id)arg1;
- (void)setCanAnimateControlsOverlay:(BOOL)arg1;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (BOOL)alwaysAllowHidingControlsOverlay;
- (void)setAlwaysAllowHidingControlsOverlay:(BOOL)arg1;
- (NSUInteger)scaleMode;
- (void)setCanShowControlsOverlay:(BOOL)arg1;
- (BOOL)TVOutEnabled;
- (void)setItemTypeOverride:(NSUInteger)arg1;
- (BOOL)canShowControlsOverlay;
- (id)backstopColor;
- (void)setOwnsVideoView:(BOOL)arg1;
- (void)displayFreshVideoViewContents;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setDisplayPlaybackErrorAlerts:(BOOL)arg1;
- (void)setTVOutEnabled:(BOOL)arg1;
- (NSUInteger)visibleParts;
- (void)setVisibleParts:(NSUInteger)arg1;
- (void)setOwnsStatusBar:(BOOL)arg1;
- (void)setVisibleParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)setDisableControlsAutohide:(BOOL)arg1;
- (void)setBackstopColor:(id)arg1;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isFullscreen;

@end
