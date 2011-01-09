/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/MapSupport.framework/MapSupport
 */

@class NSString, MFMailComposeViewController;



@interface EmailCommand : Command <MFMailComposeViewControllerDelegate>
{
    NSString *_emailAddress;
    NSString *_filePath;
    MFMailComposeViewController *_composeController;
}

@property(retain) MFMailComposeViewController *composeController;
@property(retain) NSString *emailAddress;
@property(retain) NSString *filePath;

+ (BOOL)canEmail;
+ (void)loadMessageUIIfNecessary;

- (id)emailAddress;
- (void)setEmailAddress:(id)arg1;
- (BOOL)execute;
- (void)setFilePath:(id)arg1;
- (BOOL)isValid;
- (void)dealloc;
- (id)composeController;
- (void)setComposeController:(id)arg1;
- (void)processArguments:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(NSInteger)arg2 error:(id)arg3;
- (void)cleanup;
- (id)filePath;

@end
