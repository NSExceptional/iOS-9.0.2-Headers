/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCLocalItem.h>

@class BRCAliasItem, BRCDocumentItem;

@interface BRCDirectoryItem : BRCLocalItem

@property (nonatomic,readonly) BRCAliasItem * asAlias; 
@property (nonatomic,readonly) BRCDirectoryItem * asDirectory; 
@property (nonatomic,readonly) BRCDocumentItem * asDocument; 
-(float)prepareEditSyncUpWithOperation:(id)arg1 defaults:(id)arg2 ;
-(BOOL)isDirectory;
-(BOOL)evictWithGroup:(id)arg1 error:(id*)arg2 ;
-(BOOL)changedAtRelativePath:(id)arg1 scanPackage:(BOOL)arg2 ;
-(BOOL)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(BOOL)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2 ;
-(BOOL)_deleteFromDB:(id)arg1 diffs:(unsigned long long)arg2 keepAliases:(BOOL)arg3 ;
-(BOOL)updateFromFSAtPath:(id)arg1 parentID:(id)arg2 ;
-(BRCDirectoryItem *)asDirectory;
-(void)markLostDirectoryAsAlmostDead;
-(BOOL)updateLocationAndMetaFromFSAtPath:(id)arg1 parentID:(id)arg2 ;
-(void)startDownloadWithOptions:(unsigned long long)arg1 group:(id)arg2 ;
-(BOOL)hasDeadChildren;
-(unsigned long long)markChildrenLost;
-(BOOL)hasLostChildren;
-(void)_retryPostponedIfNeededForDiffs:(unsigned long long)arg1 ;
-(BOOL)hasLiveChildren;
@end

