/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _ATXAppLaunchHistogramManager : NSObject {

	NSMutableDictionary* _histograms;

}
+(id)sharedInstance;
+(void)resetSharedInstance;
-(id)init;
-(id)pathForLaunchType:(unsigned long long)arg1 ;
-(id)histogramForLaunchType:(unsigned long long)arg1 ;
@end

