/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIResponder.h>

@class AVPlayer, NSError;

@interface AVPlayerController : UIResponder {

	AVPlayer* _player;
	long long _status;
	NSError* _error;

}

@property (assign,getter=isPlayingOnSecondScreen,nonatomic) BOOL playingOnSecondScreen; 
@property (assign,nonatomic) BOOL CALayerDestinationIsTVOut; 
@property (nonatomic,readonly) AVPlayer * player;                                                    //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) long long status;                                                     //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                      //@synthesize error=_error - In the implementation block
+(void)initialize;
-(void)setPlayingOnSecondScreen:(BOOL)arg1 ;
-(void)setCALayerDestinationIsTVOut:(BOOL)arg1 ;
-(BOOL)CALayerDestinationIsTVOut;
-(void)setRateWithForce:(double)arg1 ;
-(BOOL)isCompatibleWithAirPlayVideo;
-(BOOL)hasEnabledVideo;
-(BOOL)hasEnabledAudio;
-(BOOL)canSeekChapterBackward;
-(void)seekByTimeInterval:(double)arg1 ;
-(BOOL)canSeekChapterForward;
-(BOOL)isPlayingOnSecondScreen;
-(void)autoplay:(id)arg1 ;
-(BOOL)isAtMinTime;
-(BOOL)isAtMaxTime;
-(void)scanBackward:(id)arg1 ;
-(void)changeVolumeToMinimum:(id)arg1 ;
-(void)scanForward:(id)arg1 ;
-(void)changeVolumeToMaximum:(id)arg1 ;
-(void)toggleMuted:(id)arg1 ;
-(void)increaseVolume:(id)arg1 ;
-(id)contentChapters;
-(void)decreaseVolume:(id)arg1 ;
-(BOOL)isSeeking;
-(void)setLooping:(BOOL)arg1 ;
-(void)seekToChapter:(id)arg1 ;
-(BOOL)hasContentChapters;
-(void)seekFrameBackward:(id)arg1 ;
-(BOOL)hasShareableContent;
-(BOOL)hasTrimmableContent;
-(BOOL)canSeekFrameBackward;
-(BOOL)canSeekFrameForward;
-(void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(void)seekFrameForward:(id)arg1 ;
-(double)currentTimeWithinEndTimes;
-(void)setRateWithThrottling:(double)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(BOOL)isExternalPlaybackActive;
-(id)mediaSelectionGroupForMediaCharacteristic:(id)arg1 ;
-(id)loadedTimeRanges;
-(id)seekableTimeRanges;
-(void)seekToTime:(double)arg1 ;
-(BOOL)allowsExternalPlayback;
-(double)maxTime;
-(long long)externalPlaybackType;
-(BOOL)isPictureInPicturePossible;
-(double)currentTime;
-(double)rate;
-(NSError *)error;
-(void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(void)setAllowsExternalPlayback:(BOOL)arg1 ;
-(BOOL)isPlaying;
-(AVPlayer *)player;
-(void)setVolume:(double)arg1 ;
-(BOOL)hasContent;
-(long long)status;
-(id)timing;
-(BOOL)canSeek;
-(void)play:(id)arg1 ;
-(id)metadata;
-(double)volume;
-(BOOL)isLooping;
-(void)pause:(id)arg1 ;
-(void)setRate:(double)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(void)setCanPause:(BOOL)arg1 ;
-(BOOL)canPause;
-(double)contentDuration;
-(void)setContentDuration:(double)arg1 ;
-(void)setMaxTime:(double)arg1 ;
-(void)setMinTime:(double)arg1 ;
-(void)setCurrentAudioMediaSelectionOption:(id)arg1 ;
-(void)setCurrentLegibleMediaSelectionOption:(id)arg1 ;
-(void)togglePlayback:(id)arg1 ;
-(BOOL)canPlay;
-(void)seekToBeginning:(id)arg1 ;
-(void)seekToEnd:(id)arg1 ;
-(BOOL)hasAudioMediaSelectionOptions;
-(BOOL)hasLegibleMediaSelectionOptions;
-(id)audioMediaSelectionOptions;
-(id)legibleMediaSelectionOptions;
-(void)togglePlaybackEvenWhenInBackground:(id)arg1 ;
-(void)beginScrubbing:(id)arg1 ;
-(void)endScrubbing:(id)arg1 ;
-(BOOL)hasLiveStreamingContent;
-(void)skipBackwardThirtySeconds:(id)arg1 ;
-(void)gotoEndOfSeekableRanges:(id)arg1 ;
-(BOOL)canScanForward;
-(void)beginScanningForward:(id)arg1 ;
-(void)endScanningForward:(id)arg1 ;
-(void)beginScanningBackward:(id)arg1 ;
-(void)endScanningBackward:(id)arg1 ;
-(BOOL)canSeekToBeginning;
-(void)seekChapterBackward:(id)arg1 ;
-(BOOL)canSeekToEnd;
-(void)seekChapterForward:(id)arg1 ;
-(BOOL)hasMediaSelectionOptions;
-(id)currentAudioMediaSelectionOption;
-(id)currentLegibleMediaSelectionOption;
-(BOOL)isPlayingOnExternalScreen;
-(BOOL)isPictureInPictureInterrupted;
-(void)setPictureInPictureInterrupted:(BOOL)arg1 ;
-(BOOL)canScanBackward;
-(BOOL)canTogglePlayback;
-(CGSize)contentDimensions;
-(double)minTime;
-(double)contentDurationWithinEndTimes;
-(id)externalPlaybackAirPlayDeviceLocalizedName;
@end
