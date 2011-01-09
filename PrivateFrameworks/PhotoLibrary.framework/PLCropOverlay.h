/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLCropOverlayBottomBar, TPPushButton, UIImageView, UILabel, PLCropOverlayCropView, UIView, TPBottomDualButtonBar, TPCameraPushButton, UIProgressHUD, UIButton, PLToolbar;



@interface PLCropOverlay : UIView 
{
    id _delegate;
    PLCropOverlayCropView *_cropView;
    PLCropOverlayBottomBar *_bottomBar;
    UIImageView *_shadowView;
    UIView *_overlayContainerView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cropRect;
    PLToolbar *_customToolbar;
    UILabel *_titleLabel;
    UIImageView *_topShineView;
    TPBottomDualButtonBar *_oldBottomBar;
    TPPushButton *_cancelPushButton;
    TPCameraPushButton *_okPushButton;
    UIProgressHUD *_hud;
    float _statusBarHeight;
    NSInteger _mode;
    unsigned int _cropRectIsVisible : 1;
    unsigned int _offsetStatusBar : 1;
    unsigned int _tookPhoto : 1;
    unsigned int _showsCropRegion : 1;
    unsigned int _controlsAreVisible : 1;
    UIImageView *_bottomShineView;
    UIButton *_okButton;
    UIButton *_cancelButton;
    UIView *_wildcatPickerTopView;
    UIView *_wildcatPickerBottomView;
}

+ (void)_initializeSafeCategory;

- (void)_updateToolbarItems:(BOOL)arg1;
- (id)_newOverlayViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 lighterEdgeOnTop:(BOOL)arg2;
- (void)_createCropView;
- (void)setCropRectVisible:(BOOL)arg1 duration:(float)arg2;
- (void)_setMode:(NSInteger)arg1;
- (void)statusBarHeightDidChange:(id)arg1;
- (void)_fadeOutCompleted:(id)arg1;
- (void)cropOverlayBottomBarCancelButtonClicked:(id)arg1;
- (void)cropOverlayBottomBarDoneButtonClicked:(id)arg1;
- (void)cropOverlayBottomBarPlayButtonClicked:(id)arg1;
- (void)_playButtonPressed:(id)arg1;
- (void)cropOverlayBottomBarPauseButtonClicked:(id)arg1;
- (void)_pauseButtonPressed:(id)arg1;
- (void)didCaptureVideo;
- (void)removeProgress;
- (void)setOKButtonTitle:(id)arg1;
- (void)setOKButtonColor:(NSInteger)arg1;
- (void)setOKButtonShowsCamera:(BOOL)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)didCapturePhoto;
- (id)bottomBar;
- (id)modeSwitch;
- (id)shutterButton;
- (void)setTitleHidden:(BOOL)arg1 animationDuration:(float)arg2;
- (void)setModeSwitch:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 mode:(NSInteger)arg2 offsettingStatusBar:(BOOL)arg3;
- (void)setOverlayContainerView:(id)arg1;
- (void)insertIrisView:(id)arg1;
- (void)beginBackgroundSaveWithTile:(id)arg1 progressTitle:(id)arg2 completionCallbackTarget:(id)arg3 options:(NSInteger)arg4;
- (void)didPlayVideo;
- (void)didPauseVideo;
- (id)overlayContainerView;
- (void)setShowsCropRegion:(BOOL)arg1;
- (void)setControlsAreVisible:(BOOL)arg1;
- (BOOL)controlsAreVisible;
- (id)_irisView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 mode:(NSInteger)arg2;
- (void)setTitle:(id)arg1 okButtonTitle:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropRect;
- (void)setShowProgress:(BOOL)arg1 title:(id)arg2;
- (void)setProgressDone;
- (void)_backgroundSavePhoto:(id)arg1;
- (void)_savePhotoFinished:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)okButtonClicked:(id)arg1;
- (NSInteger)mode;
- (void)dismiss;
- (void)setEnabled:(BOOL)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (BOOL)_accessibilityAllowsSiblingsWhenOvergrown;

@end
