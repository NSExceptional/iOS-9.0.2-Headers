/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:03 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATMessageLinkObserver.h>
#import <libobjc.A.dylib/ATSessionObserver.h>
#import <libobjc.A.dylib/ATMessageLinkRequestHandler.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, ATDeviceSettings, NSString;

@interface ATDeviceSyncManager : NSObject <ATMessageLinkObserver, ATSessionObserver, ATMessageLinkRequestHandler> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _activeSessionsForLinkIDAndDataClass;
	ATDeviceSettings* _settings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deviceSyncManager;
-(id)init;
-(void)messageLinkWasOpened:(id)arg1 ;
-(void)messageLinkWasInitialized:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg1 ;
-(void)session:(id)arg1 willBeginSessionTask:(id)arg2 ;
-(void)session:(id)arg1 didFinishSessionTask:(id)arg2 ;
-(void)sessionWillBegin:(id)arg1 ;
-(void)sessionDidFinish:(id)arg1 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(id)_initiateSyncForDataClass:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_cancelSyncForDataClass:(id)arg1 onMessageLink:(id)arg2 ;
-(id)_activeSessionsOnMessageLink:(id)arg1 ;
-(void)_handleBeginSyncSessionRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_handleEndSyncSessionRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_handleRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(id)_sessionForMessageLink:(id)arg1 dataClass:(id)arg2 ;
-(void)_removeSessionForMessageLink:(id)arg1 dataClass:(id)arg2 ;
-(id)_startSyncSessionForDataClass:(id)arg1 messageLink:(id)arg2 identifier:(id)arg3 ;
-(void)cancelSyncForDataClass:(id)arg1 onMessageLink:(id)arg2 ;
-(id)_sessionTaskForRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_setSession:(id)arg1 forMessageLink:(id)arg2 dataClass:(id)arg3 ;
-(id)initiateSyncForDataClass:(id)arg1 onMessageLink:(id)arg2 ;
-(void)initiateSyncOnMessageLink:(id)arg1 ;
-(void)cancelSyncOnMessageLink:(id)arg1 ;
@end

