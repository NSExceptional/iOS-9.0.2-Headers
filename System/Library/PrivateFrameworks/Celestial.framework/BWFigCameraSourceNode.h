/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class BWFigVideoCaptureDevice, BWNodeOutput;


@protocol BWFigCameraSourceNode <NSObject>
@property (readonly) BWFigVideoCaptureDevice * captureDevice; 
@property (readonly) BWNodeOutput * videoCaptureOutput; 
@property (readonly) BWNodeOutput * stillImageOutput; 
@property (readonly) BWNodeOutput * detectedFacesOutput; 
@required
-(BWFigVideoCaptureDevice *)captureDevice;
-(BWNodeOutput *)videoCaptureOutput;
-(void)willStop;
-(BWNodeOutput *)detectedFacesOutput;
-(id)colorInfoForOutput:(id)arg1;
-(BWNodeOutput *)stillImageOutput;

@end

