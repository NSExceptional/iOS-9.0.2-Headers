/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>
#import <libobjc.A.dylib/BWFigCameraSourceNode.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class BWFigVideoCaptureDevice, NSArray, BWNodeOutput, NSDictionary, BWDeferredMetadataCache, NSMutableDictionary, BWDetectedFacesRingBuffer, NSObject, NSString;

@interface BWMultiStreamCameraSourceNode : BWSourceNode <BWFigCameraSourceNode> {

	BWFigVideoCaptureDevice* _captureDevice;
	OpaqueFigCaptureStreamRef _stream;
	NSArray* _supportedFormats;
	BWNodeOutput* _previewOutput;
	BWNodeOutput* _videoCaptureOutput;
	BWNodeOutput* _stillImageOutput;
	BWNodeOutput* _detectedFacesOutput;
	BOOL _previewOutputEnabled;
	BOOL _videoCaptureOutputEnabled;
	BOOL _stillImageOutputEnabled;
	BOOL _detectedFacesOutputEnabled;
	int _clientSpecifiedFormatIndex;
	int _resolvedFormatIndex;
	int _streamFormatIndex;
	BOOL _resolvedFormatIndexUpToDate;
	SCD_Struct_BW12 _sensorCropDimensions;
	SCD_Struct_BW12 _cropAspectRatio;
	unsigned _videoPixelFormat;
	SCD_Struct_BW12 _videoCaptureDimensions;
	SCD_Struct_BW12 _preferredPreviewDimensions;
	BOOL _usesFirmwareStillImageOutput;
	int _firmwareStillImageOutputRetainedBufferCountOverride;
	int _currentFirmwareStillImageOutputRetainedBufferCount;
	BOOL _usesISPBackEndScalers;
	BOOL _quadraHighResStillImageCaptureEnabled;
	SCD_Struct_BW12 _quadraCropDimensions;
	NSDictionary* _qHDRSensorDefectivePixelInfo;
	OpaqueFigCaptureISPProcessingSessionRef _bayerProcessingSession;
	OpaqueFigSampleBufferProcessorRef _qrmSampleBufferProcessor;
	opaqueCMFormatDescriptionRef _quadraStillOutputFormatDescription;
	opaqueCMSimpleQueueRef _quadraYUVBufferQueue;
	CGSize _overscanPercentage;
	BOOL _cropsOverscanFromFirmwareStillImageOutput;
	SCD_Struct_BW12 _firmwareStillImageDimensionsAfterOverscanCropping;
	BOOL _videoStabilizationEnabled;
	BOOL _discardsUnstableSphereVideoFrames;
	BOOL _temporalNoiseReductionEnabled;
	BOOL _chromaNoiseReductionEnabled;
	float _aeMaxGain;
	int _maxIntegrationTimeOverride;
	float _minFrameRate;
	float _maxFrameRate;
	NSDictionary* _detectedFacesOutputConfiguration;
	int _motionAttachmentsSource;
	BOOL _deferMetadataCreation;
	BOOL _deferProcessingSessionMetadataCreation;
	BWDeferredMetadataCache* _deferredMetadataCache;
	NSMutableDictionary* _dutyCycleMetadataCache;
	BWDetectedFacesRingBuffer* _detectedFacesRingBuffer;
	float _lastRequestedZoomFactor;
	float _maxISPZoomFactor;
	CGSize _onDemandStillOverscanPercentage;
	NSObject*<OS_dispatch_group> _streamEventNotificationGroup;
	NSObject*<OS_dispatch_queue> _streamEventDispatchQueue;
	BWStreamOutputStorage* _outputsStorage[6];

}

