/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, OS_dispatch_semaphore;
@class NSMutableArray, SCNFixedSizePage, NSObject;

@interface SCNMTLBufferAllocator : NSObject {

	id<MTLDevice> _device;
	unsigned long long _bufferSize;
	unsigned long long _elementSize;
	NSMutableArray* _pages;
	SCNFixedSizePage* _currentAllocatorPage;
	NSObject*<OS_dispatch_semaphore> _allocatorLock;

}

@property (nonatomic,readonly) unsigned long long bufferSize;               //@synthesize bufferSize=_bufferSize - In the implementation block
@property (nonatomic,readonly) unsigned long long elementSize;              //@synthesize elementSize=_elementSize - In the implementation block
-(id)initWithDevice:(id)arg1 fixedSizeElement:(unsigned long long)arg2 buffersize:(unsigned long long)arg3 ;
-(id)newSubBuffer;
-(unsigned long long)elementSize;
-(void)dealloc;
-(unsigned long long)bufferSize;
@end

