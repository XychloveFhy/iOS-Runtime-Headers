/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/MapSupport.framework/MapSupport
 */



@interface Command : NSObject <UIAlertViewDelegate>
{
    id _delegate;
}

@property(readonly) BOOL isValid;
@property id delegate;

+ (id)name;
+ (Class)commandClassFromString:(id)arg1;
+ (id)commandWithString:(id)arg1;
+ (BOOL)executeCommand:(id)arg1 delegate:(id)arg2;

- (BOOL)execute;
- (BOOL)isValid;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)processArguments:(id)arg1;

@end
