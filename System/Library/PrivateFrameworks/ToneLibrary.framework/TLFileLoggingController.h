/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface TLFileLoggingController : NSObject {

	NSObject*<OS_dispatch_queue> _serialLoggingQueue;

}

@property (assign,setter=_setSerialLoggingQueue:,nonatomic) NSObject*<OS_dispatch_queue> _serialLoggingQueue;              //@synthesize serialLoggingQueue=_serialLoggingQueue - In the implementation block
+(id)sharedFileLoggingController;
-(void)dealloc;
-(id)init;
-(void)logMessage:(id)arg1 fileName:(const char*)arg2 functionName:(const char*)arg3 lineNumber:(unsigned long long)arg4 ;
-(void)_setSerialLoggingQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_serialLoggingQueue;
-(void)_registerLoggingConfiguration;
-(id)_loggingDirectory;
@end

