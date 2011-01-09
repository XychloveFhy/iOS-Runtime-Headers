/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel;



@interface EKEventDetailAvailabilityCell : EKEventDetailCell <EKEventEditItemViewControllerDelegate>
{
    UILabel *_availabilityTitleView;
    UILabel *_availabilityView;
}


- (BOOL)isEditableForEvent;
- (id)_availabilityView;
- (id)_availabilityTitleView;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(NSInteger)arg2;
- (BOOL)eventEditItemViewControllerCommit:(id)arg1;
- (void)layoutForWidth:(float)arg1 position:(NSInteger)arg2;
- (id)viewControllerForCell;
- (void)setAvailability:(NSInteger)arg1;
- (BOOL)update;
- (void)dealloc;

@end
