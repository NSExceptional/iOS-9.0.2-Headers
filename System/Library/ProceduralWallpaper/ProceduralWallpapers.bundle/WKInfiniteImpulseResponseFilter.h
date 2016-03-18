/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WKInfiniteImpulseResponseFilter : NSObject {

	unsigned long long _count;
	double* _ffC;
	double* _fbC;
	double* _inputHistory;
	double* _outputHistory;
	double _zeroGradientThreshold;

}

@property (assign,nonatomic) double zeroGradientThreshold;              //@synthesize zeroGradientThreshold=_zeroGradientThreshold - In the implementation block
+(id)lowpassInertiaFilterWithCoefficient:(double)arg1 ;
+(id)lowpassFilterWithCoefficient:(double)arg1 ;
-(void)dealloc;
-(double)output;
-(id)initWithCount:(unsigned long long)arg1 feedforwardCoefficients:(double*)arg2 feedbackCoefficients:(double*)arg3 ;
-(double)filterWithInput:(double)arg1 ;
-(double)outputGradient;
-(void)resetToValue:(double)arg1 ;
-(void)setLowpassInertiaFilterCoefficient:(double)arg1 ;
-(BOOL)zeroGradient;
-(void)setZeroGradientThreshold:(double)arg1 ;
-(double)zeroGradientThreshold;
@end

