/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface HAPCharacteristicEnableEventCompletionTuple : NSObject {

	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _completionQueue;

}

@property (nonatomic,copy) id handler;                                                  //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
+(id)enableEventCompletionTupleWithHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
@end

