/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptAccountManager, SUScriptWindowContext, SUScriptNotificationObserver, WebScriptObject, SUScriptMediaLibrary, <SUScriptInterfaceDelegate>, NSURL, NSMutableDictionary, SUScriptOperationDelegate;



@interface SUScriptInterface : SUScriptObject 
{
    SUScriptAccountManager *_accountManager;
    <SUScriptInterfaceDelegate> *_delegate;
    NSMutableDictionary *_downloadQueues;
    NSURL *_mainFrameURL;
    SUScriptMediaLibrary *_mediaLibrary;
    SUScriptNotificationObserver *_notificationObserver;
    SUScriptOperationDelegate *_scriptOperationDelegate;
    BOOL _sourceIsTrusted;
    SUScriptWindowContext *_scriptWindowContext;
    id _threadSafeDelegate;
    WebScriptObject *_windowScriptObject;
}

@property(readonly) SUScriptAddressBook *addressBook;
@property(readonly) SUScriptDevice *device;
@property(readonly) SUScriptApplication *application;
@property(readonly) SUScriptMediaLibrary *mediaLibrary;
@property(readonly) SUScriptWindow *window;
@property(readonly) SUScriptProtocol *protocol;
@property(readonly) SUScriptSectionsController *sectionsController;
@property(readonly) SUScriptViewController *viewController;
@property(readonly) NSArray *accounts;
@property(retain) SUScriptAccount *primaryAccount;
@property(retain) SUScriptWindowContext *scriptWindowContext;
@property <SUScriptInterfaceDelegate> *delegate;
@property(readonly) <SUScriptInterfaceDelegate> *threadSafeDelegate;
@property BOOL sourceIsTrusted;
@property(readonly) id globalRootObject;
@property(readonly) id loggingEnabled;
@property(readonly) SUScriptNavigationBar *navigationBar;
@property(readonly) NSNumber *orientation;
@property(readonly) id screenReaderRunning;
@property(retain) NSURL *mainFrameURL;

+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;

