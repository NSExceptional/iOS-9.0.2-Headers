/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface _DECFeedbackProvider : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
+(void)setCategory:(unsigned long long)arg1 ;
+(void)userEngaged:(id)arg1 resultIdentifier:(id)arg2 metadata:(id)arg3 ;
+(void)userAbandoned:(id)arg1 resultIdentifier:(id)arg2 metadata:(id)arg3 ;
-(id)init;
@end

