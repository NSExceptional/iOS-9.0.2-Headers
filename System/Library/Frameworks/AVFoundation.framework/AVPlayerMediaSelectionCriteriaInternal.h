/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface AVPlayerMediaSelectionCriteriaInternal : NSObject {

	NSArray* _preferredLanguages;
	NSArray* _requiredMediaCharacteristics;
	NSArray* _preferredMediaCharacteristics;
	NSArray* _precludedMediaCharacteristics;
	NSArray* _preferredMediaSubTypes;
	NSArray* _precludedMediaSubTypes;
	BOOL _preferMultichannelAudio;
	BOOL _precludeMultichannelAudio;

}

@property (nonatomic,retain) NSArray * preferredLanguages;                         //@synthesize preferredLanguages=_preferredLanguages - In the implementation block
@property (nonatomic,retain) NSArray * requiredMediaCharacteristics;               //@synthesize requiredMediaCharacteristics=_requiredMediaCharacteristics - In the implementation block
@property (nonatomic,retain) NSArray * preferredMediaCharacteristics;              //@synthesize preferredMediaCharacteristics=_preferredMediaCharacteristics - In the implementation block
@property (nonatomic,retain) NSArray * precludedMediaCharacteristics;              //@synthesize precludedMediaCharacteristics=_precludedMediaCharacteristics - In the implementation block
@property (nonatomic,retain) NSArray * preferredMediaSubTypes;                     //@synthesize preferredMediaSubTypes=_preferredMediaSubTypes - In the implementation block
@property (nonatomic,retain) NSArray * precludedMediaSubTypes;                     //@synthesize precludedMediaSubTypes=_precludedMediaSubTypes - In the implementation block
@property (assign,nonatomic) BOOL preferMultichannelAudio;                         //@synthesize preferMultichannelAudio=_preferMultichannelAudio - In the implementation block
@property (assign,nonatomic) BOOL precludeMultichannelAudio;                       //@synthesize precludeMultichannelAudio=_precludeMultichannelAudio - In the implementation block
-(NSArray *)requiredMediaCharacteristics;
-(void)setRequiredMediaCharacteristics:(NSArray *)arg1 ;
-(NSArray *)preferredMediaCharacteristics;
-(void)setPreferredMediaCharacteristics:(NSArray *)arg1 ;
-(NSArray *)precludedMediaCharacteristics;
-(void)setPrecludedMediaCharacteristics:(NSArray *)arg1 ;
-(NSArray *)preferredMediaSubTypes;
-(void)setPreferredMediaSubTypes:(NSArray *)arg1 ;
-(NSArray *)precludedMediaSubTypes;
-(void)setPrecludedMediaSubTypes:(NSArray *)arg1 ;
-(BOOL)preferMultichannelAudio;
-(void)setPreferMultichannelAudio:(BOOL)arg1 ;
-(BOOL)precludeMultichannelAudio;
-(void)setPrecludeMultichannelAudio:(BOOL)arg1 ;
-(void)setPreferredLanguages:(NSArray *)arg1 ;
-(void)dealloc;
-(NSArray *)preferredLanguages;
@end

