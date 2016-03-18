/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIKeyboardTaskQueue, NSTimer, _UIActionWhenIdle;

@interface UIKeyboardScheduledTask : NSObject {

	/*^block*/id _task;
	double _timeInterval;
	UIKeyboardTaskQueue* _taskQueue;
	NSTimer* _timer;
	_UIActionWhenIdle* _deferredAction;
	/*^block*/id _enqueuedTask;

}

@property (nonatomic,readonly) id task;                                       //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) double timeInterval;                           //@synthesize timeInterval=_timeInterval - In the implementation block
@property (nonatomic,readonly) BOOL repeats; 
@property (nonatomic,readonly) UIKeyboardTaskQueue * taskQueue;               //@synthesize taskQueue=_taskQueue - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                 //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) _UIActionWhenIdle * deferredAction;              //@synthesize deferredAction=_deferredAction - In the implementation block
@property (nonatomic,copy) id enqueuedTask;                                   //@synthesize enqueuedTask=_enqueuedTask - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(void)timerFired:(id)arg1 ;
-(double)timeInterval;
-(UIKeyboardTaskQueue *)taskQueue;
-(void)resetTimer;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(id)initWithTaskQueue:(id)arg1 timeInterval:(double)arg2 repeats:(BOOL)arg3 task:(/*^block*/id)arg4 ;
-(_UIActionWhenIdle *)deferredAction;
-(id)enqueuedTask;
-(void)handleDeferredTimerFiredEvent;
-(void)setDeferredAction:(_UIActionWhenIdle *)arg1 ;
-(id)task;
-(void)setEnqueuedTask:(id)arg1 ;
-(BOOL)repeats;
@end

