/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXIPCServer, AXIPCClient, NSString, NSMutableArray, AXDispatchTimer;

@interface AXServer : NSObject {

	BOOL _shouldRegisterClientCallbackSourceOnMainRunloop;
	AXIPCServer* _server;
	AXIPCClient* _client;
	NSString* _serverIdentifier;
	NSMutableArray* _assertionWorkBacklog;
	AXDispatchTimer* _assertionRetryTimer;

}

@property (nonatomic,copy) NSString * serverIdentifier;                                         //@synthesize serverIdentifier=_serverIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldRegisterClientCallbackSourceOnMainRunloop;              //@synthesize shouldRegisterClientCallbackSourceOnMainRunloop=_shouldRegisterClientCallbackSourceOnMainRunloop - In the implementation block
@property (nonatomic,retain) AXIPCClient * client;                                              //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) AXIPCServer * server;                                              //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSMutableArray * assertionWorkBacklog;                             //@synthesize assertionWorkBacklog=_assertionWorkBacklog - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * assertionRetryTimer;                             //@synthesize assertionRetryTimer=_assertionRetryTimer - In the implementation block
-(void)dealloc;
-(AXIPCServer *)server;
-(void)setShouldRegisterClientCallbackSourceOnMainRunloop:(BOOL)arg1 ;
-(void)_didConnectToServer;
-(void)_willClearServer;
-(void)_wasDisconnectedFromClient;
-(void)_didConnectToClient;
-(void)sendSimpleMessage:(id)arg1 ;
-(BOOL)_connectIfNecessary;
-(BOOL)sendSimpleMessageWithResult:(id)arg1 ;
-(id)sendSimpleMessageWithObjectResult:(id)arg1 ;
-(void)_connectServerIfNecessary;
-(void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 boolResultHandler:(/*^block*/id)arg3 ;
-(void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 objectResultHandler:(/*^block*/id)arg3 ;
-(void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2 ;
-(void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2 ;
-(id)_serviceName;
-(void)setAssertionWorkBacklog:(NSMutableArray *)arg1 ;
-(void)setAssertionRetryTimer:(AXDispatchTimer *)arg1 ;
-(BOOL)sendSimpleMessage:(id)arg1 enqueueError:(id*)arg2 ;
-(NSMutableArray *)assertionWorkBacklog;
-(AXDispatchTimer *)assertionRetryTimer;
-(void)_processAssertionBacklog;
-(void)_initializeAssertionBookkeeping;
-(BOOL)shouldRegisterClientCallbackSourceOnMainRunloop;
-(id)sendMessage:(id)arg1 ;
-(void)setServer:(AXIPCServer *)arg1 ;
-(NSString *)serverIdentifier;
-(void)setServerIdentifier:(NSString *)arg1 ;
-(AXIPCClient *)client;
-(void)setClient:(AXIPCClient *)arg1 ;
@end

