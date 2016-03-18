/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CCCameraConnectionDelegate <NSObject>
@optional
-(unsigned long long)cameraConnectionSupportedModes:(id)arg1;
-(unsigned long long)cameraConnection:(id)arg1 setMode:(unsigned long long)arg2 interruptCapture:(BOOL)arg3;
-(void)cameraConnectionBeginVideo:(id)arg1;
-(void)cameraConnectionEndVideo:(id)arg1;
-(void)cameraConnection:(id)arg1 setFocusPoint:(CGPoint)arg2;
-(BOOL)cameraConnectionIsMirrored:(id)arg1;
-(long long)cameraConnectionOrientation:(id)arg1;
-(void)cameraConnectionCancelCountdown:(id)arg1;
-(void)cameraConnection:(id)arg1 setZoomAmount:(double)arg2;
-(double)cameraConnectionZoomAmount:(id)arg1;
-(void)cameraConnection:(id)arg1 setFlashMode:(long long)arg2;
-(long long)cameraConnectionFlashMode:(id)arg1 flashSupported:(BOOL*)arg2;
-(void)cameraConnectionToggleCameraDevice:(id)arg1;

@required
-(void)cameraConnection:(id)arg1 takePhotoWithCountdown:(unsigned long long)arg2;

@end

