/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:39 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TKProtocolSmartCardSession.h>

@class TKSmartCardSlotEngine, NSXPCConnection;

@interface TKSmartCardSessionEngine : NSObject <TKProtocolSmartCardSession> {

	TKSmartCardSlotEngine* _slot;
	BOOL _transmitting;
	BOOL _valid;
	BOOL _active;
	long long _endPolicy;
	NSXPCConnection* _connection;

}

@property (assign) BOOL valid;                                                   //@synthesize valid=_valid - In the implementation block
@property (assign) BOOL active;                                                  //@synthesize active=_active - In the implementation block
@property (assign) long long endPolicy;                                          //@synthesize endPolicy=_endPolicy - In the implementation block
@property (nonatomic,__weak,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(void)dealloc;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)valid;
-(NSXPCConnection *)connection;
-(void)setValid:(BOOL)arg1 ;
-(void)transmit:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setEndPolicy:(long long)arg1 ;
-(void)terminateWithReply:(/*^block*/id)arg1 ;
-(void)setSessionEndPolicy:(long long)arg1 ;
-(long long)endPolicy;
-(id)initWithSlot:(id)arg1 connection:(id)arg2 ;
@end

