/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHCollectionList, NSString, PHChangeRequestHelper, PHCollectionChangeRequestHelper, PHObjectPlaceholder, NSManagedObjectID;

@interface PHCollectionListChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {

	PHCollectionList* _originalCollectionList;
	BOOL _entitled;
	NSString* _clientName;
	int _clientProcessID;
	PHChangeRequestHelper* _helper;
	PHCollectionChangeRequestHelper* _collectionsHelper;

}

@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedCollectionList; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,readonly) PHChangeRequestHelper * helper;                                         //@synthesize helper=_helper - In the implementation block
@property (nonatomic,readonly) PHCollectionChangeRequestHelper * collectionsHelper;                    //@synthesize collectionsHelper=_collectionsHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isEntitled,nonatomic,readonly) BOOL entitled;                                        //@synthesize entitled=_entitled - In the implementation block
@property (nonatomic,readonly) NSString * clientName;                                                  //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) int clientProcessID;                                                    //@synthesize clientProcessID=_clientProcessID - In the implementation block
@property (getter=isNew,readonly) BOOL new; 
@property (getter=isMutated,readonly) BOOL mutated; 
+(id)_changeRequestForCollectionList:(id)arg1 optionalChildCollections:(id)arg2 ;
+(id)creationRequestForCollectionListWithTitle:(id)arg1 ;
+(id)changeRequestForCollectionList:(id)arg1 ;
+(void)deleteCollectionLists:(id)arg1 ;
+(id)changeRequestForCollectionList:(id)arg1 childCollections:(id)arg2 ;
-(PHChangeRequestHelper *)helper;
-(BOOL)isNew;
-(NSString *)managedEntityName;
-(BOOL)isEntitled;
-(int)clientProcessID;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(id)initWithXPCDict:(id)arg1 entitled:(BOOL)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initForNewObject;
-(BOOL)canGenerateUUIDLocally;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(id)mutations;
-(void)didMutate;
-(BOOL)isMutated;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(id)_mutableObjectIDsAndUUIDs;
-(void)_setOriginalCollectionList:(id)arg1 ;
-(void)_prepareWithFetchResult:(id)arg1 ;
-(PHCollectionChangeRequestHelper *)collectionsHelper;
-(void)_prepareAssetIDsIfNeeded;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1 ;
-(void)insertChildCollection:(id)arg1 inChildCollectionsAtIndex:(unsigned long long)arg2 ;
-(void)removeChildCollectionFromChildCollectionsAtIndex:(unsigned long long)arg1 ;
-(void)replaceChildCollectionsAtIndex:(unsigned long long)arg1 withChildCollection:(id)arg2 ;
-(void)addChildCollection:(id)arg1 ;
-(void)removeChildCollection:(id)arg1 ;
-(NSManagedObjectID *)objectID;
-(PHObjectPlaceholder *)placeholderForCreatedCollectionList;
-(void)addChildCollections:(id)arg1 ;
-(void)removeChildCollectionsAtIndexes:(id)arg1 ;
-(void)insertChildCollections:(id)arg1 atIndexes:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)title;
-(NSString *)uuid;
-(NSString *)clientName;
-(void)moveChildCollectionsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2 ;
-(void)removeChildCollections:(id)arg1 ;
@end

