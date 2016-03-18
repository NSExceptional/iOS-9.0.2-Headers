/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOBaseLogAdaptor.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSLock;

@interface GEOXPCClientLogAdaptor : GEOBaseLogAdaptor {

	NSObject*<OS_dispatch_queue> _serverConnectionQueue;
	/*^block*/id _xpcConnectionEstablishedCallback;
	BOOL _flushLogsFailed;
	NSMutableArray* _failedLogMessages;
	NSLock* _failedLogMessagesLock;

}
-(void)dealloc;
-(id)init;
-(void)flushLogs;
-(void)queueLogMessage:(id)arg1 ;
-(void)_createAndSendXPCMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)setupXPCRemoteAdatorsWithOptions:(id)arg1 connectionEstablishedCallback:(/*^block*/id)arg2 ;
-(void)_resendFailedXPCMessages;
-(void)_handleFailedXPCMessageWithName:(id)arg1 userInfo:(id)arg2 ;
@end
