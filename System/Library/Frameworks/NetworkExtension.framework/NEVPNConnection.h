/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface NEVPNConnection : NSObject {

	int _sessionType;
	long long _status;
	NSDate* _connectedDate;
	void* _session;

}

@property (readonly) long long status;                    //@synthesize status=_status - In the implementation block
@property (readonly) NSDate * connectedDate;              //@synthesize connectedDate=_connectedDate - In the implementation block
@property (assign) void* session;                         //@synthesize session=_session - In the implementation block
@property (readonly) int sessionType;                     //@synthesize sessionType=_sessionType - In the implementation block
-(BOOL)startVPNTunnelWithOptions:(id)arg1 andReturnError:(id*)arg2 ;
-(NSDate *)connectedDate;
-(void)updateSessionInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)startVPNTunnelAndReturnError:(id*)arg1 ;
-(void)stopVPNTunnel;
-(void)newSessionWithConfigID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)destroySession;
-(void*)session;
-(void)dealloc;
-(id)initWithType:(int)arg1 ;
-(long long)status;
-(void)setSession:(void*)arg1 ;
-(int)sessionType;
@end

