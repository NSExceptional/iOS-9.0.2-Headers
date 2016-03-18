/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FitnessUI/FitnessUI-Structs.h>
@class UIColor, NSString;

@interface FIUIMetricColors : NSObject {

	UIColor* _gradientLightColor;
	UIColor* _gradientDarkColor;
	UIColor* _adjustmentButtonBackgroundColor;
	UIColor* _nonGradientTextColor;
	UIColor* _buttonTextColor;
	UIColor* _buttonDisabledTextColor;
	UIColor* _valueDisplayColor;
	NSString* _workoutRingColorIdentifier;

}

@property (nonatomic,retain) UIColor * gradientLightColor;                           //@synthesize gradientLightColor=_gradientLightColor - In the implementation block
@property (nonatomic,retain) UIColor * gradientDarkColor;                            //@synthesize gradientDarkColor=_gradientDarkColor - In the implementation block
@property (nonatomic,retain) UIColor * adjustmentButtonBackgroundColor;              //@synthesize adjustmentButtonBackgroundColor=_adjustmentButtonBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * nonGradientTextColor;                         //@synthesize nonGradientTextColor=_nonGradientTextColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonTextColor;                              //@synthesize buttonTextColor=_buttonTextColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonDisabledTextColor;                      //@synthesize buttonDisabledTextColor=_buttonDisabledTextColor - In the implementation block
@property (nonatomic,retain) UIColor * valueDisplayColor;                            //@synthesize valueDisplayColor=_valueDisplayColor - In the implementation block
@property (nonatomic,retain) NSString * workoutRingColorIdentifier;                  //@synthesize workoutRingColorIdentifier=_workoutRingColorIdentifier - In the implementation block
+(id)elapsedTimeColors;
+(id)energyColors;
+(id)distanceColors;
+(id)noMetricColors;
+(id)keyColors;
+(id)paceColors;
+(id)systemGrayTextColor;
+(id)metricColorsForGoalTypeIdentifier:(unsigned long long)arg1 ;
+(CGGradientRef)newGradientForStartColor:(id)arg1 endColor:(id)arg2 ;
+(id)briskColors;
+(id)sedentaryColors;
+(id)heartRateColors;
+(id)clockColors;
-(UIColor *)buttonTextColor;
-(void)setGradientLightColor:(UIColor *)arg1 ;
-(void)setGradientDarkColor:(UIColor *)arg1 ;
-(void)setNonGradientTextColor:(UIColor *)arg1 ;
-(UIColor *)nonGradientTextColor;
-(void)setAdjustmentButtonBackgroundColor:(UIColor *)arg1 ;
-(void)setButtonDisabledTextColor:(UIColor *)arg1 ;
-(void)setValueDisplayColor:(UIColor *)arg1 ;
-(void)setWorkoutRingColorIdentifier:(NSString *)arg1 ;
-(UIColor *)gradientLightColor;
-(UIColor *)gradientDarkColor;
-(UIColor *)adjustmentButtonBackgroundColor;
-(UIColor *)buttonDisabledTextColor;
-(UIColor *)valueDisplayColor;
-(NSString *)workoutRingColorIdentifier;
-(void)setButtonTextColor:(UIColor *)arg1 ;
@end

