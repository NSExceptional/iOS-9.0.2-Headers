/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@class PHFetchResult, NSArray, NSIndexSet;

@interface PHFetchResultChangeDetails : NSObject {

	PHFetchResult* _fetchResultBeforeChanges;
	PHFetchResult* _fetchResultAfterChanges;
	NSArray* _previousItems;
	NSArray* _currentItems;
	NSIndexSet* _removedIndexes;
	NSIndexSet* _insertedIndexes;
	NSIndexSet* _movedIndexes;
	CFArrayRef _movedFromIndexes;
	NSArray* _changedItems;
	NSIndexSet* _changedIndexes;
	BOOL _skipIncrementalChanges;

}

@property (readonly) PHFetchResult * fetchResultBeforeChanges; 
@property (readonly) PHFetchResult * fetchResultAfterChanges; 
@property (readonly) BOOL hasIncrementalChanges; 
@property (readonly) NSIndexSet * removedIndexes; 
@property (readonly) NSArray * removedObjects; 
@property (readonly) NSIndexSet * insertedIndexes; 
@property (readonly) NSArray * insertedObjects; 
@property (readonly) NSIndexSet * changedIndexes; 
@property (readonly) NSArray * changedObjects; 
@property (readonly) BOOL hasMoves; 
+(id)_oidsForPHObjects:(id)arg1 ;
+(id)changeDetailsFromFetchResult:(id)arg1 toFetchResult:(id)arg2 changedObjects:(id)arg3 ;
-(id)initWithManualFetchResultAfterChanges:(id)arg1 ;
-(void)calculateDiffs;
-(id)initWithFetchResult:(id)arg1 currentFetchResult:(id)arg2 changedItems:(id)arg3 unknownMergeEvent:(BOOL)arg4 ;
-(BOOL)hasDiffs;
-(id)currentItems;
-(BOOL)hasIncrementalChanges;
-(PHFetchResult *)fetchResultAfterChanges;
-(BOOL)hasMoves;
-(NSIndexSet *)insertedIndexes;
-(NSIndexSet *)removedIndexes;
-(PHFetchResult *)fetchResultBeforeChanges;
-(NSArray *)changedObjects;
-(NSIndexSet *)changedIndexes;
-(BOOL)shouldReload;
-(void)enumerateMovesWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSArray *)removedObjects;
-(NSArray *)insertedObjects;
-(unsigned long long)snapshotIndexForContainedObject:(id)arg1 ;
@end

