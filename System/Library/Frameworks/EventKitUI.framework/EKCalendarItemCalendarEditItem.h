/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>

@interface EKCalendarItemCalendarEditItem : EKCalendarItemEditItem {

	unsigned long long _entityType;

}
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerCommit:(id)arg1 ;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(BOOL)requiresReconfigurationOnCommit;
-(id)initWithEntityType:(unsigned long long)arg1 ;
-(BOOL)_shouldShowSourceForCalendar:(id)arg1 ;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(id)init;
@end

