/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:02 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class HDDaemon, _HDWorkoutData, NSObject, NSMutableSet;

@interface HDWorkoutManager : NSObject {

	HDDaemon* _daemon;
	_HDWorkoutData* _currentWorkout;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _currentObservedTypes;

}
-(void)stopWorkoutSessionWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDaemon:(id)arg1 ;
-(BOOL)hasAnyActiveWorkouts;
-(void)startWorkoutSession:(id)arg1 clientIdentifier:(id)arg2 server:(id)arg3 isFirstParty:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_queue_stopCurrentSession;
-(void)_queue_setViewOnWake:(BOOL)arg1 forWorkout:(id)arg2 ;
-(void)_queue_setDataCollectionForWorkoutSession:(id)arg1 ;
-(void)_queue_startDataCollection;
-(void)_queue_setCurrentSessionState:(long long)arg1 ;
-(void)_queue_didUpdateCurrentWorkoutSession;
-(void)_queue_stopDataCollection;
-(void)_queue_resetDataCollectionForWorkoutSession:(id)arg1 ;
-(void)_queue_setDataCollectionForSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 isIndoor:(BOOL)arg3 ;
-(void)clientInvalidated:(id)arg1 ;
-(unsigned long long)currentWorkoutActivityType;
-(id)currentWorkoutClientIdentifier;
@end

