/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSMutableDictionary;



@interface SDPMini : NSObject 
{
    NSMutableDictionary *_dict;
}


- (id)toString;
- (id)initWithString:(id)arg1;
- (id)origin;
- (id)init;
- (void)dealloc;
- (id)defaultAudioPayloads;
- (id)defaultAudioPayloads:(BOOL)arg1;
- (id)defaultAudioPayloads:(BOOL)arg1 withUserCount:(NSInteger)arg2;
- (id)SDPUsername;
- (id)initWithOrigin:(id)arg1 sessionName:(id)arg2;
- (BOOL)setAudioPayloads:(NSInteger*)arg1 count:(NSInteger)arg2;
- (BOOL)setVideoPayloads:(NSInteger*)arg1 count:(NSInteger)arg2;
- (id)initWithViceroyDefaultsUsingZeroes:(BOOL)arg1 forAudioOnly:(BOOL)arg2 withUserCount:(NSInteger)arg3;
- (id)initWithViceroyDefaultsUsingZeroes:(BOOL)arg1 forAudioOnly:(BOOL)arg2;
- (id)initWithViceroyDefaultsUsingZeroes:(BOOL)arg1;
- (void)setSDP:(id)arg1;
- (void)resetSDP;
- (id)sessionString;
- (id)audioStringForVersion:(NSUInteger)arg1;
- (id)videoStringForVersion:(NSUInteger)arg1;
- (id)dataStringForVersion:(NSUInteger)arg1;
- (id)toStringForVersion:(NSUInteger)arg1;
- (void)setOriginWithArray:(id)arg1;
- (void)setConnectionWithArray:(id)arg1;
- (void)setBandwidthWithString:(id)arg1;
- (id)bandwidth;
- (void)setMediaWithArrayHelper:(id)arg1 mediaArray:(id)arg2 attributesArray:(id)arg3;
- (void)setAudioMediaWithArray:(id)arg1 andAttributesWithArray:(id)arg2;
- (id)audioMedia;
- (void)setVideoMediaWithArray:(id)arg1 andAttributesWithArray:(id)arg2;
- (void)appendAudioMedia:(NSInteger)arg1;
- (id)videoMedia;
- (void)appendVideoMedia:(NSInteger)arg1;
- (void)setDataMediaWithArray:(id)arg1 andAttributesWithArray:(id)arg2;
- (id)dataMedia;
- (id)audioMediaAttributes;
- (id)videoMediaAttributes;
- (id)dataMediaAttributes;
- (id)audioMediaConnection;
- (id)videoMediaConnection;
- (id)sessionAttributes;
- (id)sessionName;
- (NSInteger)addressTypeForConnection:(id)arg1;
- (NSInteger)addressType;
- (NSInteger)addressTypeVideo;
- (NSInteger)addressTypeAudio;
- (void)appendAudioAttribute:(id)arg1;
- (void)appendVideoAttribute:(id)arg1;
- (void)updateVideoAttributePrefix:(id)arg1 withAppendedValue:(id)arg2;
- (void)appendSessionAttribute:(id)arg1;
- (void)setSessionName:(id)arg1;
- (BOOL)hasAudioCodec:(NSInteger)arg1;
- (BOOL)hasVideoCodec:(NSInteger)arg1;
- (NSInteger)portForMediaHelper:(id)arg1;
- (NSInteger)videoPort;
- (NSInteger)audioPort;
- (NSInteger)dataPort;
- (NSInteger)videoRTCPPort;
- (NSInteger)audioRTCPPort;
- (NSInteger)dataRTCPPort;
- (const char *)userName;
- (const char *)ipFromConnection:(id)arg1;
- (const char *)ip;
- (const char *)ipVideo;
- (const char *)ipAudio;
- (NSInteger)maxImagesize;
- (NSInteger)maxBandwidth;
- (NSInteger)maxFramerate;
- (id)audioPayloadTypes;
- (id)videoPayloadTypes;
- (NSInteger)rulesFramerate:(NSInteger)arg1;
- (void)rulesImageSize:(NSInteger)arg1 pWidth:(NSInteger*)arg2 pHeight:(NSInteger*)arg3;
- (void)rulesPeerImageSize:(NSInteger)arg1 pWidth:(NSInteger*)arg2 pHeight:(NSInteger*)arg3;
- (char *)srtpKey;
- (char *)srtpSalt;
- (void)setMaxImageSize:(NSInteger)arg1 forPayloadType:(NSInteger)arg2;
- (void)setMaxBandwidth:(NSInteger)arg1;
- (void)setMaxFramerate:(NSInteger)arg1;
- (void)setAutoDetectBandwidth:(BOOL)arg1;
- (BOOL)autoDetectBandwidth;
- (void)setUseIChatEncryption:(BOOL)arg1;
- (BOOL)useIChatEncryption;
- (BOOL)aacBlockSize:(NSInteger*)arg1;
- (void)setFeaturesListString:(char *)arg1;
- (char *)featuresListString;
- (void)setAudioRTPID:(unsigned long)arg1;
- (unsigned long)audioRTPID;
- (void)setVideoRTPID:(unsigned long)arg1;
- (unsigned long)videoRTPID;
- (BOOL)hasPureVoice;
- (BOOL)hasViceroyCompatibleAudioCodec;
- (BOOL)hasViceroyCompatibleVideoCodec;
- (BOOL)hasH263;
- (BOOL)irisOpen;
- (void)setMultiPointFlagWithCount:(NSInteger)arg1;
- (BOOL)hasMultiPointFlag:(NSInteger*)arg1;
- (void)setHardwareInfo:(id)arg1;
- (id)hardwareInfo;
- (void)buildRTPMap;
- (id)RTPMapString:(NSInteger)arg1 isAudio:(BOOL)arg2;
- (NSInteger)payload:(NSInteger)arg1 isAudio:(BOOL)arg2;
- (id)payloadString:(NSInteger)arg1 isAudio:(BOOL)arg2;
- (BOOL)hasAudioCodec:(NSInteger)arg1 withPeerSDP:(id)arg2;
- (BOOL)hasVideoCodec:(NSInteger)arg1 withPeerSDP:(id)arg2;
- (id)connection;

@end
