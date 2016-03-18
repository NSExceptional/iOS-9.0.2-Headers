/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@class SCRCStackQueue, NSString, NSThread;

@interface SCRCThread : NSObject {

	SCRCStackQueue* _queue;
	SCRCStackQueue* _waitingQueue;
	id _queueLock;
	CFRunLoopSourceRef _source;
	CFRunLoopRef _runLoop;
	id _key;
	BOOL _isInvalid;
	BOOL _isRegistered;
	BOOL _isTimerSet;
	double _lastStartTime;
	NSString* _description;
	BOOL _descriptionChanged;
	NSThread* _nsThread;
	BOOL _shouldStop;
	BOOL _isWaitingForStoppingThread;

}
+(void)initialize;
+(id)activity;
+(long long)activeThreadCount;
+(double)_performSelector:(SEL)arg1 withThreadKey:(id)arg2 onTarget:(id)arg3 waitTime:(double)arg4 cancelMask:(unsigned)arg5 count:(unsigned)arg6 firstObject:(id)arg7 moreObjects:(char*)arg8 ;
+(double)lastStartTimeForKey:(id)arg1 ;
+(void)invalidateForKey:(id)arg1 ;
+(void)postStopNotification;
-(void)_setKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setName:(id)arg1 ;
-(void)_setName:(id)arg1 ;
-(void)setIsInvalid:(BOOL)arg1 ;
-(id)_initWithKey:(id)arg1 task:(id)arg2 ;
-(void)_setIsWaitingForStoppingThread:(BOOL)arg1 ;
-(void)_enqueueTask:(id)arg1 cancelMask:(unsigned)arg2 lastStartTime:(double*)arg3 ;
-(double)lastStartTime;
-(void)_runThread:(id)arg1 ;
-(double)performSelector:(SEL)arg1 onTarget:(id)arg2 count:(unsigned)arg3 objects:(id)arg4 ;
-(void)_threadDidStop;
-(double)_performSelector:(SEL)arg1 onTarget:(id)arg2 cancelMask:(unsigned)arg3 count:(unsigned)arg4 firstObject:(id)arg5 moreObjects:(char*)arg6 ;
-(void)_enqueueImmediateTask:(id)arg1 cancelMask:(unsigned)arg2 lastStartTime:(double*)arg3 ;
-(void)_enqueueWaitingTask:(id)arg1 cancelMask:(unsigned)arg2 lastStartTime:(double*)arg3 ;
-(void)_processQueueFromTimer;
-(double)performSelector:(SEL)arg1 onTarget:(id)arg2 cancelMask:(unsigned)arg3 count:(unsigned)arg4 objects:(id)arg5 ;
-(BOOL)_isWaitingForStoppingThread;
-(void)_processQueue;
-(BOOL)_shouldStop;
-(BOOL)isInvalid;
@end

