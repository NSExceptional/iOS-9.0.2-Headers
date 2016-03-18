/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLCommandBuffer.h>

@protocol MTLDevice, OS_dispatch_semaphore;
@class MTLIOAccelDevice, NSObject;

@interface MTLIOAccelCommandBuffer : _MTLCommandBuffer {

	MTLIOAccelDevice*<MTLDevice> _device;
	MTLIOAccelCommandBufferStorage* _storage;
	unsigned long long* _submitToHardwareTimeStampPointer;
	void* _scheduledCallbackBlockPtr;
	void* _completedCallbackBlockPtr;
	NSObject*<OS_dispatch_semaphore> _commitAndResetSem;

}

@property (readonly) MTLIOAccelCommandBufferResourceInfo* commandBufferResourceInfo; 
@property (readonly) IOAccelResourceList* ioAccelResourceList; 
@property (readonly) id<MTLDevice> device;                                                        //@synthesize device=_device - In the implementation block
@property (readonly) MTLIOAccelCommandBufferStorage* commandBufferStorage;                        //@synthesize storage=_storage - In the implementation block
-(id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 synchronousDebugMode:(BOOL)arg3 ;
-(void)didComplete:(unsigned long long)arg1 error:(unsigned)arg2 ;
-(void)didSchedule:(unsigned long long)arg1 error:(unsigned)arg2 ;
-(void)kernelCommandCollectTimeStamp;
-(void)commitAndReset;
-(void)setCurrentCommandEncoder:(id)arg1 ;
-(id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 ;
-(void)getCurrentKernelCommandBufferStart:(void*)arg1 current:(void*)arg2 end:(void*)arg3 ;
-(void)getCurrentKernelCommandBufferPointer:(void*)arg1 end:(void*)arg2 ;
-(void)setCurrentKernelCommandBufferPointer:(void*)arg1 ;
-(void)growKernelCommandBuffer:(unsigned long long)arg1 ;
-(void)allocCommandBufferResourceAtIndex:(unsigned)arg1 ;
-(IOAccelResourceList*)ioAccelResourceList;
-(IOAccelSegmentListHeader*)getSegmentListHeader;
-(void)getSegmentListPointerStart:(void*)arg1 current:(void*)arg2 end:(void*)arg3 ;
-(MTLIOAccelCommandBufferResourceInfo*)commandBufferResourceInfo;
-(void)setCurrentSegmentListPointer:(void*)arg1 ;
-(void)growSegmentList;
-(void)beginSegment:(void*)arg1 ;
-(void)endCurrentSegment;
-(id)akResourceList;
-(id)akPrivateResourceList;
-(MTLIOAccelCommandBufferStorage*)commandBufferStorage;
-(void)waitUntilCompleted;
-(void)dealloc;
-(void)commit;
-(void)setLabel:(id)arg1 ;
-(id<MTLDevice>)device;
@end

