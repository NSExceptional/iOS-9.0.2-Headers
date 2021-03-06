/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogCore/PLAgent.h>
#import <libobjc.A.dylib/PLBasebandLogChannelDelegate.h>

@class PLBasebandLogChannel, PLEntryNotificationOperatorComposition, PLTelephonyConnection, NSDate, NSMutableDictionary, NSNumber, NSString, PLBBTelephonyRegMsg, PLBBTelephonyActivityMsg, PLTimer;

@interface PLBBAgent : PLAgent <PLBasebandLogChannelDelegate> {

	IONotificationPortRef ioNotifyPort;
	unsigned notificationRef;
	unsigned baseband_service;
	PLBasebandLogChannel* streamingChannel;
	PLBasebandLogChannel* cachedChannel;
	BOOL _changed;
	BOOL _agentInited;
	BOOL _lteCurrentState;
	PLEntryNotificationOperatorComposition* _batteryLevelChanged;
	PLTelephonyConnection* _connection;
	PLEntryNotificationOperatorComposition* _sleepEntryNotifications;
	PLEntryNotificationOperatorComposition* _wakeEntryNotifications;
	NSDate* _lastReportRequestDate;
	NSMutableDictionary* _currentCallList;
	NSNumber* _lastReportedSignal;
	NSNumber* _inDCH;
	NSNumber* _inUTBF;
	NSString* _simStatus;
	NSString* _operatorName;
	PLBBTelephonyRegMsg* _telRegMsgHelper;
	PLBBTelephonyActivityMsg* _telActMsgHelper;
	NSDate* _lastBBActivityTimestamp;
	PLEntryNotificationOperatorComposition* _canSleepNotification;
	PLEntryNotificationOperatorComposition* _didNotSleepNotification;
	PLEntryNotificationOperatorComposition* _telephonyActivityNotification;
	PLTimer* _channelReconnectTimer;
	PLTimer* _cacheCommitTimer;
	double _lastBBProtoPower;
	double _lastOOSPower;
	NSDate* _lastModeledOOSTimestamp;
	double _lastGWPower;
	NSDate* _lastOOSTimestamp;
	double _oosGWPower;
	double _oosCDMAPower;
	double _oosHDRPower;
	double _totalOosGWScanEnergy;
	double _totalOosCDMAScanEnergy;
	double _totalOosHDRScanEnergy;

}

