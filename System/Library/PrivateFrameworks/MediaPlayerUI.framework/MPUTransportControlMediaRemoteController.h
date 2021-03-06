/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPUTransportControlMediaRemoteControllerDelegate;
#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
@class NSDictionary, NSArray, MPUTransportControlsView;

@interface MPUTransportControlMediaRemoteController : NSObject {

	unsigned _runningLongPressCommand;
	BOOL _playing;
	BOOL _nowPlayingAppIsRunning;
	BOOL _likeBanCyclesThroughPossibleStates;
	BOOL _advertisement;
	BOOL _alwaysLive;
	BOOL _sharingEnabled;
	id<MPUTransportControlMediaRemoteControllerDelegate> _delegate;
	NSDictionary* _nowPlayingInfo;
	NSArray* _supportedCommands;
	double _displayedSkipBackwardInterval;
	double _displayedSkipForwardInterval;
	long long _likeControlPresentationStyle;
	long long _likedState;
	unsigned long long _repeatType;
	unsigned long long _shuffleType;
	NSArray* _allowedTransportControlTypes;
	unsigned long long _transportControlsCount;
	MPUTransportControlsView* _transportControlsView;

}

@property (assign,nonatomic,__weak) id<MPUTransportControlMediaRemoteControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * nowPlayingInfo;                                                       //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                                                     //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic) BOOL nowPlayingAppIsRunning;                                                       //@synthesize nowPlayingAppIsRunning=_nowPlayingAppIsRunning - In the implementation block
@property (nonatomic,copy) NSArray * supportedCommands;                                                         //@synthesize supportedCommands=_supportedCommands - In the implementation block
@property (assign,nonatomic) BOOL likeBanCyclesThroughPossibleStates;                                           //@synthesize likeBanCyclesThroughPossibleStates=_likeBanCyclesThroughPossibleStates - In the implementation block
@property (getter=isAdvertisement,nonatomic,readonly) BOOL advertisement;                                       //@synthesize advertisement=_advertisement - In the implementation block
@property (getter=isAlwaysLive,nonatomic,readonly) BOOL alwaysLive;                                             //@synthesize alwaysLive=_alwaysLive - In the implementation block
@property (nonatomic,readonly) double displayedSkipBackwardInterval;                                            //@synthesize displayedSkipBackwardInterval=_displayedSkipBackwardInterval - In the implementation block
@property (nonatomic,readonly) double displayedSkipForwardInterval;                                             //@synthesize displayedSkipForwardInterval=_displayedSkipForwardInterval - In the implementation block
@property (nonatomic,readonly) long long likeControlPresentationStyle;                                          //@synthesize likeControlPresentationStyle=_likeControlPresentationStyle - In the implementation block
@property (nonatomic,readonly) long long likedState;                                                            //@synthesize likedState=_likedState - In the implementation block
@property (nonatomic,readonly) unsigned long long repeatType;                                                   //@synthesize repeatType=_repeatType - In the implementation block
@property (nonatomic,readonly) unsigned long long shuffleType;                                                  //@synthesize shuffleType=_shuffleType - In the implementation block
@property (getter=isSharingEnabled,nonatomic,readonly) BOOL sharingEnabled;                                     //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (nonatomic,copy) NSArray * allowedTransportControlTypes;                                              //@synthesize allowedTransportControlTypes=_allowedTransportControlTypes - In the implementation block
@property (assign,nonatomic) unsigned long long transportControlsCount;                                         //@synthesize transportControlsCount=_transportControlsCount - In the implementation block
@property (nonatomic,readonly) MPUTransportControlsView * transportControlsView;                                //@synthesize transportControlsView=_transportControlsView - In the implementation block
-(long long)likedState;
-(unsigned long long)repeatType;
-(unsigned long long)shuffleType;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(BOOL)isPlaying;
-(void)setDelegate:(id<MPUTransportControlMediaRemoteControllerDelegate>)arg1 ;
-(id)init;
-(id<MPUTransportControlMediaRemoteControllerDelegate>)delegate;
-(id)initWithTransportControlsView:(id)arg1 transportControlsCount:(unsigned long long)arg2 ;
-(id)initWithTransportControlsView:(id)arg1 allowedTransportControlTypes:(id)arg2 ;
-(long long)handleTapOnControlType:(long long)arg1 ;
-(long long)handleLongPressBeginOnControlType:(long long)arg1 ;
-(long long)handleLongPressEndOnControlType:(long long)arg1 ;
-(BOOL)isAdvertisement;
-(void)setTransportControlsCount:(unsigned long long)arg1 ;
-(void)setAllowedTransportControlTypes:(NSArray *)arg1 ;
-(void)setSupportedCommands:(NSArray *)arg1 ;
-(MPUTransportControlsView *)transportControlsView;
-(long long)likeControlPresentationStyle;
-(double)displayedSkipBackwardInterval;
-(double)displayedSkipForwardInterval;
-(void)cancelRunningLongPressCommand;
-(void)setNowPlayingAppIsRunning:(BOOL)arg1 ;
-(void)handlePushingMediaRemoteCommand:(unsigned)arg1 ;
-(unsigned long long)transportControlsCount;
-(void)_completeInitializationWithTransportControlsView:(id)arg1 ;
-(void)_updateForSupportedCommandsChange;
-(void)_updateForNowPlayingInfoChange;
-(void)_presentFirstLoveAlertIfNeeded;
-(void)_presentLikeBanActionSheetForCommand:(unsigned)arg1 ;
-(id)_commandOptionsForFeedbackOrPurchase;
-(CFStringRef)_nowPlayingInfoActiveKeyForMediaRemoteCommand:(unsigned)arg1 ;
-(id)_nowPlayingInfoValueForMediaRemoteNowPlayingInfoKey:(CFStringRef)arg1 ;
-(BOOL)nowPlayingAppIsRunning;
-(BOOL)likeBanCyclesThroughPossibleStates;
-(void)setLikeBanCyclesThroughPossibleStates:(BOOL)arg1 ;
-(BOOL)isSharingEnabled;
-(NSArray *)allowedTransportControlTypes;
-(NSArray *)supportedCommands;
-(BOOL)isAlwaysLive;
-(void)setPlaying:(BOOL)arg1 ;
@end

