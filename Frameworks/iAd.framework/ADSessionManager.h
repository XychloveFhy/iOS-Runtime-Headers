/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADMessageProxy, ADDistributedMessagingCenter, NSMutableArray, NSTimer, NSString, NSDate, CPDistributedMessagingCenter;



@interface ADSessionManager : NSObject 
{
    NSMutableArray *_pendingRequests;
    ADDistributedMessagingCenter *_localMessagingCenter;
    CPDistributedMessagingCenter *_remoteMessagingCenter;
    NSDate *_lastTermination;
    NSString *_serverURL;
    ADMessageProxy *_sessionProxy;
    BOOL _isBootstrapped;
    BOOL _isInBackground;
    NSTimer *_visibilityTimer;
}

@property(retain) NSTimer *visibilityTimer;
@property BOOL isInBackground;
@property BOOL isBootstrapped;
@property(retain) ADMessageProxy *sessionProxy;
@property(retain) NSString *serverURL;
@property(retain) NSDate *lastTermination;
@property(retain) CPDistributedMessagingCenter *remoteMessagingCenter;
@property(retain) ADDistributedMessagingCenter *localMessagingCenter;
@property(retain) NSMutableArray *pendingRequests;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (BOOL)isAdSheetRunning;
- (BOOL)isBootstrapped;
- (void)bootstrap;
- (BOOL)launchAdSheet;
- (void)sendSetServerUrlMessage;
- (void)sendBootstrapApplicationRequestMessage;
- (void)bootstrapApplicationRequest:(id)arg1 receivedReply:(id)arg2 error:(id)arg3 context:(void*)arg4;
- (void)serverCenterDidTerminate:(id)arg1;
- (void)serverSessionDidCloseMessage:(id)arg1 userInfo:(id)arg2;
- (void)considerCreatingSessions;
- (double)throttleInterval;
- (void)registerForMessages;
- (void)unregisterForMessages;
- (void)setLocalMessagingCenter:(id)arg1;
- (void)setRemoteMessagingCenter:(id)arg1;
- (id)createSession;
- (void)sessionDidCloseNotification:(id)arg1;
- (void)checkVisibility:(id)arg1;
- (id)messageProxy:(id)arg1 proxyItemIdentifierForforInvocation:(id)arg2;
- (id)visibilityTimer;
- (void)setVisibilityTimer:(id)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (void)setIsBootstrapped:(BOOL)arg1;
- (id)sessionProxy;
- (void)setSessionProxy:(id)arg1;
- (id)lastTermination;
- (void)setLastTermination:(id)arg1;
- (id)remoteMessagingCenter;
- (id)localMessagingCenter;
- (id)pendingRequests;
- (void)setPendingRequests:(id)arg1;
- (void)resumeVisibilityCheck;
- (void)suspendVisibilityCheck;
- (void)applicationDidResignActive:(id)arg1;
- (void)sessionForRecipient:(id)arg1;
- (void)setServerURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)retainCount;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)init;
- (void)release;
- (id)retain;
- (id)autorelease;
- (void)dealloc;
- (id)serverURL;

@end
