/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASProtocolCapabilities;

@interface ASProtocol : NSObject {

	ASProtocolCapabilities* _capabilities;

}

@property (nonatomic,retain) ASProtocolCapabilities * capabilities;              //@synthesize capabilities=_capabilities - In the implementation block
-(id)init;
-(id)initWithVersion:(id)arg1 ;
-(int)supportsDraftFolderSync;
-(BOOL)useEventIdsInMeetingResponse;
-(BOOL)includeCommentInMeetingResponse;
-(void)_setCapabilitiesVersion:(id)arg1 ;
-(id)_initWithVersion:(id)arg1 capabilitiesVersion:(id)arg2 ;
-(id)_requestLinePrefixWithTask:(id)arg1 ;
-(id)_usernameOnlyPortionOfUserString:(id)arg1 ;
-(BOOL)supportsSettingsCommand;
-(BOOL)supportsItemOperationsCommand;
-(BOOL)serverUpdatesAttendeeStatusOnEvents;
-(id)calendarConstraintsPath;
-(id)addressBookConstraintsPath;
-(BOOL)supportsNoteSyncing;
-(BOOL)supportsFreeBusyLookup;
-(id)initWithCachedVersion:(id)arg1 ;
-(BOOL)versionChangeRequiresAccountUpgrade:(id)arg1 ;
-(id)requestURLStringWithTask:(id)arg1 ;
-(BOOL)headerNeedsUserAgent;
-(BOOL)headerNeedsPolicyKey;
-(BOOL)headerNeedsProtocolVersion;
-(BOOL)commandStringNeedsSaveInSent;
-(BOOL)shouldUseWBXMLProvisioning;
-(BOOL)usesAirSyncBaseNamespace;
-(BOOL)sendAttendeeRole;
-(BOOL)shouldSendClassForFolderItemsSync;
-(BOOL)shouldSendFullContactInfo;
-(BOOL)requiresExplicitlyFalseGetChanges;
-(BOOL)useBooleanFolderItemsSyncDeletesAsMoves;
-(BOOL)sendEmailInWBXML;
-(BOOL)usesTopLevelStatusCodes;
-(BOOL)useSmartMailTasks;
-(BOOL)fetchAttachmentsWithItemOperations;
-(BOOL)allAttachmentsAreBase64ed;
-(BOOL)sendCalendarInfoInRecurrence;
-(BOOL)serverCreatesEventChangesForInvitations;
-(BOOL)allowsReminderOnCompletedTasks;
-(BOOL)sendFirstDayOfWeekInRecurrence;
-(BOOL)sendDeviceInfoOnProvision;
-(BOOL)sendUserAgentInDeviceInfo;
-(BOOL)supportsGALPhotos;
-(BOOL)supportsAttendeesInExceptions;
-(BOOL)sendEmailForMeetingInvitationAndResponse;
-(BOOL)processFullMeetingInvitationData;
-(BOOL)sendDTStamp;
-(BOOL)sendUID;
-(BOOL)useStructuredLocation;
-(BOOL)alwaysSendAttendeeRole;
-(BOOL)includeExceptionsInParent;
-(BOOL)useInstanceIdForException;
-(BOOL)useFloatingTimeForAllDayEvents;
-(BOOL)useEmptyRecurrence;
-(BOOL)useEmptyReminderMinutes;
-(BOOL)useEmptyLocation;
-(BOOL)syncSnoozeEvents;
-(id)protocolVersion;
-(int)supportsMailboxSearch;
-(int)supportsEmailFlagging;
-(int)supportsConversations;
-(void)setCapabilities:(ASProtocolCapabilities *)arg1 ;
-(ASProtocolCapabilities *)capabilities;
@end

