/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLCropPhotoControllerDelegate>, UIToolbar, PLCropOverlayView2;



@interface PLCropPhotoController : UIViewController <UIActionSheetDelegate>
{
    PLCropOverlayView2 *_overlayView;
    <PLCropPhotoControllerDelegate> *_delegate;
    UIToolbar *_toolbar;
    unsigned int _didInitializeNavigationItem : 1;
    unsigned int _toolbarWasHidden : 1;
}

@property UIToolbar *toolbar;
@property <PLCropPhotoControllerDelegate> *delegate;


- (void)cancel:(id)arg1;
- (void)didStopAnimatingOrderOut:(id)arg1 finished:(id)arg2 content:(void*)arg3;
- (void)displayCropActions:(id)arg1;
- (void)rotateCropRect:(id)arg1;
- (void)displayOnController:(id)arg1;
- (void)cropPhoto:(id)arg1;
- (void)setToolbar:(id)arg1;
- (id)toolbar;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewDidUnload;
- (void)viewDidAppear:(BOOL)arg1;
- (id)navigationItem;
- (void)orderOut:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
