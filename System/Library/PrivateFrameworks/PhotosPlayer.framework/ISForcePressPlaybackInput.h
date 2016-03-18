/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISGestureInput.h>
#import <UIKit/UIInteractionProgressObserver.h>

@class UIPreviewForceInteractionProgress, NSString;

@interface ISForcePressPlaybackInput : ISGestureInput <UIInteractionProgressObserver> {

	BOOL __isTouchActive;
	BOOL __aboveTimeoutThreshold;
	BOOL __forceAboveThresholdLongEnough;
	BOOL __hasCrossedHintThreshold;
	long long __currentTimeoutRequestId;
	UIPreviewForceInteractionProgress* __interactionProgress;

}

@property (assign,setter=_setTouchActive:,nonatomic) BOOL _isTouchActive;                                                           //@synthesize _isTouchActive=__isTouchActive - In the implementation block
@property (assign,setter=_setAboveTimeoutThreshold:,nonatomic) BOOL _aboveTimeoutThreshold;                                         //@synthesize _aboveTimeoutThreshold=__aboveTimeoutThreshold - In the implementation block
@property (assign,setter=_setForceAboveThresholdLongEnough:,nonatomic) BOOL _forceAboveThresholdLongEnough;                         //@synthesize _forceAboveThresholdLongEnough=__forceAboveThresholdLongEnough - In the implementation block
@property (assign,setter=_setCurrentTimeoutRequestId:,nonatomic) long long _currentTimeoutRequestId;                                //@synthesize _currentTimeoutRequestId=__currentTimeoutRequestId - In the implementation block
@property (assign,setter=_setHasCrossedHintThreshold:,nonatomic) BOOL _hasCrossedHintThreshold;                                     //@synthesize _hasCrossedHintThreshold=__hasCrossedHintThreshold - In the implementation block
@property (setter=_setInteractionProgress:,nonatomic,retain) UIPreviewForceInteractionProgress * _interactionProgress;              //@synthesize _interactionProgress=__interactionProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handlePress:(id)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(long long)inputType;
-(id)newGestureRecognizer;
-(void)_setInteractionProgress:(id)arg1 ;
-(void)_updateValue;
-(void)_setHasCrossedHintThreshold:(BOOL)arg1 ;
-(void)_setAboveTimeoutThreshold:(BOOL)arg1 ;
-(void)_setForceAboveThresholdLongEnough:(BOOL)arg1 ;
-(void)_setTouchActive:(BOOL)arg1 ;
-(UIPreviewForceInteractionProgress *)_interactionProgress;
-(BOOL)_forceAboveThresholdLongEnough;
-(BOOL)_hasCrossedHintThreshold;
-(long long)_currentTimeoutRequestId;
-(void)_setCurrentTimeoutRequestId:(long long)arg1 ;
-(void)gestureRecognizerDidChange;
-(void)gestureRecognizerViewDidChange;
-(BOOL)_isTouchActive;
-(BOOL)_aboveTimeoutThreshold;
@end

