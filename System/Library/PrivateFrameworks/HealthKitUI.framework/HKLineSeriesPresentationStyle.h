/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKStrokeStyle, HKFillStyle, UIImage;

@interface HKLineSeriesPresentationStyle : NSObject {

	BOOL _shouldApplyRollingAverage;
	int _waveForm;
	HKStrokeStyle* _strokeStyle;
	HKFillStyle* _fillStyle;
	UIImage* _pointMarkerImage;
	UIImage* _lineEndCap;
	double _sineWaveSmoothingFactor;

}

@property (nonatomic,retain) HKStrokeStyle * strokeStyle;                 //@synthesize strokeStyle=_strokeStyle - In the implementation block
@property (nonatomic,retain) HKFillStyle * fillStyle;                     //@synthesize fillStyle=_fillStyle - In the implementation block
@property (assign,nonatomic) int waveForm;                                //@synthesize waveForm=_waveForm - In the implementation block
@property (nonatomic,retain) UIImage * pointMarkerImage;                  //@synthesize pointMarkerImage=_pointMarkerImage - In the implementation block
@property (nonatomic,retain) UIImage * lineEndCap;                        //@synthesize lineEndCap=_lineEndCap - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyRollingAverage;              //@synthesize shouldApplyRollingAverage=_shouldApplyRollingAverage - In the implementation block
@property (assign,nonatomic) double sineWaveSmoothingFactor;              //@synthesize sineWaveSmoothingFactor=_sineWaveSmoothingFactor - In the implementation block
-(void)setWaveForm:(int)arg1 ;
-(BOOL)shouldApplyRollingAverage;
-(int)waveForm;
-(double)sineWaveSmoothingFactor;
-(UIImage *)lineEndCap;
-(UIImage *)pointMarkerImage;
-(void)setSineWaveSmoothingFactor:(double)arg1 ;
-(void)setPointMarkerImage:(UIImage *)arg1 ;
-(void)setLineEndCap:(UIImage *)arg1 ;
-(void)setShouldApplyRollingAverage:(BOOL)arg1 ;
-(void)setFillStyle:(HKFillStyle *)arg1 ;
-(HKFillStyle *)fillStyle;
-(void)setStrokeStyle:(HKStrokeStyle *)arg1 ;
-(HKStrokeStyle *)strokeStyle;
@end

