/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMNatalimeterInternal;

@interface CMNatalimeter : NSObject {

	CMNatalimeterInternal* _internal;

}

@property (nonatomic,readonly) CMNatalimeterInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(id)maxNatalieEntries;
+(double)briskMinuteMetsThreshold;
+(double)activeMetsThreshold;
+(BOOL)resetCalibrationDataWithError:(id*)arg1 ;
+(BOOL)isNatalimeterAvailable;
+(id)computeRestingCaloriesAtRate:(unsigned long long)arg1 user:(id)arg2 duration:(double)arg3 ;
+(id)userProfile;
+(id)defaultUserProfile;
+(BOOL)setUserProfile:(id)arg1 error:(id*)arg2 ;
-(CMNatalimeterInternal *)_internal;
-(void)setSession:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)startAbsoluteNatalimetryDataUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopAbsoluteNatalimetryDataUpdates;
-(unsigned long long)promptsNeededForSession:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned long long)getSupportedMetricsForSession:(long long)arg1 ;
-(void)queryAbsoluteNatalimetryDataSinceRecord:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
@end

