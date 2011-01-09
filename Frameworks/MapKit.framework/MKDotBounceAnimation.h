/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKUserLocationViewInternal;



@interface MKDotBounceAnimation : CAKeyframeAnimation 
{
    MKUserLocationViewInternal *viewImpl;
}

@property(retain) MKUserLocationViewInternal *viewImpl;


- (void)setViewImpl:(id)arg1;
- (id)viewImpl;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)init;
- (void)dealloc;

@end
