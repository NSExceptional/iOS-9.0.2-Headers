/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSUFlushable;
#import <OfficeImport/OfficeImport-Structs.h>
@class OITSURetainedPointerKeyDictionary, OITSUPointerKeyDictionary, NSCondition, OITSUMemoryWatcher, NSThread;

@interface OITSUFlushingManager : NSObject {

	OITSURetainedPointerKeyDictionary* _objects;
	set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *> >* _sortedObjects;
	set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *> >* _sortedNewObjects;
	OITSUPointerKeyDictionary* _inactiveObjects;
	unsigned _clock;
	BOOL _alwaysFlushing;
	BOOL _stopFlushing;
	BOOL _stopFlushingWhenQueueEmpty;
	BOOL _isFlushing;
	id<TSUFlushable> _flushingObject;
	NSCondition* _cond;
	NSCondition* _isFlushingCond;
	OITSUMemoryWatcher* _memoryWatcher;
	NSThread* _bgThread;
	unsigned long long _backgroundTransitionTaskId;
	unsigned long long _activeBgThreadTask;

}
+(id)sharedManager;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
-(void)removeObject:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addObject:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(void)didReceiveMemoryWarning;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)willEnterForeground;
-(void)_startFlushingObjects;
-(void)_stopFlushingObjects;
-(void)advanceClock;
-(void)_didUseObject:(id)arg1 ;
-(TSUFlushableObjectInfo*)eraseInfoForObject:(id)arg1 ;
-(void)insertObjectInfo:(TSUFlushableObjectInfo*)arg1 ;
-(void)_flushAllEligible;
-(void)_bgTaskStarted;
-(void)_backgroundThread:(id)arg1 ;
-(void)_bgThreadActive;
-(void)_bgThreadInactive;
-(void)_bgTaskFinished;
-(BOOL)isNewObject:(TSUFlushableObjectInfo*)arg1 ;
-(void)transferNewObjects;
-(void)protectObject:(id)arg1 ;
-(void)stopProtectingObject:(id)arg1 ;
-(void)doneWithObject:(id)arg1 ;
-(void)unsafeToFlush:(id)arg1 ;
-(void)safeToFlush:(id)arg1 wasAccessed:(BOOL)arg2 ;
-(void)didEnterBackground;
-(void)memoryLevelIncreased:(int)arg1 was:(int)arg2 ;
-(void)memoryLevelDecreased:(int)arg1 was:(int)arg2 ;
-(BOOL)controlsActiveObject:(id)arg1 ;
-(BOOL)controlsInactiveObject:(id)arg1 ;
@end

