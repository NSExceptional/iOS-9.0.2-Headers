/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@class NSDate, NSNumber, NSString;

@interface HKHorizontalTimePeriodChartPoint : NSObject <HKChartPoint> {

	NSDate* _xStart;
	NSDate* _xEnd;
	NSNumber* _yValue;
	id _userInfo;

}

@property (nonatomic,retain) NSDate * xStart;                       //@synthesize xStart=_xStart - In the implementation block
@property (nonatomic,retain) NSDate * xEnd;                         //@synthesize xEnd=_xEnd - In the implementation block
@property (nonatomic,retain) NSNumber * yValue;                     //@synthesize yValue=_yValue - In the implementation block
@property (nonatomic,retain) id userInfo;                           //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(NSNumber *)yValue;
-(id)minYValue;
-(id)maxYValue;
-(id)xValue;
-(id)allYValues;
-(id)yValueForKey:(id)arg1 ;
-(void)setXStart:(NSDate *)arg1 ;
-(void)setXEnd:(NSDate *)arg1 ;
-(void)setYValue:(NSNumber *)arg1 ;
-(NSDate *)xStart;
-(NSDate *)xEnd;
@end

