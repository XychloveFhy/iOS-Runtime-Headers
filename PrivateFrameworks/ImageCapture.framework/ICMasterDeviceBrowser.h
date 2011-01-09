/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class PTPCameraDeviceManager, NSMutableArray, MSCameraDeviceManager;



@interface ICMasterDeviceBrowser : NSObject 
{
    NSMutableArray *_devices;
    NSMutableArray *_browsers;
    NSInteger _numberOfBrowsingBrowsers;
    MSCameraDeviceManager *_msDevManager;
    PTPCameraDeviceManager *_ptpDevManager;
}

@property(readonly) NSMutableArray *browsers;
@property(readonly) NSMutableArray *devices;

+ (BOOL)exists;
+ (id)defaultBrowser;

- (void)addBrowser:(id)arg1;
- (void)removeBrowser:(id)arg1;
- (NSInteger)addPTPCamera:(id)arg1;
- (void)removePTPCamera:(id)arg1;
- (NSInteger)addMSCamera:(id)arg1;
- (NSInteger)addRemoveMSCamera;
- (void)removeMSCamera:(id)arg1;
- (id)deviceWithDelegate:(id)arg1;
- (void)informBrowserDelegateUsingSelector:(SEL)arg1 withObject:(id)arg2;
- (id)browsers;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (void)stop:(id)arg1;
- (void)finalize;
- (id)init;
- (void)dealloc;
- (id)devices;
- (NSInteger)start:(id)arg1;

@end
