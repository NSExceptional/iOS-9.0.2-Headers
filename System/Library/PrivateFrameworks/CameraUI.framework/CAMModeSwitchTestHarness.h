/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMPerformanceTestHarness.h>

@class CAMViewfinderViewController;

@interface CAMModeSwitchTestHarness : CAMPerformanceTestHarness {

	CAMViewfinderViewController* _viewfinder;
	long long _desiredMode;

}
+(id)harnessWithTestName:(id)arg1 viewfinder:(id)arg2 mode:(long long)arg3 ;
-(void)runConfiguredTest;
-(id)initWithTestName:(id)arg1 viewfinder:(id)arg2 mode:(long long)arg3 ;
-(void)ensureCaptureMode:(long long)arg1 thenPerform:(/*^block*/id)arg2 ;
@end

