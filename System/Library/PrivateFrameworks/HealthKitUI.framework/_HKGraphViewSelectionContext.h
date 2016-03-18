/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthKitUI/HealthKitUI-Structs.h>
@class NSArray, NSNumber, HKGraphSeries;

@interface _HKGraphViewSelectionContext : NSObject {

	long long _selectionState;
	NSArray* _selectionAreaMapping;
	NSNumber* _selectedPointXValue;
	HKGraphSeries* _selectedSeries;
	CGPoint _touchPoint;
	CGRect _seriesSelectionRect;

}

@property (assign,nonatomic) long long selectionState;                    //@synthesize selectionState=_selectionState - In the implementation block
@property (assign,nonatomic) CGRect seriesSelectionRect;                  //@synthesize seriesSelectionRect=_seriesSelectionRect - In the implementation block
@property (assign,nonatomic) CGPoint touchPoint;                          //@synthesize touchPoint=_touchPoint - In the implementation block
@property (nonatomic,retain) NSArray * selectionAreaMapping;              //@synthesize selectionAreaMapping=_selectionAreaMapping - In the implementation block
@property (nonatomic,retain) NSNumber * selectedPointXValue;              //@synthesize selectedPointXValue=_selectedPointXValue - In the implementation block
@property (nonatomic,retain) HKGraphSeries * selectedSeries;              //@synthesize selectedSeries=_selectedSeries - In the implementation block
-(long long)selectionState;
-(NSNumber *)selectedPointXValue;
-(CGPoint)touchPoint;
-(HKGraphSeries *)selectedSeries;
-(NSArray *)selectionAreaMapping;
-(CGRect)seriesSelectionRect;
-(void)setSelectionState:(long long)arg1 ;
-(void)setSeriesSelectionRect:(CGRect)arg1 ;
-(void)setSelectionAreaMapping:(NSArray *)arg1 ;
-(void)setSelectedSeries:(HKGraphSeries *)arg1 ;
-(void)setSelectedPointXValue:(NSNumber *)arg1 ;
-(void)setTouchPoint:(CGPoint)arg1 ;
@end
