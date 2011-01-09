/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UINavigationBar, UIActivityIndicatorView, UIImageView, MPWildcatFullScreenTransportControls, UINavigationItem, UILabel, UINavigationButton, NSString, UIBarButtonItem, UIPopoverController;



@interface MPWildcatFullScreenVideoOverlay : MPVideoOverlay 
{
    MPWildcatFullScreenTransportControls *_transportControls;
    UIImageView *_hudImageView;
    UINavigationBar *_navigationBar;
    UINavigationItem *_navigationItem;
    UIImageView *_navigationBarBackgroundShort;
    UIImageView *_navigationBarBackgroundTall;
    UIImageView *_navigationBarShadow;
    NSString *_title;
    UINavigationButton *_scaleModeButton;
    UILabel *_scrubSpeedLabel;
    UILabel *_scrubInstructionsLabel;
    UIBarButtonItem *_doneButton;
    UIPopoverController *_popoverController;
    UILabel *_loadingMovieLabel;
    UIActivityIndicatorView *_loadingMovieIndicator;
}

@property(copy) NSString *title;


- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)_initSubviews;
- (void)setInterfaceOrientation:(NSInteger)arg1;
- (id)title;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setAlpha:(float)arg1;
- (void)layoutSubviews;
- (void)setItem:(id)arg1;
- (void)_doneButton:(id)arg1;
- (void)_scaleButton:(id)arg1;
- (void)_itemDurationAvailableNotification:(id)arg1;
- (id)_navBarBackgroundImageForProgressControl:(BOOL)arg1 tallStyle:(BOOL)arg2;
- (void)_reconfigureNavigationBarAnimated:(BOOL)arg1;
- (void)_scheduleHidePopoverTimer;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(NSInteger)arg2;
- (void)_showScrubInstructions;
- (void)_hideScrubInstructions;
- (void)setVideoViewController:(id)arg1;
- (NSUInteger)disabledParts;
- (void)hideAlternateTracks;
- (void)showAlternateTracks;
- (void)setDesiredParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)setDisabledParts:(NSUInteger)arg1;
- (NSUInteger)_convertedPartsMask:(NSUInteger)arg1;
- (void)setVisibleParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)_videoViewScaleModeDidChangeNotification:(id)arg1;

@end
