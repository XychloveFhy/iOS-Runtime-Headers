/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class QLPreviewViewReserved;



@interface QLPreviewView : UIView 
{
    QLPreviewViewReserved *_reserved;
}

@property id delegate;
@property(retain) <QLPreviewItem> *previewItem;

+ (id)_passThroughUTIs;
+ (BOOL)_shouldPassThroughUTI:(id)arg1;
+ (BOOL)canPreviewURL:(id)arg1;
+ (BOOL)canPreviewMIMEType:(id)arg1;

- (void)_showDisplayBundleAnimationDidEnd;
- (void)showDisplayBundleAnimated:(BOOL)arg1;
- (void)_hideDisplayBundleAnimationDidEnd;
- (void)hideDisplayBundleAnimated:(BOOL)arg1;
- (void)_updateDisplayBundle;
- (void)_showError:(id)arg1 animated:(BOOL)arg2;
- (void)_startProgressiveUITimer;
- (void)_addProgressUI;
- (void)_removeProgressiveUI;
- (BOOL)_hasProgressiveUI;
- (void)displayBundleWasTapped:(id)arg1;
- (void)displayBundle:(id)arg1 didLoadItem:(id)arg2 withError:(id)arg3;
- (id)displayBundle:(id)arg1 willSendRequest:(id)arg2;
- (BOOL)displayBundle:(id)arg1 decidePolicyForNavigationType:(NSInteger)arg2 request:(id)arg3;
- (void)previewControllerDidReceiveMemoryWarning;
- (void)refreshPreviewItem;
- (id)displayBundle;
- (void)previewControllerDidZoomIn;
- (BOOL)previewIsReady;
- (BOOL)isShowingErrorView;
- (void)cancelPreview;
- (void)previewControllerDidZoomOut;
- (void)previewControllerWillZoomIn;
- (void)previewControllerWillZoomOut;
- (void)setPreviewItem:(id)arg1;
- (id)previewItem;
- (void)viewDidLoad;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
