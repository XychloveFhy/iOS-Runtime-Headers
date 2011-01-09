/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class GKMediaChannelInternal;



@interface ___PearSendInterface : NSObject <NSJingleSendInterface>
{
    struct PearMediaChannelSendInterface { 
        NSInteger version; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDebugDescription)(); 
        int (*sendData)(); 
        int (*sendRTCP)(); 
    } sendInterface_;
    void *sendInterfaceInfo_;
    GKMediaChannelInternal *channel_;
}


- (void)finalize;
- (id)description;
- (void)dealloc;
- (id)initWithPearSendInterface:(const struct PearMediaChannelSendInterface { NSInteger x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); }*)arg1 info:(void*)arg2 channel:(id)arg3;
- (id)_copyDescription;
- (void)sendData:(id)arg1;
- (void)sendRTCP:(id)arg1;

@end
