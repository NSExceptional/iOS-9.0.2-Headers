/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:12 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/EKPredicate.h>

@class NSString, NSDate;

@interface EKReminderPredicate : EKPredicate {

	BOOL _limitToCompletedOrIncomplete;
	BOOL _completed;
	BOOL _useCompletionDateAsAlternate;
	BOOL _useDueDateAsCompletionDate;
	int _sortOrder;
	NSString* _listTitle;
	NSDate* _dueAfter;
	NSDate* _dueBefore;
	NSString* _searchTerm;
	unsigned long long _maxResults;

}

@property (nonatomic,retain) NSString * listTitle;                           //@synthesize listTitle=_listTitle - In the implementation block
@property (assign,nonatomic) BOOL limitToCompletedOrIncomplete;              //@synthesize limitToCompletedOrIncomplete=_limitToCompletedOrIncomplete - In the implementation block
@property (assign,nonatomic) BOOL completed;                                 //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSDate * dueAfter;                              //@synthesize dueAfter=_dueAfter - In the implementation block
@property (nonatomic,retain) NSDate * dueBefore;                             //@synthesize dueBefore=_dueBefore - In the implementation block
@property (assign,nonatomic) BOOL useCompletionDateAsAlternate;              //@synthesize useCompletionDateAsAlternate=_useCompletionDateAsAlternate - In the implementation block
@property (assign,nonatomic) BOOL useDueDateAsCompletionDate;                //@synthesize useDueDateAsCompletionDate=_useDueDateAsCompletionDate - In the implementation block
@property (nonatomic,retain) NSString * searchTerm;                          //@synthesize searchTerm=_searchTerm - In the implementation block
@property (assign,nonatomic) int sortOrder;                                  //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) unsigned long long maxResults;                  //@synthesize maxResults=_maxResults - In the implementation block
+(id)predicateWithCalendars:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(void)setUseDueDateAsCompletionDate:(BOOL)arg1 ;
-(void)setLimitToCompletedOrIncomplete:(BOOL)arg1 ;
-(void)setUseCompletionDateAsAlternate:(BOOL)arg1 ;
-(void)setListTitle:(NSString *)arg1 ;
-(BOOL)completed;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setSortOrder:(int)arg1 ;
-(int)sortOrder;
-(id)initWithCalendars:(id)arg1 ;
-(BOOL)limitToCompletedOrIncomplete;
-(BOOL)useCompletionDateAsAlternate;
-(BOOL)useDueDateAsCompletionDate;
-(NSString *)listTitle;
-(void)setMaxResults:(unsigned long long)arg1 ;
-(unsigned long long)maxResults;
-(NSDate *)dueAfter;
-(void)setDueAfter:(NSDate *)arg1 ;
-(NSDate *)dueBefore;
-(void)setDueBefore:(NSDate *)arg1 ;
-(void)setSearchTerm:(NSString *)arg1 ;
-(NSString *)searchTerm;
@end

