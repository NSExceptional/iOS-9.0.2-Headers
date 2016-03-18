/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSDictionary, NSObject;

@interface BWVideoCompressorNode : BWNode {

	NSDictionary* _compressionSettings;
	BOOL _nextFrameEncodeAsKeyFrame;
	OpaqueVTCompressionSessionRef _compressionSession;
	BOOL _didPrepareToEncode;
	BOOL _sourceIsHDResolution;
	unsigned _sourcePixelFormatType;
	NSObject*<OS_dispatch_queue> _emitterQueue;
	BOOL _shouldAttachDebugSEI;
	float _maxVideoFrameRate;
	BOOL _flushRequestReceived;
	NSObject*<OS_dispatch_semaphore> _backPressureSemaphore;

}
+(void)initialize;
+(id)_formatRequirementsForCompressionSettings:(id)arg1 maxVideoFrameRate:(float)arg2 retainedBufferCountHint:(int*)arg3 ;
-(void)dealloc;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)setCompressionSettings:(id)arg1 ;
-(void)prepareForVideoCompression;
-(id)initWithCompressionSettings:(id)arg1 maxVideoFrameRate:(float)arg2 ;
-(id)backPressureSemaphore;
-(void)makeCurrentConfigurationLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)_cleanCompressor;
-(void)_signalBackPressureSemaphore;
-(void)insertKeyFrame;
-(id)compressionSettings;
@end

