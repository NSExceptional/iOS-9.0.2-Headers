/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKSampleType, _HKFilter;

@interface _HKQueryServerDataObject : NSObject <NSSecureCoding> {

	BOOL _shouldStayAliveAfterInitialResults;
	HKSampleType* _sampleType;
	_HKFilter* _filter;

}

@property (nonatomic,retain) HKSampleType * sampleType;                            //@synthesize sampleType=_sampleType - In the implementation block
@property (nonatomic,retain) _HKFilter * filter;                                   //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) BOOL shouldStayAliveAfterInitialResults;              //@synthesize shouldStayAliveAfterInitialResults=_shouldStayAliveAfterInitialResults - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setShouldStayAliveAfterInitialResults:(BOOL)arg1 ;
-(_HKFilter *)filter;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFilter:(_HKFilter *)arg1 ;
-(HKSampleType *)sampleType;
-(BOOL)shouldStayAliveAfterInitialResults;
-(void)setSampleType:(HKSampleType *)arg1 ;
@end
