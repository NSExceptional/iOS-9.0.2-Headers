/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MusicEntityProviding.h>

@protocol MusicEntityProviding;
@class MusicShuffleActionEntityValueProvider, NSString;

@interface MusicShuffleActionEntityProvider : NSObject <MusicEntityProviding> {

	BOOL _editing;
	BOOL _hasShuffleAction;
	MusicShuffleActionEntityValueProvider* _shuffleActionEntityValueProvider;
	id<MusicEntityProviding> _sourceEntityProvider;

}

@property (nonatomic,readonly) id<MusicEntityProviding> sourceEntityProvider;              //@synthesize sourceEntityProvider=_sourceEntityProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasEntities;
-(void)dealloc;
-(unsigned long long)numberOfSections;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned long long)arg1 ;
-(id)initWithSourceEntityProvider:(id)arg1 ;
-(void)_sourceEntityProviderDidInvalidateNotification:(id)arg1 ;
-(void)_reloadHasShuffleActionAllowingInvalidation:(BOOL)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(id)_shuffleActionEntityValueProvider;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(BOOL)hasEntitiesNotInLibrary;
-(void)setEditing:(BOOL)arg1 returningInsertedSectionIndexSet:(id*)arg2 deletedSectionIndexSet:(id*)arg3 ;
-(id<MusicEntityProviding>)sourceEntityProvider;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1 ;
-(unsigned long long)numberOfIndexBarEntries;
-(unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1 ;
@end

