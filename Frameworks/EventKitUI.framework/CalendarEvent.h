/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */



@interface CalendarEvent : NSObject 
{
}

@property(copy) NSString *notes;
@property(copy) NSURL *url;
@property(copy) NSString *title;
@property(copy) NSString *location;
@property(copy) NSDate *startDate;
@property(copy) NSDate *endDate;
@property BOOL isAllDay;
@property(readonly) ? startDateGr;
@property(readonly) ? endDateGr;
@property(readonly) ? startDatePinnedForAllDay;
@property(readonly) ? endDatePinnedForAllDay;
@property(copy,readonly) NSDate *occurrenceDate;
@property NSInteger status;
@property(readonly) BOOL isStatusDirty;
@property NSInteger availability;
@property(retain) CalendarCalendar *calendar;
@property(retain,readonly) CalendarParticipant *organizer;
@property(copy) NSArray *attendees;
@property(readonly) NSInteger attendeeCount;
@property(copy) CalendarRecurrenceRule *recurrenceRule;
@property(copy) NSArray *alarms;
@property(readonly) NSInteger alarmCount;
@property(readonly) BOOL isDirty;
@property(readonly) BOOL isEditable;
@property(readonly) BOOL isInStore;
@property(readonly) BOOL canAddRecurrence;
@property(readonly) NSInteger recurrenceRuleCount;
@property(readonly) Class recurrenceRuleClass;
@property(readonly) Class alarmClass;
@property(readonly) Class attendeeClass;
@property(readonly) BOOL requiresDetach;
@property(readonly) BOOL canDetachSingleOccurrence;
@property(readonly) BOOL canBeRespondedTo;
@property(copy) NSString *responseComment;
@property(readonly) NSInteger maxAlarmsAllowed;
@property(readonly) BOOL canSeeAttendeeStatuses;
@property(readonly) BOOL canSetAvailability;
@property(readonly) BOOL supportsTriggerIntervals;
@property(readonly) BOOL supportsInvitationModifications;
@property(readonly) BOOL supportsResponseComments;


- (id)url;
- (BOOL)isInStore;
- (Class)recurrenceRuleClass;
- (Class)alarmClass;
- (Class)attendeeClass;
- (BOOL)canSeeAttendeeStatuses;
- (id)attendees;
- (void)setAttendees:(id)arg1;
- (void)setStatus:(NSInteger)arg1;
- (void)setUrl:(id)arg1;
- (id)occurrenceDate;
- (void)restoreState:(id)arg1;
- (BOOL)isDirty;
- (BOOL)isStatusDirty;
- (id)notes;
- (void)setNotes:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setEndDate:(id)arg1;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })startDateGr;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })endDateGr;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })startDatePinnedForAllDay;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })endDatePinnedForAllDay;
- (NSInteger)attendeeCount;
- (id)alarms;
- (NSInteger)alarmCount;
- (void)setAlarms:(id)arg1;
- (void)addAlarm:(id)arg1;
- (void)removeAlarm:(id)arg1;
- (id)recurrenceRule;
- (void)setRecurrenceRule:(id)arg1;
- (NSInteger)recurrenceRuleCount;
- (BOOL)canAddRecurrence;
- (NSInteger)availability;
- (void)setAvailability:(NSInteger)arg1;
- (id)responseComment;
- (void)setResponseComment:(id)arg1;
- (BOOL)requiresDetach;
- (BOOL)canDetachSingleOccurrence;
- (BOOL)canSetAvailability;
- (BOOL)canBeRespondedTo;
- (id)startDate;
- (NSInteger)maxAlarmsAllowed;
- (BOOL)supportsTriggerIntervals;
- (BOOL)supportsInvitationModifications;
- (BOOL)supportsResponseComments;
- (id)endDate;
- (id)organizer;
- (BOOL)isAllDay;
- (void)setCalendar:(id)arg1;
- (id)calendar;
- (id)location;
- (void)setLocation:(id)arg1;
- (BOOL)isEditable;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setIsAllDay:(BOOL)arg1;
- (id)saveState;
- (NSInteger)status;

@end
