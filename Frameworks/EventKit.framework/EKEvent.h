/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKCalendar, EKParticipant, NSTimeZone, NSArray, NSMutableArray, EKEventStore, NSString, NSURL, NSDate, NSNumber;



@interface EKEvent : NSObject 
{
    EKEventStore *_store;
    void *_event;
    NSDate *_occurrenceDate;
    NSString *_eventId;
    NSNumber *_calendarId;
    NSDate *_dateStamp;
    NSURL *_url;
    BOOL _allDay;
    BOOL _detached;
    BOOL _unread;
    NSString *_title;
    NSString *_location;
    NSString *_notes;
    NSMutableArray *_alarms;
    NSMutableArray *_attendees;
    EKParticipant *_organizer;
    NSDate *_startDate;
    NSDate *_endDate;
    double _duration;
    EKCalendar *_calendar;
    NSInteger _status;
    NSInteger _partStatus;
    NSInteger _availability;
    NSString *_responseComment;
    NSTimeZone *_timeZone;
    NSDate *_originalStartDate;
    NSArray *_exceptionDates;
    NSArray *_recurrenceRules;
    unsigned long long _loadFlags;
    unsigned long long _dirtyFlags;
}

@property(readonly) NSString *eventIdentifier;
@property(copy) NSString *title;
@property(copy) NSString *location;
@property(retain) EKCalendar *calendar;
@property(copy) NSString *notes;
@property(readonly) NSDate *lastModifiedDate;
@property(copy) NSArray *alarms;
@property(getter=isAllDay) BOOL allDay;
@property(copy) NSDate *startDate;
@property(copy) NSDate *endDate;
@property(readonly) NSArray *attendees;
@property(readonly) EKParticipant *organizer;
@property(retain) EKRecurrenceRule *recurrenceRule;
@property NSInteger availability;
@property(readonly) NSInteger status;
@property(readonly) BOOL isDetached;
@property(readonly) NSDate *_startDate;

+ (id)eventWithEventStore:(id)arg1;
+ (void)addEvent:(id)arg1 toStore:(id)arg2;
+ (void)removeEvent:(id)arg1 fromStore:(id)arg2;
+ (void)storeOpened:(id)arg1;
+ (void)storeClosed:(id)arg1;
+ (void)daemonRestarted;

- (BOOL)refresh;
- (id)originalEvent;
- (id)attendees;
- (void)setAttendees:(id)arg1;
- (BOOL)isFloating;
- (id)store;
- (id)initWithEventStore:(id)arg1;
- (void)_clearCachedData;
- (id)rowId;
- (id)occurrenceDate;
- (id)copyState;
- (void)restoreState:(id)arg1;
- (void)setStore:(id)arg1;
- (void)_reconnectEvent;
- (void)_reconnectCalendar;
- (void)_setStoreInternal:(id)arg1;
- (void)_storeClosed;
- (void)_reconnectToServer;
- (BOOL)isDirty;
- (BOOL)isStatusDirty;
- (BOOL)isDirtyIgnoringCalendar;
- (void)_sendModifiedNote;
- (id)_canMoveToCalendar:(id)arg1;
- (id)notes;
- (void)setNotes:(id)arg1;
- (id)lastModifiedDate;
- (NSInteger)compareStartDateWithEvent:(id)arg1;
- (void)setAllDay:(BOOL)arg1;
- (void)setStartDate:(id)arg1;
- (void)setEndDate:(id)arg1;
- (id)initialEndDate;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })startDateGr;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })endDateGr;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })startDatePinnedForAllDay;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })endDatePinnedForAllDay;
- (BOOL)isDetached;
- (BOOL)isInvite;
- (NSInteger)attendeeCount;
- (BOOL)hasAlarm;
- (id)nextAlarmDate;
- (id)alarms;
- (NSInteger)alarmCount;
- (void)setAlarms:(id)arg1;
- (void)addAlarm:(id)arg1;
- (void)removeAlarm:(id)arg1;
- (BOOL)_areAlarmsDirty;
- (BOOL)_areRecurrenceRulesDirty;
- (BOOL)isRecurring;
- (id)recurrenceRule;
- (NSInteger)recurrenceRuleCountInDB;
- (void)setRecurrenceRule:(id)arg1;
- (NSInteger)recurrenceRuleCount;
- (BOOL)canAddRecurrence;
- (NSInteger)participationStatus;
- (void)setParticipationStatus:(NSInteger)arg1;
- (BOOL)responseMustApplyToAll;
- (BOOL)isUnread;
- (NSInteger)availability;
- (void)setAvailability:(NSInteger)arg1;
- (id)responseComment;
- (void)setResponseComment:(id)arg1;
- (id)detachedEvents;
- (BOOL)requiresDetach;
- (BOOL)canDetachSingleOccurrence;
- (NSInteger)pendingParticipationStatus;
- (id)externalId;
- (BOOL)hasActionWithExternalAndFolderID;
- (BOOL)canSetAvailability;
- (BOOL)canAddAttendees;
- (BOOL)hasSelfAttendee;
- (BOOL)canSetAlarms;
- (BOOL)canBeRespondedTo;
- (void)_disassociate;
- (BOOL)_commitRecurrenceRule:(id*)arg1;
- (BOOL)_commitAlarms:(id*)arg1;
- (BOOL)_commitAttendees:(id*)arg1;
- (BOOL)_validateDatesAndRecurrencesGivenSpan:(NSInteger)arg1 error:(id*)arg2;
- (BOOL)_validateDurationConstrainedToRecurrenceInterval;
- (BOOL)_validateAlarmIntervalConstrainedToRecurrenceInterval:(NSInteger)arg1;
- (BOOL)_occurrenceExistsOnDate:(double)arg1;
- (BOOL)_checkStartDateConstraintAgainstDate:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 error:(id*)arg2;
- (id)_recurrenceRules;
- (id)_attendees;
- (id)_alarms;
- (id)startDate;
- (id)eventIdentifier;
- (id)_startDate;
- (void)revert;
- (id)initWithEventStore:(id)arg1 event:(void*)arg2 occurrenceDate:(id)arg3 eventIdentifier:(id)arg4;
- (id)initWithEventStore:(id)arg1 event:(void*)arg2 occurrenceDate:(id)arg3;
- (BOOL)commit:(NSInteger)arg1 error:(id*)arg2;
- (BOOL)remove:(NSInteger)arg1 error:(id*)arg2;
- (void*)objectRef;
- (void)clearUnreadState;
- (id)endDate;
- (id)initialStartDate;
- (id)allRecurrenceRules;
- (id)exceptionDates;
- (id)organizer;
- (BOOL)isAllDay;
- (void)setURL:(id)arg1;
- (void)setCalendar:(id)arg1;
- (id)calendar;
- (id)timeZone;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)URL;
- (BOOL)isEditable;
- (id)title;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (double)duration;
- (void)setTimeZone:(id)arg1;
- (id)init;
- (void)setTitle:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (NSInteger)status;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })startDatePinnedForAllDay;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })endDatePinnedForAllDay;

@end
