/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class NSArray;

@interface EKEventAlarmDetailItem : EKEventDetailItem {

	unsigned long long _disclosedSubitem;
	NSArray* _alarms;
	BOOL _hasLeaveNowAlarm;
	BOOL _canHaveLeaveNowAlarm;

}
+(id)_textLabelForIndex:(unsigned long long)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(BOOL)editItemViewControllerCommit:(id)arg1 ;
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(void)_updateAlarms;
-(BOOL)_alarmsAreEditable;
-(BOOL)_alarmsAreCreatable;
-(void)reset;
@end

