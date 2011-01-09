/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class CNFServiceHandler, NSURL, NSTimer, NSMutableArray, IMAVChat;



@interface CNFConferenceController : NSObject <IMAVControllerDelegate, IMAVInvitationControllerDelegate, IMAVChatDelegate>
{
    BOOL _isConnected;
    BOOL _fullConferenceCapable;
    IMAVChat *_activeAVChat;
    NSMutableArray *_avChatList;
    CNFServiceHandler *_serviceHandler;
    struct __CTCall { } *_call;
    NSTimer *_waitingForFirstRemoteFrameTimer;
    BOOL _waitingForFirstRemoteFrame;
    NSURL *_delayedInvitationURL;
}

@property(readonly) BOOL isFullConferenceCapable;
@property(readonly) IMAVChat *avChat;

+ (BOOL)disconnect;
+ (BOOL)connect;
+ (id)sharedInstance;
+ (id)sharedFullConferenceInstance;
+ (BOOL)conferencingRegistrationIsSupported;
+ (BOOL)conferencingIsSupported;
+ (BOOL)conferencingIsRestricted;
+ (BOOL)conferencingIsEnabled;
+ (void)reconcileHarlequinAccountStatus;
+ (void)reconcileDaemonControllerConnection;
+ (void)setConferencingEnabled:(BOOL)arg1;
+ (id)registrationStatusSettingsString;
+ (struct __CFPhoneNumber { }*)phoneNumberRefCopyForDestinationId:(id)arg1 useNetworkCountryCode:(BOOL)arg2;
+ (id)sharedExistingInstance;
+ (BOOL)isConnected;

- (void)receivedFirstPreviewForAVChat:(id)arg1;
- (void)receivedFirstRemoteFrameForAVChat:(id)arg1;
- (void)avChat:(id)arg1 remoteOrientationChanged:(NSUInteger)arg2;
- (void)remoteCameraBeingChangedForAVChat:(id)arg1;
- (void)remoteCameraDidChangeForAVChat:(id)arg1 newCameraType:(NSUInteger)arg2;
- (void)avChatStateChangedFrom:(NSUInteger)arg1 to:(NSUInteger)arg2 reason:(NSUInteger)arg3;
- (void)avChat:(id)arg1 remoteParticipant:(id)arg2 muteChanged:(BOOL)arg3;
- (void)avChat:(id)arg1 remoteParticipant:(id)arg2 pauseChanged:(BOOL)arg3;
- (void)avChat:(id)arg1 didSendInvitationForParticipant:(id)arg2;
- (void)avChat:(id)arg1 stateChanged:(NSUInteger)arg2;
- (void)setIsSendingAudio:(BOOL)arg1;
- (void)setIsSendingVideo:(BOOL)arg1;
- (void)invitedToIMAVChat:(id)arg1;
- (void)inviteFailedFromIMHandle:(id)arg1 reason:(NSInteger)arg2;
- (void)conference:(id)arg1 receivedInvitationFromIMHandle:(id)arg2;
- (void)conference:(id)arg1 handleMissedInvitationFromIMHandle:(id)arg2;
- (void)conference:(id)arg1 receivedCancelledInvitationFromIMHandle:(id)arg2;
- (id)avChat;
- (id)init;
- (void)dealloc;
- (BOOL)conferencingIsAvailable;
- (BOOL)havePreviouslyConferencedWithID:(id)arg1;
- (id)conferenceURLForPhoneNumber:(id)arg1;
- (id)conferenceURLForDestinationID:(id)arg1;
- (void)_postSimpleNotificationName:(id)arg1;
- (id)_initFullConferenceCapable:(BOOL)arg1;
- (void)connectToService;
- (void)iChatAgentConnected;
- (void)iChatAgentDisconnected;
- (void)disconnectFromService;
- (BOOL)accountsAreLoggedIn;
- (void)setNeedsPushReliability:(BOOL)arg1;
- (id)_imHandleFromURL:(id)arg1;
- (void)_cleanUpAfterAVChat;
- (void)_fakeFirstRemoteFrameNotification:(id)arg1;
- (void)_setupWaitingForFirstRemoteFrameTimerForAVChat:(id)arg1;
- (void)_cancelWaitingForFirstRemoteFrameTimer;
- (void)_updateEnabledStatusChanged;
- (void)_handleInvitationFrom:(id)arg1 conferenceID:(id)arg2;
- (void)_handleMissedInvitationFrom:(id)arg1 conferenceID:(id)arg2;
- (void)_handleAVChatStateChangeFromState:(NSUInteger)arg1 to:(NSUInteger)arg2 withReason:(NSUInteger)arg3;
- (void)_sendPresentConferenceNotification;
- (void)_handleInitiationOfAVConference;
- (void)_handleConferenceDidStart;
- (void)_handleEndConferenceWithReason:(NSUInteger)arg1 error:(NSInteger)arg2;
- (void)_handleAccountNotRegisteredForURL:(id)arg1 registrationInProgress:(BOOL)arg2;
- (void)_handleChangeForRemoteIsMuted:(BOOL)arg1;
- (void)_handleChangeForRemoteIsPaused:(BOOL)arg1;
- (void)_presentCallScreenForIMAVChat:(id)arg1;
- (BOOL)_activeChatExists;
- (void)_startRecentCallEntryForConference:(id)arg1;
- (void)_createMissedCallEntryForConferenceURL:(id)arg1 isOriginator:(BOOL)arg2;
- (void)_finalizeRecentCallEntryForConference:(id)arg1 withReason:(NSUInteger)arg2;
- (BOOL)canSendConferenceInvitationTo:(id)arg1;
- (void)sendConferenceInvitationTo:(id)arg1;
- (void)acceptConferenceInvitationFrom:(id)arg1 conferenceID:(id)arg2;
- (void)rejectConferenceInvitationFrom:(id)arg1 conferenceID:(id)arg2;
- (void)setConferenceMuted:(BOOL)arg1;
- (BOOL)conferencePaused;
- (void)setConferencePaused:(BOOL)arg1;
- (void)endConference;
- (BOOL)isInConference;
- (void)_handleConferenceConnecting:(id)arg1;
- (void)_handleConferenceInviteSent:(id)arg1;
- (void)_handleConferenceConnected:(id)arg1;
- (void)_handleConferenceEnded:(id)arg1 withReason:(NSUInteger)arg2 withError:(NSInteger)arg3;
- (BOOL)canInitiateConferenceForPhoneNumber:(id)arg1;
- (BOOL)canInitiateConferenceForDestinationID:(id)arg1;
- (void)hangUpConference;
- (void)setHavePreviouslyConferenced:(BOOL)arg1 withID:(id)arg2;
- (BOOL)isFullConferenceCapable;
- (id)availableConferenceURLs;
- (id)contactConferenceURLForABRecord:(void*)arg1;
- (BOOL)contactCanBeConferenced:(void*)arg1;
- (BOOL)_blockingIsInConference;
- (BOOL)conferenceMuted;

@end
