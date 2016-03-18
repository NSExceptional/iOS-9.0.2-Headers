/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:14 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CMKStillImageCaptureRequestDelegate <NSObject>
@optional
-(void)captureController:(id)arg1 willCaptureStillImageForRequest:(id)arg2;
-(void)captureController:(id)arg1 didCaptureStillImageForRequest:(id)arg2;
-(void)captureController:(id)arg1 didGenerateResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
-(void)captureController:(id)arg1 didFinishWriteForResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
-(void)captureController:(id)arg1 didCompleteResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;

@end

