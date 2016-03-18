/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:07 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSArray, NSDateComponents, HKValueRange;

@interface HKDateIntervalCache : NSObject {

	NSDate* _minAnchorDate;
	NSDate* _maxAnchorDate;
	double _previousTimeInterval;
	BOOL _datesInvalidated;
	NSArray* _cachedDates;
	unsigned long long _dateAnchorUnit;
	NSDateComponents* _dateSpacingComponents;
	HKValueRange* _dateRange;

}

@property (assign,nonatomic) unsigned long long dateAnchorUnit;                     //@synthesize dateAnchorUnit=_dateAnchorUnit - In the implementation block
@property (nonatomic,retain) NSDateComponents * dateSpacingComponents;              //@synthesize dateSpacingComponents=_dateSpacingComponents - In the implementation block
@property (nonatomic,readonly) HKValueRange * dateRange;                            //@synthesize dateRange=_dateRange - In the implementation block
@property (nonatomic,readonly) NSArray * dates; 
-(id)init;
-(NSArray *)dates;
-(unsigned long long)dateAnchorUnit;
-(void)setDateAnchorUnit:(unsigned long long)arg1 ;
-(NSDateComponents *)dateSpacingComponents;
-(void)setDateSpacingComponents:(NSDateComponents *)arg1 ;
-(BOOL)setDateRange:(HKValueRange *)arg1 ;
-(void)_updateAnchorDates;
-(void)_invalidateCachedDates;
-(id)_minAnchorDateFromDate:(id)arg1 ;
-(id)_maxAnchorDateFromDate:(id)arg1 ;
-(id)_generateCachedDates;
-(HKValueRange *)dateRange;
@end