@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;                        //@synthesize batteryLevelChanged=_batteryLevelChanged - In the implementation block
@property (nonatomic,readonly) PLTelephonyConnection * connection;                                      //@synthesize connection=_connection - In the implementation block
@property (readonly) PLEntryNotificationOperatorComposition * sleepEntryNotifications;                  //@synthesize sleepEntryNotifications=_sleepEntryNotifications - In the implementation block
@property (readonly) PLEntryNotificationOperatorComposition * wakeEntryNotifications;                   //@synthesize wakeEntryNotifications=_wakeEntryNotifications - In the implementation block
@property (retain) NSDate * lastReportRequestDate;                                                      //@synthesize lastReportRequestDate=_lastReportRequestDate - In the implementation block
@property (assign) BOOL changed;                                                                        //@synthesize changed=_changed - In the implementation block
@property (assign) BOOL agentInited;                                                                    //@synthesize agentInited=_agentInited - In the implementation block
@property (retain) NSMutableDictionary * currentCallList;                                               //@synthesize currentCallList=_currentCallList - In the implementation block
@property (assign) BOOL lteCurrentState;                                                                //@synthesize lteCurrentState=_lteCurrentState - In the implementation block
@property (retain) NSNumber * lastReportedSignal;                                                       //@synthesize lastReportedSignal=_lastReportedSignal - In the implementation block
@property (retain) NSNumber * inDCH;                                                                    //@synthesize inDCH=_inDCH - In the implementation block
@property (retain) NSNumber * inUTBF;                                                                   //@synthesize inUTBF=_inUTBF - In the implementation block
@property (retain) NSString * simStatus;                                                                //@synthesize simStatus=_simStatus - In the implementation block
@property (retain) NSString * operatorName;                                                             //@synthesize operatorName=_operatorName - In the implementation block
@property (retain) PLBBTelephonyRegMsg * telRegMsgHelper;                                               //@synthesize telRegMsgHelper=_telRegMsgHelper - In the implementation block
@property (retain) PLBBTelephonyActivityMsg * telActMsgHelper;                                          //@synthesize telActMsgHelper=_telActMsgHelper - In the implementation block
@property (retain) NSDate * lastBBActivityTimestamp;                                                    //@synthesize lastBBActivityTimestamp=_lastBBActivityTimestamp - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * canSleepNotification;                       //@synthesize canSleepNotification=_canSleepNotification - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * didNotSleepNotification;                    //@synthesize didNotSleepNotification=_didNotSleepNotification - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * telephonyActivityNotification;              //@synthesize telephonyActivityNotification=_telephonyActivityNotification - In the implementation block
@property (retain) PLTimer * channelReconnectTimer;                                                     //@synthesize channelReconnectTimer=_channelReconnectTimer - In the implementation block
@property (retain) PLTimer * cacheCommitTimer;                                                          //@synthesize cacheCommitTimer=_cacheCommitTimer - In the implementation block
@property (assign) double lastBBProtoPower;                                                             //@synthesize lastBBProtoPower=_lastBBProtoPower - In the implementation block
@property (assign) double lastOOSPower;                                                                 //@synthesize lastOOSPower=_lastOOSPower - In the implementation block
@property (retain) NSDate * lastModeledOOSTimestamp;                                                    //@synthesize lastModeledOOSTimestamp=_lastModeledOOSTimestamp - In the implementation block
@property (assign) double lastGWPower;                                                                  //@synthesize lastGWPower=_lastGWPower - In the implementation block
@property (retain) NSDate * lastOOSTimestamp;                                                           //@synthesize lastOOSTimestamp=_lastOOSTimestamp - In the implementation block
@property (assign) double oosGWPower;                                                                   //@synthesize oosGWPower=_oosGWPower - In the implementation block
@property (assign) double oosCDMAPower;                                                                 //@synthesize oosCDMAPower=_oosCDMAPower - In the implementation block
@property (assign) double oosHDRPower;                                                                  //@synthesize oosHDRPower=_oosHDRPower - In the implementation block
@property (assign) double totalOosGWScanEnergy;                                                         //@synthesize totalOosGWScanEnergy=_totalOosGWScanEnergy - In the implementation block
@property (assign) double totalOosCDMAScanEnergy;                                                       //@synthesize totalOosCDMAScanEnergy=_totalOosCDMAScanEnergy - In the implementation block
@property (assign) double totalOosHDRScanEnergy;                                                        //@synthesize totalOosHDRScanEnergy=_totalOosHDRScanEnergy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaults;
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)getNameBBMavReport;
+(id)entryEventBackwardLTESleepStatsQuery;
+(id)entryEventNoneBBMavReport;
+(id)humanReadableStateFromKey:(id)arg1 ;
+(id)indexToRat:(unsigned long long)arg1 ;
+(void)logICEReportFor:(id)arg1 withAgent:(id)arg2 ;
-(BOOL)changed;
-(id)init;
-(void)log;
-(PLTelephonyConnection *)connection;
-(void)logEntry:(id)arg1 ;
-(void)initOperatorDependancies;
-(void)logEntries:(id)arg1 withGroupID:(id)arg2 ;
-(void)setBatteryLevelChanged:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)batteryLevelChanged;
-(void)channelDidBecomeInvalid:(id)arg1 ;
-(void)channel:(id)arg1 hasDataAvailable:(id)arg2 ;
-(void)setCanSleepNotification:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)canSleepNotification;
-(NSString *)simStatus;
-(void)setSimStatus:(NSString *)arg1 ;
-(NSDate *)lastBBActivityTimestamp;
-(void)setLastBBActivityTimestamp:(NSDate *)arg1 ;
-(void)scheduleReconnect;
-(void)setChannelReconnectTimer:(PLTimer *)arg1 ;
-(void)setupBBChannelsWithAction:(long long)arg1 ;
-(PLTimer *)channelReconnectTimer;
-(void)reconnectTimerFired;
-(void)postCDRXCapability:(BOOL)arg1 ;
-(void)handlePostCDRXCapabilityNo:(id)arg1 ;
-(void)setLastReportedSignal:(NSNumber *)arg1 ;
-(void)setInDCH:(NSNumber *)arg1 ;
-(void)setInUTBF:(NSNumber *)arg1 ;
-(void)setChanged:(BOOL)arg1 ;
-(void)logEventNoneBBMavReportBy:(long long)arg1 withAction:(long long)arg2 ;
-(BOOL)setupChannel:(id)arg1 withLogCodes:(id)arg2 andEvents:(id)arg3 andExtracode:(id)arg4 ;
-(NSDate *)lastReportRequestDate;
-(void)setLastReportRequestDate:(NSDate *)arg1 ;
-(void)cacheCommitTimerFired;
-(void)scheduleFlushPostCacheCommit;
-(void)setCacheCommitTimer:(PLTimer *)arg1 ;
-(PLTimer *)cacheCommitTimer;
-(id)setupIOKitNotifications;
-(void)setupTelephonyRegistrationChannels;
-(void)setupTelephonyActivityChannels;
-(void)setupTimeUpdateChannel;
-(void)setupICEChannels;
-(void)logBasebandConfig;
-(void)setAgentInited:(BOOL)arg1 ;
-(void)setTelRegMsgHelper:(PLBBTelephonyRegMsg *)arg1 ;
-(PLBBTelephonyRegMsg *)telRegMsgHelper;
-(void)setTelActMsgHelper:(PLBBTelephonyActivityMsg *)arg1 ;
-(PLBBTelephonyActivityMsg *)telActMsgHelper;
-(void)logTelephonyRegistrationAtInit;
-(void)initCacheCommitTimer;
-(void)resetCacheCommitTimer;
-(void)decodeAndLogBBWakeWith:(id)arg1 ;
-(BOOL)isTimeToRequestReport;
-(void)cancelCacheCommitTimer;
-(void)setDidNotSleepNotification:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setTelephonyActivityNotification:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)eurekaBasebandWakeLogStringWithDecodedReason:(id)arg1 andLogWith:(id)arg2 ;
-(void)iceBasebandWakeLogStringWithDecodedReason:(id)arg1 andLogWith:(id)arg2 ;
-(void)logBBWakeWithDecodedReason:(id)arg1 andLogWith:(id)arg2 ;
-(void)modelMav10BBHWPower:(id)arg1 ;
-(void)modelMavBBHWOtherPerRATPower:(id)arg1 ;
-(void)modelGPSPower:(id)arg1 ;
-(void)modelScanPower:(id)arg1 ;
-(BOOL)agentInited;
-(void)eventToFlushCacheOccurred;
-(void)eventToCommitCacheOccurred;
-(BOOL)isChangedAndSetAirplaneMode;
-(void)flushBBCacheWithClientInfo:(long long)arg1 ;
-(void)commitBBCacheWithClientInfo:(long long)arg1 ;
-(void)modelLTEQueryPower:(id)arg1 ;
-(BOOL)lteCurrentState;
-(void)setLteCurrentState:(BOOL)arg1 ;
-(double)lastBBProtoPower;
-(void)setLastBBProtoPower:(double)arg1 ;
-(double)translateChannelRBsToChannelBW:(double)arg1 ;
-(void)modelMav1BBHWRFTXPower:(id)arg1 ;
-(void)modelOOSSegmentPower:(id)arg1 ;
-(void)setOosGWPower:(double)arg1 ;
-(void)setOosCDMAPower:(double)arg1 ;
-(void)setOosHDRPower:(double)arg1 ;
-(void)loadOOSModelValues;
-(NSMutableDictionary *)currentCallList;
-(void)setOpName:(id)arg1 ;
-(NSNumber *)lastReportedSignal;
-(void)logMessage:(id)arg1 andState:(id)arg2 ;
-(void)logTelephonyActivity;
-(id)humanReadableDataActiveString;
-(id)humanReadableSimStatusString;
-(void)setOperatorName:(NSString *)arg1 ;
-(void)logOperatorName;
-(NSNumber *)inDCH;
-(NSNumber *)inUTBF;
-(void)handlePLBasebandEventNotification:(id)arg1 ;
-(id)stringForData:(id)arg1 ;
-(void)logTelephonyRegMsgWith:(id)arg1 ;
-(id)humanReadableRegistrationStatus:(id)arg1 ;
-(id)humanReadableDataIndicator:(id)arg1 ;
-(void)refreshBBMavReport;
-(void)modelPLEntry:(id)arg1 ;
-(void)modelLTESLEEPMGRPower:(id)arg1 ;
-(void)logEventBackwardLTESleepStatsQuery;
-(void)triggerLTESLEEPMGRPower:(id)arg1 ;
-(void)modelStateTransitionPower:(id)arg1 rat:(id)arg2 state:(id)arg3 ;
-(void)modelBBICEPower:(id)arg1 ;
-(void)modelOOSPower:(id)arg1 ;
-(void)accountVoicePower:(id)arg1 state:(id)arg2 ;
-(void)createOOSAccountingEvent:(id)arg1 ;
-(void)telephonyActivityNotificationCB_Agent:(id)arg1 withName:(CFStringRef)arg2 ;
-(void)processTimeUpdateInfoDict:(id)arg1 ;
-(void)refreshRequestHandler;
-(PLEntryNotificationOperatorComposition *)sleepEntryNotifications;
-(PLEntryNotificationOperatorComposition *)wakeEntryNotifications;
-(void)setCurrentCallList:(NSMutableDictionary *)arg1 ;
-(PLEntryNotificationOperatorComposition *)didNotSleepNotification;
-(PLEntryNotificationOperatorComposition *)telephonyActivityNotification;
-(double)lastOOSPower;
-(void)setLastOOSPower:(double)arg1 ;
-(NSDate *)lastModeledOOSTimestamp;
-(void)setLastModeledOOSTimestamp:(NSDate *)arg1 ;
-(double)lastGWPower;
-(void)setLastGWPower:(double)arg1 ;
-(NSDate *)lastOOSTimestamp;
-(void)setLastOOSTimestamp:(NSDate *)arg1 ;
-(double)oosGWPower;
-(double)oosCDMAPower;
-(double)oosHDRPower;
-(double)totalOosGWScanEnergy;
-(void)setTotalOosGWScanEnergy:(double)arg1 ;
-(double)totalOosCDMAScanEnergy;
-(void)setTotalOosCDMAScanEnergy:(double)arg1 ;
-(double)totalOosHDRScanEnergy;
-(void)setTotalOosHDRScanEnergy:(double)arg1 ;
-(NSString *)operatorName;
@end

