/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISVitalityFilter.h>

@class ISDynamicValueFilter;

@interface ISVitalityAdaptiveFilter : ISVitalityFilter {

	BOOL _didVisibilityOffsetCrossCenter;
	double _vitalityRange;
	double _maxRate;
	long long _direction;
	BOOL _previousVisibility;
	double _previousVisibilityOffset;
	ISDynamicValueFilter* __vitalityOffsetValueFilter;
	double __rawVitalityOffset;

}

@property (nonatomic,readonly) ISDynamicValueFilter * _vitalityOffsetValueFilter;                  //@synthesize _vitalityOffsetValueFilter=__vitalityOffsetValueFilter - In the implementation block
@property (assign,setter=_setRawVitalityOffset:,nonatomic) double _rawVitalityOffset;              //@synthesize _rawVitalityOffset=__rawVitalityOffset - In the implementation block
-(id)initWithSettings:(id)arg1 ;
-(double)_adjustedDuration:(double)arg1 ;
-(void)inputDidChange;
-(double)_adjustedVisibilityOffset:(double)arg1 ;
-(ISDynamicValueFilter *)_vitalityOffsetValueFilter;
-(double)_rawVitalityOffset;
-(void)_setRawVitalityOffset:(double)arg1 ;
@end

