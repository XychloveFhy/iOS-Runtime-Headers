/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */



@interface CLLocationManager : NSObject 
{
    id _internal;
}

@property <CLLocationManagerDelegate> *delegate;
@property(readonly) BOOL locationServicesEnabled;
@property(copy) NSString *purpose;
@property double distanceFilter;
@property double desiredAccuracy;
@property(readonly) CLLocation *location;
@property(readonly) BOOL headingAvailable;
@property double headingFilter;
@property NSInteger headingOrientation;
@property(readonly) CLHeading *heading;
@property(readonly) double maximumRegionMonitoringDistance;
@property(readonly) NSSet *monitoredRegions;
@property BOOL privateMode;
@property(readonly) BOOL locationServicesAvailable;
@property(readonly) BOOL locationServicesApproved;
@property(readonly) double expectedGpsUpdateInterval;
@property BOOL supportInfo;
@property(readonly) double bestAccuracy;
@property(readonly) __CLClient *internalClient;

+ (BOOL)locationServicesEnabled;
+ (id)sharedManager;
+ (void)setLocationServicesEnabled:(BOOL)arg1;
+ (BOOL)significantLocationChangeMonitoringAvailable;
+ (BOOL)regionMonitoringAvailable;
+ (BOOL)regionMonitoringEnabled;
+ (BOOL)headingAvailable;

- (void)setDesiredAccuracy:(double)arg1;
- (BOOL)locationServicesEnabled;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (void)startUpdatingHeading;
- (void)stopUpdatingHeading;
- (void)setPurpose:(id)arg1;
- (void)setHeadingOrientation:(NSInteger)arg1;
- (id)heading;
- (BOOL)locationServicesApproved;
- (id)location;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setDistanceFilter:(double)arg1;
- (double)distanceFilter;
- (double)desiredAccuracy;
- (BOOL)locationServicesAvailable;
- (double)expectedGpsUpdateInterval;
- (void)setSupportInfo:(BOOL)arg1;
- (BOOL)supportInfo;
- (double)bestAccuracy;
- (struct __CLClient { }*)internalClient;
- (void)setPrivateMode:(BOOL)arg1;
- (BOOL)privateMode;
- (id)purpose;
- (void)historicLocationsFromDate:(id)arg1 forInterval:(double)arg2;
- (double)headingFilter;
- (NSInteger)headingOrientation;
- (void)dismissHeadingCalibrationDisplay;
- (void)startAppStatusUpdates;
- (void)stopAppStatusUpdates;
- (void)startTechStatusUpdates;
- (void)stopTechStatusUpdates;
- (void)startMonitoringSignificantLocationChanges;
- (void)stopMonitoringSignificantLocationChanges;
- (void)startMonitoringForRegion:(id)arg1 desiredAccuracy:(double)arg2;
- (void)stopMonitoringForRegion:(id)arg1;
- (double)maximumRegionMonitoringDistance;
- (id)monitoredRegions;
- (void)authorizeAppWithBundleId:(id)arg1;
- (void)deauthorizeAppWithBundleId:(id)arg1;
- (void)resetApps;
- (id)appsUsingLocation;
- (id)appsUsingLocationWithDetails;
- (id)technologiesInUse;
- (void)onClientEvent:(NSInteger)arg1 supportInfo:(id)arg2;
- (void)onClientEventApproval:(id)arg1;
- (void)onClientEventLocation:(id)arg1;
- (void)onClientEventLocationUnavailable:(id)arg1;
- (void)onClientEventHeading:(id)arg1;
- (void)onClientEventHeadingCalibration:(id)arg1;
- (void)onClientEventHistoricLocation:(id)arg1;
- (void)onClientEventRegistered:(id)arg1;
- (void)onClientEventError:(id)arg1;
- (void)onClientEventRegion:(id)arg1;
- (void)onClientEventRegionError:(id)arg1;
- (BOOL)headingAvailable;
- (void)setHeadingFilter:(double)arg1;

@end
