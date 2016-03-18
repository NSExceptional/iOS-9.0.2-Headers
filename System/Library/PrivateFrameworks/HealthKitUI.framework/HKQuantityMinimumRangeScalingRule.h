/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HKAbstractMinimumRangeScalingRule.h>

@class HKQuantity, NSDictionary, HKUnit;

@interface HKQuantityMinimumRangeScalingRule : HKAbstractMinimumRangeScalingRule {

	HKQuantity* _defaultYAxisRangeQuantity;
	NSDictionary* _axisRangeQuantityOverrides;
	HKUnit* _unit;

}

@property (nonatomic,retain) HKUnit * unit;              //@synthesize unit=_unit - In the implementation block
+(id)ruleWithDefaultYAxisRange:(id)arg1 axisRangeOverrides:(id)arg2 ;
-(BOOL)isCompatibleWithQuantityType:(id)arg1 ;
-(void)_convertQuantities;
-(HKUnit *)unit;
-(void)setUnit:(HKUnit *)arg1 ;
@end

