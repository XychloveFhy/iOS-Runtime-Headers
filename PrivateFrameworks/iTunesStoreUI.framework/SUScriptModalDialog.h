/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIAlertView, ISDialog;



@interface SUScriptModalDialog : NSObject 
{
    UIAlertView *_alert;
    NSInteger _buttonIndex;
    ISDialog *_dialog;
}

+ (id)titleForURL:(id)arg1;

- (void)alertView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)dealloc;
- (id)_copyResponseByRunningModal;
- (id)initWithDialog:(id)arg1;
- (id)copyResponseByRunningModal;

@end
