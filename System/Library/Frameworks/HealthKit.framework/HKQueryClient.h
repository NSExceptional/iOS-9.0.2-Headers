/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKQueryClient <NSObject>
@optional
-(void)deliverHeartRate:(id)arg1 forQuery:(id)arg2;
-(void)deliverSampleObjects:(id)arg1 deletedObjects:(id)arg2 withAnchor:(id)arg3 forQuery:(id)arg4;
-(void)deliverStatistics:(id)arg1 forQuery:(id)arg2;
-(void)deliverSources:(id)arg1 forQuery:(id)arg2;
-(void)deliverUpdatedSources:(id)arg1 added:(id)arg2 forQuery:(id)arg3;
-(void)deliverResultsResetWithAnchor:(id)arg1 final:(BOOL)arg2 forQuery:(id)arg3;
-(void)dataUpdatedInDatabaseWithAnchor:(id)arg1 query:(id)arg2;
-(void)deliverInitialStatisticsObjects:(id)arg1 anchor:(id)arg2 forQuery:(id)arg3;
-(void)deliverResetStatisticsObjects:(id)arg1 forQuery:(id)arg2;
-(void)deliverUpdatedStatistics:(id)arg1 anchor:(id)arg2 forQuery:(id)arg3;
-(void)deliverDateRangeDictionary:(id)arg1 forQuery:(id)arg2;
-(void)deliverResetValuesByType:(id)arg1 forQuery:(id)arg2;
-(void)deliverValuesByType:(id)arg1 forQuery:(id)arg2;
-(void)deliverUpdatedValuesByType:(id)arg1 forQuery:(id)arg2;
-(void)deliverSample:(id)arg1 forQuery:(id)arg2;

@required
-(void)deliverError:(id)arg1 forQuery:(id)arg2;
-(void)deliverSampleBatch:(id)arg1 deletedBatch:(id)arg2 final:(BOOL)arg3 anchor:(id)arg4 forQuery:(id)arg5;

@end

