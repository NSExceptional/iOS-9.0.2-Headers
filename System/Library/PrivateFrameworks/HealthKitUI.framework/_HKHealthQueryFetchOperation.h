/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HKChartCacheFetchOperation.h>

@class HKHealthStore, NSArray;

@interface _HKHealthQueryFetchOperation : HKChartCacheFetchOperation {

	HKHealthStore* _healthStore;
	/*^block*/id _clientCompletion;
	/*^block*/id _fetchOperationManager;
	NSArray* _queries;

}

@property (nonatomic,retain) NSArray * queries;              //@synthesize queries=_queries - In the implementation block
-(id)initWithHealthStore:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)completedWithResults:(id)arg1 error:(id)arg2 ;
-(void)setQueries:(NSArray *)arg1 ;
-(void)startOperationWithCompletion:(/*^block*/id)arg1 ;
-(void)stopOperation;
-(NSArray *)queries;
@end
