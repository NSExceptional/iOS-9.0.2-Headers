/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PLPhotoLibrary, NSMutableDictionary, NSObject;

@interface PLRelationshipOrderKeyManager : NSObject {

	PLPhotoLibrary* _photoLibrary;
	PLPhotoLibrary* _locationsPhotoLibrary;
	NSMutableDictionary* _locationsCache;
	NSMutableDictionary* _enqueuedFolderAlbumsOrderValueUpdates;
	NSMutableDictionary* _enqueuedAlbumAssetsOrderValueUpdates;
	NSObject*<OS_dispatch_queue> _locationsCacheQueue;
	BOOL _hasStashedLocationValues;
	BOOL _conflictDetected;

}

@property (nonatomic,readonly) BOOL hasStashedLocationValues;              //@synthesize hasStashedLocationValues=_hasStashedLocationValues - In the implementation block
@property (nonatomic,readonly) BOOL conflictDetected;                      //@synthesize conflictDetected=_conflictDetected - In the implementation block
+(id)sharedManager;
-(void)migration_updateLegacyOrderValuesForAssetsInAlbums:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)migration_updateLegacyChildCollectionOrderKeysInFolder:(id)arg1 ;
-(id)migration_sortedOrderKeysForAssetsInAlbum:(id)arg1 usingMap:(id)arg2 ;
-(void)migration_ensureValidOrderKey:(id)arg1 usingOrderValuePropertyKey:(id)arg2 ;
-(void)migration_fixupOrderKeys:(id)arg1 usingOrderValuePropertyKey:(id)arg2 enforceSingletonAlbumReservedKeySpace:(BOOL)arg3 ;
-(void)_migration_updateOrderKeysForAssetsInParentAlbum:(id)arg1 childToOrderKeyMap:(id)arg2 ;
-(void)_migration_updateOrderValuesForAssetsInAlbum:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)updateKeyAssetsForAlbums:(id)arg1 inLibrary:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)photoLibrary;
-(void)dealloc;
-(id)init;
-(void)updateAlbumAssetsUsingTransientOrdersByAlbumOID:(id)arg1 inLibrary:(id)arg2 ;
-(BOOL)writeStashedLocationValuesInLibrary:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)findIndexForAlbumWithID:(id)arg1 newOrderValue:(long long)arg2 inFolderWithID:(id)arg3 hasOrderValueConflictWithAlbumID:(id*)arg4 ;
-(void)getConflictResolutionOrderValuesForRelationship:(id)arg1 onObjectWithID:(id)arg2 atIndex:(unsigned long long)arg3 intoLower:(long long*)arg4 higher:(long long*)arg5 ;
-(void)stashFolderAlbumsLocationValue:(long long)arg1 forAlbumWithID:(id)arg2 inFolderWithID:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(long long)compareOrderKeyObject:(id)arg1 withObject:(id)arg2 ;
-(unsigned long long)findIndexForAssetWithID:(id)arg1 newOrderValue:(long long)arg2 inAlbumWithID:(id)arg3 hasOrderValueConflictWithAssetID:(id*)arg4 ;
-(void)setConflictDetected:(BOOL)arg1 ;
-(void)stashAlbumAssetsLocationValue:(long long)arg1 forAssetWithID:(id)arg2 inAlbumWithID:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(void)_updateOrderOfChildrenInParent:(id)arg1 usingTransientOrders:(id)arg2 ;
-(id)locationsPhotoLibrary;
-(id)locationsManagedObjectContext;
-(id)_locationsCache;
-(id)_inq_orderingStateForRelationship:(id)arg1 onObjectWithID:(id)arg2 ;
-(id)_enqueuedFolderAlbumsOrderValueUpdates;
-(void)_inq_stashLocationValue:(long long)arg1 forOrderedObjectWithID:(id)arg2 inSourceObjectID:(id)arg3 relationship:(id)arg4 atIndex:(unsigned long long)arg5 usingStashDictionary:(id)arg6 ;
-(id)_enqueuedAlbumAssetsOrderValueUpdates;
-(void)_getAndResetEnqueuedOrderValueUpdatesForFolders:(id*)arg1 albums:(id*)arg2 conflictDetected:(BOOL*)arg3 ;
-(id)objectIDsAndOrderValuesForRelationship:(id)arg1 onObjectWithID:(id)arg2 ;
-(id)albumsAndOrderValuesForAsset:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)parentFolderOrderValueForAlbum:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(BOOL)hasStashedLocationValues;
-(BOOL)conflictDetected;
@end