- (id)attributeKeys;
- (void)setMainFrameURL:(id)arg1;
- (id)mainFrameURL;
- (id)protocol;
- (id)systemVersion;
- (void)goBack;
- (void)setOrientation:(id)arg1;
- (BOOL)launchedToTest;
- (BOOL)isRunningTest;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)parentViewController;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg1;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (void)setWindow:(id)arg1;
- (void)startedTest:(id)arg1;
- (id)init;
- (void)openURL:(id)arg1;
- (id)orientation;
- (id)window;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)addressBook;
- (id)makeAccountPageWithURLs:(id)arg1;
- (void)setDevice:(id)arg1;
- (id)makeReportAProblemViewControllerWithAdamID:(id)arg1;
- (id)makeURLRequestWithURLs:(id)arg1 timeoutInterval:(id)arg2;
- (id)makeSegmentedControl;
- (id)makeVolumeViewController;
- (id)application;
- (id)makeComposeReviewViewControllerWithReview:(id)arg1;
- (void)composeReviewWithURL:(id)arg1 itemIdentifier:(id)arg2 type:(id)arg3;
- (id)makeReviewWithAdamID:(id)arg1;
- (void)addExternalDownloads:(id)arg1;
- (void)addExternalDownloadsFromManifestURL:(id)arg1;
- (void)addPurchaseWithInfo:(id)arg1;
- (id)mediaLibrary;
- (void)setMediaLibrary:(id)arg1;
- (id)makeColorWithHue:(id)arg1 saturation:(id)arg2 brightness:(id)arg3 alpha:(id)arg4;
- (id)makeColorWithRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4;
- (id)makeColorWithWhite:(id)arg1 alpha:(id)arg2;
- (id)makeLinearGradientWithX0:(float)arg1 y0:(float)arg2 x1:(float)arg3 y1:(float)arg4;
- (id)makeRadialGradientWithX0:(float)arg1 y0:(float)arg2 r0:(float)arg3 x1:(float)arg4 y1:(float)arg5 r1:(float)arg6;
- (id)makeCanvasWithWidth:(id)arg1 height:(id)arg2;
- (id)makeMenuViewController;
- (id)makeSplitViewController;
- (id)makeNumberFormatterWithStyle:(id)arg1;
- (id)makeWindow;
- (void)pingURL:(id)arg1;
- (void)handleProtocolPropertyListString:(id)arg1;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (void)dismissWindowsWithOptions:(id)arg1;
- (id)makeNavigationControllerWithRootViewController:(id)arg1;
- (id)makeStorePageWithURLs:(id)arg1;
- (void)redeemCode:(id)arg1;
- (void)reloadFooterSection:(id)arg1 withURL:(id)arg2;
- (void)selectSectionWithIdentifier:(id)arg1;
- (void)showMediaPlayerWithURLString:(id)arg1 orientation:(id)arg2 title:(id)arg3 subtitle:(id)arg4 bookmarkID:(id)arg5 duration:(id)arg6 type:(id)arg7 imageURL:(id)arg8;
- (id)sectionsController;
- (void)setSectionsController:(id)arg1;
- (void)dismissSheet;
- (void)gotoStoreURL:(id)arg1;
- (void)gotoStoreURL:(id)arg1 ofType:(id)arg2 withAuthentication:(BOOL)arg3 forceAuthentication:(BOOL)arg4;
- (void)showMediaPreviewWithURLString:(id)arg1;
- (id)_copyScriptViewControllerForParentViewController;
- (void)_enterAccountFlowWithURL:(id)arg1;
- (void)_gotoStoreURL:(id)arg1 withAuthentication:(BOOL)arg2 forceAuthentication:(BOOL)arg3;
- (id)getDownloadQueueWithQueueType:(id)arg1;
- (id)accountForDSID:(id)arg1;
- (void)authenticateForAccount:(id)arg1 withOptions:(id)arg2;
- (id)makeAccount;
- (id)accounts;
- (id)primaryAccount;
- (void)setAccounts:(id)arg1;
- (void)setPrimaryAccount:(id)arg1;
- (NSInteger)dialogDisplayCountForKey:(id)arg1;
- (id)makeDialog;
- (id)makeButtonWithTitle:(id)arg1 action:(id)arg2;
- (id)makeTextFieldWithStyle:(id)arg1 placeholder:(id)arg2 value:(id)arg3 width:(id)arg4;
- (id)makePopOverWithViewController:(id)arg1;
- (id)softwareApplicationWithAdamID:(id)arg1;
- (void)setProtocol:(id)arg1;
- (void)initAuthentication;
- (void)deallocAuthentication;
- (void)deallocDownloadQueue;
- (void)deallocMediaLibrary;
- (id)device;
- (struct OpaqueJSContext { }*)copyJavaScriptContext;
- (id)scriptWindowContext;
- (void)setScriptWindowContext:(id)arg1;
- (void)setSourceIsTrusted:(BOOL)arg1;
- (void)setWindowScriptObject:(id)arg1;
- (BOOL)sourceIsTrusted;
- (id)threadSafeDelegate;
- (void)dispatchGlobalEventWithName:(id)arg1 payload:(id)arg2;
- (void)handleDialogPropertyListString:(id)arg1;
- (void)handleRootObjectWithPropertyListString:(id)arg1;
- (void)handleTrackListWithPropertyListString:(id)arg1;
- (void)log:(id)arg1;
- (void)performPurchaseAnimationForIdentifier:(id)arg1;
- (void)registerNavBarButtonWithTitle:(id)arg1 side:(id)arg2 function:(id)arg3;
- (void)reportAProblemForIdentifier:(id)arg1;
- (void)selectTrackListItemWithIdentifier:(id)arg1;
- (void)sendPostOfType:(id)arg1 withOptions:(id)arg2;
- (void)setLibraryIdentifierWithType:(id)arg1 value:(id)arg2;
- (void)signOutPrimaryAccount;
- (void)_accessibilityPostLayoutChange;
- (void)accessibilityPostLayoutChange;
- (id)_className;
- (id)globalRootObject;
- (id)loggingEnabled;
- (id)screenReaderRunning;
- (void)setGlobalRootObject:(id)arg1;
- (void)setLoggingEnabled:(id)arg1;
- (id)accountDSID;
- (id)accountName;
- (BOOL)haveAccount;
- (BOOL)shouldRestrictContentOfSystem:(id)arg1 level:(id)arg2;
- (BOOL)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(BOOL)arg2;
- (id)activeNetworkType;
- (BOOL)arePodcastsDisabled;
- (BOOL)canSendEmail;
- (id)diskSpaceAvailable;
- (id)hardwareType;
- (BOOL)isExplicitContentDisabled;
- (void)showAlertWithMessage:(id)arg1 title:(id)arg2 buttonTitle:(id)arg3;
- (BOOL)showConfirmWithMessage:(id)arg1 title:(id)arg2 okButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4;
- (id)showPromptWithMessage:(id)arg1 initialValue:(id)arg2 title:(id)arg3 okButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5;
- (id)_copyGlobalRootObject;
- (struct OpaqueJSContext { }*)_copyJavaScriptContext;
- (id)_copyOrientation;
- (void)_globalEventNotification:(id)arg1;
- (id)_copyDialogWithMessage:(id)arg1 title:(id)arg2 cancelButtonTitle:(id)arg3 okButtonTitle:(id)arg4;
- (id)scriptAttributeKeys;
- (BOOL)_launchedToTest;
- (BOOL)_isRunningTest;
- (void)_startedTest:(id)arg1;
- (void)_finishedTest:(id)arg1 extraResults:(id)arg2;

@end
