/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLService.h>

@class PLXPCListenerOperatorComposition, PLXPCResponderOperatorComposition, CDDClientConnection, CDSession, CDAttribute, NSDate;

@interface PLDuetService : PLService {

	PLXPCListenerOperatorComposition* _eventListener;
	PLXPCResponderOperatorComposition* _energyResponder;
	CDDClientConnection* _clientConnection;
	CDSession* _cloudDocSession;
	CDAttribute* _cloudDocAttribute;
	NSDate* _referenceDate;

}

@property (retain) PLXPCListenerOperatorComposition * eventListener;                 //@synthesize eventListener=_eventListener - In the implementation block
@property (retain) PLXPCResponderOperatorComposition * energyResponder;              //@synthesize energyResponder=_energyResponder - In the implementation block
@property (readonly) CDDClientConnection * clientConnection;                         //@synthesize clientConnection=_clientConnection - In the implementation block
@property (readonly) CDSession * cloudDocSession;                                    //@synthesize cloudDocSession=_cloudDocSession - In the implementation block
@property (readonly) CDAttribute * cloudDocAttribute;                                //@synthesize cloudDocAttribute=_cloudDocAttribute - In the implementation block
@property (readonly) NSDate * referenceDate;                                         //@synthesize referenceDate=_referenceDate - In the implementation block
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventForwardDefinitionBatterySaverMode;
+(id)eventIntervalDefinitionDuetEvents;
+(id)aggregateNameDuetEnergyAccumulator;
+(id)mapBundleID:(id)arg1 ;
-(NSDate *)referenceDate;
-(id)init;
-(CDDClientConnection *)clientConnection;
-(void)initOperatorDependancies;
-(void)didReceiveEventWithPayload:(id)arg1 ;
-(void)setEventListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(id)energyResponse;
-(void)setEnergyResponder:(PLXPCResponderOperatorComposition *)arg1 ;
-(void)accumulateWithLastCompletedDate:(id)arg1 withNow:(id)arg2 ;
-(void)setupBatterySaverModeForNotification:(id)arg1 ;
-(void)accumulateWithLastCompletedDate:(id)arg1 withNow:(id)arg2 withQualificationID:(int)arg3 ;
-(id)eventTransitionsWithEvents:(id)arg1 ;
-(void)createQualificationEventsWithEventTransitions:(id)arg1 withQualificationID:(int)arg2 ;
-(id)energyResponseWithQualificationID:(int)arg1 ;
-(PLXPCListenerOperatorComposition *)eventListener;
-(PLXPCResponderOperatorComposition *)energyResponder;
-(CDSession *)cloudDocSession;
-(CDAttribute *)cloudDocAttribute;
@end

