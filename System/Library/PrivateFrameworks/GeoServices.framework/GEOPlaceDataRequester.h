/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOServiceRequester.h>

@interface GEOPlaceDataRequester : GEOServiceRequester
+(id)sharedInstance;
+(unsigned long long)_urlType;
+(int)_experimentDispatcherRequestTypeForRequest:(id)arg1 ;
+(BOOL)_shouldThrottleRequests;
+(long long)_experimentType;
+(id)_serviceTypeNumber;
-(id)_validateResponse:(id)arg1 ;
-(void)cancelRequest:(id)arg1 ;
-(void)startWithRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

