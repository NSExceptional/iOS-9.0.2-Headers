/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL, NSSet, NSTimeZone, NSDictionary, NSArray;


@protocol CalDAVCalendar <NSObject>
@property (nonatomic,readonly) id<CalDAVPrincipal> principal; 
@property (nonatomic,retain) NSString * guid; 
@property (nonatomic,retain) NSURL * calendarURL; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * notes; 
@property (nonatomic,retain) NSString * color; 
@property (nonatomic,retain) NSString * symbolicColorName; 
@property (nonatomic,retain) NSString * pushKey; 
@property (nonatomic,retain) NSURL * owner; 
@property (nonatomic,retain) NSString * ownerDisplayName; 
@property (nonatomic,retain) NSSet * calendarUserAddresses; 
@property (nonatomic,retain) NSURL * publishURL; 
@property (nonatomic,retain) NSURL * prePublishURL; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (nonatomic,retain) NSDictionary * bulkRequests; 
@property (assign,nonatomic) int order; 
@property (assign,nonatomic) int sharingStatus; 
@property (nonatomic,retain) NSSet * sharees; 
@property (assign,nonatomic) BOOL isTaskContainer; 
@property (assign,nonatomic) BOOL isEventContainer; 
@property (assign,nonatomic) BOOL isSubscribed; 
@property (assign,nonatomic) BOOL isManagedByServer; 
@property (assign,nonatomic) BOOL isScheduleInbox; 
@property (assign,nonatomic) BOOL isScheduleOutbox; 
@property (assign,nonatomic) BOOL isNotification; 
@property (assign,nonatomic) BOOL isPoll; 
@property (assign,nonatomic) BOOL isEditable; 
@property (assign,nonatomic) BOOL isRenameable; 
@property (assign,nonatomic) BOOL isEnabled; 
@property (assign,nonatomic) BOOL isPublished; 
@property (assign,nonatomic) BOOL isAffectingAvailability; 
@property (assign,nonatomic) BOOL canBePublished; 
@property (assign,nonatomic) BOOL canBeShared; 
@property (assign,nonatomic) BOOL isFamilyCalendar; 
@property (assign,nonatomic) BOOL isMarkedUndeletable; 
@property (assign,nonatomic) BOOL isMarkedImmutableSharees; 
@property (assign,nonatomic) BOOL wasModifiedLocally; 
@property (assign,nonatomic) BOOL needsResync; 
@property (nonatomic,retain) NSString * ctag; 
@property (nonatomic,retain) NSString * syncToken; 
@property (nonatomic,readonly) BOOL needsPublishUpdate; 
@property (nonatomic,readonly) NSArray * syncActions; 
@property (nonatomic,readonly) NSArray * shareeActions; 
@property (nonatomic,readonly) NSDictionary * uuidsToAddActions; 
@property (nonatomic,readonly) NSDictionary * hrefsToModDeleteActions; 
@property (nonatomic,readonly) NSSet * allItemURLs; 
@optional
-(Class)appSpecificCalendarItemClass;
-(void)clearShareeActions;
-(void)prepareMergeSyncActionsWithCompletionBlock:(/*^block*/id)arg1;
-(void)syncDidFinishWithError:(id)arg1;
-(void)putAction:(id)arg1 completedWithError:(id)arg2;
-(void)deleteAction:(id)arg1 completedWithError:(id)arg2;

