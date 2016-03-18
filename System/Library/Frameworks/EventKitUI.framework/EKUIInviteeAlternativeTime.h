/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSArray;

@interface EKUIInviteeAlternativeTime : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _conflictedParticipants;

}

@property (nonatomic,retain) NSDate * startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSArray * conflictedParticipants;              //@synthesize conflictedParticipants=_conflictedParticipants - In the implementation block
-(void)setConflictedParticipants:(NSArray *)arg1 ;
-(NSArray *)conflictedParticipants;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 conflictedParticipants:(id)arg3 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)description;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end
