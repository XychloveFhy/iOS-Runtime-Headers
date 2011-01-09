/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel;



@interface CalendarEventDetailTitleCell : CalendarEventDetailCell 
{
    UILabel *_titleView;
    UILabel *_locationView;
    UILabel *_dateView;
    UILabel *_timeView;
    UILabel *_recurrenceView;
    UILabel *_statusView;
    NSUInteger _visibleItems;
}


- (void)_updateTitle;
- (void)_updateLocation;
- (void)editModelWillChange;
- (void)editModelDidChange;
- (id)_recurrenceView;
- (id)_timeView;
- (id)_dateView;
- (id)_locationView;
- (void)layoutForWidth:(float)arg1 position:(NSInteger)arg2;
- (BOOL)update;
- (id)_titleView;
- (void)dealloc;
- (id)_statusView;

@end
