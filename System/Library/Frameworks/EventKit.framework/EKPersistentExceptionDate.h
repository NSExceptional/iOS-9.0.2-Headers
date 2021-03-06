/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:07 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@class NSDate, EKPersistentCalendarItem;

@interface EKPersistentExceptionDate : EKPersistentObject

@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,retain) EKPersistentCalendarItem * owner; 
+(id)relations;
+(id)exceptionDateWithDate:(id)arg1 ;
-(id)initWithExceptionDate:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)entityType;
-(void)setOwner:(EKPersistentCalendarItem *)arg1 ;
-(EKPersistentCalendarItem *)owner;
@end

