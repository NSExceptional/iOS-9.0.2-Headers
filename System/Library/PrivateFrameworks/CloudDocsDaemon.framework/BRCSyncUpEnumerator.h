/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class BRCLocalContainer, NSMutableSet, NSMutableDictionary, NSMutableIndexSet, NSMutableArray;

@interface BRCSyncUpEnumerator : NSEnumerator {

	unsigned _batchSize;
	unsigned _maxDepth;
	BRCLocalContainer* _container;
	NSMutableSet* _whitelist;
	NSMutableSet* _blacklist;
	NSMutableDictionary* _tombstonesEmbargo;
	NSMutableIndexSet* _returned;
	PQLResultSet* _enumerator;
	NSMutableArray* _stack;
	int _stage;
	unsigned long long _retryAfter;

}

@property (nonatomic,readonly) unsigned batchSize;                         //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,readonly) unsigned long long retryAfter;              //@synthesize retryAfter=_retryAfter - In the implementation block
-(unsigned)batchSize;
-(void)invalidate;
-(id)nextObject;
-(id)initWithLocalContainer:(id)arg1 ;
-(unsigned long long)retryAfter;
-(BOOL)_blackListStackIfItemThrottled:(id)arg1 now:(unsigned long long)arg2 ;
-(id)_nextLiveItem;
-(id)_nextTombstone;
-(PQLResultSet*)_documentsOrAliasesNeedingSyncUpEnumerator;
-(PQLResultSet*)_liveOrNewDirectoriesNeedingSyncUpEnumerator;
-(PQLResultSet*)_tombstoneLeavesNeedingSyncUpEnumerator;
@end

