/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface NPKPaymentWebServiceTargetDeviceOutstandingRequest : NSObject {

	NSString* _messageIdentifier;
	id _completionHandler;
	/*^block*/id _errorHandler;
	NSObject*<OS_dispatch_source> _timeoutTimer;

}

@property (nonatomic,copy) NSString * messageIdentifier;                              //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
-(NSString *)messageIdentifier;
-(void)setMessageIdentifier:(NSString *)arg1 ;
@end

