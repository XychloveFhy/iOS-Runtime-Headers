/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKReverseGeocoderInternal;



@interface MKReverseGeocoder : NSObject 
{
    MKReverseGeocoderInternal *_internal;
}

@property <MKReverseGeocoderDelegate> *delegate;
@property(readonly) ? coordinate;
@property(readonly) MKPlacemark *placemark;
@property(getter=isQuerying,readonly) BOOL querying;


- (struct { double x1; double x2; })coordinate;
- (id)placemark;
- (BOOL)isQuerying;
- (void)_scheduleErrorNotify:(id)arg1;
- (void)_schedulePlacemarkNotify:(id)arg1;
- (void)_notifyNoResults;
- (id)_bestAddressInResponse:(id)arg1;
- (id)_placemarkWithResponse:(id)arg1;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1;
- (void)requester:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3;
- (void)requesterDidFinish:(id)arg1;
- (void)requesterDidCancel:(id)arg1;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)start;
- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_notifyResult:(id)arg1;
- (void)_notifyError:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;

@end
