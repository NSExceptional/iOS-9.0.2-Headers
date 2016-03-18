/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <libobjc.A.dylib/DuetLoggerProtocol.h>
#import <libobjc.A.dylib/DuetSaveAndRestore.h>

@protocol OS_dispatch_queue;
@class NSObject, AppLaunchStatsSaveAndRestore, NSMutableDictionary;

@interface AppLaunchStatsDelayLaunch : NSObject <DuetLoggerProtocol, DuetSaveAndRestore> {

	NSObject*<OS_dispatch_queue> aplsDelayLaunchQueue;
	AppLaunchStatsSaveAndRestore* saveAndRestoreContext;
	NSMutableDictionary* delayLaunchList;
	NSMutableDictionary* delayLaunchTimeInterval;

}
-(void)restore:(id)arg1 ;
-(id)init;
-(void)save:(id)arg1 ;
-(void)logAll:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)saveContext:(id)arg1 ;
-(void)delayLaunch:(id)arg1 with:(double)arg2 ;
-(void)resetDelayLaunch:(id)arg1 ;
-(int)valueSetForDelay:(id)arg1 ;
-(BOOL)shouldDelayLaunch:(id)arg1 forTrending:(BOOL)arg2 ;
@end

