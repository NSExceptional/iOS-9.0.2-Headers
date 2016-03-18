/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibrary, PLManagedObjectContext, PLGatekeeperClient;

@interface PLKeywordManager : NSObject {

	PLPhotoLibrary* _photoLibrary;
	PLManagedObjectContext* _libraryContext;
	PLGatekeeperClient* _assetsdClient;

}
+(id)writeQueue;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)dealloc;
-(id)keywordsForAssets:(id)arg1 ;
-(id)keywordsForAsset:(id)arg1 ;
-(BOOL)setKeywords:(id)arg1 forAssetUUID:(id)arg2 ;
-(id)_keywordsForAsset:(id)arg1 ;
-(id)keywordObjectsForKeywords:(id)arg1 ;
-(id)allKeywords;
-(id)keywordsForAssetWithUUID:(id)arg1 ;
@end

