/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureInputInternal, NSArray;

@interface AVCaptureInput : NSObject {

	AVCaptureInputInternal* _inputInternal;

}

@property (nonatomic,readonly) NSArray * ports; 
+(void)initialize;
-(void)performFigCaptureSessionOperationSafelyUsingBlock:(/*^block*/id)arg1 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(OpaqueCMClockRef)clock;
-(void)attachToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)session;
-(void)dealloc;
-(id)init;
-(NSArray *)ports;
-(void)setSession:(id)arg1 ;
@end
