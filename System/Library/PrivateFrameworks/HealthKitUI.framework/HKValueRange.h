/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:07 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <libobjc.A.dylib/HKTimePeriod.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HKValueRange : NSObject <HKTimePeriod, NSCopying> {

	id _minValue;
	id _maxValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id minValue;                             //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,copy) id maxValue;                             //@synthesize maxValue=_maxValue - In the implementation block
+(id)valueRangeWithMinValue:(id)arg1 maxValue:(id)arg2 ;
-(id)hk_midPointToValue:(id)arg1 percentage:(double)arg2 ;
-(BOOL)hk_animatable;
-(id)startDate;
-(id)endDate;
-(id)maxValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)minValue;
-(void)setMaxValue:(id)arg1 ;
-(void)setMinValue:(id)arg1 ;
-(void)unionRange:(id)arg1 ;
-(BOOL)containsValue:(id)arg1 ;
-(void)unionMinValueWithRange:(id)arg1 ;
-(void)unionMaxValueWithRange:(id)arg1 ;
@end