@property (readonly) BWNodeOutput * previewOutput; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BWFigVideoCaptureDevice * captureDevice; 
@property (readonly) BWNodeOutput * videoCaptureOutput; 
@property (readonly) BWNodeOutput * stillImageOutput; 
@property (readonly) BWNodeOutput * detectedFacesOutput; 
+(void)initialize;
+(id)cameraSourceNodeWithCaptureDevice:(id)arg1 ;
-(OpaqueCMClockRef)clock;
-(void)setQuadraHighResStillImageCaptureEnabled:(BOOL)arg1 ;
-(void)setChromaNoiseReductionEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(BWFigVideoCaptureDevice *)captureDevice;
-(float)minFrameRate;
-(float)maxFrameRate;
-(id)nodeSubType;
-(BWNodeOutput *)videoCaptureOutput;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setOverscanPercentage:(CGSize)arg1 ;
-(int)prepareForClientStillImageBracketWithCount:(int)arg1 ;
-(void)setFormatIndex:(int)arg1 ;
-(BOOL)quadraHighResStillImageCaptureEnabled;
-(void)setUsesFirmwareStillImageOutput:(BOOL)arg1 ;
-(void)setQuadraCropDimensions:(SCD_Struct_BW12)arg1 ;
-(void)setQHDRSensorDefectivePixelInfo:(id)arg1 ;
-(void)setBayerProcessingSession:(OpaqueFigCaptureISPProcessingSessionRef)arg1 ;
-(SCD_Struct_BW12)sensorCropDimensions;
-(void)setSensorCropDimensions:(SCD_Struct_BW12)arg1 ;
-(void)setCropAspectRatio:(SCD_Struct_BW12)arg1 ;
-(void)setVideoStabilizationEnabled:(BOOL)arg1 ;
-(void)setVideoCaptureDimensions:(SCD_Struct_BW12)arg1 ;
-(void)setVideoPixelFormat:(unsigned)arg1 ;
-(void)setUsesISPBackEndScalers:(BOOL)arg1 ;
-(void)setCropsOverscanFromFirmwareStillImageOutput:(BOOL)arg1 ;
-(BOOL)videoStabilizationEnabled;
-(void)setPreferredPreviewDimensions:(SCD_Struct_BW12)arg1 ;
-(void)setPreviewOutputEnabled:(BOOL)arg1 ;
-(void)setStillImageOutputEnabled:(BOOL)arg1 ;
-(void)setVideoCaptureOutputEnabled:(BOOL)arg1 ;
-(void)setDetectedFacesOutputEnabled:(BOOL)arg1 ;
-(void)setDetectedFacesOutputConfiguration:(id)arg1 ;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(void)setMinFrameRate:(float)arg1 ;
-(void)setMaxFrameRate:(float)arg1 ;
-(void)setDiscardsUnstableSphereVideoFrames:(BOOL)arg1 ;
-(void)setTemporalNoiseReductionEnabled:(BOOL)arg1 ;
-(void)setAeMaxGain:(float)arg1 ;
-(int)maxIntegrationTimeOverride;
-(void)setMaxIntegrationTimeOverride:(int)arg1 ;
-(void)updateOutputRequirements;
-(float)aeMaxGain;
-(void)willStop;
-(BOOL)previewOutputEnabled;
-(BWNodeOutput *)previewOutput;
-(BOOL)videoCaptureOutputEnabled;
-(BOOL)stillImageOutputEnabled;
-(BOOL)detectedFacesOutputEnabled;
-(BWNodeOutput *)detectedFacesOutput;
-(id)colorInfoForOutput:(id)arg1 ;
-(void)setFirmwareStillImageOutputRetainedBufferCountOverride:(int)arg1 ;
-(SCD_Struct_BW12)firmwareStillImageDimensionsAfterOverscanCropping;
-(void)makeCurrentConfigurationLive;
-(BOOL)hasNonLiveConfigurationChanges;
-(int)_bringStreamUpToDate;
-(void)_registerForStreamNotifications;
-(void)_unregisterFromStreamNotifications;
-(id)_initWithCaptureDevice:(id)arg1 ;
-(void)_updateMetadataConfigurations;
-(int)motionAttachmentsSource;
-(BOOL)temporalNoiseReductionEnabled;
-(BOOL)chromaNoiseReductionEnabled;
-(void)_registerStreamOutputHandlers;
-(BOOL)_streamSupportsProperty:(CFStringRef)arg1 ;
-(int)_firmwareStillImageOutputRetainedBufferCountForClientBracketCount:(int)arg1 ;
-(id)_streamOutputIDForOnDemandStills;
-(id)_streamOutputIDForPreview;
-(id)_videoFormatRequirementsForOutputID:(id)arg1 configuration:(id)arg2 ;
-(id)_streamOutputIDForCapture;
-(id)_enabledNodeOutputsDrivenByThePrimaryStreamingOutput;
-(void)_enableStreamOutputs;
-(int)_updateMaxISPZoomFactor;
-(int)_setupBayerProcessingSessionForQuadraStillImageCaptures;
-(void)_flushOutRemainingBuffers;
-(void)_markEndOfLiveOutput;
-(int)_setupQRMSampleBufferProcessor;
-(int)_updateFormatIndex;
-(void)_updateOutputsStorage;
-(int)_updateOutputConfigurations;
-(void)_updateDutyCycleMetadataCacheForActiveFormatIndex:(long long)arg1 ;
-(BOOL)_shouldEnableStreamCaptureOutput;
-(BOOL)_shouldEnableStreamPreviewOutput;
-(BOOL)_requiresOneStreamingOutputForMetadata;
-(void)_serviceZoomForPTS:(SCD_Struct_BW2)arg1 ;
-(float)_ispAppliedZoomFactorFromSampleBufferMetadataDictionary:(id)arg1 outputIndex:(int)arg2 ;
-(int)formatIndex;
-(SCD_Struct_BW12)cropAspectRatio;
-(unsigned)videoPixelFormat;
-(SCD_Struct_BW12)videoCaptureDimensions;
-(SCD_Struct_BW12)preferredPreviewDimensions;
-(BOOL)usesFirmwareStillImageOutput;
-(int)firmwareStillImageOutputRetainedBufferCountOverride;
-(BOOL)usesISPBackEndScalers;
-(SCD_Struct_BW12)quadraCropDimensions;
-(id)qHDRSensorDefectivePixelInfo;
-(OpaqueFigCaptureISPProcessingSessionRef)bayerProcessingSession;
-(CGSize)overscanPercentage;
-(BOOL)cropsOverscanFromFirmwareStillImageOutput;
-(id)detectedFacesOutputConfiguration;
-(BOOL)discardsUnstableSphereVideoFrames;
-(CGRect)_updateZoomForOutputIndex:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(BWNodeOutput *)stillImageOutput;
@end

