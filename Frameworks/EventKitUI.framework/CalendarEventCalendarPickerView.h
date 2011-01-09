/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CalendarTableController, CalendarModel;



@interface CalendarEventCalendarPickerView : UITableView <CalendarView>
{
    CalendarTableController *_tableController;
    CalendarModel *_model;
}

+ (id)navigationTitleForModel:(id)arg1;

- (void)_calendarsChanged:(id)arg1;
- (void)calendarTableController:(id)arg1 calendarSelected:(void*)arg2;
- (void)_selectedOccurrenceChanged:(id)arg1;
- (void)finishedTransitionIn;
- (void)cleanUp;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(NSInteger)arg2;
- (void)dealloc;
- (void)setModel:(id)arg1;

@end
