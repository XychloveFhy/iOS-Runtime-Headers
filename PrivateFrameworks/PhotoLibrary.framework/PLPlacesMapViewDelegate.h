/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIButton, <PlacesMapViewDelegateDetailsDelegate>, PLPlaces, NSMutableArray, PLAnnotationPen;



@interface PLPlacesMapViewDelegate : NSObject <MKMapViewDelegate>
{
    BOOL _didFirstAdjustment;
    UIButton *_moreDetailsButton;
    PLPlaces *_places;
    NSMutableArray *_delegatePlaces;
    NSUInteger _activeDeletes;
    NSUInteger _activeSplits;
    PLAnnotationPen *_pendingAdds;
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    } _previousRegion;
    <PlacesMapViewDelegateDetailsDelegate> *_detailsDelegate;
}


- (id)initWithPlaces:(id)arg1;
- (void)setDetailsDelegate:(id)arg1;
- (void)fullResetOfMapView:(id)arg1;
- (void)mapViewWillStartLoadingMap:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (BOOL)_didMapViewChangeZoomLevel:(id)arg1;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)_borderedPosterImageFromImage:(id)arg1 withSize:(struct CGSize { float x1; float x2; })arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)_updateAnnotationsInMapView:(id)arg1;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)_updatePlaces:(id)arg1 inMapView:(id)arg2;
- (void)_updateVisibleAnnotationsAfterUpdatingMapView:(id)arg1;
- (void)_setupMapViewCenteredOnAllPlaces:(id)arg1;
- (void)_flushAnnotation:(id)arg1 fromMap:(id)arg2;
- (id)_createAnnotationViewWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (BOOL)_displayMoreDetailsButton;
- (BOOL)_displaysAlbumPosterOnLeft;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)dealloc;

@end
