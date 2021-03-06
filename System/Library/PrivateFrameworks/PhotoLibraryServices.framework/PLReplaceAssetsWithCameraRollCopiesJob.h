/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSArray, PLManagedAlbum, PLPhotoLibrary, PLManagedObjectContext, NSPersistentStoreCoordinator;

@interface PLReplaceAssetsWithCameraRollCopiesJob : PLDaemonJob {

	NSArray* _assets;
	PLManagedAlbum* _album;
	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,copy) NSArray * assets;                                                      //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) PLManagedAlbum * album;                                              //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * photoLibrary;                                       //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain,readonly) PLManagedObjectContext * managedObjectContext; 
@property (nonatomic,retain,readonly) NSPersistentStoreCoordinator * coordinator; 
+(void)replaceAssets:(id)arg1 withCameraRollCopiesInAlbum:(id)arg2 ;
-(void)setAssets:(NSArray *)arg1 ;
-(NSArray *)assets;
-(PLManagedAlbum *)album;
-(void)setAlbum:(PLManagedAlbum *)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
-(void)dealloc;
-(void)run;
-(PLManagedObjectContext *)managedObjectContext;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(NSPersistentStoreCoordinator *)coordinator;
-(id)_cameraRollAssetDerivedFromAsset:(id)arg1 ;
@end

