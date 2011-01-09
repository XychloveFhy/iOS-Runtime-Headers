/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class <CNFRegViewAccountControllerDelegate>, IMAccount;



@interface CNFRegViewAccountController : CNFRegAccountWebViewController 
{
    IMAccount *_account;
    <CNFRegViewAccountControllerDelegate> *_delegate;
}

@property(retain) IMAccount *account;
@property <CNFRegViewAccountControllerDelegate> *delegate;


- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setAccount:(id)arg1;
- (id)account;
- (id)initWithAccount:(id)arg1;
- (id)authIdHeaderValue;
- (id)authTokenHeaderValue;
- (id)bagKey;
- (id)logName;
- (void)cancelTapped;
- (void)doHandoffWithStatus:(NSInteger)arg1 appleId:(id)arg2 password:(id)arg3;

@end
