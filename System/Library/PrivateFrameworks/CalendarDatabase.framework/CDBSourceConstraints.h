/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CalendarDatabase/CalendarDatabase-Structs.h>
@interface CDBSourceConstraints : NSObject {

	int _maxAlarmsAllowed;
	int _maxRecurrencesAllowed;
	struct {
		unsigned maxAlarmsAllowed : 1;
		unsigned maxRecurrencesAllowed : 1;
		unsigned supportsAlarmTriggerIntervals : 1;
		unsigned supportsAlarmTriggerDates : 1;
		unsigned supportsAlarmsTriggeringAfterStartDate : 1;
		unsigned snoozeAlarmRequiresDetach : 1;
		unsigned organizerCanSeeAttendeeStatuses : 1;
		unsigned inviteesCanSeeAttendeeStatuses : 1;
		unsigned statusesAreAccurate : 1;
		unsigned supportsIncomingInvitations : 1;
		unsigned supportsOutgoingInvitations : 1;
		unsigned requiresOutgoingInvitationsInDefaultCalendar : 1;
		unsigned supportsInvitationModifications : 1;
		unsigned supportsResponseComments : 1;
		unsigned deliverySourceOrExternalIDRequiredForResponse : 1;
		unsigned proposedStatusRequiredForResponse : 1;
		unsigned declinedStatusChangeRequiresNoPendingStatus : 1;
		unsigned eventDurationConstrainedToRecurrenceInterval : 1;
		unsigned alarmTriggerIntervalConstrainedToRecurrenceInterval : 1;
		unsigned occurrencesMustOccurOnSeparateDays : 1;
		unsigned futureStartDateLimitedToOccurrenceCacheBounds : 1;
		unsigned supportsRecurrencesOnDetachedEvents : 1;
		unsigned recurrencesShouldPinToMonthDays : 1;
		unsigned requiresAttendeeSearchInSingleAccount : 1;
		unsigned mustAcknowledgeMasterEvent : 1;
		unsigned canSetAvailability : 1;
		unsigned eventAvalabilityLimited : 1;
		unsigned requiresMSFormattedUID : 1;
		unsigned shouldCancelDeletedEvents : 1;
		unsigned shouldDeclineDeletedInvitations : 1;
		unsigned supportsStructuredLocations : 1;
		unsigned supportsReminderActions : 1;
		unsigned supportsReminderLocations : 1;
		unsigned supportsAlarmProximity : 1;
		unsigned allowsCalendarAddDeleteModify : 1;
		unsigned allowsTasks : 1;
		unsigned allowsEvents : 1;
		unsigned supportsURLField : 1;
		unsigned supportsAllDayDueDates : 1;
		unsigned supportsSharedCalendars : 1;
		unsigned isFacebook : 1;
		unsigned recurrenceSeriesMustIncludeMoreThanFirstOccurrence : 1;
		unsigned supportsPrivateEvents : 1;
		unsigned prohibitsPrivateEventsWithAttendees : 1;
		unsigned supportsAvailabilityRequests : 1;
		unsigned supportsIgnoringEventsInAvailabilityRequests : 1;
		unsigned supportsLocationDirectorySearches : 1;
		unsigned requiresSamePrivacyLevelAcrossRecurrenceSeries : 1;
		unsigned prohibitsMultipleMonthsInYearlyRecurrence : 1;
		unsigned prohibitsMultipleDaysInMonthlyRecurrence : 1;
		unsigned prohibitsYearlyRecurrenceInterval : 1;
		unsigned requiresOccurrencesConformToRecurrenceRule : 1;
		unsigned prohibitsDetachmentOnCommentChange : 1;
	}  _flags;

}

