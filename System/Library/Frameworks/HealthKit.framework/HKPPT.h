/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKPPTInterface, OS_dispatch_queue;
@class NSObject;

@interface HKPPT : NSObject {

	id<HKPPTInterface> _pptInterface;
	NSObject*<OS_dispatch_queue> _pptQueue;

}
-(BOOL)pptTest:(id)arg1 saveDataWithCount:(long long)arg2 ;
-(BOOL)pptTest:(id)arg1 sampleQueryForType:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 withLimit:(long long)arg5 ;
-(BOOL)pptTest:(id)arg1 anchoredQueryForType:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 withLimit:(long long)arg5 anchor:(long long)arg6 ;
-(BOOL)pptTest:(id)arg1 statisticsQueryForType:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 separateBySource:(BOOL)arg5 average:(BOOL)arg6 minimum:(BOOL)arg7 maximum:(BOOL)arg8 sum:(BOOL)arg9 ;
-(BOOL)pptTest:(id)arg1 collectionQueryForType:(id)arg2 anchorDate:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 dateIntervalsString:(id)arg6 separateBySource:(BOOL)arg7 average:(BOOL)arg8 minimum:(BOOL)arg9 maximum:(BOOL)arg10 sum:(BOOL)arg11 ;
-(BOOL)pptTest:(id)arg1 journalMergeAtHealthDirectory:(id)arg2 ;
-(BOOL)pptTest:(id)arg1 preflightHealthDirectory:(id)arg2 sampleTypes:(id)arg3 killHealthd:(BOOL)arg4 ;
-(void)_invalidParams:(id)arg1 forTest:(id)arg2 ;
-(id)_generateStepSamples:(long long)arg1 ;
-(void)_startedTest:(id)arg1 ;
-(void)_finishedTest:(id)arg1 extraResults:(id)arg2 ;
-(void)_failedTest:(id)arg1 withResults:(id)arg2 ;
-(id)_dateComponentsFromString:(id)arg1 ;
-(void)_finishedTest:(id)arg1 ;
-(unsigned long long)_randomNumberBetweenMin:(unsigned long long)arg1 max:(unsigned long long)arg2 ;
-(id)_createStepSampleWithStepCount:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)initWithHKPPTInterface:(id)arg1 usingQueue:(id)arg2 ;
-(void)_failedTest:(id)arg1 ;
-(id)init;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
@end

