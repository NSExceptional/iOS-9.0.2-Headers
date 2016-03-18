/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTDaemonProtocol.h>

@protocol RTClientListenerProtocol, OS_dispatch_queue;
@class NSXPCConnection, NSString, NSMutableDictionary, NSObject, NSMutableArray;

@interface RTDaemonClient : NSObject <RTDaemonProtocol> {

	BOOL _enabled;
	BOOL _supported;
	BOOL _monitorApplications;
	BOOL _monitorVisits;
	BOOL _monitorNextPredictedLocationsOfInterest;
	int _processIdentifier;
	NSXPCConnection* _xpcConnection;
	NSString* _restorationIdentifier;
	id<RTClientListenerProtocol> _clientManagerDelegate;
	NSMutableDictionary* _restorationData;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _executablePath;
	NSString* _signingIdentifier;
	NSString* _bundleIdentifier;
	unsigned long long _monitoredScenarioTriggerTypes;
	NSMutableDictionary* _pendingScenarioInvocations;
	NSMutableArray* _pendingNextPredictedLocationsOfInterestInvocations;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                                  //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSString * restorationIdentifier;                                                 //@synthesize restorationIdentifier=_restorationIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<RTClientListenerProtocol> clientManagerDelegate;                        //@synthesize clientManagerDelegate=_clientManagerDelegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * restorationData;                                            //@synthesize restorationData=_restorationData - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> queue;                                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * executablePath;                                                          //@synthesize executablePath=_executablePath - In the implementation block
@property (assign,nonatomic) int processIdentifier;                                                            //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,copy) NSString * signingIdentifier;                                                       //@synthesize signingIdentifier=_signingIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                                     //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL supported;                                                                   //@synthesize supported=_supported - In the implementation block
@property (assign,nonatomic) unsigned long long monitoredScenarioTriggerTypes;                                 //@synthesize monitoredScenarioTriggerTypes=_monitoredScenarioTriggerTypes - In the implementation block
@property (assign,nonatomic) BOOL monitorApplications;                                                         //@synthesize monitorApplications=_monitorApplications - In the implementation block
@property (assign,nonatomic) BOOL monitorVisits;                                                               //@synthesize monitorVisits=_monitorVisits - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingScenarioInvocations;                                 //@synthesize pendingScenarioInvocations=_pendingScenarioInvocations - In the implementation block
@property (assign,nonatomic) BOOL monitorNextPredictedLocationsOfInterest;                                     //@synthesize monitorNextPredictedLocationsOfInterest=_monitorNextPredictedLocationsOfInterest - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingNextPredictedLocationsOfInterestInvocations;              //@synthesize pendingNextPredictedLocationsOfInterestInvocations=_pendingNextPredictedLocationsOfInterestInvocations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)enabled;
-(NSString *)description;
-(NSString *)bundleIdentifier;
-(NSString *)restorationIdentifier;
-(id)initWithQueue:(id)arg1 ;
-(NSString *)executablePath;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setRestorationIdentifier:(NSString *)arg1 ;
-(int)processIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(void)setSupported:(BOOL)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)shutdown;
-(void)stopMonitoringForPredictedApplications;
-(BOOL)supported;
-(void)setRoutineEnabled:(BOOL)arg1 ;
-(id)initWithRestorationData:(id)arg1 queue:(id)arg2 ;
-(void)onRoutineEnabled:(id)arg1 ;
-(void)restore;
-(NSString *)signingIdentifier;
-(void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)fetchLocationsOfInterestOfType:(long long)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchAllLocationsOfInterestWithReply:(/*^block*/id)arg1 ;
-(void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withReply:(/*^block*/id)arg4 ;
-(void)fetchRoutineEnabledWithReply:(/*^block*/id)arg1 ;
-(void)fetchBBPluginSupportedWithReply:(/*^block*/id)arg1 ;
-(void)clearRoutine;
-(void)fetchPredictedConditionsForAction:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchRoutineModeFromLocation:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)startMonitoringVisits;
-(void)stopMonitoringVisits;
-(void)fetchPathToDiagnosticFilesWithReply:(/*^block*/id)arg1 ;
-(void)fetchLocationOfInterestAtLocation:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchLocationOfInterestAtCurrentLocationWithReply:(/*^block*/id)arg1 ;
-(void)fetchLocationOfInterestAtCachedLocationWithReply:(/*^block*/id)arg1 ;
-(void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 ;
-(void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1 ;
-(void)fetchMonitoredScenarioTriggerTypesWithReply:(/*^block*/id)arg1 ;
-(void)startMonitoringForPredictedApplications;
-(void)startMonitoringNextPredictedLocationsOfInterest;
-(void)stopMonitoringNextPredictedLocationsOfInterest;
-(void)setProcessIdentifier:(int)arg1 ;
-(void)setExecutablePath:(NSString *)arg1 ;
-(id<RTClientListenerProtocol>)clientManagerDelegate;
-(void)setSigningIdentifier:(NSString *)arg1 ;
-(id)_preflightClientConnection:(id)arg1 withEntitlements:(id)arg2 ;
-(BOOL)monitorVisits;
-(void)onDeviceLocationPredictorNotification:(id)arg1 ;
-(void)setMonitorVisits:(BOOL)arg1 ;
-(BOOL)monitorNextPredictedLocationsOfInterest;
-(void)_onNextPredictedLocationsOfInterest:(id)arg1 ;
-(void)_startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 ;
-(NSMutableDictionary *)restorationData;
-(unsigned long long)monitoredScenarioTriggerTypes;
-(NSMutableDictionary *)pendingScenarioInvocations;
-(void)setMonitoredScenarioTriggerTypes:(unsigned long long)arg1 ;
-(void)onScenarioTriggerManagerNotification:(id)arg1 ;
-(void)_stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1 ;
-(void)launchApplication;
-(void)_onScenarioTrigger:(id)arg1 ;
-(BOOL)monitorApplications;
-(void)onPredictedApplicationNotification:(id)arg1 ;
-(void)setMonitorApplications:(BOOL)arg1 ;
-(void)_processPredictedApplications:(id)arg1 ;
-(void)_startMonitoringNextPredictedLocationsOfInterest;
-(void)launchDaemon;
-(void)setMonitorNextPredictedLocationsOfInterest:(BOOL)arg1 ;
-(NSMutableArray *)pendingNextPredictedLocationsOfInterestInvocations;
-(BOOL)hasReasonToOutliveClientConnection;
-(void)setClientManagerDelegate:(id<RTClientListenerProtocol>)arg1 ;
-(void)setRestorationData:(NSMutableDictionary *)arg1 ;
-(void)setPendingScenarioInvocations:(NSMutableDictionary *)arg1 ;
-(void)setPendingNextPredictedLocationsOfInterestInvocations:(NSMutableArray *)arg1 ;
@end