@property (assign,nonatomic) int maxAlarmsAllowed;                                                  //@synthesize maxAlarmsAllowed=_maxAlarmsAllowed - In the implementation block
@property (assign,nonatomic) int maxRecurrencesAllowed;                                             //@synthesize maxRecurrencesAllowed=_maxRecurrencesAllowed - In the implementation block
@property (assign,nonatomic) BOOL supportsAlarmTriggerIntervals; 
@property (assign,nonatomic) BOOL supportsAlarmTriggerDates; 
@property (assign,nonatomic) BOOL supportsAlarmsTriggeringAfterStartDate; 
@property (assign,nonatomic) BOOL snoozeAlarmRequiresDetach; 
@property (assign,nonatomic) BOOL organizerCanSeeAttendeeStatuses; 
@property (assign,nonatomic) BOOL inviteesCanSeeAttendeeStatuses; 
@property (assign,nonatomic) BOOL statusesAreAccurate; 
@property (assign,nonatomic) BOOL supportsIncomingInvitations; 
@property (assign,nonatomic) BOOL supportsOutgoingInvitations; 
@property (assign,nonatomic) BOOL requiresOutgoingInvitationsInDefaultCalendar; 
@property (assign,nonatomic) BOOL supportsInvitationModifications; 
@property (assign,nonatomic) BOOL supportsResponseComments; 
@property (assign,nonatomic) BOOL deliverySourceOrExternalIDRequiredForResponse; 
@property (assign,nonatomic) BOOL proposedStatusRequiredForResponse; 
@property (assign,nonatomic) BOOL declinedStatusChangeRequiresNoPendingStatus; 
@property (assign,nonatomic) BOOL eventDurationConstrainedToRecurrenceInterval; 
@property (assign,nonatomic) BOOL alarmTriggerIntervalConstrainedToRecurrenceInterval; 
@property (assign,nonatomic) BOOL occurrencesMustOccurOnSeparateDays; 
@property (assign,nonatomic) BOOL futureStartDateLimitedToOccurrenceCacheBounds; 
@property (assign,nonatomic) BOOL supportsRecurrencesOnDetachedEvents; 
@property (assign,nonatomic) BOOL recurrencesShouldPinToMonthDays; 
@property (assign,nonatomic) BOOL requiresAttendeeSearchInSingleAccount; 
@property (assign,nonatomic) BOOL mustAcknowledgeMasterEvent; 
@property (assign,nonatomic) BOOL canSetAvailability; 
@property (assign,nonatomic) BOOL eventAvalabilityLimited; 
@property (assign,nonatomic) BOOL requiresMSFormattedUID; 
@property (assign,nonatomic) BOOL shouldCancelDeletedEvents; 
@property (assign,nonatomic) BOOL shouldDeclineDeletedInvitations; 
@property (assign,nonatomic) BOOL supportsStructuredLocations; 
@property (assign,nonatomic) BOOL supportsReminderActions; 
@property (assign,nonatomic) BOOL supportsReminderLocations; 
@property (assign,nonatomic) BOOL supportsAlarmProximity; 
@property (assign,nonatomic) BOOL allowsCalendarAddDeleteModify; 
@property (assign,nonatomic) BOOL allowsTasks; 
@property (assign,nonatomic) BOOL allowsEvents; 
@property (assign,nonatomic) BOOL supportsURLField; 
@property (assign,nonatomic) BOOL supportsAllDayDueDates; 
@property (assign,nonatomic) BOOL supportsSharedCalendars; 
@property (assign,nonatomic) BOOL isFacebook; 
@property (assign,nonatomic) BOOL supportsPrivateEvents; 
@property (assign,nonatomic) BOOL prohibitsPrivateEventsWithAttendees; 
@property (assign,nonatomic) BOOL requiresSamePrivacyLevelAcrossRecurrenceSeries; 
@property (assign,nonatomic) BOOL supportsAvailabilityRequests; 
@property (assign,nonatomic) BOOL supportsIgnoringEventsInAvailabilityRequests; 
@property (assign,nonatomic) BOOL supportsLocationDirectorySearches; 
@property (assign,nonatomic) BOOL recurrenceSeriesMustIncludeMoreThanFirstOccurrence; 
@property (assign,nonatomic) BOOL prohibitsMultipleMonthsInYearlyRecurrence; 
@property (assign,nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence; 
@property (assign,nonatomic) BOOL prohibitsYearlyRecurrenceInterval; 
@property (assign,nonatomic) BOOL requiresOccurrencesConformToRecurrenceRule; 
@property (assign,nonatomic) BOOL prohibitsDetachmentOnCommentChange; 
@property (assign,nonatomic) SCD_Struct_CD6 flags;                                                  //@synthesize flags=_flags - In the implementation block
-(BOOL)recurrencesShouldPinToMonthDays;
-(BOOL)supportsAlarmTriggerDates;
-(BOOL)requiresSamePrivacyLevelAcrossRecurrenceSeries;
-(BOOL)requiresMSFormattedUID;
-(BOOL)supportsReminderLocations;
-(BOOL)supportsReminderActions;
-(BOOL)mustAcknowledgeMasterEvent;
-(BOOL)proposedStatusRequiredForResponse;
-(BOOL)deliverySourceOrExternalIDRequiredForResponse;
-(BOOL)declinedStatusChangeRequiresNoPendingStatus;
-(BOOL)recurrenceSeriesMustIncludeMoreThanFirstOccurrence;
-(BOOL)supportsRecurrencesOnDetachedEvents;
-(BOOL)prohibitsDetachmentOnCommentChange;
-(BOOL)snoozeAlarmRequiresDetach;
-(BOOL)requiresOccurrencesConformToRecurrenceRule;
-(BOOL)occurrencesMustOccurOnSeparateDays;
-(BOOL)shouldCancelDeletedEvents;
-(BOOL)shouldDeclineDeletedInvitations;
-(BOOL)eventAvalabilityLimited;
-(BOOL)supportsAlarmProximity;
-(id)initWithMaxAlarms:(int)arg1 maxRecurrences:(int)arg2 constraintFlags:(unsigned long long)arg3 ;
-(BOOL)supportsAvailabilityRequests;
-(BOOL)futureStartDateLimitedToOccurrenceCacheBounds;
-(BOOL)prohibitsMultipleDaysInMonthlyRecurrence;
-(void)setProhibitsMultipleDaysInMonthlyRecurrence:(BOOL)arg1 ;
-(BOOL)prohibitsMultipleMonthsInYearlyRecurrence;
-(void)setProhibitsMultipleMonthsInYearlyRecurrence:(BOOL)arg1 ;
-(BOOL)prohibitsYearlyRecurrenceInterval;
-(void)setProhibitsYearlyRecurrenceInterval:(BOOL)arg1 ;
-(void)setIsFacebook:(BOOL)arg1 ;
-(BOOL)organizerCanSeeAttendeeStatuses;
-(BOOL)inviteesCanSeeAttendeeStatuses;
-(int)maxAlarmsAllowed;
-(BOOL)supportsAlarmTriggerIntervals;
-(BOOL)supportsInvitationModifications;
-(BOOL)supportsSharedCalendars;
-(BOOL)statusesAreAccurate;
-(BOOL)supportsResponseComments;
-(BOOL)supportsLocationDirectorySearches;
-(BOOL)supportsPrivateEvents;
-(BOOL)supportsURLField;
-(BOOL)allowsEvents;
-(BOOL)allowsCalendarAddDeleteModify;
-(BOOL)supportsOutgoingInvitations;
-(BOOL)requiresOutgoingInvitationsInDefaultCalendar;
-(BOOL)prohibitsPrivateEventsWithAttendees;
-(BOOL)supportsStructuredLocations;
-(BOOL)isFacebook;
-(BOOL)supportsAlarmsTriggeringAfterStartDate;
-(BOOL)canSetAvailability;
-(BOOL)supportsIncomingInvitations;
-(BOOL)supportsIgnoringEventsInAvailabilityRequests;
-(BOOL)allowsTasks;
-(int)maxRecurrencesAllowed;
-(BOOL)eventDurationConstrainedToRecurrenceInterval;
-(BOOL)alarmTriggerIntervalConstrainedToRecurrenceInterval;
-(id)init;
-(void)setSupportsPrivateEvents:(BOOL)arg1 ;
-(void)setSupportsAlarmTriggerIntervals:(BOOL)arg1 ;
-(void)setSupportsAlarmTriggerDates:(BOOL)arg1 ;
-(void)setSupportsAlarmsTriggeringAfterStartDate:(BOOL)arg1 ;
-(void)setSnoozeAlarmRequiresDetach:(BOOL)arg1 ;
-(void)setOrganizerCanSeeAttendeeStatuses:(BOOL)arg1 ;
-(void)setInviteesCanSeeAttendeeStatuses:(BOOL)arg1 ;
-(void)setStatusesAreAccurate:(BOOL)arg1 ;
-(void)setSupportsIncomingInvitations:(BOOL)arg1 ;
-(void)setSupportsOutgoingInvitations:(BOOL)arg1 ;
-(void)setRequiresOutgoingInvitationsInDefaultCalendar:(BOOL)arg1 ;
-(void)setSupportsInvitationModifications:(BOOL)arg1 ;
-(void)setSupportsResponseComments:(BOOL)arg1 ;
-(void)setDeliverySourceOrExternalIDRequiredForResponse:(BOOL)arg1 ;
-(void)setProposedStatusRequiredForResponse:(BOOL)arg1 ;
-(void)setDeclinedStatusChangeRequiresNoPendingStatus:(BOOL)arg1 ;
-(void)setEventDurationConstrainedToRecurrenceInterval:(BOOL)arg1 ;
-(void)setAlarmTriggerIntervalConstrainedToRecurrenceInterval:(BOOL)arg1 ;
-(void)setOccurrencesMustOccurOnSeparateDays:(BOOL)arg1 ;
-(void)setFutureStartDateLimitedToOccurrenceCacheBounds:(BOOL)arg1 ;
-(void)setSupportsRecurrencesOnDetachedEvents:(BOOL)arg1 ;
-(void)setRecurrencesShouldPinToMonthDays:(BOOL)arg1 ;
-(BOOL)requiresAttendeeSearchInSingleAccount;
-(void)setRequiresAttendeeSearchInSingleAccount:(BOOL)arg1 ;
-(void)setMustAcknowledgeMasterEvent:(BOOL)arg1 ;
-(void)setCanSetAvailability:(BOOL)arg1 ;
-(void)setEventAvalabilityLimited:(BOOL)arg1 ;
-(void)setRequiresMSFormattedUID:(BOOL)arg1 ;
-(void)setShouldCancelDeletedEvents:(BOOL)arg1 ;
-(void)setShouldDeclineDeletedInvitations:(BOOL)arg1 ;
-(void)setSupportsStructuredLocations:(BOOL)arg1 ;
-(void)setSupportsReminderActions:(BOOL)arg1 ;
-(void)setSupportsReminderLocations:(BOOL)arg1 ;
-(void)setSupportsAlarmProximity:(BOOL)arg1 ;
-(void)setAllowsCalendarAddDeleteModify:(BOOL)arg1 ;
-(void)setAllowsTasks:(BOOL)arg1 ;
-(void)setAllowsEvents:(BOOL)arg1 ;
-(void)setSupportsURLField:(BOOL)arg1 ;
-(BOOL)supportsAllDayDueDates;
-(void)setSupportsAllDayDueDates:(BOOL)arg1 ;
-(void)setSupportsSharedCalendars:(BOOL)arg1 ;
-(void)setRecurrenceSeriesMustIncludeMoreThanFirstOccurrence:(BOOL)arg1 ;
-(void)setProhibitsPrivateEventsWithAttendees:(BOOL)arg1 ;
-(void)setSupportsAvailabilityRequests:(BOOL)arg1 ;
-(void)setSupportsIgnoringEventsInAvailabilityRequests:(BOOL)arg1 ;
-(void)setSupportsLocationDirectorySearches:(BOOL)arg1 ;
-(void)setRequiresSamePrivacyLevelAcrossRecurrenceSeries:(BOOL)arg1 ;
-(void)setRequiresOccurrencesConformToRecurrenceRule:(BOOL)arg1 ;
-(void)setProhibitsDetachmentOnCommentChange:(BOOL)arg1 ;
-(void)setMaxAlarmsAllowed:(int)arg1 ;
-(void)setMaxRecurrencesAllowed:(int)arg1 ;
-(void)setFlags:(SCD_Struct_CD6)arg1 ;
-(SCD_Struct_CD6)flags;
@end