@required
-(NSString *)symbolicColorName;
-(void)setCanBePublished:(BOOL)arg1;
-(void)setCanBeShared:(BOOL)arg1;
-(void)setIsFamilyCalendar:(BOOL)arg1;
-(void)setIsMarkedUndeletable:(BOOL)arg1;
-(void)setIsMarkedImmutableSharees:(BOOL)arg1;
-(NSDictionary *)bulkRequests;
-(void)setBulkRequests:(id)arg1;
-(NSString *)pushKey;
-(void)setPushKey:(id)arg1;
-(NSString *)notes;
-(void)setNotes:(id)arg1;
-(BOOL)isFamilyCalendar;
-(int)sharingStatus;
-(NSSet *)sharees;
-(BOOL)canBeShared;
-(void)setSharees:(id)arg1;
-(BOOL)isMarkedImmutableSharees;
-(void)setSharingStatus:(int)arg1;
-(BOOL)isMarkedUndeletable;
-(BOOL)isSubscribed;
-(void)setSymbolicColorName:(id)arg1;
-(BOOL)isPublished;
-(BOOL)canBePublished;
-(void)setIsPublished:(BOOL)arg1;
-(void)setTitle:(id)arg1;
-(NSString *)title;
-(void)setTimeZone:(id)arg1;
-(BOOL)isEditable;
-(BOOL)isEnabled;
-(void)setIsEnabled:(BOOL)arg1;
-(NSString *)color;
-(void)setColor:(id)arg1;
-(NSTimeZone *)timeZone;
-(void)setOrder:(int)arg1;
-(int)order;
-(void)setIsEditable:(BOOL)arg1;
-(BOOL)isScheduleInbox;
-(BOOL)isScheduleOutbox;
-(BOOL)isNotification;
-(BOOL)isEventContainer;
-(BOOL)isTaskContainer;
-(NSURL *)publishURL;
-(NSURL *)prePublishURL;
-(void)setPublishURL:(id)arg1;
-(void)setPrePublishURL:(id)arg1;
-(NSString *)syncToken;
-(BOOL)needsResync;
-(NSURL *)calendarURL;
-(NSArray *)syncActions;
-(id<CalDAVPrincipal>)principal;
-(void)setCalendarUserAddresses:(id)arg1;
-(void)setCalendarURL:(id)arg1;
-(BOOL)needsPublishUpdate;
-(NSArray *)shareeActions;
-(BOOL)isAffectingAvailability;
-(void)setIsEventContainer:(BOOL)arg1;
-(void)setIsTaskContainer:(BOOL)arg1;
-(void)setIsRenameable:(BOOL)arg1;
-(void)setIsSubscribed:(BOOL)arg1;
-(void)setIsScheduleInbox:(BOOL)arg1;
-(void)setIsScheduleOutbox:(BOOL)arg1;
-(void)setIsPoll:(BOOL)arg1;
-(void)setIsNotification:(BOOL)arg1;
-(id)etagsForItemURLs:(id)arg1;
-(BOOL)setEtag:(id)arg1 forItemAtURL:(id)arg2;
-(BOOL)setScheduleTag:(id)arg1 forItemAtURL:(id)arg2;
-(BOOL)setURL:(id)arg1 forResourceWithUUID:(id)arg2;
-(BOOL)updateResourcesFromServer:(id)arg1;
-(BOOL)deleteResourcesAtURLs:(id)arg1;
-(BOOL)hasCalendarUserAddressEquivalentToURL:(id)arg1;
-(NSString *)ownerDisplayName;
-(void)setOwnerDisplayName:(id)arg1;
-(NSSet *)calendarUserAddresses;
-(BOOL)isManagedByServer;
-(void)setIsManagedByServer:(BOOL)arg1;
-(BOOL)isPoll;
-(BOOL)isRenameable;
-(void)setIsAffectingAvailability:(BOOL)arg1;
-(BOOL)wasModifiedLocally;
-(void)setWasModifiedLocally:(BOOL)arg1;
-(void)setNeedsResync:(BOOL)arg1;
-(void)setSyncToken:(id)arg1;
-(NSDictionary *)uuidsToAddActions;
-(NSDictionary *)hrefsToModDeleteActions;
-(NSSet *)allItemURLs;
-(NSString *)ctag;
-(void)setCtag:(id)arg1;
-(NSString *)guid;
-(void)setGuid:(id)arg1;
-(void)setOwner:(id)arg1;
-(NSURL *)owner;

@end

