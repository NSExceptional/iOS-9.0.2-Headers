/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDate, NSString, NSObject, NSNumber, CDAttribute;

@interface _CDActivity : NSObject {

	BOOL _allowOnBattery;
	BOOL _afterUserIsInactive;
	BOOL _beforeUserIsActive;
	BOOL _cpuIntensive;
	BOOL _memoryIntensive;
	BOOL _ioIntensive;
	BOOL _discretionaryActivity;
	BOOL _budgeted;
	BOOL _triggersRestart;
	BOOL _deviceWakeAllowed;
	int _budgetedPid;
	int _pid;
	NSDate* _startAfter;
	NSDate* _executeBefore;
	NSString* _name;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	/*^block*/id _startHandler;
	/*^block*/id _suspendHandler;
	NSString* _networkAvailability;
	NSString* _bundleId;
	NSNumber* _identifier;
	unsigned long long _state;
	NSDate* _scheduledTime;
	double _leeway;
	CDAttribute* _meteringAttribute;
	CDAttribute* _admissionAttribute;
	unsigned long long _budgetingToken;

}

@property (nonatomic,copy) NSDate * startAfter;                                      //@synthesize startAfter=_startAfter - In the implementation block
@property (nonatomic,copy) NSDate * executeBefore;                                   //@synthesize executeBefore=_executeBefore - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue;              //@synthesize handlerQueue=_handlerQueue - In the implementation block
@property (nonatomic,copy) id startHandler;                                          //@synthesize startHandler=_startHandler - In the implementation block
@property (nonatomic,copy) id suspendHandler;                                        //@synthesize suspendHandler=_suspendHandler - In the implementation block
@property (assign,nonatomic) BOOL allowOnBattery;                                    //@synthesize allowOnBattery=_allowOnBattery - In the implementation block
@property (assign,nonatomic) BOOL afterUserIsInactive;                               //@synthesize afterUserIsInactive=_afterUserIsInactive - In the implementation block
@property (assign,nonatomic) BOOL beforeUserIsActive;                                //@synthesize beforeUserIsActive=_beforeUserIsActive - In the implementation block
@property (nonatomic,retain) NSString * networkAvailability;                         //@synthesize networkAvailability=_networkAvailability - In the implementation block
@property (assign,nonatomic) BOOL cpuIntensive;                                      //@synthesize cpuIntensive=_cpuIntensive - In the implementation block
@property (assign,nonatomic) BOOL memoryIntensive;                                   //@synthesize memoryIntensive=_memoryIntensive - In the implementation block
@property (assign,nonatomic) BOOL ioIntensive;                                       //@synthesize ioIntensive=_ioIntensive - In the implementation block
@property (assign,nonatomic) BOOL discretionaryActivity;                             //@synthesize discretionaryActivity=_discretionaryActivity - In the implementation block
@property (assign,nonatomic) BOOL budgeted;                                          //@synthesize budgeted=_budgeted - In the implementation block
@property (assign,nonatomic) int budgetedPid;                                        //@synthesize budgetedPid=_budgetedPid - In the implementation block
@property (nonatomic,retain) NSString * bundleId;                                    //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) BOOL triggersRestart;                                   //@synthesize triggersRestart=_triggersRestart - In the implementation block
@property (assign,nonatomic) BOOL deviceWakeAllowed;                                 //@synthesize deviceWakeAllowed=_deviceWakeAllowed - In the implementation block
@property (retain) NSNumber * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (assign) unsigned long long state;                                         //@synthesize state=_state - In the implementation block
@property (assign) int pid;                                                          //@synthesize pid=_pid - In the implementation block
@property (retain) NSDate * scheduledTime;                                           //@synthesize scheduledTime=_scheduledTime - In the implementation block
@property (assign) double leeway;                                                    //@synthesize leeway=_leeway - In the implementation block
@property (retain) CDAttribute * meteringAttribute;                                  //@synthesize meteringAttribute=_meteringAttribute - In the implementation block
@property (retain) CDAttribute * admissionAttribute;                                 //@synthesize admissionAttribute=_admissionAttribute - In the implementation block
@property (assign) unsigned long long budgetingToken;                                //@synthesize budgetingToken=_budgetingToken - In the implementation block
+(id)activityWithName:(id)arg1 startAfter:(id)arg2 executeBefore:(id)arg3 handlerQueue:(id)arg4 handler:(/*^block*/id)arg5 ;
-(id)init;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSNumber *)identifier;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(void)setStartAfter:(NSDate *)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(BOOL)cpuIntensive;
-(BOOL)allowOnBattery;
-(BOOL)memoryIntensive;
-(BOOL)afterUserIsInactive;
-(BOOL)triggersRestart;
-(BOOL)discretionaryActivity;
-(NSDate *)startAfter;
-(NSDate *)executeBefore;
-(void)setScheduledTime:(NSDate *)arg1 ;
-(NSDate *)scheduledTime;
-(void)setLeeway:(double)arg1 ;
-(double)leeway;
-(void)startBudgetAccounting;
-(id)startHandler;
-(id)suspendHandler;
-(BOOL)budgeted;
-(BOOL)checkForBudget;
-(BOOL)deviceWakeAllowed;
-(void)stopBudgetAccounting;
-(id)initWithName:(id)arg1 startAfter:(id)arg2 executeBefore:(id)arg3 handlerQueue:(id)arg4 handler:(/*^block*/id)arg5 ;
-(BOOL)updateAttribute;
-(void)setExecuteBefore:(NSDate *)arg1 ;
-(void)setStartHandler:(id)arg1 ;
-(void)setSuspendHandler:(id)arg1 ;
-(void)setAllowOnBattery:(BOOL)arg1 ;
-(void)setAfterUserIsInactive:(BOOL)arg1 ;
-(BOOL)beforeUserIsActive;
-(void)setBeforeUserIsActive:(BOOL)arg1 ;
-(NSString *)networkAvailability;
-(void)setNetworkAvailability:(NSString *)arg1 ;
-(void)setCpuIntensive:(BOOL)arg1 ;
-(void)setMemoryIntensive:(BOOL)arg1 ;
-(BOOL)ioIntensive;
-(void)setIoIntensive:(BOOL)arg1 ;
-(void)setDiscretionaryActivity:(BOOL)arg1 ;
-(void)setBudgeted:(BOOL)arg1 ;
-(int)budgetedPid;
-(void)setBudgetedPid:(int)arg1 ;
-(void)setTriggersRestart:(BOOL)arg1 ;
-(void)setDeviceWakeAllowed:(BOOL)arg1 ;
-(CDAttribute *)meteringAttribute;
-(void)setMeteringAttribute:(CDAttribute *)arg1 ;
-(CDAttribute *)admissionAttribute;
-(void)setAdmissionAttribute:(CDAttribute *)arg1 ;
-(unsigned long long)budgetingToken;
-(void)setBudgetingToken:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)pid;
@end

