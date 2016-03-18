/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/_PLFetchingAlbum.h>

@class NSArray, NSPredicate, NSFetchRequest, NSData, NSString, NSOrderedSet;

@interface PLFetchingAlbum : _PLFetchingAlbum {

	unsigned long long _countForDisplay;
	unsigned long long _photosCount;
	unsigned long long _videosCount;
	int _emptyState;
	NSArray* _cachedKeyAssets;
	NSPredicate* _ALAssetsGroupFilterPredicate;
	unsigned long long _batchSize;

}

@property (nonatomic,retain) NSFetchRequest * fetchRequest; 
@property (nonatomic,retain) NSData * customQueryParameters; 
@property (nonatomic,retain) NSString * customQueryType; 
@property (nonatomic,retain,readonly) NSPredicate * extraFilterPredicate; 
@property (nonatomic,retain) NSPredicate * ALAssetsGroupFilterPredicate;               //@synthesize ALAssetsGroupFilterPredicate=_ALAssetsGroupFilterPredicate - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                             //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetsCache; 
@property (nonatomic,retain) NSOrderedSet * fetchedAssets; 
+(id)sortDescriptorsForAlbumKind:(int)arg1 ;
+(id)predicateForAlbumKind:(int)arg1 ;
+(id)_panoramasAlbumPredicate;
+(BOOL)contextShouldIgnoreChangesForFetchedAssets;
+(BOOL)contextShouldIgnoreChangesForFetchedAssetsSet;
+(BOOL)contextShouldIgnoreChangesForFetchRequest;
+(BOOL)contextShouldIgnoreChangesForALAssetsGroupFilterPredicate;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(void)setAssets:(id)arg1 ;
-(id)keyAsset;
-(unsigned long long)approximateCount;
-(void)batchFetchAssets:(id)arg1 ;
-(id)filteredIndexesForPredicate:(id)arg1 ;
-(id)mutableAssets;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(id)assets;
-(void)setKeyAsset:(id)arg1 ;
-(id)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(id)arg1 ;
-(id)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(void)awakeFromInsert;
-(id)primitiveAssets;
-(void)awakeFromFetch;
-(void)didTurnIntoFault;
-(void)updateSnapshotAndClearCaches:(id)arg1 ;
-(NSPredicate *)extraFilterPredicate;
-(void)setupFetchRequest;
-(NSPredicate *)ALAssetsGroupFilterPredicate;
-(void)setFetchRequest:(NSFetchRequest *)arg1 ;
-(NSFetchRequest *)fetchRequest;
-(id)_performFetchWithRequest:(id)arg1 ;
-(unsigned long long)_fetchedCountForAssetsOfKind:(short)arg1 ;
-(id)_cachedKeyAssets;
-(void)setALAssetsGroupFilterPredicate:(NSPredicate *)arg1 ;
-(unsigned long long)countForAssetsOfKind:(short)arg1 ;
-(BOOL)hasAssetsCache;
-(id)fastPointerAccessSetForAssets:(id)arg1 ;
-(BOOL)mayHaveAssetsInCommon:(id)arg1 ;
@end

