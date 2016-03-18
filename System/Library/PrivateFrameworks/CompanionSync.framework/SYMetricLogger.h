/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AWDServerConnection, NSObject, AWDCompanionSyncReceiveEvent;

@interface SYMetricLogger : NSObject {

	AWDServerConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	AWDCompanionSyncReceiveEvent* _lastReceiveMetric;
	/*^block*/id _lastReceiveMetricTimeoutBlock;

}
+(id)sharedInstance;
-(id)init;
-(void)_sendLastReceiveMetric;
-(void)_bufferNewReceiptMetricForMessage:(id)arg1 service:(id)arg2 ;
-(void)postReceiptOfMessage:(id)arg1 forService:(id)arg2 ;
-(void)updateLastReceivedMessageWithProcessingTime:(double)arg1 ;
-(void)postSequenceErrorOfType:(int)arg1 sequenceNumber:(unsigned long long)arg2 forService:(id)arg3 ;
-(void)postFullSyncDuration:(double)arg1 onMaster:(BOOL)arg2 forService:(id)arg3 ;
-(void)postErrorInformation:(id)arg1 forService:(id)arg2 ;
@end

