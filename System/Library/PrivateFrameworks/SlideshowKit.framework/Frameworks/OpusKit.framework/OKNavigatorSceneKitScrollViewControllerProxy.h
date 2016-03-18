/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:12 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKNavigatorSceneKitViewController.h>

@class NSArray, NSString, OKTimerAnimation, NSTimer;

@interface OKNavigatorSceneKitScrollViewControllerProxy : OKNavigatorSceneKitViewController {

	double _scrollingVelocity;
	double _lastScrolledDistance;
	BOOL _triggerTilt;
	NSArray* _steps;
	long long _currentStepIndex;
	NSString* _didScrollScript;
	NSString* _reachedBeginScript;
	NSString* _reachedEndScript;
	NSString* _reachedStepScript;
	BOOL _needToTriggerReached;
	BOOL _scrollEnabled;
	OKTimerAnimation* _scrollingAnimation;
	SCNVector4 _lastCameraRotation;
	BOOL _shouldHaveTilt;
	double _tiltAngle;
	NSTimer* _timer;

}
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)commonInit;
-(void)cancelCouchPotatoPlayback;
-(void)navigateToPageWithName:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)updateCameraWithScrolledDistance:(double)arg1 touchEnded:(BOOL)arg2 momentPhase:(BOOL)arg3 ;
-(void)navigateToPathPosition:(SCNVector3)arg1 ;
-(void)updatePageViewController;
-(void)adjustCameraPositionForPage:(id)arg1 ;
-(BOOL)settingScrollEnabled;
-(void)setSettingScrollEnabled:(BOOL)arg1 ;
-(void)updateCameraPosition:(SCNVector3)arg1 andRotation:(SCNVector4)arg2 ;
-(SCNVector3)calculateBouncingVector:(NavigatorScrollProgressContext*)arg1 ;
-(void)applyPositionAndRotationModifiers:(SCNVector3*)arg1 rotation:(SCNVector4*)arg2 withContext:(NavigatorScrollProgressContext*)arg3 ;
-(SCNVector4)calculateTiltAngleDependingVelocity:(SCNVector3)arg1 rotation:(SCNVector4)arg2 direction:(double)arg3 ;
-(void)calculateDeltaWithProgressContext:(NavigatorScrollProgressContext*)arg1 ;
-(BOOL)bouncingEffectWithProgressContext:(NavigatorScrollProgressContext*)arg1 ;
-(BOOL)exceedStepWithProgressContext:(NavigatorScrollProgressContext*)arg1 ;
-(void)calculateNewPositionAndRotationWithProgressContext:(NavigatorScrollProgressContext*)arg1 ;
-(BOOL)isPosition:(SCNVector3)arg1 isBetweenPreviousStep:(id)arg2 andNextStep:(id)arg3 ;
-(void)moveCameraOfPixels:(double)arg1 during:(double)arg2 withTimingFunction:(id)arg3 ;
-(id)nearestWidgetNodeOfCameraPosition:(id)arg1 ;
-(SCNVector3)getNearestPathPositionForWidgetNode:(id)arg1 ;
-(BOOL)settingTiltAngle;
-(void)setSettingTiltAngle:(BOOL)arg1 ;
-(void)setSettingReachedStepScript:(id)arg1 ;
-(void)setSettingReachedBeginScript:(id)arg1 ;
-(void)setSettingReachedEndScript:(id)arg1 ;
-(id)settingSteps;
-(void)setSettingSteps:(id)arg1 ;
-(void)setSettingDidScrollScript:(id)arg1 ;
@end

