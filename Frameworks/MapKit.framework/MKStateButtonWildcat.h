/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */



@interface MKStateButtonWildcat : UIButton 
{
    NSInteger _buttonState;
}

@property(readonly) NSInteger nextButtonState;
@property NSInteger buttonState;


- (NSUInteger)stateForButtonState:(NSInteger)arg1;
- (id)shrinkAnimation;
- (id)expandAnimation;
- (id)contentAnimation;
- (void)setButtonState:(NSInteger)arg1;
- (NSInteger)nextButtonState;
- (void)setImage:(id)arg1 forButtonState:(NSInteger)arg2;
- (BOOL)shouldAnimateFromState:(NSInteger)arg1 toState:(NSInteger)arg2;
- (void)didEnterState;
- (void)didShowState;
- (NSInteger)buttonState;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (NSUInteger)state;

@end
