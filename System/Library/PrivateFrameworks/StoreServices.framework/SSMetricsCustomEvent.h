/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSString;

@interface SSMetricsCustomEvent : SSMetricsMutableEvent

@property (nonatomic,retain) NSString * topic; 
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
-(BOOL)isFieldBlacklistEnabled;
-(id)decorateReportingURL:(id)arg1 ;
@end

