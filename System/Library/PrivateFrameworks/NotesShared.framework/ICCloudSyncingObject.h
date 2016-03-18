/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/ICCloudObject.h>

@class NSMapTable, NSMutableSet, ICCloudState, NSString, CKRecord;

@interface ICCloudSyncingObject : NSManagedObject <ICCloudObject> {

	BOOL deletedByThisDevice;
	NSMapTable* versionsByOperation;
	NSMutableSet* temporaryAssets;
	long long failedToSyncCount;
	long long numberOfPushAttemptsToWaitCount;

}

@property (nonatomic,retain) ICCloudState * cloudState; 
@property (nonatomic,retain) NSString * identifier; 
@property (assign,nonatomic) BOOL needsToBeFetchedFromCloud; 
@property (assign,nonatomic) BOOL needsInitialFetchFromCloud; 
@property (assign,nonatomic) BOOL markedForDeletion; 
@property (nonatomic,retain) CKRecord * serverRecord; 
@property (nonatomic,readonly) BOOL shouldBeIgnoredForSync; 
@property (nonatomic,retain) NSMapTable * versionsByOperation; 
@property (nonatomic,retain) NSMutableSet * temporaryAssets; 
@property (assign,nonatomic) BOOL deletedByThisDevice; 
@property (assign,nonatomic) long long failedToSyncCount; 
@property (assign,nonatomic) long long numberOfPushAttemptsToWaitCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)applicationWillTerminate:(id)arg1 ;
+(void)initialize;
+(id)recordType;
+(void)deleteAllTemporaryAssetFilesForAllObjects;
+(id)allCloudObjects;
+(BOOL)needsToReFetchServerRecordValue:(id)arg1 ;
+(id)temporaryAssetDirectoryURL;
+(id)existingCloudObjectForRecordID:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg1 ;
+(id)keyPathsForValuesAffectingNeedsToBePushedToCloud;
+(id)keyPathsForValuesAffectingNeedsToBeDeletedFromCloud;
-(void)dealloc;
-(id)recordName;
-(void)setServerRecord:(CKRecord *)arg1 ;
-(id)recordZoneID;
-(id)loggingIdentifier;
-(void)updateChangeCount;
-(void)unmarkForDeletion;
-(void)markForDeletion;
-(id)loggingDescriptionValues;
-(void)setDeletedByThisDevice:(BOOL)arg1 ;
-(BOOL)shouldBeDeletedFromLocalDatabase;
-(void)deleteFromLocalDatabase;
-(BOOL)isValidObject;
-(void)objectWasFetchedButDoesNotExistInCloud;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg1 ;
-(void)setNeedsToBeFetchedFromCloud:(BOOL)arg1 ;
-(void)setVersionsByOperation:(NSMapTable *)arg1 ;
-(void)setTemporaryAssets:(NSMutableSet *)arg1 ;
-(void)deleteAllTemporaryAssetFiles;
-(void)clearServerRecord;
-(long long)numberOfPushAttemptsToWaitCount;
-(void)setNumberOfPushAttemptsToWaitCount:(long long)arg1 ;
-(long long)failedToSyncCount;
-(void)setFailedToSyncCount:(long long)arg1 ;
-(id)loggingDescription;
-(void)deleteChangeTokensAndReSync;
-(void)resetFailureCounts;
-(BOOL)supportsDeletionByTTL;
-(BOOL)isInCloud;
-(id)threadUnsafeNewlyCreatedRecord;
-(BOOL)hasSuccessfullyPushedLatestVersionToCloud;
-(NSMapTable *)versionsByOperation;
-(void)setInCloud:(BOOL)arg1 ;
-(BOOL)needsToFetchAfterServerRecordChanged:(id)arg1 ;
-(void)fixBrokenReferences;
-(void)deleteTemporaryAssetFilesForOperation:(id)arg1 ;
-(void)mergeDataFromRecord:(id)arg1 ;
-(NSMutableSet *)temporaryAssets;
-(void)deleteTemporaryFilesForAsset:(id)arg1 ;
-(BOOL)deletedByThisDevice;
-(id)objectsToBeDeletedBeforeThisObject;
-(BOOL)needsToBePushedToCloud;
-(BOOL)needsToBeDeletedFromCloud;
-(BOOL)hasAllMandatoryFields;
-(id)newlyCreatedRecord;
-(BOOL)isInICloudAccount;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(void)objectWillBePushedToCloudWithOperation:(id)arg1 ;
-(void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2 ;
-(void)objectFailedToBePushedToCloudWithOperation:(id)arg1 error:(id)arg2 ;
-(BOOL)validateIdentifier:(inout id*)arg1 error:(out id*)arg2 ;
-(void)clearChangeCount;
-(void)incrementFailureCounts;
-(void)decrementFailureCounts;
-(BOOL)shouldBeIgnoredForSync;
-(id)assetForData:(id)arg1 ;
-(void)resetUniqueIdentifier;
-(void)awakeFromInsert;
-(void)awakeFromFetch;
-(BOOL)isDeletable;
-(id)recordID;
@end

