/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@interface _HKWorkoutDurationFilter : _HKFilter {

	double _duration;
	unsigned long long _operatorType;

}

@property (nonatomic,readonly) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long operatorType;              //@synthesize operatorType=_operatorType - In the implementation block
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(id)filterWithDuration:(double)arg1 operatorType:(unsigned long long)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(unsigned long long)operatorType;
@end

