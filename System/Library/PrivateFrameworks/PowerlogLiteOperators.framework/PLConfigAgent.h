/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLTimer;

@interface PLConfigAgent : PLAgent {

	PLTimer* _timedTrigger;

}

@property (retain) PLTimer * timedTrigger;              //@synthesize timedTrigger=_timedTrigger - In the implementation block
+(void)load;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventNoneDefinitionConfig;
+(id)entryEventNoneDefinitionPairedDeviceConfig;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
-(id)init;
-(void)log;
-(id)buildVersion;
-(id)deviceName;
-(id)hardwareModel;
-(void)initOperatorDependancies;
-(void)logEventNoneConfig;
-(void)logEventNonePairedDeviceConfig;
-(id)crashReporterKey;
-(id)bootArgs;
-(long long)autolockTime;
-(id)baseband;
-(id)basebandFirmware;
-(BOOL)noWatchdogs;
-(BOOL)disableCABlanking;
-(id)logAutomatedDeviceGroup;
-(id)seedGroup;
-(PLTimer *)timedTrigger;
-(void)setTimedTrigger:(PLTimer *)arg1 ;
@end

