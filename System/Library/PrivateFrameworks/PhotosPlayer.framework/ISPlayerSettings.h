/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISSettings.h>

@interface ISPlayerSettings : ISSettings {

	BOOL _useDedicatedQueues;
	BOOL _allowFrameBlending;
	BOOL _allowVideoPreRoll;
	BOOL _allowPlayerReuse;
	BOOL _allowCrossfadeContent;
	BOOL _shouldPauseOnSettle;
	BOOL _variableIntro;
	double _forceTouchTimeoutInterval;
	double _forceTouchTimeoutMinimumProgress;
	double _forceScrubMinimumPressure;
	double _forceScrubMaximumPressure;
	double _forceScrubRewindFactor;
	double _forceScrubMinRateChange;
	double _forceScrubSettleRateAddition;
	double _forceScrubMinimumRate;
	double _forceScrubMaximumInteractiveRate;
	double _audioRampDuration;
	double _crossfadeTargetBlur;
	double _crossfadeDuration;
	double _maxPreCrossfadeDuration;
	double _nonForcePreCrossfadeDuration;

}

@property (assign,nonatomic) BOOL useDedicatedQueues;                              //@synthesize useDedicatedQueues=_useDedicatedQueues - In the implementation block
@property (assign,nonatomic) BOOL allowFrameBlending;                              //@synthesize allowFrameBlending=_allowFrameBlending - In the implementation block
@property (assign,nonatomic) BOOL allowVideoPreRoll;                               //@synthesize allowVideoPreRoll=_allowVideoPreRoll - In the implementation block
@property (assign,nonatomic) BOOL allowPlayerReuse;                                //@synthesize allowPlayerReuse=_allowPlayerReuse - In the implementation block
@property (assign,nonatomic) BOOL allowCrossfadeContent;                           //@synthesize allowCrossfadeContent=_allowCrossfadeContent - In the implementation block
@property (assign,nonatomic) BOOL shouldPauseOnSettle;                             //@synthesize shouldPauseOnSettle=_shouldPauseOnSettle - In the implementation block
@property (assign,nonatomic) double forceTouchTimeoutInterval;                     //@synthesize forceTouchTimeoutInterval=_forceTouchTimeoutInterval - In the implementation block
@property (assign,nonatomic) double forceTouchTimeoutMinimumProgress;              //@synthesize forceTouchTimeoutMinimumProgress=_forceTouchTimeoutMinimumProgress - In the implementation block
@property (assign,nonatomic) double forceScrubMinimumPressure;                     //@synthesize forceScrubMinimumPressure=_forceScrubMinimumPressure - In the implementation block
@property (assign,nonatomic) double forceScrubMaximumPressure;                     //@synthesize forceScrubMaximumPressure=_forceScrubMaximumPressure - In the implementation block
@property (assign,nonatomic) double forceScrubRewindFactor;                        //@synthesize forceScrubRewindFactor=_forceScrubRewindFactor - In the implementation block
@property (assign,nonatomic) double forceScrubMinRateChange;                       //@synthesize forceScrubMinRateChange=_forceScrubMinRateChange - In the implementation block
@property (assign,nonatomic) double forceScrubSettleRateAddition;                  //@synthesize forceScrubSettleRateAddition=_forceScrubSettleRateAddition - In the implementation block
@property (assign,nonatomic) double forceScrubMinimumRate;                         //@synthesize forceScrubMinimumRate=_forceScrubMinimumRate - In the implementation block
@property (assign,nonatomic) double forceScrubMaximumInteractiveRate;              //@synthesize forceScrubMaximumInteractiveRate=_forceScrubMaximumInteractiveRate - In the implementation block
@property (assign,nonatomic) double audioRampDuration;                             //@synthesize audioRampDuration=_audioRampDuration - In the implementation block
@property (assign,nonatomic) double crossfadeTargetBlur;                           //@synthesize crossfadeTargetBlur=_crossfadeTargetBlur - In the implementation block
@property (assign,nonatomic) double crossfadeDuration;                             //@synthesize crossfadeDuration=_crossfadeDuration - In the implementation block
@property (assign,nonatomic) double maxPreCrossfadeDuration;                       //@synthesize maxPreCrossfadeDuration=_maxPreCrossfadeDuration - In the implementation block
@property (assign,nonatomic) double nonForcePreCrossfadeDuration;                  //@synthesize nonForcePreCrossfadeDuration=_nonForcePreCrossfadeDuration - In the implementation block
@property (assign,nonatomic) BOOL variableIntro;                                   //@synthesize variableIntro=_variableIntro - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)crossfadeDuration;
-(void)setCrossfadeDuration:(double)arg1 ;
-(void)setUseDedicatedQueues:(BOOL)arg1 ;
-(void)setAllowFrameBlending:(BOOL)arg1 ;
-(void)setCrossfadeTargetBlur:(double)arg1 ;
-(void)setMaxPreCrossfadeDuration:(double)arg1 ;
-(void)setAllowVideoPreRoll:(BOOL)arg1 ;
-(void)setAllowPlayerReuse:(BOOL)arg1 ;
-(void)setAllowCrossfadeContent:(BOOL)arg1 ;
-(void)setShouldPauseOnSettle:(BOOL)arg1 ;
-(void)setForceTouchTimeoutInterval:(double)arg1 ;
-(void)setForceTouchTimeoutMinimumProgress:(double)arg1 ;
-(void)setForceScrubMinimumPressure:(double)arg1 ;
-(void)setForceScrubMaximumPressure:(double)arg1 ;
-(void)setForceScrubRewindFactor:(double)arg1 ;
-(void)setForceScrubMinRateChange:(double)arg1 ;
-(void)setForceScrubSettleRateAddition:(double)arg1 ;
-(void)setAudioRampDuration:(double)arg1 ;
-(void)setNonForcePreCrossfadeDuration:(double)arg1 ;
-(void)setForceScrubMinimumRate:(double)arg1 ;
-(void)setForceScrubMaximumInteractiveRate:(double)arg1 ;
-(void)setVariableIntro:(BOOL)arg1 ;
-(BOOL)useDedicatedQueues;
-(BOOL)allowFrameBlending;
-(BOOL)allowVideoPreRoll;
-(BOOL)allowPlayerReuse;
-(BOOL)allowCrossfadeContent;
-(BOOL)shouldPauseOnSettle;
-(double)forceTouchTimeoutInterval;
-(double)forceTouchTimeoutMinimumProgress;
-(double)forceScrubMinimumPressure;
-(double)forceScrubMaximumPressure;
-(double)forceScrubRewindFactor;
-(double)forceScrubMinRateChange;
-(double)forceScrubSettleRateAddition;
-(double)forceScrubMinimumRate;
-(double)forceScrubMaximumInteractiveRate;
-(double)audioRampDuration;
-(double)crossfadeTargetBlur;
-(double)maxPreCrossfadeDuration;
-(double)nonForcePreCrossfadeDuration;
-(BOOL)variableIntro;
@end

