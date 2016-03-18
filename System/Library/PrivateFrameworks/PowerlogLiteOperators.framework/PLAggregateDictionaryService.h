/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogCore/PLService.h>

@class NSMutableArray, PLTimer;

@interface PLAggregateDictionaryService : PLService {

	double remainderUnpluggedEnergy;
	double remainderUnpluggedTime;
	NSMutableArray* _registeredNotifications;
	PLTimer* _dailyTaskTimer;
	AggState _last_state;

}

@property (retain) NSMutableArray * registeredNotifications;              //@synthesize registeredNotifications=_registeredNotifications - In the implementation block
@property (retain) PLTimer * dailyTaskTimer;                              //@synthesize dailyTaskTimer=_dailyTaskTimer - In the implementation block
@property (assign) AggState last_state;                                   //@synthesize last_state=_last_state - In the implementation block
+(void)load;
-(id)init;
-(void)initOperatorDependancies;
-(void)dailyTasks;
-(void)registerForAudioNotifications;
-(void)registerForCameraNotifications;
-(void)registerForBluetoothNotifications;
-(void)registerForUIKitNotifications;
-(void)registerForSpringboardNotifications;
-(void)registerForVideoNotifications;
-(void)registerForMailNotifications;
-(void)registerForStoreNotifications;
-(void)registerForCalendarNotifications;
-(void)registerForCoreMediaNotifications;
-(void)registerForApplicationNotifications;
-(void)registerForLocationNotifications;
-(void)registerForBatteryNotifications;
-(void)registerForSCDynamicStoreNotifications;
-(void)registerForSafariNotifications;
-(void)setDailyTaskTimer:(PLTimer *)arg1 ;
-(void)blmAggregate;
-(NSMutableArray *)registeredNotifications;
-(void)addToDurationScalarKey:(id)arg1 withDuration:(double)arg2 ;
-(void)logDuration:(double)arg1 asDistribution:(id)arg2 ;
-(void)logAggregateUIKitKeyboardActivityKey:(id)arg1 withInfo:(id)arg2 AggDKey:(id)arg3 ;
-(void)logAggregateUIKitActivityKey:(id)arg1 withInfo:(id)arg2 AggDKey:(id)arg3 ;
-(void)updateAggregateStateWithEntry:(id)arg1 ;
-(AggState)last_state;
-(void)setLast_state:(AggState)arg1 ;
-(void)registerForAssertionNotifications;
-(void)setRegisteredNotifications:(NSMutableArray *)arg1 ;
-(PLTimer *)dailyTaskTimer;
@end

