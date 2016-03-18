/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIButton.h>

@class CAMShutterButtonRingView, UIImageView, CAMTimelapseShutterRingView, UIView, UIActivityIndicatorView;

@interface CUShutterButton : UIButton {

	BOOL _pulsing;
	BOOL _spinning;
	long long _mode;
	CAMShutterButtonRingView* __outerView;
	UIImageView* __outerImageView;
	CAMTimelapseShutterRingView* __timelapseOuterView;
	UIView* __innerView;
	UIActivityIndicatorView* __progressActivityIndicatorView;
	CAMShutterButtonSpec _spec;

}

@property (assign,nonatomic) long long mode;                                                          //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) CAMShutterButtonSpec spec;                                               //@synthesize spec=_spec - In the implementation block
@property (assign,getter=isPulsing,nonatomic) BOOL pulsing;                                           //@synthesize pulsing=_pulsing - In the implementation block
@property (assign,getter=isSpinning,nonatomic) BOOL spinning;                                         //@synthesize spinning=_spinning - In the implementation block
@property (nonatomic,readonly) CAMShutterButtonRingView * _outerView;                                 //@synthesize _outerView=__outerView - In the implementation block
@property (nonatomic,readonly) UIImageView * _outerImageView;                                         //@synthesize _outerImageView=__outerImageView - In the implementation block
@property (nonatomic,readonly) CAMTimelapseShutterRingView * _timelapseOuterView;                     //@synthesize _timelapseOuterView=__timelapseOuterView - In the implementation block
@property (nonatomic,readonly) UIView * _innerView;                                                   //@synthesize _innerView=__innerView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * _progressActivityIndicatorView;              //@synthesize _progressActivityIndicatorView=__progressActivityIndicatorView - In the implementation block
+(id)smallShutterButton;
+(id)tinyShutterButton;
+(id)shutterButton;
+(id)shutterButtonWithSpec:(CAMShutterButtonSpec)arg1 ;
-(CAMShutterButtonSpec)spec;
-(void)_setSpec:(CAMShutterButtonSpec)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(void)setSpinning:(BOOL)arg1 ;
-(void)_updateOuterAndInnerLayers;
-(void)_commonCAMShutterButtonInitialization;
-(CGSize)_sizeForMode:(long long)arg1 ;
-(double)_cornerRadiusForMode:(long long)arg1 ;
-(void)_performHighlightAnimation;
-(void)_performModeSwitchAnimationFromMode:(long long)arg1 toMode:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_updateSpinningAnimations;
-(double)_innerCircleDiameter;
-(BOOL)_shouldUseImageViewForMode:(long long)arg1 ;
-(id)_outerImageForMode:(long long)arg1 ;
-(BOOL)_shouldUseTimelapseOuterViewForMode:(long long)arg1 ;
-(CAMShutterButtonRingView *)_outerView;
-(double)_borderWidthForMode:(long long)arg1 ;
-(UIView *)_innerView;
-(id)_colorForMode:(long long)arg1 ;
-(UIImageView *)_outerImageView;
-(CAMTimelapseShutterRingView *)_timelapseOuterView;
-(BOOL)_isStopMode:(long long)arg1 ;
-(void)setPulsing:(BOOL)arg1 ;
-(BOOL)isPulsing;
-(BOOL)isSpinning;
-(UIActivityIndicatorView *)_progressActivityIndicatorView;
-(void)setMode:(long long)arg1 animated:(BOOL)arg2 ;
@end

