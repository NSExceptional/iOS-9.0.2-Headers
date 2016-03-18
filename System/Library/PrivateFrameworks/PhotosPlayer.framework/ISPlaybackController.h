/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <libobjc.A.dylib/ISPlaybackStateTransitionManagerDelegate.h>
#import <libobjc.A.dylib/ISAVPlayerControllerDelegate.h>

@class ISPlaybackSpec, AVPlayerItem, NSError, ISReuseQueue, NSHashTable, ISAVPlayerController, ISPlaybackStateTransitionManager, AVPlayer, NSSet, NSString;

@interface ISPlaybackController : NSObject <ISPlaybackStateTransitionManagerDelegate, ISAVPlayerControllerDelegate> {

	BOOL _videoVisible;
	float _volume;
	float _timeOffset;
	float _vitalityPlayRate;
	float _vitalityHintPlayRate;
	float _hintProgress;
	float _playRate;
	ISPlaybackSpec* _playbackSpec;
	AVPlayerItem* _videoPlayerItem;
	AVPlayerItem* _audioPlayerItem;
	double _maximumVideoTransitionDelay;
	long long _playbackState;
	/*^block*/id _playbackEndHandler;
	long long _audioPlayerStatus;
	long long _videoPlayerStatus;
	NSError* _videoPlayerError;
	NSError* _audioPlayerError;
	ISReuseQueue* __playerReuseQueue;
	NSHashTable* __outputs;
	long long __currentTransitionRequestID;
	ISAVPlayerController* __avPlayerController;
	ISPlaybackStateTransitionManager* __transitionManager;
	long long __previousPlaybackState;
	id __videoTimeObserver;
	AVPlayer* __videoPlayer;
	id __videoPlayerPerformanceDiagnosticsTimeObserver;
	AVPlayer* __audioPlayer;
	long long __currentPlaybackID;
	long long __hasStartedVideoForCurrentPlayback;
	double __videoPlaybackRequestTime;
	double __lastHintProgress;
	SCD_Struct_IS1 _idleTime;
	SCD_Struct_IS1 __videoDuration;

}

