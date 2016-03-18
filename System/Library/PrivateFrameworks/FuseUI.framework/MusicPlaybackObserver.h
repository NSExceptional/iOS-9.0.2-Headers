/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, MusicLocalPlaybackEventDataSource, MPMediaPlaylist, MPAVController;

@interface MusicPlaybackObserver : NSObject {

	NSOperationQueue* _addOperationQueue;
	MusicLocalPlaybackEventDataSource* _localPlaybackEventDataSource;
	MPMediaPlaylist* _lastIncrementedPlaylist;
	MPAVController* _player;

}

@property (nonatomic,readonly) MPAVController * player;                                                       //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) MusicLocalPlaybackEventDataSource * localPlaybackEventDataSource; 
+(id)playbackObserverForPlayer:(id)arg1 ;
-(void)_unregisterForPlayerNotifications:(id)arg1 ;
-(void)_registerForPlayerNotifications:(id)arg1 ;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
-(void)dealloc;
-(id)init;
-(MusicLocalPlaybackEventDataSource *)localPlaybackEventDataSource;
-(void)_itemArtworkDidChangeNotification:(id)arg1 ;
-(id)_initWithPlayer:(id)arg1 ;
-(void)_currentItemWillChange:(id)arg1 ;
-(void)_currentItemDidChange:(id)arg1 ;
-(void)_itemTitlesDidChangeNotification:(id)arg1 ;
@end

