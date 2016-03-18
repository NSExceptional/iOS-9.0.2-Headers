/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:12 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUDefaultDownloadPolicy.h>

@interface SUAutoDownloadPolicy : SUDefaultDownloadPolicy
-(BOOL)isDownloadAllowableForCellular;
-(BOOL)isPowerRequired;
-(id)initWithDescriptor:(id)arg1 ;
-(unsigned long long)wifiOnlyPeriodInDays;
-(id)computeTimeOfWifiOnlyPeriodEndFromDate:(id)arg1 ;
@end

