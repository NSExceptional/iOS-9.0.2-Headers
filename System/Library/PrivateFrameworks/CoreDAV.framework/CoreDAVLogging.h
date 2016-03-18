/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreDAV/CoreDAV-Structs.h>
@class NSObject;

@interface CoreDAVLogging : NSObject {

	CFDictionaryRef _logDelegates;
	NSObject*<OS_dispatch_queue> _delegateMuckingQueue;

}
+(id)sharedLogging;
-(void)dealloc;
-(id)init;
-(id)_delegatesToLogForProvider:(id)arg1 ;
-(BOOL)shouldLogAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2 ;
-(BOOL)_shouldOutputAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2 ;
-(void)addLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2 ;
-(void)removeLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2 ;
-(id)delegatesToLogTransmittedDataForAccountInfoProvider:(id)arg1 ;
-(void)logDiagnosticForProvider:(id)arg1 withLevel:(long long)arg2 format:(id)arg3 args:(char*)arg4 ;
@end

