/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NENetworkAgent.h>

@class NWInterface;

@interface NEPathControllerNetworkAgent : NENetworkAgent {

	BOOL _weakAdvisory;
	NWInterface* _advisoryInterface;
	NWInterface* _predictedInterface;

}

@property (retain) NWInterface * advisoryInterface;               //@synthesize advisoryInterface=_advisoryInterface - In the implementation block
@property (retain) NWInterface * predictedInterface;              //@synthesize predictedInterface=_predictedInterface - In the implementation block
@property (assign) BOOL weakAdvisory;                             //@synthesize weakAdvisory=_weakAdvisory - In the implementation block
+(id)agentType;
+(id)agentFromData:(id)arg1 ;
-(void)setAdvisoryInterface:(NWInterface *)arg1 ;
-(void)setPredictedInterface:(NWInterface *)arg1 ;
-(void)setWeakAdvisory:(BOOL)arg1 ;
-(NWInterface *)advisoryInterface;
-(NWInterface *)predictedInterface;
-(BOOL)weakAdvisory;
-(id)copyAgentData;
@end

