/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>

@class AVURLAsset, NSURL, NSMutableDictionary, AVPlayer, AVPlayerItem, SUPlayerStatus, NSString;

@interface SUAudioPlayer : NSObject <AVAssetResourceLoaderDelegate> {

	AVURLAsset* _asset;
	NSURL* _certificateUrl;
	BOOL _didPostForPreviewHistory;
	NSURL* _keyUrl;
	NSMutableDictionary* _nowPlayingInfo;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;
	long long _storeItemIdentifier;
	SUPlayerStatus* _status;
	id _timeObserver;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * URL;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSURL * certificateURL;                       //@synthesize certificateUrl=_certificateUrl - In the implementation block
@property (nonatomic,retain) NSURL * keyURL;                               //@synthesize keyUrl=_keyUrl - In the implementation block
@property (nonatomic,readonly) SUPlayerStatus * playerStatus; 
@property (assign,nonatomic) long long storeItemIdentifier;                //@synthesize storeItemIdentifier=_storeItemIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)seekToTime:(double)arg1 ;
-(void)_itemFailedToPlayToEndNotification:(id)arg1 ;
-(void)play;
-(void)dealloc;
-(void)stop;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)pause;
-(void)_failWithError:(id)arg1 ;
-(long long)storeItemIdentifier;
-(void)setStoreItemIdentifier:(long long)arg1 ;
-(SUPlayerStatus *)playerStatus;
-(NSURL *)certificateURL;
-(void)setCertificateURL:(NSURL *)arg1 ;
-(NSURL *)keyURL;
-(void)setKeyURL:(NSURL *)arg1 ;
-(void)_destroyPlayer;
-(void)_destroyPlayerItem;
-(void)_handleAssetValuesDidLoad;
-(void)_setPlayerState:(long long)arg1 ;
-(void)_applyNowPlayingInfo;
-(void)_updateForPeriodicTickWithTime:(double)arg1 ;
-(id)_newFadeInAudioMixForAsset:(id)arg1 ;
-(void)_itemPlayedToEndNotification:(id)arg1 ;
-(void)_postStatusChangeNotification;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(void)setValue:(id)arg1 forNowPlayingKey:(id)arg2 ;
-(id)valueForNowPlayingKey:(id)arg1 ;
@end

