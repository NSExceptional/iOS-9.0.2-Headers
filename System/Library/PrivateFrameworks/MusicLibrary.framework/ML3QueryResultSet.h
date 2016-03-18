/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class ML3QueryResultSet_BackingStore, ML3Query, NSMutableArray, NSObject;

@interface ML3QueryResultSet : NSObject <NSCopying> {

	ML3QueryResultSet_BackingStore* _backingStore;
	ML3Query* _query;
	long long _revision;
	long long _localRevision;
	BOOL _supportsIncrementalUpdate;
	NSMutableArray* _updateToLibraryCurrentRevisionCompletionBlocks;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _fixedPriorityQueue;

}

@property (nonatomic,readonly) ML3Query * query;                      //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) long long revision;                    //@synthesize revision=_revision - In the implementation block
@property (nonatomic,readonly) long long localRevision;               //@synthesize localRevision=_localRevision - In the implementation block
-(void)enumerateSectionHeadersUsingBlock:(/*^block*/id)arg1 ;
-(id)sectionIndexTitles;
-(id)initWithQuery:(id)arg1 ;
-(unsigned long long)entityLimit;
-(BOOL)updateToLibraryCurrentRevision;
-(long long)localRevision;
-(long long)persistentIDAtIndex:(unsigned long long)arg1 ;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(ML3Query *)query;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithQuery:(id)arg1 supportsIncrementalUpdate:(BOOL)arg2 ;
-(void)_onQueueAddUpdateFinishedBlock:(/*^block*/id)arg1 ;
-(BOOL)_updateToLibraryCurrentRevision;
-(void)_onQueueInvokeAndClearUpdateFinishedBlocksWithDidUpdateResult:(BOOL)arg1 ;
-(void)_loadCurrentFullResults;
-(void)_mergeChangesWithFromNewPIDs:(const vector<long long, std::__1::allocator<long long> >*)arg1 changedPIDs:(unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >*)arg2 ;
-(long long)revision;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
@end
