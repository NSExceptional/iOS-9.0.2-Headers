/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEONavdDefaults : NSObject

@property (nonatomic,readonly) double minimumDistanceToGetLocationUpdatesInMeters; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyWhileStationaryForDriving; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyWhileStationaryForWalking; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyForWalking; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyForDriving; 
@property (nonatomic,readonly) double locationUpdateTimerInterval; 
@property (nonatomic,readonly) double staleLocationUseTimerInterval; 
@property (nonatomic,readonly) double locationFreshnessThreshold; 
@property (nonatomic,readonly) double minimumDistanceToCompareAgainstLocationAccuracy; 
@property (nonatomic,readonly) unsigned long long initialSelfInitiatedHypothesisCacheAccessValue; 
@property (nonatomic,readonly) unsigned long long initialClientInitiatedHypothesisCacheAccessValue; 
@property (nonatomic,readonly) double hypothesisResponseStaleToRefreshThresholdInSeconds; 
@property (nonatomic,readonly) double hypothesisResponseStaleToPurgeFromDiskThresholdInSeconds; 
@property (nonatomic,readonly) double hypothesisShouldPersistThresholdInSeconds; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfEntriesInTheCacheUnderMemoryPressure; 
@property (nonatomic,readonly) long long maximumNumberOfDestinationsToMonitor; 
@property (nonatomic,readonly) double minimumTimeBetweenConsecutiveLocationUpdatesInSeconds; 
@property (nonatomic,readonly) double maximumTimeBetweenConsecutiveHypothesisUpdatesInSeconds; 
@property (nonatomic,readonly) unsigned long long accessValueThresholdToUpdateCacheEntries; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfProcessingLoopRepeats; 
@property (nonatomic,readonly) double refreshTimeIntervalToUseIfError; 
@property (nonatomic,readonly) unsigned long long refreshEquationConstA; 
@property (nonatomic,readonly) unsigned long long refreshEquationConstB; 
@property (nonatomic,readonly) unsigned long long refreshEquationConstC; 
@property (nonatomic,readonly) double maximumRefreshIntervalLeeway; 
@property (nonatomic,readonly) double minimumTimerTimeStampFudge; 
@property (nonatomic,readonly) double refreshTimeIntervalBackoffBase; 
@property (nonatomic,readonly) double refreshTimeIntervalBackoffMax; 
@property (nonatomic,readonly) double predictionsWatchdogInterval; 
@property (nonatomic,readonly) double defaultExpirationOffset; 
@property (nonatomic,readonly) double minimumExpirationOffset; 
@property (nonatomic,readonly) double exitRegionSize; 
@property (nonatomic,readonly) BOOL shouldUseServerSideETAs; 
@property (nonatomic,readonly) double averageWalkingSpeed; 
@property (nonatomic,readonly) double slowWalkingSpeed; 
@property (nonatomic,readonly) double fastWalkingSpeed; 
+(id)sharedInstance;
-(double)refreshTimeIntervalBackoffMax;
-(double)defaultExpirationOffset;
-(unsigned long long)refreshEquationConstC;
-(double)minimumDistanceToGetLocationUpdatesInMeters;
-(double)fastWalkingSpeed;
-(unsigned long long)refreshEquationConstB;
-(double)predictionsWatchdogInterval;
-(double)maximumTimeBetweenConsecutiveHypothesisUpdatesInSeconds;
-(double)locationUpdatesDesiredAccuracyWhileStationaryForDriving;
-(double)minimumDistanceToCompareAgainstLocationAccuracy;
-(double)minimumExpirationOffset;
-(double)slowWalkingSpeed;
-(double)hypothesisResponseStaleToPurgeFromDiskThresholdInSeconds;
-(double)averageWalkingSpeed;
-(double)hypothesisShouldPersistThresholdInSeconds;
-(double)locationUpdatesDesiredAccuracyForWalking;
-(unsigned long long)accessValueThresholdToUpdateCacheEntries;
-(BOOL)shouldUseServerSideETAs;
-(double)locationUpdatesDesiredAccuracyWhileStationaryForWalking;
-(unsigned long long)maximumNumberOfEntriesInTheCacheUnderMemoryPressure;
-(double)maximumRefreshIntervalLeeway;
-(double)exitRegionSize;
-(double)refreshTimeIntervalBackoffBase;
-(double)locationUpdatesDesiredAccuracyForDriving;
-(unsigned long long)initialSelfInitiatedHypothesisCacheAccessValue;
-(unsigned long long)maximumNumberOfProcessingLoopRepeats;
-(double)minimumTimerTimeStampFudge;
-(double)refreshTimeIntervalToUseIfError;
-(double)locationUpdateTimerInterval;
-(long long)maximumNumberOfDestinationsToMonitor;
-(unsigned long long)initialClientInitiatedHypothesisCacheAccessValue;
-(unsigned long long)refreshEquationConstA;
-(double)staleLocationUseTimerInterval;
-(double)minimumTimeBetweenConsecutiveLocationUpdatesInSeconds;
-(double)hypothesisResponseStaleToRefreshThresholdInSeconds;
-(double)locationFreshnessThreshold;
@end

