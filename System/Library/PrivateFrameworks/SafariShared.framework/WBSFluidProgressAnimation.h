/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:04 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMediaTimingFunction;

@interface WBSFluidProgressAnimation : NSObject {

	CAMediaTimingFunction* _timingFunction;
	double _initialPosition;
	double _destinationPosition;
	double _animationDuration;

}

@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) double initialPosition;                              //@synthesize initialPosition=_initialPosition - In the implementation block
@property (assign,nonatomic) double destinationPosition;                          //@synthesize destinationPosition=_destinationPosition - In the implementation block
@property (assign,nonatomic) double animationDuration;                            //@synthesize animationDuration=_animationDuration - In the implementation block
-(CAMediaTimingFunction *)timingFunction;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(double)animationDuration;
-(double)initialPosition;
-(void)setInitialPosition:(double)arg1 ;
-(double)destinationPosition;
-(void)setDestinationPosition:(double)arg1 ;
@end

