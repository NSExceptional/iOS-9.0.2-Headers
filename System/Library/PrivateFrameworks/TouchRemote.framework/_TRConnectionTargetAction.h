/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _TRConnectionTargetAction : NSObject {

	SEL _action;
	NSObject*<OS_dispatch_queue> _queue;
	id _target;

}

@property (nonatomic,readonly) SEL action;                                      //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,__weak,readonly) id target;                                //@synthesize target=_target - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(SEL)action;
-(id)target;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 queue:(id)arg3 ;
@end

