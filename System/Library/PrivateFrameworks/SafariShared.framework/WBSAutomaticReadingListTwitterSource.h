/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:03 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSAutomaticReadingListSocialSource.h>

@interface WBSAutomaticReadingListTwitterSource : WBSAutomaticReadingListSocialSource {

	unsigned long long _numberOfRequestsAllowedInRateLimitWindow;

}

@property (assign,nonatomic) unsigned long long numberOfRequestsAllowedInRateLimitWindow;              //@synthesize numberOfRequestsAllowedInRateLimitWindow=_numberOfRequestsAllowedInRateLimitWindow - In the implementation block
+(id)sharedSource;
-(id)serviceName;
-(Class)itemClass;
-(id)serviceType;
-(id)accountTypeIdentifier;
-(id)resourceURLString;
-(id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2 ;
-(double)minimumTimeBetweenRequests;
-(void)updateMinimumTimeBetweenRequestsFromResponseHeaders:(id)arg1 ;
-(id)repostResourceURLStringForItem:(id)arg1 ;
-(unsigned long long)numberOfRequestsAllowedInRateLimitWindow;
-(void)setNumberOfRequestsAllowedInRateLimitWindow:(unsigned long long)arg1 ;
@end

