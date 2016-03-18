/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class CMKExposureBiasSliderThumb, UIView;

@interface CMKExposureBiasSlider : UIView {

	BOOL _suspendTrackFadeOut;
	float _exposureBiasMin;
	float _exposureBiasMax;
	float _exposureBiasValue;
	CMKExposureBiasSliderThumb* __thumbView;
	UIView* __minTrackView;
	UIView* __maxTrackView;
	UIView* __minTrackMaskView;
	UIView* __maxTrackMaskView;
	double __lastInteractionTime;

}

@property (assign,nonatomic) float exposureBiasMin;                                         //@synthesize exposureBiasMin=_exposureBiasMin - In the implementation block
@property (assign,nonatomic) float exposureBiasMax;                                         //@synthesize exposureBiasMax=_exposureBiasMax - In the implementation block
@property (assign,nonatomic) float exposureBiasValue;                                       //@synthesize exposureBiasValue=_exposureBiasValue - In the implementation block
@property (assign,nonatomic) BOOL suspendTrackFadeOut;                                      //@synthesize suspendTrackFadeOut=_suspendTrackFadeOut - In the implementation block
@property (nonatomic,readonly) double thumbMaxExtension; 
@property (nonatomic,retain,readonly) CMKExposureBiasSliderThumb * _thumbView;              //@synthesize _thumbView=__thumbView - In the implementation block
@property (nonatomic,retain,readonly) UIView * _minTrackView;                               //@synthesize _minTrackView=__minTrackView - In the implementation block
@property (nonatomic,retain,readonly) UIView * _maxTrackView;                               //@synthesize _maxTrackView=__maxTrackView - In the implementation block
@property (nonatomic,retain,readonly) UIView * _minTrackMaskView;                           //@synthesize _minTrackMaskView=__minTrackMaskView - In the implementation block
@property (nonatomic,retain,readonly) UIView * _maxTrackMaskView;                           //@synthesize _maxTrackMaskView=__maxTrackMaskView - In the implementation block
@property (nonatomic,readonly) double _lastInteractionTime;                                 //@synthesize _lastInteractionTime=__lastInteractionTime - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)_minTrackView;
-(UIView *)_maxTrackView;
-(void)setExposureBiasMin:(float)arg1 ;
-(void)setExposureBiasMax:(float)arg1 ;
-(void)setExposureBiasValue:(float)arg1 ;
-(void)_updateForChangedNormalizedExposureValue;
-(void)updateLastInteractionTime;
-(float)_normalizedExposureValue;
-(CGPoint)_sunCenterForNormalizedValue:(float)arg1 ;
-(float)exposureBiasMin;
-(float)exposureBiasMax;
-(float)exposureBiasValue;
-(void)_cancelDelayedDim;
-(void)_scheduleDelayedDim;
-(void)_animateTrackAlpha:(double)arg1 withDuration:(double)arg2 ;
-(double)_trackAlpha;
-(BOOL)suspendTrackFadeOut;
-(void)_dimTrackForInactivity;
-(double)thumbMaxExtension;
-(void)setSuspendTrackFadeOut:(BOOL)arg1 ;
-(void)forceTrackDimmed;
-(CMKExposureBiasSliderThumb *)_thumbView;
-(UIView *)_minTrackMaskView;
-(UIView *)_maxTrackMaskView;
-(double)_lastInteractionTime;
@end

