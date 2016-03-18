/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:37 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <CoreRecognition/CRCameraReader.h>
#import <libobjc.A.dylib/CRCameraReaderDelegate.h>

@protocol CRCodeRedeemerControllerDelegate;
@class NSString;

@interface CRCodeRedeemerController : CRCameraReader <CRCameraReaderDelegate> {

	id<CRCodeRedeemerControllerDelegate> _delegate;

}

@property (__weak) id<CRCodeRedeemerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isCaptureMode) BOOL captureMode; 
@property (assign) unsigned long long captureCount; 
@property (assign) double sessionTimeout; 
@property (assign) long long whiteBalanceMode; 
@property (assign) long long focusMode; 
@property (assign) long long exposureMode; 
@property (assign) long long torchMode; 
@property (copy) NSString * cameraMode; 
@property (assign) long long cameraPosition; 
@property (assign) BOOL showDiagnosticHUD; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)findCodeInImage:(vImage_Buffer*)arg1 maxStage:(unsigned long long)arg2 ;
+(id)findCodeInImage:(vImage_Buffer*)arg1 maxStage:(unsigned long long)arg2 roi:(CGRect)arg3 ;
+(unsigned long long)isCRCodeRedeemerAvailable;
-(void)cameraReaderDidCancel:(id)arg1 ;
-(void)cameraReaderDidEnd:(id)arg1 ;
-(void)cameraReader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)cameraReaderDidDisplayMessage:(id)arg1 ;
-(void)cameraReaderDidFindTarget:(id)arg1 ;
-(void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2 ;
-(void)setDelegate:(id<CRCodeRedeemerControllerDelegate>)arg1 ;
-(id)init;
-(id<CRCodeRedeemerControllerDelegate>)delegate;
-(void)showMessage:(id)arg1 color:(id)arg2 style:(unsigned long long)arg3 duration:(double)arg4 ;
@end

