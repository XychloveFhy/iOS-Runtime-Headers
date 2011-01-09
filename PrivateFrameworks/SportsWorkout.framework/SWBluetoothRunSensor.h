/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSMutableData, SWBluetoothMessageHandler, SWPacketUnscrambler, NSMutableArray;



@interface SWBluetoothRunSensor : SWRunSensor 
{
    NSMutableData *_bluetoothInputData;
    SWBluetoothMessageHandler *_messageHandler;
    NSUInteger _remainingBatteryLifetimeInHours;
    NSMutableArray *_packetRecord;
    SWPacketUnscrambler *_packetUnscrambler;
}

+ (void)__writePacketRecord:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)_discoverDevice;
- (void)_connectToDeviceWithAddress:(struct { unsigned char x1[6]; })arg1;
- (void)_registerToReadInput;
- (void)_receivedActivationNotification:(id)arg1;
- (void)_receivedDiscoveryNotification:(id)arg1;
- (void)_receivedConnectionNotification:(id)arg1;
- (void)_receivedConnectionFailureNotification:(id)arg1;
- (void)_receivedInputReadNotification:(id)arg1;
- (BOOL)_isValidPacketForPaceModel:(id)arg1 timestamp:(NSUInteger)arg2;
- (id)_serialNumberForPacket:(id)arg1 timestamp:(NSUInteger)arg2 radioId:(NSUInteger*)arg3;
- (struct { unsigned char x1[6]; })_deviceAddressForSerialNumber:(id)arg1;
- (NSUInteger)_remainingBatteryLifetimeInHoursForPacket:(id)arg1 timestamp:(NSUInteger)arg2;
- (void)unlink;
- (NSUInteger)remainingBatteryLifetimeInHours;
- (void)beginLinking;
- (void)cancelLinking;
- (void)beginSearching;
- (void)cancelSearching;

@end
