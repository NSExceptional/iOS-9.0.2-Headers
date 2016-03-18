/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryAdaptiveViewConfiguration.h>

@class MusicLibraryRecentlyAddedPlaylistsCollectionViewConfiguration;

@interface MusicLibraryRecentlyAddedPlaylistsViewConfiguration : MusicLibraryAdaptiveViewConfiguration {

	MusicLibraryRecentlyAddedPlaylistsCollectionViewConfiguration* _collectionViewConfiguration;
	BOOL _shouldForwardBasePropertyValues;

}

@property (nonatomic,readonly) unsigned long long entityLimit; 
+(unsigned long long)defaultEntityLimit;
-(unsigned long long)entityLimit;
-(void)setIconName:(id)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(id)entityViewDescriptor;
-(id)initWithEntityLimit:(unsigned long long)arg1 ;
-(void)setUserActivityItemTypes:(id)arg1 ;
-(id)loadCompactWidthConfiguration;
-(id)loadRegularWidthConfiguration;
@end

