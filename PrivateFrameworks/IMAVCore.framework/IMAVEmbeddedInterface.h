/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class APSConnection, NSMutableArray, AVConference;



@interface IMAVEmbeddedInterface : IMAVInterface <AVConferenceDelegate>
{
    NSMutableArray *_avConferencesToCleanup;
    AVConference *_vcc;
    APSConnection *_apsConnection;
    unsigned int _duringInit : 1;
    unsigned int _previewStarted : 1;
    unsigned int _pendingCleanup : 1;
}

+ (id)bestChatForCallID:(NSInteger)arg1 errorString:(id)arg2;

- (void)_cleanupAVInterface;
- (void)_queueAVConferenceForCleanup:(id)arg1;
- (void)conference:(id)arg1 cancelRelayRequest:(NSInteger)arg2 requestDict:(id)arg3;
- (void)updateCriticalState;
- (BOOL)systemCanARD;
- (BOOL)systemCanHostARD;
- (BOOL)allowsVideoForAVChat:(id)arg1;
- (unsigned long long)capabilitiesOfNetwork;
- (unsigned long long)capabilitiesOfCPU;
- (BOOL)closeCamera;
- (BOOL)supportsLayers;
- (BOOL)supportsRelay;
- (id)avChat:(id)arg1 localICEDataForHandle:(id)arg2 usingRelay:(BOOL)arg3;
- (BOOL)systemCanVideoChat;
- (BOOL)systemCanAudioChat;
- (NSInteger)avChat:(id)arg1 endConferenceForUserID:(id)arg2;
- (void)_conferenceWillStart:(id)arg1;
- (void)_conferenceEnded:(id)arg1;
- (NSInteger)endConferenceForAVChat:(id)arg1;
- (BOOL)isAVInterfaceReady;
- (void)initAVInterface;
- (BOOL)avChat:(id)arg1 startConferenceWithUserID:(id)arg2;
- (void)avChat:(id)arg1 setMute:(BOOL)arg2;
- (BOOL)isMuteForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setPaused:(BOOL)arg2;
- (BOOL)isPausedForAVChat:(id)arg1;
- (BOOL)isSendingAudioForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setSendingAudio:(BOOL)arg2;
- (BOOL)isSendingVideoForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setSendingVideo:(BOOL)arg2;
- (void)avChat:(id)arg1 prepareConnectionWithRemoteConnectionData:(id)arg2 localConnectionData:(id)arg3;
- (void)handleRelayInitate:(id)arg1 fromParticipant:(id)arg2;
- (void)handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2;
- (void)handleRelayCancel:(id)arg1 fromParticipant:(id)arg2;
- (void)setCameraOrientation:(NSUInteger)arg1;
- (void)_notifyAboutPotentialCall;
- (BOOL)openCamera;
- (void)invalidateAVInterface;
- (void)chatStateUpdated;
- (void)avChat:(id)arg1 enableSoftwareCamera:(BOOL)arg2;
- (void)avChat:(id)arg1 enableSoftwareMicrophone:(BOOL)arg2;
- (NSUInteger)avChat:(id)arg1 enableAudioReflector:(BOOL)arg2;
- (void)setupComplete;
- (void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (id)getNatIPFromICEData:(id)arg1;
- (unsigned long long)capabilities;
- (NSUInteger)cameraOrientation;
- (id)controller;
- (id)init;
- (void)dealloc;
- (void)conference:(id)arg1 receivedFirstPreviewForCallID:(NSInteger)arg2;
- (void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(NSInteger)arg2;
- (void)conference:(id)arg1 remoteOrientationChangedForCallID:(NSInteger)arg2 orientation:(NSUInteger)arg3;
- (void)conference:(id)arg1 remoteCameraBeingChangedForCallID:(NSInteger)arg2;
- (void)conference:(id)arg1 remoteCameraChangedForCallID:(NSInteger)arg2 cameraType:(NSUInteger)arg3;
- (void)conference:(id)arg1 remoteAudioPaused:(BOOL)arg2 callID:(NSInteger)arg3;
- (void)conference:(id)arg1 remoteVideoPaused:(BOOL)arg2 callID:(NSInteger)arg3;
- (void)conference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(NSInteger)arg3;
- (void)conference:(id)arg1 inititiateRelayRequest:(NSInteger)arg2 requestDict:(id)arg3;
- (void)conference:(id)arg1 sendRelayUpdate:(NSInteger)arg2 updateDict:(id)arg3;
- (void)conference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(NSInteger)arg3 error:(id)arg4;
- (void)conference:(id)arg1 didStopWithCallID:(NSInteger)arg2 error:(id)arg3;
- (void)conference:(id)arg1 updateInputMeterLevel:(float)arg2;
- (void)conference:(id)arg1 updateOutputMeterLevel:(float)arg2;
- (void)setLocalVideoLayer:(void*)arg1;
- (void)setRemoteVideoLayer:(void*)arg1;
- (NSUInteger)cameraType;
- (void)setCameraType:(NSUInteger)arg1;
- (void)setRemoteVideoBackLayer:(void*)arg1;
- (void)setLocalVideoBackLayer:(void*)arg1;
- (id)natType;
- (void*)remoteVideoBackLayer;
- (void*)remoteVideoLayer;
- (void*)localVideoBackLayer;
- (void*)localVideoLayer;
- (id)localDisplayNameForCallID:(NSInteger)arg1;
- (id)remoteDisplayNameForCallID:(NSInteger)arg1;
- (BOOL)startPreviewWithError:(id*)arg1;
- (BOOL)stopPreview;

@end
