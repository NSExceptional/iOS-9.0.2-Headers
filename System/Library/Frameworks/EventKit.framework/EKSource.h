/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:07 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class EKAvailabilityCache, NSDate, NSString, NSSet, NSNumber, CDBSourceConstraints;

@interface EKSource : EKObject {

	EKAvailabilityCache* _availabilityCache;
	NSDate* _timeOfLastExternalIdentificationCache;
	NSString* _cachedHost;
	long long _cachedPort;
	NSSet* _cachedOwnerAddresses;

}

@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) long long sourceType; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) NSSet * calendars; 
@property (nonatomic,copy) NSNumber * defaultAlarmOffset; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) BOOL isFacebookSource; 
@property (nonatomic,readonly) CDBSourceConstraints * constraints; 
@property (nonatomic,readonly) int displayOrderForNewCalendar; 
@property (assign,nonatomic) BOOL onlyCreatorCanModify; 
@property (nonatomic,readonly) BOOL wantsCommentPromptWhenDeclining; 
@property (nonatomic,readonly) long long preferredEventPrivateValue; 
@property (nonatomic,readonly) long long strictestEventPrivateValue; 
@property (nonatomic,readonly) NSString * serverHost; 
@property (nonatomic,readonly) long long serverPort; 
@property (nonatomic,readonly) NSSet * ownerAddresses; 
@property (nonatomic,readonly) EKAvailabilityCache * availabilityCache; 
@property (nonatomic,readonly) NSSet * allCalendars; 
@property (nonatomic,retain) NSDate * timeOfLastExternalIdentificationCache;              //@synthesize timeOfLastExternalIdentificationCache=_timeOfLastExternalIdentificationCache - In the implementation block
@property (nonatomic,retain) NSString * cachedHost;                                       //@synthesize cachedHost=_cachedHost - In the implementation block
@property (assign,nonatomic) long long cachedPort;                                        //@synthesize cachedPort=_cachedPort - In the implementation block
@property (nonatomic,retain) NSSet * cachedOwnerAddresses;                                //@synthesize cachedOwnerAddresses=_cachedOwnerAddresses - In the implementation block
+(id)sourceWithEventStore:(id)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(NSSet *)calendars;
-(id)_persistentItem;
-(long long)strictestEventPrivateValue;
-(EKAvailabilityCache *)availabilityCache;
-(BOOL)onlyCreatorCanModify;
-(NSSet *)allCalendars;
-(NSDate *)timeOfLastExternalIdentificationCache;
-(void)setCachedHost:(NSString *)arg1 ;
-(void)setCachedPort:(long long)arg1 ;
-(void)setCachedOwnerAddresses:(NSSet *)arg1 ;
-(void)setTimeOfLastExternalIdentificationCache:(NSDate *)arg1 ;
-(void)_cacheExternalIdentificationIfNeeded;
-(NSString *)cachedHost;
-(long long)cachedPort;
-(NSSet *)cachedOwnerAddresses;
-(NSNumber *)defaultAlarmOffset;
-(void)setDefaultAlarmOffset:(NSNumber *)arg1 ;
-(void)setOnlyCreatorCanModify:(BOOL)arg1 ;
-(BOOL)wantsCommentPromptWhenDeclining;
-(NSString *)serverHost;
-(BOOL)isFacebookSource;
-(NSString *)externalID;
-(NSSet *)ownerAddresses;
-(id)calendarsForEntityType:(unsigned long long)arg1 ;
-(id)readWriteCalendarsForEntityType:(unsigned long long)arg1 ;
-(long long)preferredEventPrivateValue;
-(int)displayOrderForNewCalendar;
-(BOOL)remove:(id*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(BOOL)isEnabled;
-(CDBSourceConstraints *)constraints;
-(long long)sourceType;
-(long long)serverPort;
-(NSString *)sourceIdentifier;
-(BOOL)commit:(id*)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
@end

