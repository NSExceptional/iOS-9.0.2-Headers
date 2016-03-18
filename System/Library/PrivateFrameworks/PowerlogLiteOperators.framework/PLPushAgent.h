/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition;

@interface PLPushAgent : PLAgent {

	PLXPCListenerOperatorComposition* _receivedPushListener;

}

@property (retain) PLXPCListenerOperatorComposition * receivedPushListener;              //@synthesize receivedPushListener=_receivedPushListener - In the implementation block
+(void)load;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
+(BOOL)isHighPriorityPushEntry:(id)arg1 ;
+(id)entryEventPointDefinitionsReceivedPush;
+(id)bundleIdFromTopic:(id)arg1 ;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(void)accountReceivedPushWithEntry:(id)arg1 ;
-(void)setReceivedPushListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(PLXPCListenerOperatorComposition *)receivedPushListener;
@end

