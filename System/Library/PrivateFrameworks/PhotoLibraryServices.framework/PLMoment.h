/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLAssetContainer.h>
#import <libobjc.A.dylib/PLMomentData_Private.h>

@class PLMomentNameInfo, NSString, NSDate, NSOrderedSet, PLMomentList, PLMomentLibrary, NSData, PLManagedAsset, NSArray, CLLocation;

@interface PLMoment : PLManagedObject <PLAssetContainer, PLMomentData_Private> {

	PLMomentNameInfo* _cachedNameInfo;
	BOOL _loadedNameInfo;
	BOOL isRegisteredForChanges;
	BOOL didRegisteredWithUserInterfaceContext;

}

@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSDate * representativeDate; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * title2; 
@property (nonatomic,retain) NSString * title3; 
@property (assign,nonatomic) int cachedCount; 
@property (assign,nonatomic) int cachedPhotosCount; 
@property (assign,nonatomic) int cachedVideosCount; 
@property (nonatomic,retain) NSOrderedSet * assets; 
@property (nonatomic,retain) PLMomentList * yearMomentList; 
@property (nonatomic,retain) PLMomentList * megaMomentList; 
@property (nonatomic,retain) PLMomentLibrary * momentLibrary; 
@property (nonatomic,retain) NSData * approximateLocationData; 
@property (nonatomic,retain) NSData * reverseLocationData; 
@property (assign,nonatomic) BOOL reverseLocationDataIsValid; 
@property (assign,nonatomic) short generationType; 
@property (assign,nonatomic) BOOL isRegisteredForChanges; 
@property (assign,nonatomic) BOOL didRegisteredWithUserInterfaceContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSObject*<NSCopying> uniqueObjectID; 
@property (nonatomic,retain) CLLocation * approximateLocation; 
@property (nonatomic,retain) NSArray * userTitles; 
+(id)allMomentsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)allMomentsInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)allAssetsIncludedInMomentsInManagedObjectContext:(id)arg1 IDsOnly:(BOOL)arg2 error:(id*)arg3 ;
+(id)predicateForAssetsIncludedInMoments;
+(id)insertNewMomentInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)allAssetsIncludedInMomentsInLibrary:(id)arg1 ;
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)allMomentsInLibrary:(id)arg1 ;
-(CGImageRef)posterImage;
-(BOOL)isCloudSharedAlbum;
-(id)groupURL;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(void)removeAssets:(id)arg1 ;
-(void)insertAssets:(id)arg1 atIndexes:(id)arg2 ;
-(void)addAssets:(id)arg1 ;
-(BOOL)canShowAvalancheStacks;
-(PLManagedAsset *)keyAsset;
-(unsigned long long)approximateCount;
-(id)mutableAssets;
-(unsigned long long)assetsCount;
-(unsigned long long)photosCount;
-(unsigned long long)videosCount;
-(void)setKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(PLManagedAsset *)arg1 ;
-(BOOL)canShowComments;
-(NSArray *)localizedLocationNames;
-(BOOL)supportsDiagnosticInformation;
-(id)diagnosticInformation;
-(void)invalidateNameInfo;
-(void)dealloc;
-(BOOL)isEmpty;
-(NSString *)localizedTitle;
-(void)delete;
-(void)awakeFromInsert;
-(void)willSave;
-(BOOL)isRegisteredForChanges;
-(void)setDidRegisteredWithUserInterfaceContext:(BOOL)arg1 ;
-(void)registerForChanges;
-(BOOL)didRegisteredWithUserInterfaceContext;
-(void)unregisterForChanges;
-(void)removeAssetsAtIndexes:(id)arg1 ;
-(void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2 ;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(void)didTurnIntoFault;
-(BOOL)validateForInsert:(id*)arg1 ;
-(BOOL)validateForUpdate:(id*)arg1 ;
-(NSObject*<NSCopying>)uniqueObjectID;
-(unsigned long long)countForAssetsOfKind:(short)arg1 ;
-(void)setIsRegisteredForChanges:(BOOL)arg1 ;
-(CLLocation *)approximateLocation;
-(void)setUserTitles:(NSArray *)arg1 ;
-(NSArray *)userTitles;
-(void)_updateCachedNameInfoIfNeeded;
-(BOOL)_validateForInsertOrUpdate:(id*)arg1 ;
-(void)replaceObjectInAssetsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeAssetsObject:(id)arg1 ;
-(void)replaceAssetDataAtIndex:(unsigned long long)arg1 withAssetData:(id)arg2 ;
-(void)removeAssetData:(id)arg1 ;
-(void)setApproximateLocation:(CLLocation *)arg1 ;
-(void)insertObject:(id)arg1 inAssetsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromAssetsAtIndex:(unsigned long long)arg1 ;
-(void)addAssetsObject:(id)arg1 ;
@end

