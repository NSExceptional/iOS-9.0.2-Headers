/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPChangePlaybackRateCommandEvent : MPRemoteCommandEvent {

	float _playbackRate;

}

@property (nonatomic,readonly) float playbackRate;              //@synthesize playbackRate=_playbackRate - In the implementation block
-(float)playbackRate;
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
@end

