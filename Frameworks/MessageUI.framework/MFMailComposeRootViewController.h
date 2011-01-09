/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class _MFMailCompositionContext, <MFMailComposeViewControllerDelegate>, MFMailComposeController;



@interface MFMailComposeRootViewController : UIViewController <MFMailPopoverManagerDelegate, MFMailComposeControllerDelegate>
{
    BOOL _isSuspended;
    _MFMailCompositionContext *_compositionContext;
    MFMailComposeController *_mailComposeController;
    <MFMailComposeViewControllerDelegate> *_delegate;
    id _autorotationDelegate;
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;
    NSUInteger _mailComposeControllerOptions;
}

@property id autorotationDelegate;
@property id delegate;


- (id)initWithCompositionContext:(id)arg1 contentSize:(struct CGSize { float x1; float x2; })arg2 mailComposeControllerOptions:(NSUInteger)arg3;
- (void)popoverControllerDidDismissPopover:(id)arg1 isUserAction:(BOOL)arg2;
- (void)_presentPeoplePicker:(id)arg1 fromView:(id)arg2;
- (void)_dismissPeoplePicker:(id)arg1;
- (void)_presentPersonCard:(id)arg1 fromView:(id)arg2;
- (id)_mailComposeView;
- (void)_resume;
- (void)_suspend;
- (id)autorotationDelegate;
- (id)initWithCompositionContext:(id)arg1;
- (id)_mailComposeController;
- (void)_setCompositionContext:(id)arg1;
- (void)setAutorotationDelegate:(id)arg1;
- (void)mailComposeControllerComposeBodyFieldDidFinishLoad;
- (void)mailComposeControllerCompositionFinished:(id)arg1;
- (id)_compositionContext;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)_canReloadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (id)rotatingHeaderView;
- (id)rotatingFooterView;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; NSInteger x5; float x6; }*)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (void)applicationWillSuspend;
- (void)applicationDidResume;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)tearDownUI;

@end
