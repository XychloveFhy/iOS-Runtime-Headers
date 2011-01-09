/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSString;



@interface GKMediaChannel : NSObject 
{
    id channelImpl;
    NSString *groupTag;
    BOOL hold;
}

@property BOOL hold;
@property(copy) NSString *groupTag;


- (NSUInteger)type;
- (id)engine;
- (void)setCodecs:(id)arg1;
- (long)handleIncomingData:(id)arg1;
- (long)handleIncomingRTCP:(id)arg1;
- (void)setIncomingEnabled:(BOOL)arg1;
- (void)setOutgoingEnabled:(BOOL)arg1;
- (void)setIncomingSSRC:(NSInteger)arg1;
- (void)setOutgoingSSRC:(NSInteger)arg1;
- (float)incomingAudioLevel;
- (float)outgoingAudioLevel;
- (void)setSendInterface:(id)arg1;
- (long)setSyncChannel:(id)arg1;
- (void)setUsingRTCP:(BOOL)arg1;
- (void)setPearSendInterface:(void*)arg1 info:(void*)arg2;
- (void)setHold:(BOOL)arg1;
- (void)setGroupTag:(id)arg1;
- (BOOL)hold;
- (id)groupTag;
- (id)initWithEngine:(id)arg1;

@end
