/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEvent, NSString, UIActionSheet, EKEventStore;



@interface EKEventViewController : UIViewController <UIActionSheetDelegate>
{
    EKEventStore *_store;
    EKEvent *_event;
    NSString *_eventId;
    NSUInteger _options;
    id _editor;
    UIActionSheet *_alertSheet;
    NSInteger _pendingStatus;
    id _internal;
    BOOL _didAppear;
    BOOL _autoPop;
}

@property(retain) EKEvent *event;
@property BOOL allowsEditing;
@property BOOL allowsCalendarPreview;


- (BOOL)allowsCalendarPreview;
- (BOOL)alwaysShowsCalendarPreview;
- (void)setAlwaysShowsCalendarPreview:(BOOL)arg1;
- (void)eventDetailViewDidSelectCell:(id)arg1;
- (void)editEvent;
- (void)_storeChanged;
- (void)eventDetailViewDidFinish:(id)arg1;
- (void)eventDetailView:(id)arg1 didInvokeInviteAction:(NSInteger)arg2;
- (void)eventDetailViewRequestedDelete:(id)arg1;
- (void)popAfterInviteAction;
- (void)_presentDetachSheet;
- (BOOL)_saveStatus:(NSInteger)arg1 span:(NSInteger)arg2;
- (void)_performDelete;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(NSInteger)arg2;
- (void)setAllowsCalendarPreview:(BOOL)arg1;
- (id)event;
- (void)setEvent:(id)arg1;
- (BOOL)allowsEditing;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)loadView;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (id)init;
- (void)dealloc;

@end
