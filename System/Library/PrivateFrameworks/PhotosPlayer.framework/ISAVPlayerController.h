/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ISAVPlayerControllerDelegate;
#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class AVPlayerItem, AVPlayer;

@interface ISAVPlayerController : NSObject {

	struct {
		BOOL respondsToDidBeginPlaying;
		BOOL respondsToWillEndPlaying;
		BOOL respondsToDidEndPlaying;
		BOOL respondsToDidEndSeeking;
	}  _delegateFlags;
	SCD_Struct_IS1 _cachedDuration;
	AVPlayerItem* _cachedDurationPlayerItem;
	id _playbackNearEndTimeObserver;
	BOOL __isPerfomingChanges;
	BOOL __playersNeedUpdate;
	BOOL __seekingVideo;
	BOOL __pendingReset;
	BOOL __shouldPlayAudio;
	BOOL __shouldPreroll;
	float _playVolume;
	float _playRate;
	float __hintPlayRate;
	AVPlayer* _videoPlayer;
	AVPlayer* _audioPlayer;
	long long _state;
	id<ISAVPlayerControllerDelegate> _delegate;
	long long __seekRequestID;
	id __didBeginPlaybackObserver;
	AVPlayerItem* __playerItemToObservePlaybackEnd;
	AVPlayerItem* __currentAudioPlayerItem;
	AVPlayerItem* __currentVideoPlayerItem;
	SCD_Struct_IS1 __lastResetTime;
	SCD_Struct_IS1 __forwardPlaybackEndTime;
	SCD_Struct_IS1 __observedPlaybackNearEndTime;

}

