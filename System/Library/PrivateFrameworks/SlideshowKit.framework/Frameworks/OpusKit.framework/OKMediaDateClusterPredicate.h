/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:10 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMediaClusterPredicate.h>

@interface OKMediaDateClusterPredicate : OKMediaClusterPredicate {

	unsigned long long _type;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(unsigned long long)type;
-(id)title;
-(id)initWithType:(unsigned long long)arg1 ;
-(id)evaluateItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(float)efficiencyForItems:(id)arg1 ;
-(unsigned long long)timeOfDay:(id)arg1 ;
-(id)timeOfDayAsString:(unsigned long long)arg1 ;
-(long long)hourInGMT:(id)arg1 ;
@end

