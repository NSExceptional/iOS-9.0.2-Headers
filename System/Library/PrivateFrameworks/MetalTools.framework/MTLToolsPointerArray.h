/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSPointerArray, NSObject;

@interface MTLToolsPointerArray : NSObject {

	unsigned long long _pointerAdditions;
	NSPointerArray* _pointerArray;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}
-(id)initWithOptions:(unsigned)arg1 ;
-(void)addPointer:(void*)arg1 ;
-(void)removeObjectAssociatedWithBaseObject:(id)arg1 ;
-(id)objectAssociatedWithBaseObject:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumeratePointersUsingBlock:(/*^block*/id)arg1 ;
-(void)_addPointer:(void*)arg1 ;
@end

