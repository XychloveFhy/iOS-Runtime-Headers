/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKAccountViewControllerDelegate>, NSString, NSURLRequest, NSURL;



@interface GKAccountViewController : GKServerWebViewController 
{
    <GKAccountViewControllerDelegate> *_delegate;
    NSURL *_url;
    NSString *_playerID;
    NSString *_authToken;
    NSString *_accountName;
    NSString *_alias;
    NSInteger _mode;
    NSURLRequest *_previousRequest;
    BOOL _lockedToPortrait;
}

@property(getter=isLockedToPortrait) BOOL lockedToPortrait;
@property(retain) NSURLRequest *previousRequest;
@property NSInteger mode;
@property(retain) NSString *alias;
@property(retain) NSString *accountName;
@property(retain) NSString *authToken;
@property(retain) NSString *playerID;
@property(retain) NSURL *url;
@property <GKAccountViewControllerDelegate> *delegate;


- (id)url;
- (void)load;
- (id)alias;
- (void)setAlias:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)showFailureMessage;
- (void)setHeadersForRequest:(id)arg1;
- (void)authenticateAndTryURLRequestAgain:(id)arg1;
- (BOOL)isLockedToPortrait;
- (id)previousRequest;
- (void)setPreviousRequest:(id)arg1;
- (void)setLockedToPortrait:(BOOL)arg1;
- (void)setAuthToken:(id)arg1;
- (id)authToken;
- (void)setPlayerID:(id)arg1;
- (id)playerID;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(NSUInteger)arg3;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)cancel;
- (void)setMode:(NSInteger)arg1;
- (NSInteger)mode;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setAccountName:(id)arg1;
- (id)accountName;

@end
