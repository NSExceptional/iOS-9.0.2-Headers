/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIBasicAnimationFactory;
@interface UIStatusBarAnimationParameters : NSObject {

	double _duration;
	double _delay;
	long long _curve;
	id<_UIBasicAnimationFactory> _animationFactory;
	double _startTime;

}

@property (assign,nonatomic) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double delay;                                               //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) long long curve;                                            //@synthesize curve=_curve - In the implementation block
@property (nonatomic,retain) id<_UIBasicAnimationFactory> animationFactory;              //@synthesize animationFactory=_animationFactory - In the implementation block
@property (assign,nonatomic) double startTime;                                           //@synthesize startTime=_startTime - In the implementation block
+(void)animateWithParameters:(id)arg1 fromCurrentState:(BOOL)arg2 animations:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(void)animateWithParameters:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
+(void)animateWithParameters:(id)arg1 fromCurrentState:(BOOL)arg2 frameInterval:(double)arg3 animations:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(id)init;
-(double)duration;
-(double)delay;
-(id)initWithDefaultParameters;
-(void)setDuration:(double)arg1 ;
-(void)setDelay:(double)arg1 ;
-(void)setCurve:(long long)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(BOOL)shouldAnimate;
-(long long)curve;
-(id)initWithEmptyParameters;
-(id<_UIBasicAnimationFactory>)animationFactory;
-(void)setAnimationFactory:(id<_UIBasicAnimationFactory>)arg1 ;
-(double)startTime;
@end

