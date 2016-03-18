/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:07 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@class NSString;

@interface _HKHorizontalSingleLineSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {

	BOOL _groupToPrevious;
	double _xValue;
	long long _yValue;
	long long _markStyle;
	id _userInfo;

}

@property (nonatomic,readonly) double xValue;                       //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,readonly) long long yValue;                    //@synthesize yValue=_yValue - In the implementation block
@property (nonatomic,readonly) BOOL groupToPrevious;                //@synthesize groupToPrevious=_groupToPrevious - In the implementation block
@property (nonatomic,readonly) long long markStyle;                 //@synthesize markStyle=_markStyle - In the implementation block
@property (nonatomic,readonly) id userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
-(id)userInfo;
-(long long)yValue;
-(double)startXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(double)endXValue;
-(double)xValue;
-(BOOL)groupToPrevious;
-(long long)markStyle;
-(id)initWithXValue:(double)arg1 yValue:(long long)arg2 groupToPrevious:(BOOL)arg3 markStyle:(long long)arg4 userInfo:(id)arg5 ;
@end

