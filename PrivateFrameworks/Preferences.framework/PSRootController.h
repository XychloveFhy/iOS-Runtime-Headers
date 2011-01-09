/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier, NSMutableSet;



@interface PSRootController : UINavigationController <PSController>
{
    PSSpecifier *_specifier;
    NSMutableSet *_tasks;
    BOOL _deallocating;
    unsigned char _hasTelephony;
}

+ (void)writePreference:(id)arg1;
+ (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
+ (id)readPreferenceValue:(id)arg1;
+ (void)_initializeSafeCategory;

- (void)didWake;
- (void)addTask:(id)arg1;
- (void)taskFinished:(id)arg1;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2;
- (id)tasksDescription;
- (BOOL)taskIsRunning:(id)arg1;
- (id)contentViewForTopController;
- (void)statusBarWillChangeHeight:(id)arg1;
- (void)sendWillResignActive;
- (void)sendWillBecomeActive;
- (void)lazyLoadBundle:(id)arg1;
- (void)willDismissPopupView;
- (void)didDismissPopupView;
- (void)willDismissFormSheetView;
- (void)didDismissFormSheetView;
- (BOOL)busy;
- (BOOL)deallocating;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (void)showLeftButton:(id)arg1 withStyle:(NSInteger)arg2 rightButton:(id)arg3 withStyle:(NSInteger)arg4;
- (void)suspend;
- (void)dealloc;
- (void)didLock;
- (void)willUnlock;
- (void)didUnlock;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (id)readPreferenceValue:(id)arg1;
- (void)statusBarWillAnimateByHeight:(float)arg1;
- (id)rootController;
- (BOOL)canBeShownFromSuspendedState;
- (void)setRootController:(id)arg1;
- (void)pushController:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (id)specifier;
- (void)handleURL:(id)arg1;
- (id)specifiers;
- (void)willResignActive;
- (void)willBecomeActive;
- (id)parentController;
- (void)setParentController:(id)arg1;

@end