@property (nonatomic,retain) ISPlaybackSpec * playbackSpec;                                                                           //@synthesize playbackSpec=_playbackSpec - In the implementation block
@property (assign,nonatomic) float volume;                                                                                            //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) AVPlayerItem * videoPlayerItem;                                                                          //@synthesize videoPlayerItem=_videoPlayerItem - In the implementation block
@property (nonatomic,retain) AVPlayerItem * audioPlayerItem;                                                                          //@synthesize audioPlayerItem=_audioPlayerItem - In the implementation block
@property (assign,nonatomic) SCD_Struct_IS1 idleTime;                                                                                 //@synthesize idleTime=_idleTime - In the implementation block
@property (assign,nonatomic) double maximumVideoTransitionDelay;                                                                      //@synthesize maximumVideoTransitionDelay=_maximumVideoTransitionDelay - In the implementation block
@property (assign,nonatomic) float timeOffset;                                                                                        //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign,nonatomic) float vitalityPlayRate;                                                                                  //@synthesize vitalityPlayRate=_vitalityPlayRate - In the implementation block
@property (assign,nonatomic) float vitalityHintPlayRate;                                                                              //@synthesize vitalityHintPlayRate=_vitalityHintPlayRate - In the implementation block
@property (assign,nonatomic) float hintProgress;                                                                                      //@synthesize hintProgress=_hintProgress - In the implementation block
@property (assign,nonatomic) long long playbackState;                                                                                 //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) float playRate;                                                                                          //@synthesize playRate=_playRate - In the implementation block
@property (nonatomic,copy) id playbackEndHandler;                                                                                     //@synthesize playbackEndHandler=_playbackEndHandler - In the implementation block
@property (nonatomic,readonly) NSSet * outputs; 
@property (assign,nonatomic) long long audioPlayerStatus;                                                                             //@synthesize audioPlayerStatus=_audioPlayerStatus - In the implementation block
@property (assign,nonatomic) long long videoPlayerStatus;                                                                             //@synthesize videoPlayerStatus=_videoPlayerStatus - In the implementation block
@property (nonatomic,retain) NSError * videoPlayerError;                                                                              //@synthesize videoPlayerError=_videoPlayerError - In the implementation block
@property (nonatomic,retain) NSError * audioPlayerError;                                                                              //@synthesize audioPlayerError=_audioPlayerError - In the implementation block
@property (nonatomic,readonly) ISReuseQueue * _playerReuseQueue;                                                                      //@synthesize _playerReuseQueue=__playerReuseQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * _outputs;                                                                                //@synthesize _outputs=__outputs - In the implementation block
@property (assign,setter=_setCurrentTransitionRequestID:,nonatomic) long long _currentTransitionRequestID;                            //@synthesize _currentTransitionRequestID=__currentTransitionRequestID - In the implementation block
@property (nonatomic,readonly) ISAVPlayerController * _avPlayerController;                                                            //@synthesize _avPlayerController=__avPlayerController - In the implementation block
@property (nonatomic,readonly) ISPlaybackStateTransitionManager * _transitionManager;                                                 //@synthesize _transitionManager=__transitionManager - In the implementation block
@property (assign,setter=_setPreviousPlaybackState:,nonatomic) long long _previousPlaybackState;                                      //@synthesize _previousPlaybackState=__previousPlaybackState - In the implementation block
@property (setter=_setVideoTimeObserver:,nonatomic,retain) id _videoTimeObserver;                                                     //@synthesize _videoTimeObserver=__videoTimeObserver - In the implementation block
@property (nonatomic,readonly) AVPlayer * _videoPlayer;                                                                               //@synthesize _videoPlayer=__videoPlayer - In the implementation block
@property (nonatomic,readonly) id _videoPlayerPerformanceDiagnosticsTimeObserver;                                                     //@synthesize _videoPlayerPerformanceDiagnosticsTimeObserver=__videoPlayerPerformanceDiagnosticsTimeObserver - In the implementation block
@property (nonatomic,readonly) AVPlayer * _audioPlayer;                                                                               //@synthesize _audioPlayer=__audioPlayer - In the implementation block
@property (assign,setter=_setCurrentPlaybackID:,nonatomic) long long _currentPlaybackID;                                              //@synthesize _currentPlaybackID=__currentPlaybackID - In the implementation block
@property (assign,setter=_setHasStartedVideoForCurrentPlayback:,nonatomic) long long _hasStartedVideoForCurrentPlayback;              //@synthesize _hasStartedVideoForCurrentPlayback=__hasStartedVideoForCurrentPlayback - In the implementation block
@property (assign,setter=_setVideoPlaybackRequestTime:,nonatomic) double _videoPlaybackRequestTime;                                   //@synthesize _videoPlaybackRequestTime=__videoPlaybackRequestTime - In the implementation block
@property (assign,setter=_setLastHintProgress:,nonatomic) double _lastHintProgress;                                                   //@synthesize _lastHintProgress=__lastHintProgress - In the implementation block
@property (setter=_setVideoDuration:) SCD_Struct_IS1 _videoDuration;                                                                  //@synthesize _videoDuration=__videoDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)resetPlayerCache;
+(id)_sharedPlayerReuseQueue;
+(id)avfQueue;
-(void)removeOutput:(id)arg1 ;
-(void)addOutput:(id)arg1 ;
-(void)_setVideoDuration:(SCD_Struct_IS1)arg1 ;
-(SCD_Struct_IS1)_videoDuration;
-(long long)playbackState;
-(AVPlayer *)_videoPlayer;
-(void)setPlaybackSpec:(ISPlaybackSpec *)arg1 ;
-(void)setVolume:(float)arg1 ;
-(void)dealloc;
-(id)init;
-(float)timeOffset;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSSet *)outputs;
-(SCD_Struct_IS1)idleTime;
-(void)setIdleTime:(SCD_Struct_IS1)arg1 ;
-(float)volume;
-(void)_setPlaybackState:(long long)arg1 ;
-(void)_updateStatus;
-(AVPlayerItem *)videoPlayerItem;
-(NSHashTable *)_outputs;
-(void)_configureOutput:(id)arg1 ;
-(AVPlayer *)_audioPlayer;
-(void)_updatePlayerController;
-(void)_updatePlayerControllerVolume;
-(void)_setPreviousPlaybackState:(long long)arg1 ;
-(void)_setTimeOffset:(float)arg1 ;
-(void)_setVitalityPlayRate:(float)arg1 ;
-(void)_setHintProgress:(float)arg1 ;
-(void)_setPlayRate:(float)arg1 ;
-(void)_handleMediaServiceResetIfNecessaryWithError:(id)arg1 ;
-(void)_setVideoPlayerError:(id)arg1 ;
-(void)_setAudioPlayerError:(id)arg1 ;
-(void)_setAudioPlayerStatus:(long long)arg1 ;
-(void)_setVideoPlayerStatus:(long long)arg1 ;
-(ISAVPlayerController *)_avPlayerController;
-(long long)_previousPlaybackState;
-(ISPlaybackSpec *)playbackSpec;
-(long long)_currentPlaybackID;
-(void)_setCurrentPlaybackID:(long long)arg1 ;
-(void)_performBeginPlaybackTransition;
-(float)playRate;
-(float)hintProgress;
-(void)_startVideoPlaybackWithPlaybackID:(long long)arg1 ;
-(float)vitalityPlayRate;
-(float)vitalityHintPlayRate;
-(ISPlaybackStateTransitionManager *)_transitionManager;
-(void)_setLastHintProgress:(double)arg1 ;
-(void)_setCurrentTransitionRequestID:(long long)arg1 ;
-(SCD_Struct_IS1)_playbackStartTime;
-(double)_lastHintProgress;
-(void)_setHasStartedVideoForCurrentPlayback:(long long)arg1 ;
-(long long)_hasStartedVideoForCurrentPlayback;
-(SCD_Struct_IS1)_playbackEndTime;
-(id)_videoTimeObserver;
-(void)_videoDidPlayToEndTime;
-(void)_setVideoTimeObserver:(id)arg1 ;
-(void)_setVideoPlaybackRequestTime:(double)arg1 ;
-(long long)_currentTransitionRequestID;
-(void)_didEndTransitionToPlaybackState:(long long)arg1 forTransitionRequestID:(long long)arg2 finished:(BOOL)arg3 ;
-(double)_videoPlaybackRequestTime;
-(void)_callPlaybackEndHandler;
-(id)playbackEndHandler;
-(void)setPlaybackEndHandler:(id)arg1 ;
-(void)transitionManager:(id)arg1 didEndTransitionToPlaybackState:(long long)arg2 forRequestID:(long long)arg3 finished:(BOOL)arg4 ;
-(void)avPlayerControllerDidBeginPlaying:(id)arg1 ;
-(void)avPlayerControllerWillEndPlaying:(id)arg1 ;
-(void)avPlayerControllerDidEndPlaying:(id)arg1 ;
-(void)avPlayerControllerDidEndSeeking:(id)arg1 seekTime:(SCD_Struct_IS1)arg2 didFinish:(BOOL)arg3 ;
-(SCD_Struct_IS1)cachedDuration;
-(void)setVideoPlayerItem:(AVPlayerItem *)arg1 ;
-(void)setAudioPlayerItem:(AVPlayerItem *)arg1 ;
-(void)transitionToPlaybackState:(long long)arg1 playRate:(float)arg2 withTimeOffset:(float)arg3 vitalityPlayRate:(float)arg4 hintProgress:(float)arg5 ;
-(AVPlayerItem *)audioPlayerItem;
-(double)maximumVideoTransitionDelay;
-(void)setMaximumVideoTransitionDelay:(double)arg1 ;
-(void)setVitalityHintPlayRate:(float)arg1 ;
-(long long)audioPlayerStatus;
-(long long)videoPlayerStatus;
-(NSError *)videoPlayerError;
-(NSError *)audioPlayerError;
-(ISReuseQueue *)_playerReuseQueue;
-(id)_videoPlayerPerformanceDiagnosticsTimeObserver;
@end

