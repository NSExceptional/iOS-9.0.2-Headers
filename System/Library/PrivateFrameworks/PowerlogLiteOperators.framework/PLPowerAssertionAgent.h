/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLCFNotificationOperatorComposition, PLTimer, NSMutableArray, PLEntryNotificationOperatorComposition, NSMutableDictionary;

@interface PLPowerAssertionAgent : PLAgent {

	BOOL _assertionBufferFullNotificationActive;
	BOOL _firstBufferDrain;
	PLCFNotificationOperatorComposition* _assertionNotification;
	PLCFNotificationOperatorComposition* _assertionBufferFullNotification;
	PLTimer* _assertionBufferFullNotificationRearmTimer;
	NSMutableArray* _assertionBufferNotificationTracking;
	PLEntryNotificationOperatorComposition* _batteryLevelNotificiations;
	PLEntryNotificationOperatorComposition* _wakeNotification;
	PLEntryNotificationOperatorComposition* _canSleepNotification;
	PLTimer* _runQueryTimer;
	PLTimer* _assertionSnapShotTimer;
	long long _aggregateMaxPIDCount;
	long long _aggregteZeroDeltaCount;
	NSMutableDictionary* _assertionAggregatedLastSamplePLDataStructure;
	NSMutableDictionary* _assertionAggregatedLastSample;

}

@property (retain) PLCFNotificationOperatorComposition * assertionNotification;                        //@synthesize assertionNotification=_assertionNotification - In the implementation block
@property (retain) PLCFNotificationOperatorComposition * assertionBufferFullNotification;              //@synthesize assertionBufferFullNotification=_assertionBufferFullNotification - In the implementation block
@property (retain) PLTimer * assertionBufferFullNotificationRearmTimer;                                //@synthesize assertionBufferFullNotificationRearmTimer=_assertionBufferFullNotificationRearmTimer - In the implementation block
@property (assign,nonatomic) BOOL assertionBufferFullNotificationActive;                               //@synthesize assertionBufferFullNotificationActive=_assertionBufferFullNotificationActive - In the implementation block
@property (retain) NSMutableArray * assertionBufferNotificationTracking;                               //@synthesize assertionBufferNotificationTracking=_assertionBufferNotificationTracking - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * batteryLevelNotificiations;                //@synthesize batteryLevelNotificiations=_batteryLevelNotificiations - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * wakeNotification;                          //@synthesize wakeNotification=_wakeNotification - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * canSleepNotification;                      //@synthesize canSleepNotification=_canSleepNotification - In the implementation block
@property (retain) PLTimer * runQueryTimer;                                                            //@synthesize runQueryTimer=_runQueryTimer - In the implementation block
@property (retain) PLTimer * assertionSnapShotTimer;                                                   //@synthesize assertionSnapShotTimer=_assertionSnapShotTimer - In the implementation block
@property (assign,nonatomic) BOOL assertionSnapshotTimerActive; 
@property (assign) BOOL firstBufferDrain;                                                              //@synthesize firstBufferDrain=_firstBufferDrain - In the implementation block
@property (assign) long long aggregateMaxPIDCount;                                                     //@synthesize aggregateMaxPIDCount=_aggregateMaxPIDCount - In the implementation block
@property (assign) long long aggregteZeroDeltaCount;                                                   //@synthesize aggregteZeroDeltaCount=_aggregteZeroDeltaCount - In the implementation block
@property (retain) NSMutableDictionary * assertionAggregatedLastSamplePLDataStructure;                 //@synthesize assertionAggregatedLastSamplePLDataStructure=_assertionAggregatedLastSamplePLDataStructure - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assertionAggregatedLastSample;                      //@synthesize assertionAggregatedLastSample=_assertionAggregatedLastSample - In the implementation block
+(id)defaults;
+(void)load;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionSnapshot;
+(id)entryEventPointDefinitionSnapshotReason;
+(id)entryEventPointDefinitionBufferStatus;
+(id)entryEventPointDefinitionAggregateReset;
+(id)entryEventIntervalDefinitionAssertion;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(void)resetIOPMSetAssertionActivityAggregateWithReason:(short)arg1 withPidCount:(int)arg2 ;
-(void)setRunQueryTimer:(PLTimer *)arg1 ;
-(void)logEventIntervalAssertionWithReason:(id)arg1 ;
-(void)setAssertionNotification:(PLCFNotificationOperatorComposition *)arg1 ;
-(NSMutableArray *)assertionBufferNotificationTracking;
-(void)checkAssertionBufferFullNotificationRate;
-(void)setAssertionBufferFullNotification:(PLCFNotificationOperatorComposition *)arg1 ;
-(void)setAssertionBufferFullNotificationActive:(BOOL)arg1 withReason:(id)arg2 ;
-(void)logAggregatedAssertionActivityPLDataStructure;
-(void)setBatteryLevelNotificiations:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setAssertionSnapshotTimerActive:(BOOL)arg1 ;
-(void)setWakeNotification:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setCanSleepNotification:(PLEntryNotificationOperatorComposition *)arg1 ;
-(BOOL)assertionBufferFullNotificationActive;
-(void)setAssertionBufferFullNotificationActive:(BOOL)arg1 ;
-(void)setAssertionBufferFullNotificationRearmTimer:(PLTimer *)arg1 ;
-(PLCFNotificationOperatorComposition *)assertionBufferFullNotification;
-(void)logEventPointSnapshotWithReason:(id)arg1 ;
-(void)setAssertionSnapShotTimer:(PLTimer *)arg1 ;
-(PLTimer *)assertionSnapShotTimer;
-(NSMutableDictionary *)assertionAggregatedLastSample;
-(void)logEventPointAggregateResetWithReason:(short)arg1 withPidCount:(int)arg2 ;
-(void)setAssertionAggregatedLastSample:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)assertionAggregatedLastSamplePLDataStructure;
-(void)setAssertionAggregatedLastSamplePLDataStructure:(NSMutableDictionary *)arg1 ;
-(void)logEventIntervalAssertion;
-(void)sanitizeAssertionNameForEntry:(id)arg1 ;
-(BOOL)firstBufferDrain;
-(void)setFirstBufferDrain:(BOOL)arg1 ;
-(id)bundleIDForAssertionProcessPID:(int)arg1 ;
-(long long)aggregateMaxPIDCount;
-(long long)aggregteZeroDeltaCount;
-(void)resetIOPMSetAssertionActivityAggregatePLDataStructureWithReason:(short)arg1 withPidCount:(int)arg2 ;
-(BOOL)assertionSnapshotTimerActive;
-(void)logEventPointSnapshot;
-(void)logAggregatedAssertionActivity;
-(PLCFNotificationOperatorComposition *)assertionNotification;
-(PLTimer *)assertionBufferFullNotificationRearmTimer;
-(void)setAssertionBufferNotificationTracking:(NSMutableArray *)arg1 ;
-(PLEntryNotificationOperatorComposition *)batteryLevelNotificiations;
-(PLEntryNotificationOperatorComposition *)wakeNotification;
-(PLEntryNotificationOperatorComposition *)canSleepNotification;
-(PLTimer *)runQueryTimer;
-(void)setAggregateMaxPIDCount:(long long)arg1 ;
-(void)setAggregteZeroDeltaCount:(long long)arg1 ;
@end