@property (nonatomic,retain) AVPlayer * videoPlayer;                                                                                 //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) AVPlayer * audioPlayer;                                                                                 //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (assign,nonatomic) long long state;                                                                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL isSeeking; 
@property (assign,nonatomic,__weak) id<ISAVPlayerControllerDelegate> delegate;                                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float playVolume;                                                                                       //@synthesize playVolume=_playVolume - In the implementation block
@property (assign,nonatomic) float playRate;                                                                                         //@synthesize playRate=_playRate - In the implementation block
@property (assign,setter=_setPerformingChanges:,nonatomic) BOOL _isPerfomingChanges;                                                 //@synthesize _isPerfomingChanges=__isPerfomingChanges - In the implementation block
@property (nonatomic,readonly) BOOL _playersNeedUpdate;                                                                              //@synthesize _playersNeedUpdate=__playersNeedUpdate - In the implementation block
@property (assign,setter=_setSeekingVideo:,getter=_isSeekingVideo,nonatomic) BOOL _seekingVideo;                                     //@synthesize _seekingVideo=__seekingVideo - In the implementation block
@property (assign,setter=_setPendingReset:,getter=_hasPendingReset,nonatomic) BOOL _pendingReset;                                    //@synthesize _pendingReset=__pendingReset - In the implementation block
@property (assign,setter=_setLastResetTime:,nonatomic) SCD_Struct_IS1 _lastResetTime;                                                //@synthesize _lastResetTime=__lastResetTime - In the implementation block
@property (assign,setter=_setSeekRequestID:,nonatomic) long long _seekRequestID;                                                     //@synthesize _seekRequestID=__seekRequestID - In the implementation block
@property (assign,setter=_setShouldPlayAudio:,nonatomic) BOOL _shouldPlayAudio;                                                      //@synthesize _shouldPlayAudio=__shouldPlayAudio - In the implementation block
@property (assign,setter=_setShouldPreroll:,nonatomic) BOOL _shouldPreroll;                                                          //@synthesize _shouldPreroll=__shouldPreroll - In the implementation block
@property (assign,setter=_setHintPlayRate:,nonatomic) float _hintPlayRate;                                                           //@synthesize _hintPlayRate=__hintPlayRate - In the implementation block
@property (assign,setter=_setForwardPlaybackEndTime:,nonatomic) SCD_Struct_IS1 _forwardPlaybackEndTime;                              //@synthesize _forwardPlaybackEndTime=__forwardPlaybackEndTime - In the implementation block
@property (setter=_setDidBeginPlaybackObserver:,nonatomic,retain) id _didBeginPlaybackObserver;                                      //@synthesize _didBeginPlaybackObserver=__didBeginPlaybackObserver - In the implementation block
@property (setter=_setPlayerItemToObservePlaybackEnd:,nonatomic,retain) AVPlayerItem * _playerItemToObservePlaybackEnd;              //@synthesize _playerItemToObservePlaybackEnd=__playerItemToObservePlaybackEnd - In the implementation block
@property (assign,setter=_setObservedPlaybackNearEndTime:,nonatomic) SCD_Struct_IS1 _observedPlaybackNearEndTime;                    //@synthesize _observedPlaybackNearEndTime=__observedPlaybackNearEndTime - In the implementation block
@property (setter=_setCurrentAudioPlayerItem:,nonatomic,retain) AVPlayerItem * _currentAudioPlayerItem;                              //@synthesize _currentAudioPlayerItem=__currentAudioPlayerItem - In the implementation block
@property (setter=_setCurrentVideoPlayerItem:,nonatomic,retain) AVPlayerItem * _currentVideoPlayerItem;                              //@synthesize _currentVideoPlayerItem=__currentVideoPlayerItem - In the implementation block
-(SCD_Struct_IS1)_forwardPlaybackEndTime;
-(BOOL)isSeeking;
-(void)performChanges:(/*^block*/id)arg1 ;
-(AVPlayer *)videoPlayer;
-(void)_setPerformingChanges:(BOOL)arg1 ;
-(void)_setVideoPlayer:(id)arg1 ;
-(void)setDelegate:(id<ISAVPlayerControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ISAVPlayerControllerDelegate>)delegate;
-(long long)state;
-(SCD_Struct_IS1)_duration;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_setState:(long long)arg1 ;
-(void)pause;
-(AVPlayer *)audioPlayer;
-(id)initWithVideoPlayer:(id)arg1 audioPlayer:(id)arg2 ;
-(float)playRate;
-(void)setPlayRate:(float)arg1 ;
-(void)resetToTime:(SCD_Struct_IS1)arg1 hintEndTime:(SCD_Struct_IS1)arg2 hintPlayRate:(float)arg3 ;
-(void)playFromTime:(SCD_Struct_IS1)arg1 toTime:(SCD_Struct_IS1)arg2 withRate:(float)arg3 shouldPlayAudio:(BOOL)arg4 ;
-(void)setPlayVolume:(float)arg1 ;
-(void)resetToTime:(SCD_Struct_IS1)arg1 ;
-(BOOL)_isPerfomingChanges;
-(void)_invalidatePlayers;
-(void)_updatePlayersIfNeeded;
-(void)_setCurrentVideoPlayerItem:(id)arg1 ;
-(void)_setCurrentAudioPlayerItem:(id)arg1 ;
-(void)_setPlayerItemToObservePlaybackEnd:(id)arg1 ;
-(void)_setObservedPlaybackNearEndTime:(SCD_Struct_IS1)arg1 ;
-(BOOL)_hasPendingReset;
-(BOOL)_isSeekingVideo;
-(void)_setShouldPlayAudio:(BOOL)arg1 ;
-(void)_setHintPlayRate:(float)arg1 ;
-(void)_setForwardPlaybackEndTime:(SCD_Struct_IS1)arg1 ;
-(void)_setShouldPreroll:(BOOL)arg1 ;
-(void)_startPlayingFromTime:(SCD_Struct_IS1)arg1 toTime:(SCD_Struct_IS1)arg2 withRate:(float)arg3 shouldPlayAudio:(BOOL)arg4 ;
-(void)_setPendingReset:(BOOL)arg1 ;
-(void)_setLastResetTime:(SCD_Struct_IS1)arg1 ;
-(BOOL)_playersNeedUpdate;
-(void)_seekToDesiredTimeIfReady;
-(float)playVolume;
-(void)_playVideoWithAudioIfReady;
-(id)_didBeginPlaybackObserver;
-(void)_setDidBeginPlaybackObserver:(id)arg1 ;
-(BOOL)_shouldPlayAudio;
-(void)_videoPlayerDidBeginPlaybackWithObserver:(id)arg1 ;
-(void)_safelyUpdateRateForPlayers;
-(void)_playerItemDidFinishPlaying:(id)arg1 ;
-(void)_playerItemWillFinishPlaying;
-(AVPlayerItem *)_playerItemToObservePlaybackEnd;
-(BOOL)_shouldPreroll;
-(void)_pauseVideo;
-(SCD_Struct_IS1)_lastResetTime;
-(void)_setSeekingVideo:(BOOL)arg1 ;
-(long long)_seekRequestID;
-(void)_setSeekRequestID:(long long)arg1 ;
-(void)_handleSeekingRequest:(long long)arg1 toTime:(SCD_Struct_IS1)arg2 didFinish:(BOOL)arg3 startedTimestamp:(double)arg4 ;
-(float)_hintPlayRate;
-(void)stopObservingVideoPlayerItem:(id)arg1 audioPlayerItem:(id)arg2 ;
-(void)startObservingVideoPlayerItem:(id)arg1 audioPlayerItem:(id)arg2 ;
-(void)_setAudioPlayer:(id)arg1 ;
-(SCD_Struct_IS1)_observedPlaybackNearEndTime;
-(AVPlayerItem *)_currentAudioPlayerItem;
-(AVPlayerItem *)_currentVideoPlayerItem;
@end

