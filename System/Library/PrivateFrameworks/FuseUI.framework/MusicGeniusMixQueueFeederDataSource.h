/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPMediaPlaylist, MPMediaItem;


@protocol MusicGeniusMixQueueFeederDataSource <NSObject>
@property (nonatomic,readonly) MPMediaPlaylist * mixPlaylist; 
@property (nonatomic,readonly) MPMediaItem * requiredInitialMediaItem; 
@required
-(MPMediaPlaylist *)mixPlaylist;
-(unsigned long long)geniusMixQueueFeederMediaItemCount:(id)arg1;
-(id)geniusMixQueueFeeder:(id)arg1 queryForMediaItemAtIndex:(unsigned long long)arg2;
-(unsigned long long)geniusMixQueueFeeder:(id)arg1 indexOfMediaItem:(id)arg2;
-(id)geniusMixQueueFeeder:(id)arg1 mediaItemAtIndex:(unsigned long long)arg2;
-(MPMediaItem *)requiredInitialMediaItem;

@end
