/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:07 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFAnalyticsService.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSXPCConnection, NSMutableSet, NSString;

@interface AFAnalyticsConnection : NSObject <AFAnalyticsService> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	NSMutableSet* _stagedEventsToBeSent;
	NSMutableSet* _stagedEventsBeingSent;
	NSObject*<OS_dispatch_source> _houseKeepingTimer;
	BOOL _needsCleanUpConnection;

}

@property (assign) BOOL needsCleanUpConnection;                     //@synthesize needsCleanUpConnection=_needsCleanUpConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)_connection;
-(void)_connectionInterrupted;
-(void)_stopHouseKeepingTimer;
-(void)_cleanUpConnection;
-(void)_stageEvent:(id)arg1 ;
-(void)_stageEvents:(id)arg1 ;
-(void)_mutateStagedEventsSynchronouslyUsingBlock:(/*^block*/id)arg1 ;
-(void)_startHouseKeepingTimer;
-(void)_sendEvents:(id)arg1 ;
-(void)_handleFailureCallbackForEvents:(id)arg1 error:(id)arg2 ;
-(oneway void)stageEvents:(id)arg1 ;
-(void)_handleBarrierCallbackForEvents:(id)arg1 ;
-(void)_finalizeSendingEvents:(id)arg1 ;
-(unsigned long long)_numberOfStagedEvents;
-(void)_cleanUpConnectionIfNeeded;
-(void)_connectionInvalidated;
-(void)setNeedsCleanUpConnection:(BOOL)arg1 ;
-(BOOL)needsCleanUpConnection;
-(void)_houseKeeperArrived;
-(void)_processStagedEvents;
-(oneway void)stageEvent:(id)arg1 ;
@end

