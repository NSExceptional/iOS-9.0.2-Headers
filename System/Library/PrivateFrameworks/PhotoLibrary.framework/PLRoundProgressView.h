/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer, NSTimer, NSDate, PLProgressArcLayer;

@interface PLRoundProgressView : UIView {

	CAShapeLayer* _sliceLayer;
	CAShapeLayer* _circleLayer;
	CGPoint _pieCenter;
	double _pieRadius;
	NSTimer* _progressTimer;
	double _uiProgress;
	double _realProgress;
	double _increaseRate;
	NSDate* _prevUpdateTime;
	long long _style;
	double _progress;
	PLProgressArcLayer* __progressArcLayer;
	double __contentsScale;

}

@property (nonatomic,readonly) long long style;                                                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double progress;                                                                  //@synthesize progress=_progress - In the implementation block
@property (setter=_setProgressArcLayer:,nonatomic,retain) PLProgressArcLayer * _progressArcLayer;              //@synthesize _progressArcLayer=__progressArcLayer - In the implementation block
@property (assign,setter=_setContentsScale:,nonatomic) double _contentsScale;                                  //@synthesize _contentsScale=__contentsScale - In the implementation block
-(void)_setupSubviews;
-(void)startProgressTimer;
-(void)resetProgress;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(long long)style;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(double)progress;
-(void)stopProgressTimer;
-(void)_setContentsScale:(double)arg1 ;
-(void)_updateSublayersContentsScale;
-(double)_contentsScale;
-(PLProgressArcLayer *)_progressArcLayer;
-(void)setPieRadius:(double)arg1 ;
-(void)_setProgressArcLayer:(id)arg1 ;
-(void)_updateUIProgress;
-(void)increaseUIProgress:(id)arg1 ;
-(double)toRadian:(double)arg1 ;
-(void)recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2 ;
-(void)setInitialIncreaseRatePerFrame:(double)arg1 ;
@end

