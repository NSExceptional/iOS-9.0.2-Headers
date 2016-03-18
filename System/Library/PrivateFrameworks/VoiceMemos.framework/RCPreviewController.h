/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:32 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/RCAVPlayerDelegate.h>

@class NSURL, NSString, RCAudioSessionRoutingAssertion, NSUUID, NSHashTable, NSMutableDictionary, AVPlayerItem, RCAVState, RCAVPlayer;

@interface RCPreviewController : NSObject <RCAVPlayerDelegate> {

	BOOL _resetUseVoiceMemoSettingsValue;
	BOOL _voiceMemoSettingEnabledNeedsReset;
	BOOL _isPreparingForPreview;
	NSURL* _lastPlayedAssetReferenceURL;
	BOOL _logNextRouteUsageStatisticForced;
	NSString* _activePlaybackContextName;
	NSString* _lastRouteKeyForRouteUsageLog;
	double _currentTimeTarget;
	double _currentRateTarget;
	double _AVPlayerItemCachedDuration;
	RCAudioSessionRoutingAssertion* _activePreviewRouteAssertion;
	RCAudioSessionRoutingAssertion* _preparingToPreviewRouteAssertion;
	NSUUID* _preparingToPreviewRouteAssertionSessionUUID;
	NSHashTable* _weakObservers;
	NSMutableDictionary* _monitoredDispatchSourcesByURL;
	BOOL _useVoiceMemoSettings;
	AVPlayerItem* _AVPlayerItem;
	RCAVState* _AVState;
	double _currentTimeDelegateUpdateRate;
	RCAVPlayer* _AVPlayer;

}

@property (nonatomic,retain) AVPlayerItem * AVPlayerItem;                       //@synthesize AVPlayerItem=_AVPlayerItem - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC1 playableTimeRange; 
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) float rate; 
@property (nonatomic,retain) RCAVState * AVState;                               //@synthesize AVState=_AVState - In the implementation block
@property (assign,nonatomic) double currentTimeDelegateUpdateRate;              //@synthesize currentTimeDelegateUpdateRate=_currentTimeDelegateUpdateRate - In the implementation block
@property (assign,nonatomic) BOOL useVoiceMemoSettings;                         //@synthesize useVoiceMemoSettings=_useVoiceMemoSettings - In the implementation block
@property (nonatomic,readonly) RCAVPlayer * AVPlayer;                           //@synthesize AVPlayer=_AVPlayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCurrentTime:(double)arg1 ;
-(double)currentTime;
-(float)rate;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)stop;
-(void)removeObserver:(id)arg1 ;
-(void)pause;
-(void)setAVPlayerItem:(AVPlayerItem *)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)setRate:(float)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(RCAVState *)AVState;
-(id)_recreateAVPlayer;
-(void)_audioRouteControllerWillDeactivateAudioSessionNotification:(id)arg1 ;
-(void)_audioRouteControllerPickedRouteDidChangeNotification:(id)arg1 ;
-(void)_stopMonitoringUnderylingAssetPath;
-(void)_handleUnderlyingAssetDisappeared;
-(BOOL)_monitorUnderlyingAssetPathInPlayerItem:(id)arg1 assetDisappearedBlock:(/*^block*/id)arg2 ;
-(void)_playbackUsageStatisticsPrepareForPlaybackContextName:(id)arg1 ;
-(void)_beginPreparingToPreviewRouteAssertion;
-(BOOL)useVoiceMemoSettings;
-(void)setUseVoiceMemoSettings:(BOOL)arg1 ;
-(void)_readyToPlay_playPlayer:(id)arg1 ;
-(id)_AVPlayerIfActive;
-(void)_playerCurrentRateDidChangeToRate:(float)arg1 hadPlaybackItem:(BOOL)arg2 ;
-(void)_handleDidStopPlaybackWithError:(id)arg1 ;
-(void)_endActivePreviewRouteAssertion;
-(void)_beginActivePreviewRouteAssertion;
-(void)_postDelegateDidBeginPlaybackWithRate:(float)arg1 ;
-(void)_postDelegateCurrentTimeUpdate;
-(void)_performWithObserversBlock:(/*^block*/id)arg1 ;
-(void)_playbackUsageStatisticsPrepareForStartingNewPlayback;
-(void)_playbackUsageStatisticsIncrementPlaybackIfNecessary;
-(void)playerCurrentItemDidBecomeReadyToPlay:(id)arg1 ;
-(void)playerCurrentRateDidChange:(id)arg1 ;
-(void)playerCurrentTimeDidChange:(id)arg1 ;
-(void)playerDidBecomeInvalid:(id)arg1 ;
-(void)playWithTimeRange:(SCD_Struct_RC1)arg1 startTime:(double)arg2 playbackContextName:(id)arg3 ;
-(void)setPlayableTimeRange:(SCD_Struct_RC1)arg1 ;
-(SCD_Struct_RC1)playableTimeRange;
-(void)setCurrentTimeDelegateUpdateRate:(double)arg1 ;
-(void)handlePreviewEnded;
-(void)_setPreparingToPlay:(BOOL)arg1 notifyObservers:(BOOL)arg2 ;
-(AVPlayerItem *)AVPlayerItem;
-(void)setAVState:(RCAVState *)arg1 ;
-(double)currentTimeDelegateUpdateRate;
-(RCAVPlayer *)AVPlayer;
@end

