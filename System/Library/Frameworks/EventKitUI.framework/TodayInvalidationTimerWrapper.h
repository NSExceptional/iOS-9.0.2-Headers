/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface TodayInvalidationTimerWrapper : NSObject {

	NSTimer* _tzSupportDayRolloverTimer;

}
-(BOOL)todayChangedAfterInvalidation;
-(void)_setupTimeZoneTimer;
-(void)_killTimeZoneTimer;
-(void)invalidateTodayAndNotifyIfChanged;
-(void)dealloc;
-(id)init;
@end

