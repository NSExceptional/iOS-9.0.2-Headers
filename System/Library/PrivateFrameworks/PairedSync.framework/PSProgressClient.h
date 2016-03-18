/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSYProgressClient.h>

@protocol OS_dispatch_queue;
@class NSObject, PSYProgressObserver, NSString;

@interface PSProgressClient : NSObject <PSYProgressClient> {

	NSObject*<OS_dispatch_queue> _queue;
	PSYProgressObserver* _progressObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)scheduledActivityChanged:(id)arg1 fromActivity:(id)arg2 error:(id)arg3 ;
-(oneway void)scheduledActivityProgressChanged:(float)arg1 totalProgress:(float)arg2 ;
-(oneway void)scheduledActivitiesDidComplete;
-(oneway void)scheduledActivitiesProgressStateChanged:(long long)arg1 ;
-(oneway void)noteClientNotEntitled:(id)arg1 ;
-(id)initWithQueue:(id)arg1 progressObserver:(id)arg2 ;
@end

