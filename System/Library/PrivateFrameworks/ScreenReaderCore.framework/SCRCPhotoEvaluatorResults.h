/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCRCPhotoEvaluatorResult, SCRCPhotoEvaluatorResultPeople;

@interface SCRCPhotoEvaluatorResults : NSObject {

	SCRCPhotoEvaluatorResult* _blurResult;
	SCRCPhotoEvaluatorResult* _colorResult;
	SCRCPhotoEvaluatorResultPeople* _peopleResult;
	SCRCPhotoEvaluatorResult* _luminanceResult;

}

@property (nonatomic,readonly) SCRCPhotoEvaluatorResult * blurResult;                      //@synthesize blurResult=_blurResult - In the implementation block
@property (nonatomic,readonly) SCRCPhotoEvaluatorResult * colorResult;                     //@synthesize colorResult=_colorResult - In the implementation block
@property (nonatomic,readonly) SCRCPhotoEvaluatorResultPeople * peopleResult;              //@synthesize peopleResult=_peopleResult - In the implementation block
@property (nonatomic,readonly) SCRCPhotoEvaluatorResult * luminanceResult;                 //@synthesize luminanceResult=_luminanceResult - In the implementation block
-(void)dealloc;
-(id)initWithBlurResult:(id)arg1 colorResult:(id)arg2 peopleResult:(id)arg3 luminanceResult:(id)arg4 ;
-(SCRCPhotoEvaluatorResult *)blurResult;
-(SCRCPhotoEvaluatorResult *)colorResult;
-(SCRCPhotoEvaluatorResultPeople *)peopleResult;
-(SCRCPhotoEvaluatorResult *)luminanceResult;
@end
