/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:07 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface HKDataUnitValueRange : NSObject {

	NSNumber* _minimum;
	NSNumber* _maximum;

}

@property (nonatomic,readonly) NSNumber * minimum;              //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,readonly) NSNumber * maximum;              //@synthesize maximum=_maximum - In the implementation block
-(id)initWithMinimum:(id)arg1 maximum:(id)arg2 ;
-(NSNumber *)minimum;
-(NSNumber *)maximum;
-(BOOL)containsValue:(double)arg1 ;
@end

