/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:32 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
#import <VoiceMemos/VoiceMemos-Structs.h>
@class NSObject, NSHashTable, NSMutableArray, RCExtAudioFilePipe, NSOperationQueue, NSError;

@interface RCWaveformGenerator : NSObject {

	long long _state;
	NSObject*<OS_dispatch_semaphore> _digestPausedSemaphore;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	double _totalDigestedTime;
	double _totalFlushedTime;
	NSHashTable* _weakObservers;
	NSMutableArray* _internalFinishedLoadingBlockUUIDs;
	NSMutableArray* _internalFinishedLoadingBlocks;
	RCExtAudioFilePipe* _activeExtAudioFile;
	NSOperationQueue* _loadingQueue;
	PowerMeter _samplePowerMeter;
	BOOL _isSampleRateKnown;
	vector<float, std::__1::allocator<float> >* _powerLevelBuffer;
	float _powerLevelBufferLastPushedValue;
	unsigned long long _powerLevelsConsumedSinceLastFlush;
	unsigned long long _framesConsumedSinceLastFlush;
	long long _framesNeededForNextDB;
	long long _framesNeededForNextFlush;
	NSError* _loadingError;
	unsigned long long _pauseCount;
	BOOL _canceled;
	double _segmentFlushInterval;
	long long _overviewUnitsPerSecond;

}

@property (nonatomic,readonly) double segmentFlushInterval;                 //@synthesize segmentFlushInterval=_segmentFlushInterval - In the implementation block
@property (assign,nonatomic) long long overviewUnitsPerSecond;              //@synthesize overviewUnitsPerSecond=_overviewUnitsPerSecond - In the implementation block
@property (nonatomic,readonly) long long state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL canceled;                               //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,readonly) BOOL loadable; 
@property (nonatomic,readonly) BOOL idle; 
@property (nonatomic,readonly) BOOL finished; 
@property (assign,nonatomic) BOOL paused; 
-(BOOL)_isCanceled;
-(BOOL)finished;
-(id)init;
-(long long)state;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)paused;
-(void)beginLoading;
-(BOOL)canceled;
-(void)flushPendingCapturedSampleBuffers;
-(id)initWithSegmentFlushInterval:(double)arg1 ;
-(long long)overviewUnitsPerSecond;
-(void)setOverviewUnitsPerSecond:(long long)arg1 ;
-(void)_onLoadingQueue_flushRemainingData;
-(void)_appendPowerMeterValuesFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_appendPowerMeterValuesFromDataInAudioFile:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)_appendAveragePowerLevelsByDigestingWaveformSegments:(id)arg1 ;
-(void)_appendAveragePowerLevel:(float)arg1 ;
-(void)_performObserversBlock:(/*^block*/id)arg1 ;
-(void)_finishLoadingByTerminating:(BOOL)arg1 loadingFinishedBlockTimeoutDate:(id)arg2 loadingFinishedBlock:(/*^block*/id)arg3 ;
-(void)_performLoadingFinishedBlock:(/*^block*/id)arg1 internalBlockUUID:(id)arg2 isTimeout:(BOOL)arg3 ;
-(void)_performInternalFinishedLoadingBlocksAndFinishObservers;
-(void)_onLoadingQueue_pushAveragePowerLevel:(float)arg1 ;
-(void)_onLoadingQueue_appendPowerMeterValuesFromRawAudioData:(void*)arg1 frameCount:(long long)arg2 format:(const AudioStreamBasicDescription*)arg3 isPredigest:(BOOL)arg4 ;
-(void)terminateLoadingImmediately;
-(void)_onQueue_appendAveragePowerLevelsByDigestingTimeRange:(SCD_Struct_RC4)arg1 inExtAudioFile:(id)arg2 sourceFormat:(AudioStreamBasicDescription*)arg3 outputFormat:(AudioStreamBasicDescription*)arg4 ;
-(id)initWithSamplingParametersFromGenerator:(id)arg1 ;
-(void)_appendAveragePowerLevelsByDigestingTimeRange:(SCD_Struct_RC4)arg1 inExtAudioFile:(id)arg2 sourceFormat:(AudioStreamBasicDescription*)arg3 outputFormat:(AudioStreamBasicDescription*)arg4 ;
-(void)_onLoadingQueue_appendSegment:(id)arg1 ;
-(void)_onLoadingQueue_flushWithNextSegmentWithEndTime:(double)arg1 isPredigest:(BOOL)arg2 ;
-(void)_onLoadingQueue_digestAveragePowerLevel:(float)arg1 ;
-(void)_onLoadingQueue_flushWaveformSegment:(id)arg1 ;
-(void)addSegmentOutputObserver:(id)arg1 ;
-(void)removeSegmentOutputObserver:(id)arg1 ;
-(BOOL)appendAveragePowerLevelsByDigestingSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)appendAveragePowerLevelsByDigestingContentsOfAudioFileURL:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(BOOL)appendAveragePowerLevelsByDigestingWaveformSegments:(id)arg1 ;
-(BOOL)appendAveragePowerLevel:(float)arg1 ;
-(BOOL)appendAveragePowerLevelsByDigestingWaveform:(id)arg1 ;
-(BOOL)loadable;
-(BOOL)idle;
-(void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(double)totalFlushedTime;
-(double)totalDigestedTime;
-(id)synchronouslyApproximateWaveformForAVContentURL:(id)arg1 byReadingCurrentFileAheadTimeRange:(SCD_Struct_RC4)arg2 ;
-(double)segmentFlushInterval;
@end

