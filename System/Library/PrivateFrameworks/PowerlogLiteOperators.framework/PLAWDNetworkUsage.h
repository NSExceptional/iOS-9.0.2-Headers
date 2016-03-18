/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLAWDAuxMetrics.h>

@class PLEntryNotificationOperatorComposition, NSTimer;

@interface PLAWDNetworkUsage : PLAWDAuxMetrics {

	unsigned _netState;
	PLEntryNotificationOperatorComposition* _netEventCallback;
	PLEntryNotificationOperatorComposition* _nameConnectionCallback;
	NSTimer* _snapshotTimer;

}

@property (retain) PLEntryNotificationOperatorComposition * netEventCallback;                    //@synthesize netEventCallback=_netEventCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * nameConnectionCallback;              //@synthesize nameConnectionCallback=_nameConnectionCallback - In the implementation block
@property (assign) unsigned netState;                                                            //@synthesize netState=_netState - In the implementation block
@property (retain) NSTimer * snapshotTimer;                                                      //@synthesize snapshotTimer=_snapshotTimer - In the implementation block
+(id)entryAggregateDefinitions;
+(id)getSharedObjWithOperator:(id)arg1 ;
+(id)entryAggregateDefinitionNetUsage;
-(void)startMetricCollection:(id)arg1 ;
-(void)stopMetricCollection:(id)arg1 ;
-(BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2 ;
-(void)resetNetUsageTable;
-(void)setNetState:(unsigned)arg1 ;
-(void)handleNetCallback:(id)arg1 ;
-(void)setNetEventCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)netEventCallback;
-(void)handleNameConnectionCallback:(id)arg1 ;
-(void)setNameConnectionCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)nameConnectionCallback;
-(unsigned)netState;
-(NSTimer *)snapshotTimer;
-(void)setSnapshotTimer:(NSTimer *)arg1 ;
@end

