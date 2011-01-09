/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UICalloutView, MKSearchResult, NSMapTable, MKMapTileView, NSMutableArray, MKUserLocation, MKUserLocationView, NSMutableSet, NSMutableDictionary, MKAnnotationView;



@interface MKAnnotationContainerViewInternal : NSObject 
{
    MKMapTileView *mapTileView;
    NSMutableArray *annotations;
    NSMutableSet *pendingAnnotations;
    NSMutableArray *annotationViews;
    NSMapTable *annotationsToViews;
    NSMapTable *reusableAnnotationViews;
    NSMutableArray *searchResultPins;
    NSMutableArray *awaitingDropPins;
    NSMutableDictionary *transitCallouts;
    BOOL isShowingTransitCallouts;
    UICalloutView *bubble;
    UICalloutView *calculateBubble;
    BOOL isAnimatingCallout;
    BOOL calloutNeedsReset;
    BOOL registeredForAddressBookChanges;
    MKAnnotationView *bubbleAnnotationView;
    MKAnnotationView *selectedAnnotationView;
    MKSearchResult *searchResultToSelect;
    id delegate;
    MKAnnotationView *draggingAnnotationView;
    struct CGPoint { 
        float x; 
        float y; 
    } mouseDownPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } draggingAnnotationViewPosition;
    NSUInteger mapType;
    BOOL isHandlingTouches;
    BOOL clickedOnAnnotationView;
    BOOL didDragAnnotationView;
    BOOL animationsEnabled;
    MKUserLocation *userLocation;
    MKUserLocationView *userLocationView;
    BOOL didAddUserLocationView;
    NSInteger userLocationViewUpdateMode;
    NSInteger restoreUserLocationViewUpdateMode;
    struct { 
        double latitude; 
        double longitude; 
    } lastMetaDataCoordinate;
    double lastMetaDataUpdateTime;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } mapTransform;
    Class calloutViewClass;
}



@end
