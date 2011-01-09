/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSData, NSString;



@interface FTRelayUpdateMessage : FTMessage 
{
    NSData *_selfPushToken;
    NSData *_selfRelayBlob;
    NSString *_peerID;
    NSData *_peerPushToken;
    NSNumber *_relayType;
    NSData *_relayConnectionID;
    NSData *_relayTransactionIDAlloc;
    NSData *_relayTokenAllocRes;
    NSData *_selfRelayIP;
    NSNumber *_selfRelayPort;
    NSData *_selfRelayNATIP;
    NSNumber *_selfRelayNATPort;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
}

@property(copy) NSNumber *peerRelayPort;
@property(copy) NSData *peerRelayIP;
@property(copy) NSNumber *selfRelayNATPort;
@property(copy) NSData *selfRelayNATIP;
@property(copy) NSNumber *selfRelayPort;
@property(copy) NSData *selfRelayIP;
@property(copy) NSData *relayTokenAllocRes;
@property(copy) NSData *relayTransactionIDAlloc;
@property(copy) NSData *relayConnectionID;
@property(copy) NSNumber *relayType;
@property(copy) NSData *peerPushToken;
@property(copy) NSString *peerID;
@property(copy) NSData *selfRelayBlob;
@property(copy) NSData *selfPushToken;


- (id)selfRelayNATPort;
- (void)setSelfRelayNATPort:(id)arg1;
- (id)selfRelayNATIP;
- (void)setSelfRelayNATIP:(id)arg1;
- (id)relayTokenAllocRes;
- (void)setRelayTokenAllocRes:(id)arg1;
- (id)relayTransactionIDAlloc;
- (void)setRelayTransactionIDAlloc:(id)arg1;
- (id)relayConnectionID;
- (void)setRelayConnectionID:(id)arg1;
- (id)selfRelayBlob;
- (void)setSelfRelayBlob:(id)arg1;
- (id)peerRelayPort;
- (void)setPeerRelayPort:(id)arg1;
- (id)peerRelayIP;
- (void)setPeerRelayIP:(id)arg1;
- (id)selfRelayPort;
- (void)setSelfRelayPort:(id)arg1;
- (id)selfRelayIP;
- (void)setSelfRelayIP:(id)arg1;
- (id)relayType;
- (void)setRelayType:(id)arg1;
- (id)peerPushToken;
- (void)setPeerPushToken:(id)arg1;
- (void)setPeerID:(id)arg1;
- (id)selfPushToken;
- (void)setSelfPushToken:(id)arg1;
- (id)requiredKeys;
- (void)dealloc;
- (id)messageBody;
- (id)bagKey;
- (id)peerID;

@end
