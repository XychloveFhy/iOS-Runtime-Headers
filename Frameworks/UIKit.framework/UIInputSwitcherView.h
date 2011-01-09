/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UITableView;



@interface UIInputSwitcherView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *m_table;
    UIView *m_shadowView;
    UIView *m_selExtraView;
    NSInteger m_mode;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_referenceRect;
    float m_pointerOffset;
    NSInteger m_currentInputModeIndex;
    BOOL m_inputModesDidChange;
}

@property BOOL inputModesDidChange;
@property(readonly) NSInteger mode;

+ (id)activeInstance;
+ (id)sharedInstance;
+ (void)_initializeSafeCategory;

- (void)showAsHUD;
- (void)fadeWithDelay:(double)arg1;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)selectCurrentInputMode;
- (void)selectRowForInputMode:(id)arg1;
- (void)selectInputMode:(id)arg1;
- (id)nextInputMode;
- (void)selectNextInputMode;
- (id)previousInputMode;
- (void)selectPreviousInputMode;
- (NSInteger)indexForIndexPath:(id)arg1;
- (BOOL)inputModesDidChange;
- (void)showAsPopupFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)updateSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)selectedInputMode;
- (void)fade;
- (void)setInputModesDidChange:(BOOL)arg1;
- (BOOL)isVisible;
- (void)hide;
- (NSInteger)mode;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)font;
- (void)applicationWillSuspend:(id)arg1;
- (void)show;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
