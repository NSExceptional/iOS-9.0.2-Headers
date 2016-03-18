/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface HAPMetadataConstraints : NSObject {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _stepValue;
	NSNumber* _minLength;
	NSNumber* _maxLength;

}

@property (nonatomic,retain) NSNumber * minimumValue;              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,retain) NSNumber * maximumValue;              //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,retain) NSNumber * stepValue;                 //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,retain) NSNumber * minLength;                 //@synthesize minLength=_minLength - In the implementation block
@property (nonatomic,retain) NSNumber * maxLength;                 //@synthesize maxLength=_maxLength - In the implementation block
-(id)description;
-(void)setMaxLength:(NSNumber *)arg1 ;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(void)setStepValue:(NSNumber *)arg1 ;
-(NSNumber *)stepValue;
-(BOOL)isEqualToMetadataConstraints:(id)arg1 ;
-(NSNumber *)minLength;
-(void)setMinLength:(NSNumber *)arg1 ;
-(NSNumber *)maxLength;
@end

