/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRReachabilityMonitor, NSHashTable, NSMapTable, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface BRCSystemResourcesManager : NSObject <BRReachabilityObserver> {
    NSHashTable *_appListObservers;
    NSObject<OS_dispatch_source> *_isNetworkReachableTimer;
    NSMutableDictionary *_lowDiskDict;
    NSMutableSet *_lowDiskSet;
    NSObject<OS_dispatch_source> *_lowDiskSource;
    NSObject<OS_dispatch_source> *_lowDiskTimer;
    NSHashTable *_lowMemoryObservers;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_source> *_powerLevelOKTimer;
    int _powerNotifyToken;
    NSHashTable *_powerObservers;
    NSMapTable *_processObservers;
    BRReachabilityMonitor *_reachabilityMonitor;
    NSHashTable *_reachabilityObservers;
    bool_invalidated;
    bool_isNetworkReachable;
    bool_powerLevelOK;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) bool isNetworkReachable;
@property(readonly) bool isPowerOK;
@property(readonly) Class superclass;

+ (id)manager;

- (void).cxx_destruct;
- (id)_createMonitoringObjectForProcessID:(int)arg1 observer:(id)arg2;
- (void)_didReceiveMemoryWarning;
- (void)_initAppListObservers;
- (void)_initLowDiskManager;
- (void)_initLowMemory;
- (void)_initPowerManager;
- (void)_initProcessObservers;
- (void)_initReachability;
- (void)_initXPCFSEvents;
- (void)_invalidateAppListObservers;
- (void)_invalidateLowDiskManager;
- (void)_invalidateLowMemory;
- (void)_invalidatePowerManager;
- (void)_invalidateProcessMonitorObject:(id)arg1;
- (void)_invalidateProcessObservers;
- (void)_invalidateReachability;
- (void)_processLowDiskNotification:(bool)arg1;
- (void)_resetLowDiskManager;
- (void)_resetPowerManager;
- (void)_resetReachability;
- (void)_setNetworkReachable:(bool)arg1;
- (void)_setNetworkReachableWithCoalescing:(bool)arg1;
- (void)_setPowerLevel:(bool)arg1;
- (void)_setPowerLevelWithCoalescing:(bool)arg1;
- (void)addAppListObserver:(id)arg1;
- (void)addLowDiskObserver:(id)arg1 forDevice:(int)arg2;
- (void)addLowMemoryObserver:(id)arg1;
- (void)addPowerObserver:(id)arg1;
- (void)addProcessMonitor:(id)arg1 forProcessID:(int)arg2;
- (void)addReachabilityObserver:(id)arg1;
- (void)close;
- (void)dealloc;
- (bool)hasEnoughSpaceForDevice:(int)arg1;
- (id)init;
- (bool)isNetworkReachable;
- (bool)isPowerOK;
- (void)reachabilityMonitor:(id)arg1 didChangeReachabilityStatusTo:(bool)arg2;
- (void)removeAppListObserver:(id)arg1;
- (void)removeLowDiskObserver:(id)arg1 forDevice:(int)arg2;
- (void)removeLowMemoryObserver:(id)arg1;
- (void)removePowerObserver:(id)arg1;
- (void)removeProcessMonitor:(id)arg1;
- (void)removeReachabilityObserver:(id)arg1;
- (void)reset;
- (void)resume;
- (void)suspend;

@end