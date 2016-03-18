/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NACVolumeController.h>

@protocol NACVolumeControllerDelegate;
@class NSString, NACEventThrottler, NSNumber;

@interface NACVolumeControllerDemo : NSObject <NACVolumeController> {

	NSString* _audioCategory;
	NACEventThrottler* _defaultsThrottler;
	NSNumber* _volumeValue;
	BOOL _systemMuted;
	float _hapticIntensity;
	id<NACVolumeControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NACVolumeControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable; 
@property (getter=isVolumeWarningEnabled,nonatomic,readonly) BOOL volumeWarningEnabled; 
@property (getter=isMuted,nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) float volumeValue; 
@property (nonatomic,readonly) float EUVolumeLimit; 
@property (assign,nonatomic) float hapticIntensity;                                                      //@synthesize hapticIntensity=_hapticIntensity - In the implementation block
@property (assign,getter=isSystemMuted,nonatomic) BOOL systemMuted;                                      //@synthesize systemMuted=_systemMuted - In the implementation block
-(void)setVolumeValue:(float)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(float)EUVolumeLimit;
-(id)initWithAudioCategory:(id)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(float)volumeValue;
-(void)setDelegate:(id<NACVolumeControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<NACVolumeControllerDelegate>)delegate;
-(void)beginObservingVolume;
-(void)endObservingVolume;
-(void)setHapticIntensity:(float)arg1 ;
-(void)setSystemMuted:(BOOL)arg1 ;
-(BOOL)isVolumeControlAvailable;
-(BOOL)isVolumeWarningEnabled;
-(void)setVolumeValue:(float)arg1 muted:(BOOL)arg2 overrideEULimit:(BOOL)arg3 ;
-(float)hapticIntensity;
-(BOOL)isSystemMuted;
-(void)_persistVolumeValue:(id)arg1 ;
-(void)_setNeedsVolumeReload;
-(id)_volumeDictionary;
-(BOOL)isMuted;
@end

