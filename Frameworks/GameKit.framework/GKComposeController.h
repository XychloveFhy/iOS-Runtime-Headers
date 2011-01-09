/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKComposeControllerDelegate>;



@interface GKComposeController : GKAbstractComposeController <GKAccountViewControllerDelegate>
{
    <GKComposeControllerDelegate> *_delegate;
    BOOL _alreadySetUp;
    NSInteger _entryViewInvisible;
    NSInteger _successCount;
    NSInteger _failCount;
    BOOL _dismissed;
    BOOL _alertShown;
}

@property <GKComposeControllerDelegate> *delegate;


- (void)setTextEntryContentsVisible:(BOOL)arg1;
- (void)addPlayerRecipients:(id)arg1;
- (void)send:(id)arg1;
- (void)showAlertForSuccess;
- (void)showAlertForFailures:(id)arg1 allFailed:(BOOL)arg2;
- (void)showAlertForError:(id)arg1;
- (void)updateTitle;
- (void)updateNavigationButtons;
- (void)cancelButtonClicked:(id)arg1;
- (void)accountViewControllerDidFinish:(id)arg1 accountCreated:(BOOL)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dismiss;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
