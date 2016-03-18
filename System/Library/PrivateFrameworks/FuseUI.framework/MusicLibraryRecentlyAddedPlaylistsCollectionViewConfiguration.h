/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryBrowseCollectionViewConfiguration.h>

@class MusicLibraryPlaylistsViewConfiguration;

@interface MusicLibraryRecentlyAddedPlaylistsCollectionViewConfiguration : MusicLibraryBrowseCollectionViewConfiguration {

	unsigned long long _entityLimit;
	MusicLibraryPlaylistsViewConfiguration* _playlistsViewConfiguration;

}

@property (nonatomic,readonly) unsigned long long entityLimit;                                                 //@synthesize entityLimit=_entityLimit - In the implementation block
@property (nonatomic,retain) MusicLibraryPlaylistsViewConfiguration * playlistsViewConfiguration;              //@synthesize playlistsViewConfiguration=_playlistsViewConfiguration - In the implementation block
+(unsigned long long)defaultEntityLimit;
-(unsigned long long)entityLimit;
-(id)init;
-(id)loadEntityViewDescriptor;
-(long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(id)initWithEntityLimit:(unsigned long long)arg1 ;
-(BOOL)canPreviewEntityValueContext:(id)arg1 ;
-(id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2 ;
-(MusicLibraryPlaylistsViewConfiguration *)playlistsViewConfiguration;
-(void)setPlaylistsViewConfiguration:(MusicLibraryPlaylistsViewConfiguration *)arg1 ;
@end
