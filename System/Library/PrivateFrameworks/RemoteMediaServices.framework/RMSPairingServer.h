/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, RMSPairingServerDelegate;
#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
@class NSObject, NSString;

@interface RMSPairingServer : NSObject {

	CFDictionaryRef _HTTPServerConnections;
	CFHTTPServerRef _HTTPServer;
	NSObject*<OS_dispatch_queue> _HTTPServerQueue;
	NSString* _expectedPasscodeHash;
	NSString* _successfulPairingGUID;
	NSString* _successfulPairingServiceName;
	NSString* _advertisedDeviceName;
	NSString* _advertisedDeviceModel;
	unsigned short _port;
	id<RMSPairingServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RMSPairingServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned short port;                                     //@synthesize port=_port - In the implementation block
-(void)stopServer;
-(void)setDelegate:(id<RMSPairingServerDelegate>)arg1 ;
-(id<RMSPairingServerDelegate>)delegate;
-(unsigned short)port;
-(BOOL)startServerWithExpectedPasscodeHash:(id)arg1 advertisedDeviceName:(id)arg2 advertisedDeviceModel:(id)arg3 ;
-(id)_parsedQueryParametersWithQueryString:(id)arg1 ;
-(void)handleHTTPServerInvalidated;
-(void)handleHTTPServerDidReceiveError:(CFErrorRef)arg1 ;
-(void)handleHTTPServerDidOpenConnection:(CFHTTPServerConnectionRef)arg1 ;
-(void)handleHTTPServerDidCloseConnection:(CFHTTPServerConnectionRef)arg1 ;
-(void)handleHTTPServerConnectionInvalidated;
-(void)handleHTTPServerConnectionDidReceiveError:(CFErrorRef)arg1 ;
-(void)handleHTTPServerConnectionDidReceiveRequest:(CFHTTPServerRequestRef)arg1 ;
-(void)handleHTTPServerConnectionDidReplyToRequest:(CFHTTPServerRequestRef)arg1 withResponse:(CFHTTPServerResponseRef)arg2 ;
-(void)handleHTTPServerConnectionDidFailToReplyToRequest:(CFHTTPServerRequestRef)arg1 withResponse:(CFHTTPServerResponseRef)arg2 ;
@end

