/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSObservationBuffer.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, NSMutableArray;

@interface NSConcreteObservationBuffer : NSObservationBuffer {

	NSObject*<OS_dispatch_queue> _inputQueue;
	NSOperationQueue* _outputQueue;
	long long _policy;
	int _state;
	opaque_pthread_mutex_t _lock;
	NSMutableArray* _dequeue;
	unsigned long long _maxCount;
	/*^block*/id _bufferFullHandler;
	BOOL _memoryPressureSensitive;
	BOOL _automaticallyEmitsObjects;

}
+(void)initialize;
-(id)initWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3 ;
-(void)_receiveBox:(id)arg1 ;
-(void)_alreadyOnQueueEmitObject;
-(void)_alreadyOnQueueEmitAllObjects;
-(void)_mergeChanges;
-(/*^block*/id)bufferFullHandler;
-(void)emitObject;
-(void)emitAllObjects;
-(void)setBufferFullHandler:(/*^block*/id)arg1 ;
-(BOOL)automaticallyEmitsObjects;
-(void)setAutomaticallyEmitsObjects:(BOOL)arg1 ;
-(BOOL)isMemoryPressureSensitive;
-(void)setMemoryPressureSensitive:(BOOL)arg1 ;
-(void)dealloc;
@end

