/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFileSinkNode.h>

@protocol OS_dispatch_queue;
@class NSArray, FigCaptureMovieFileRecordingSettings, NSObject, BWIrisMovieInfo, NSMutableArray, BWQuickTimeReferenceMovieGenerator;

@interface BWQuickTimeMovieFileSinkNode : BWFileSinkNode {

	unsigned long long _currFileSize;
	unsigned long long _maxFileSize;
	unsigned long long _adjustedMaxFileSize;
	unsigned long long _minFreeDiskSpaceLimit;
	unsigned long long _adjustedMinFreeDiskSpaceLimit;
	SCD_Struct_BW2 _currFileDuration;
	SCD_Struct_BW2 _checkDiskSpaceAtThisDuration;
	SCD_Struct_BW2 _maxFileDuration;
	SCD_Struct_BW2 _adjustedMaxFileDuration;
	SCD_Struct_BW2 _nextTimeToReturnFileSize;
	int _masterInputTimeScale;
	float _maxVideoFrameRate;
	NSArray* _stagingQueues;
	FigCaptureMovieFileRecordingSettings* _settings;
	char* _parentPath;
	SCD_Struct_BW2 _startingPTS;
	NSArray* _movieLevelMetadata;
	NSArray* _trackReferenceListForMetadataInputs;
	NSArray* _structuralDependentTrackReferenceListForMetadataInputs;
	unsigned long long _numInputs;
	NSObject*<OS_dispatch_queue> _thumbnailGenerationDispatchQueue;
	IOSurfaceRef _thumbnailSurface;
	int _recordingState;
	OpaqueFigFormatWriterRef _formatWriter;
	OpaqueCMByteStreamRef _byteStream;
	int* _trackIDs;
	BOOL* _expectingToSeeSamplesForInput;
	BOOL* _haveSeenSamplesForTrack;
	BOOL* _finalDurationNeedsToBeWrittenForTrack;
	BWIrisMovieInfo* _firstIrisMovieInfo;
	NSMutableArray* _pendingIrisRefMovieRequests;
	BWQuickTimeReferenceMovieGenerator* _irisRefMovieGenerator;
	int _irisStillImageTimeTrackID;
	int _irisStillImageTimeTrackTimeScale;
	int _irisTerminationStatus;
	BOOL _recordingIsForFrontCamera;
	unsigned long long _masterInputIndex;
	BOOL _didBeginSession;
	BOOL _didBeginWriting;
	BOOL _needToDeMoof;
	BOOL _atLeastOneFragmentIsWritten;
	unsigned long long _numVideoTracks;
	BOOL _debugAudio;
	BOOL _haveDebugASBD;
	unsigned long long _numAudioTracks;
	AudioStreamBasicDescription _debugASBD;
	AudioBufferList* _debugABL;
	SCD_Struct_BW2 _debugDurationForFailOfDiskSpaceTest;
	OpaqueFigSimpleMutexRef _propertyMutex;

}

@property (nonatomic,copy) NSArray * movieLevelMetadata; 
@property (nonatomic,copy) NSArray * trackReferenceListForMetadataInputs; 
@property (nonatomic,copy) NSArray * structuralDependentTrackReferenceListForMetadataInputs; 
@property (assign,nonatomic) float maxVideoFrameRate;                                                     //@synthesize maxVideoFrameRate=_maxVideoFrameRate - In the implementation block
+(void)initialize;
-(void)setMovieLevelMetadata:(NSArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(SCD_Struct_BW2)lastFileDuration;
-(unsigned long long)lastFileSize;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setMaxVideoFrameRate:(float)arg1 ;
-(id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAudioInputs:(unsigned long long)arg2 numberOfMetadataInputs:(unsigned long long)arg3 ;
-(void)setTrackReferenceListForMetadataInputs:(NSArray *)arg1 ;
-(void)setStructuralDependentTrackReferenceListForMetadataInputs:(NSArray *)arg1 ;
-(NSArray *)movieLevelMetadata;
-(void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2 ;
-(void)_doEndRecordingAtTime:(SCD_Struct_BW2)arg1 yieldingIrisMovieInfo:(id*)arg2 recordingSucceeded:(BOOL*)arg3 ;
-(BOOL)_driveStateMachineWithBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg3 ;
-(void)_writeBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 ;
-(void)_buildIrisRefMovieGeneratorAndWriteFirstIrisAsRefMovie;
-(void)_writeIrisRefMovieWithInfo:(id)arg1 ;
-(void)_forceEarlyTerminationWithErrorCode:(int)arg1 ;
-(void)_determineWhichInputsWeExpectToSeeSamplesFor;
-(NSArray *)trackReferenceListForMetadataInputs;
-(NSArray *)structuralDependentTrackReferenceListForMetadataInputs;
-(id)_validTrackReferencesForReferenceInputIndexes:(id)arg1 ;
-(int)_startUpFormatWriterAtTime:(SCD_Struct_BW2)arg1 withSettings:(id)arg2 ;
-(int)_writeStillImageTimeMetadataSampleForCaptureTime:(SCD_Struct_BW2)arg1 toTrackWithID:(int)arg2 usingTrackTimeScale:(int)arg3 ;
-(unsigned long long)_getCurrentFileSize:(BOOL)arg1 ;
-(void)_preprocessingForFirstVideoBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 ;
-(void)_preprocessingForFirstAudioBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 ;
-(void)_preprocessingForFirstMetadataBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 ;
-(int)_adjustRecordingLimitsForMovieTimeScale:(int)arg1 ;
-(void)_printBufferEvent:(opaqueCMSampleBufferRef)arg1 forNodeInputIndex:(unsigned long long)arg2 eventName:(id)arg3 ;
-(int)_checkFreeSpace;
-(void)_debugAudioUsingSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)_driveStateMachineWithStartMarkerBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg3 ;
-(BOOL)_driveStateMachineWithStopMarkerBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg3 ;
-(BOOL)_driveStateMachineWithPauseMarkerBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg3 ;
-(BOOL)_driveStateMachineWithResumeMarkerBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg3 ;
-(void)_driveStateMachineWithMediaBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg3 ;
-(SCD_Struct_BW2)_findStartMarkersWithMatchedStagedSetting:(id*)arg1 thumbnailSourcePixelBuffer:(_CVBuffer*)arg2 sensorVideoPort:(const _CFString*)arg3 ;
-(int)_doStartRecordingAtTime:(SCD_Struct_BW2)arg1 withSettings:(id)arg2 thumbnailSourcePixelBuffer:(CVBufferRef)arg3 sensorVideoPort:(CFStringRef)arg4 ;
-(SCD_Struct_BW2)_findMarkers:(CFStringRef)arg1 ;
-(void)_handleFormatWriterDidWriteFragmentNotification;
-(float)maxVideoFrameRate;
@end

