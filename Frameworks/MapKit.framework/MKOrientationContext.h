/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIView, NSMutableArray, NSArray;



@interface MKOrientationContext : NSObject 
{
    NSMutableArray *orientViews;
    NSArray *relativeViews;
    UIView *projectionView;
    struct CGRect { struct CGPoint { 
            float x; 
            float y; 
        } x1; struct CGSize { 
            float width; 
            float height; 
        } x2; } *relativeViewFrames;
}


- (id)initWithViewsToOrient:(id)arg1 relativeViews:(id)arg2 projectionView:(id)arg3;
- (void)_computeRelativeViewFrames;
- (void)_computeRelativeViewFrame:(id)arg1;
- (void)invalidateView:(id)arg1;
- (void)dealloc;

@end
