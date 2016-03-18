/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCameraViewfinderSession.h>
#import <libobjc.A.dylib/FigCaptureSessionPreviewTapDelegate.h>
#import <libobjc.A.dylib/FigCameraViewfinderStreamDelegate.h>

@protocol OS_dispatch_queue;
@class FigCameraViewfinderLocal, FigStateMachine, FigCaptureSessionProxy, FigCameraViewfinderStream, NSObject, NSString;

@interface FigCameraViewfinderSessionLocal : FigCameraViewfinderSession <FigCaptureSessionPreviewTapDelegate, FigCameraViewfinderStreamDelegate> {

	FigCameraViewfinderLocal* _viewfinder;
	FigStateMachine* _stateMachine;
	BOOL _ended;
	FigCaptureSessionProxy* _captureSessionProxy;
	long long _identifier;
	FigCameraViewfinderStream* _previewStream;
	NSObject*<OS_dispatch_queue> _previewStreamQueue;
	BOOL _previewStreamClosed;
	int _previewStreamClosedErrorStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)identifier;
-(void)_setupStateMachine;
-(void)openPreviewStreamWithOptions:(id)arg1 ;
-(void)closePreviewStream;
-(void)captureSessionPreviewTapDidClose:(id)arg1 ;
-(void)captureSessionPreviewTapDidOpen:(id)arg1 ;
-(void)captureSession:(id)arg1 previewTapDidOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(id)_initWithOwningViewfinder:(id)arg1 captureSessionProxy:(id)arg2 delegateStorage:(id)arg3 ;
-(void)_captureSessionDidCapturePhotoWithStatus:(int)arg1 thumbnailData:(id)arg2 timestamp:(SCD_Struct_BW2)arg3 ;
-(void)_captureSessionDidStop;
-(void)_closePreviewStream;
-(void)cameraViewfinderStreamDidOpen:(id)arg1 ;
-(void)cameraViewfinderStream:(id)arg1 didCloseWithStatus:(int)arg2 ;
-(id)viewfinder;
@end

