/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLCommandQueueSPI.h>

@class NSMutableDictionary, MTLToolsPointerArray, NSString;

@interface MTLToolsCommandQueue : MTLToolsObject <MTLCommandQueueSPI> {

	MTLToolsPointerArray* _commandBuffers;

}

@property (nonatomic,readonly) MTLToolsPointerArray * commandBuffers;                                                    //@synthesize commandBuffers=_commandBuffers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (assign) int backgroundTrackingPID; 
@property (assign) BOOL skipRender; 
@property (assign) BOOL executionEnabled; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (assign,getter=isStatEnabled,nonatomic) BOOL StatEnabled; 
@property (assign,getter=getStatOptions,nonatomic) unsigned long long StatOptions; 
@property (assign,getter=getStatLocations,nonatomic) unsigned long long StatLocations; 
@property (assign,getter=numRequestedCounters,nonatomic) unsigned long long numRequestedCounters; 
@property (assign,getter=numInternalSampleCounters,nonatomic) unsigned long long numInternalSampleCounters; 
@property (getter=counterInfo,retain) NSMutableDictionary * counterInfo; 
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 ;
-(BOOL)setGPUPriority:(unsigned long long)arg1 ;
-(id)commandBufferWithUnretainedReferences;
-(BOOL)isProfilingEnabled;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(BOOL)isStatEnabled;
-(unsigned long long)getStatOptions;
-(unsigned long long)getStatLocations;
-(unsigned long long)numRequestedCounters;
-(BOOL)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(int)backgroundTrackingPID;
-(void)setStatEnabled:(BOOL)arg1 ;
-(void)setCounterInfo:(NSMutableDictionary *)arg1 ;
-(void)setNumRequestedCounters:(unsigned long long)arg1 ;
-(void)setNumInternalSampleCounters:(unsigned long long)arg1 ;
-(void)insertDebugCaptureBoundary;
-(unsigned long long)numInternalSampleCounters;
-(BOOL)skipRender;
-(void)setProfilingEnabled:(BOOL)arg1 ;
-(void)setStatOptions:(unsigned long long)arg1 ;
-(void)setStatLocations:(unsigned long long)arg1 ;
-(id)availableCounters;
-(int)requestCounters:(id)arg1 ;
-(void)addPerfSampleHandler:(/*^block*/id)arg1 ;
-(void)setSkipRender:(BOOL)arg1 ;
-(NSMutableDictionary *)counterInfo;
-(BOOL)executionEnabled;
-(void)setExecutionEnabled:(BOOL)arg1 ;
-(void)setBackgroundTrackingPID:(int)arg1 ;
-(void)setSubmissionQueue:(id)arg1 ;
-(id)commandBuffer;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)finish;
-(id<MTLDevice>)device;
-(void)setCompletionQueue:(id)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(id)getRequestedCounters;
-(MTLToolsPointerArray *)commandBuffers;
@end

