/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TUCallSoundPlayerSoundDescriptor : NSObject {

	id _sound;
	unsigned long long _iterations;
	double _pauseDuration;

}

@property (nonatomic,retain) id sound;                                   //@synthesize sound=_sound - In the implementation block
@property (assign,nonatomic) unsigned long long iterations;              //@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) double pauseDuration;                       //@synthesize pauseDuration=_pauseDuration - In the implementation block
-(id)description;
-(unsigned long long)iterations;
-(void)setIterations:(unsigned long long)arg1 ;
-(id)sound;
-(void)setSound:(id)arg1 ;
-(void)setPauseDuration:(double)arg1 ;
-(double)pauseDuration;
-(id)initWithSound:(id)arg1 iterations:(unsigned long long)arg2 pauseDuration:(double)arg3 ;
@end

