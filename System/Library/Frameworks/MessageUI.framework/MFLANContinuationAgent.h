/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class MFLANContinuationContext;

@interface MFLANContinuationAgent : NSObject {

	BOOL _serverRunning;
	CFSocketRef _socket;
	CFRunLoopSourceRef _serverRunLoopSource;
	/*^block*/id _connectCallbackBlock;
	MFLANContinuationContext* _continuationContext;

}

@property (nonatomic,readonly) BOOL serverRunning;                                          //@synthesize serverRunning=_serverRunning - In the implementation block
@property (nonatomic,readonly) MFLANContinuationContext * continuationContext;              //@synthesize continuationContext=_continuationContext - In the implementation block
-(id)startServerWithCompletion:(/*^block*/id)arg1 ;
-(MFLANContinuationContext *)continuationContext;
-(void)stopServer;
-(void)_cleanupRunLoopSource;
-(void)_cleanupSocket;
-(id)_getDeviceHostname;
-(void)_socketListenerRunLoop;
-(void)connectToServerWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)serverRunning;
-(void)dealloc;
-(id)init;
@end

