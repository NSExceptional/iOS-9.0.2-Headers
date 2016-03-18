/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:07 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface SDFDispatchQueue : NSObject {

	NSString* _label;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)queueWithLabel:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)description;
-(void)dispatchSynchronousBlock:(/*^block*/id)arg1 ;
-(void)dispatchAsynchronousBlock:(/*^block*/id)arg1 ;
-(void)_forceBlockToRetainQueue;
-(void)dispatchWhen:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithLabel:(id)arg1 ;
@end

