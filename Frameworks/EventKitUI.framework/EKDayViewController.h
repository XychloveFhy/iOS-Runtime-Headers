/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKDayViewControllerDelegate>, NSTimeZone, EKDayView, EKDayAllDayView, EKDayBannerView, NSDate, <EKDayViewControllerDataSource>;



@interface EKDayViewController : UIViewController <EKDayAllDayViewDelegate, EKDayViewDelegate>
{
    EKDayBannerView *_banner;
    EKDayAllDayView *_allDayView;
    EKDayView *_dayView;
    NSTimeZone *_timeZone;
    NSDate *_selectedDate;
    struct { 
        NSInteger year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    } _selectedDateGr;
    double _dayStart;
    double _dayEnd;
    BOOL _showsBanner;
    BOOL _allowsDaySwitching;
    BOOL _allowsSelection;
    BOOL _initialLoad;
    BOOL _instigatedDateChange;
    <EKDayViewControllerDelegate> *_delegate;
    <EKDayViewControllerDataSource> *_dataSource;
}

@property(copy) NSDate *selectedDate;
@property(copy) NSTimeZone *timeZone;
@property BOOL showsBanner;
@property BOOL allowsDaySwitching;
@property BOOL allowsSelection;
@property <EKDayViewControllerDataSource> *dataSource;
@property <EKDayViewControllerDelegate> *delegate;


- (void)_createBannerView;
- (void)_disposeBannerView;
- (void)_createAllDayView;
- (void)_disposeAllDayView;
- (void)_releaseViews;
- (BOOL)showsBanner;
- (BOOL)allowsDaySwitching;
- (void)layoutContainerView:(id)arg1;
- (void)setSelectedDateInternal:(id)arg1;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })selectedDateGr;
- (void)_timeChanged;
- (void)setShowsBanner:(BOOL)arg1;
- (void)setAllowsDaySwitching:(BOOL)arg1;
- (void)scrollEventIntoView:(id)arg1 animated:(BOOL)arg2;
- (id)eventsForStartDate:(id)arg1 endDate:(id)arg2;
- (void)dayView:(id)arg1 didSelectEvent:(id)arg2;
- (void)dayView:(id)arg1 didChangeSelectedDate:(id)arg2;
- (void)bringEventToFront:(id)arg1;
- (void)allDayView:(id)arg1 didSelectEvent:(id)arg2;
- (void)setSelectedDate:(id)arg1;
- (void)calendarDayBanner:(id)arg1 arrowClicked:(NSInteger)arg2;
- (void)_localeChanged;
- (id)selectedDate;
- (NSUInteger)firstVisibleSecond;
- (id)timeZone;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setAllowsSelection:(BOOL)arg1;
- (BOOL)allowsSelection;
- (void)setTimeZone:(id)arg1;
- (void)dealloc;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)dataSource;

@end
