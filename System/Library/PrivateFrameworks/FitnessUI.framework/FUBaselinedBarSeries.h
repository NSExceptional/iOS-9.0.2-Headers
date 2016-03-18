/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <FitnessUI/FUChartSeries.h>

@class UIColor, NSArray, NSNumber;

@interface FUBaselinedBarSeries : FUChartSeries {

	BOOL _hideBarsBelowThreshold;
	double _barWidth;
	UIColor* _barColor;
	double _baselineValue;
	double _baselineGraphHeightPercent;
	NSArray* _plotPoints;
	NSArray* _barViews;
	NSNumber* _baselineAbsoluteYPos;

}

@property (assign,nonatomic) double barWidth;                                //@synthesize barWidth=_barWidth - In the implementation block
@property (nonatomic,retain) UIColor * barColor;                             //@synthesize barColor=_barColor - In the implementation block
@property (assign,nonatomic) double baselineValue;                           //@synthesize baselineValue=_baselineValue - In the implementation block
@property (assign,nonatomic) double baselineGraphHeightPercent;              //@synthesize baselineGraphHeightPercent=_baselineGraphHeightPercent - In the implementation block
@property (assign,nonatomic) BOOL hideBarsBelowThreshold;                    //@synthesize hideBarsBelowThreshold=_hideBarsBelowThreshold - In the implementation block
@property (nonatomic,retain) NSArray * plotPoints;                           //@synthesize plotPoints=_plotPoints - In the implementation block
@property (nonatomic,retain) NSArray * barViews;                             //@synthesize barViews=_barViews - In the implementation block
@property (nonatomic,retain) NSNumber * baselineAbsoluteYPos;                //@synthesize baselineAbsoluteYPos=_baselineAbsoluteYPos - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setBarWidth:(double)arg1 ;
-(double)barWidth;
-(NSArray *)plotPoints;
-(void)setPlotPoints:(NSArray *)arg1 ;
-(double)_getBarHeightForPointValue:(id)arg1 ;
-(id)_getAbsoluteBaselineYPosition;
-(CGRect)_baselinedRectBoundsForYValue:(double)arg1 ;
-(double)_getBaselinedMinYValueForYPlaneValue:(double)arg1 ;
-(double)_getBaselinedMaxYValueForYPlaneValue:(double)arg1 ;
-(double)_getYValueForPointFromChartPointValue:(id)arg1 ;
-(UIColor *)barColor;
-(void)setBarColor:(UIColor *)arg1 ;
-(double)baselineValue;
-(void)setBaselineValue:(double)arg1 ;
-(double)baselineGraphHeightPercent;
-(void)setBaselineGraphHeightPercent:(double)arg1 ;
-(BOOL)hideBarsBelowThreshold;
-(void)setHideBarsBelowThreshold:(BOOL)arg1 ;
-(NSArray *)barViews;
-(void)setBarViews:(NSArray *)arg1 ;
-(NSNumber *)baselineAbsoluteYPos;
-(void)setBaselineAbsoluteYPos:(NSNumber *)arg1 ;
@end

