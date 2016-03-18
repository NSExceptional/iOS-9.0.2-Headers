/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:59 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATSessionProxy.h>
#import <ATFoundation/ATSessionObserver.h>

@class ATSession, NSXPCConnection, NSString;

@interface ATSessionProxyConnection : NSObject <ATSessionProxy, ATSessionObserver> {

	ATSession* _session;
	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stop;
-(void)start;
-(void)connect;
-(id)initWithSession:(id)arg1 connection:(id)arg2 ;
-(void)session:(id)arg1 willBeginSessionTask:(id)arg2 ;
-(void)session:(id)arg1 didUpdateSessionTask:(id)arg2 ;
-(void)session:(id)arg1 didFinishSessionTask:(id)arg2 ;
@end

