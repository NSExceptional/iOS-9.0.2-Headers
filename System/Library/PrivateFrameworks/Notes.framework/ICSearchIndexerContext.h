/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICSearchIndexerContextDelegate;
@class NSDictionary, ICSearchIndexableMutableIdentifiers, NSMutableSet, ICThreadBlockDispatcher, NSOperationQueue;

@interface ICSearchIndexerContext : NSObject {

	BOOL _coreSpotlightDisabled;
	BOOL _indexCommunicationSupportEnabled;
	BOOL _nonBlocking;
	BOOL _supportsCompletionHandling;
	BOOL _legacyObjectsOnly;
	BOOL _shouldCreateIndexerOnDemand;
	BOOL _canUpdateMigrationState;
	BOOL _indexingDisabled;
	BOOL _canUpdateIndexClientState;
	BOOL _shouldPurgeMemoryAfterIndexingEachObject;
	BOOL _enumerateAllObjectsFromMainContextOnly;
	BOOL _wasEverPaused;
	BOOL _alwaysRunInDispatchQueue;
	id<ICSearchIndexerContextDelegate> _delegate;
	NSDictionary* _changeNotifyingManagedObjectContextMap;
	long long _pauseLevel;
	ICSearchIndexableMutableIdentifiers* _didChangeDeletedIdentifiers;
	ICSearchIndexableMutableIdentifiers* _didChangeAddedIdentifiers;
	ICSearchIndexableMutableIdentifiers* _didChangeUpdatedIdentifiers;
	ICSearchIndexableMutableIdentifiers* _immediateIdentifiers;
	NSMutableSet* _migrationStateUpdatedLegacyAccountObjectIDs;
	ICThreadBlockDispatcher* _indexerBlockDispatcher;
	NSOperationQueue* _chooseToMigrateOperationQueue;

}

@property (assign,nonatomic,__weak) id<ICSearchIndexerContextDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL coreSpotlightDisabled;                                                     //@synthesize coreSpotlightDisabled=_coreSpotlightDisabled - In the implementation block
@property (assign,nonatomic) BOOL indexCommunicationSupportEnabled;                                          //@synthesize indexCommunicationSupportEnabled=_indexCommunicationSupportEnabled - In the implementation block
@property (assign,nonatomic) BOOL nonBlocking;                                                               //@synthesize nonBlocking=_nonBlocking - In the implementation block
@property (assign,nonatomic) BOOL supportsCompletionHandling;                                                //@synthesize supportsCompletionHandling=_supportsCompletionHandling - In the implementation block
@property (assign,nonatomic) BOOL legacyObjectsOnly;                                                         //@synthesize legacyObjectsOnly=_legacyObjectsOnly - In the implementation block
@property (assign,nonatomic) BOOL shouldCreateIndexerOnDemand;                                               //@synthesize shouldCreateIndexerOnDemand=_shouldCreateIndexerOnDemand - In the implementation block
@property (assign,nonatomic) BOOL canUpdateMigrationState;                                                   //@synthesize canUpdateMigrationState=_canUpdateMigrationState - In the implementation block
@property (assign,nonatomic) BOOL indexingDisabled;                                                          //@synthesize indexingDisabled=_indexingDisabled - In the implementation block
@property (assign,nonatomic) BOOL canUpdateIndexClientState;                                                 //@synthesize canUpdateIndexClientState=_canUpdateIndexClientState - In the implementation block
@property (assign,nonatomic) BOOL shouldPurgeMemoryAfterIndexingEachObject;                                  //@synthesize shouldPurgeMemoryAfterIndexingEachObject=_shouldPurgeMemoryAfterIndexingEachObject - In the implementation block
@property (assign,nonatomic) BOOL enumerateAllObjectsFromMainContextOnly;                                    //@synthesize enumerateAllObjectsFromMainContextOnly=_enumerateAllObjectsFromMainContextOnly - In the implementation block
@property (copy) NSDictionary * changeNotifyingManagedObjectContextMap;                                      //@synthesize changeNotifyingManagedObjectContextMap=_changeNotifyingManagedObjectContextMap - In the implementation block
@property (assign,nonatomic) long long pauseLevel;                                                           //@synthesize pauseLevel=_pauseLevel - In the implementation block
@property (assign,nonatomic) BOOL wasEverPaused;                                                             //@synthesize wasEverPaused=_wasEverPaused - In the implementation block
@property (nonatomic,readonly) BOOL alwaysRunInDispatchQueue;                                                //@synthesize alwaysRunInDispatchQueue=_alwaysRunInDispatchQueue - In the implementation block
@property (nonatomic,retain) ICSearchIndexableMutableIdentifiers * didChangeDeletedIdentifiers;              //@synthesize didChangeDeletedIdentifiers=_didChangeDeletedIdentifiers - In the implementation block
@property (nonatomic,retain) ICSearchIndexableMutableIdentifiers * didChangeAddedIdentifiers;                //@synthesize didChangeAddedIdentifiers=_didChangeAddedIdentifiers - In the implementation block
@property (nonatomic,retain) ICSearchIndexableMutableIdentifiers * didChangeUpdatedIdentifiers;              //@synthesize didChangeUpdatedIdentifiers=_didChangeUpdatedIdentifiers - In the implementation block
@property (nonatomic,retain) ICSearchIndexableMutableIdentifiers * immediateIdentifiers;                     //@synthesize immediateIdentifiers=_immediateIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * migrationStateUpdatedLegacyAccountObjectIDs;                     //@synthesize migrationStateUpdatedLegacyAccountObjectIDs=_migrationStateUpdatedLegacyAccountObjectIDs - In the implementation block
@property (nonatomic,retain) ICThreadBlockDispatcher * indexerBlockDispatcher;                               //@synthesize indexerBlockDispatcher=_indexerBlockDispatcher - In the implementation block
@property (nonatomic,retain) NSOperationQueue * chooseToMigrateOperationQueue;                               //@synthesize chooseToMigrateOperationQueue=_chooseToMigrateOperationQueue - In the implementation block
+(id)searchIndexableIdentifiersForManagedObjects:(id)arg1 checkUpdatedValues:(BOOL)arg2 changeNotifyingManagedObjectContext:(id)arg3 changeNotifyingManagedObjectContextMap:(id)arg4 enumerateWithBlock:(/*^block*/id)arg5 ;
+(id)searchIndexableIdentifiersForLegacyManagedObjectIDs:(id)arg1 changeNotifyingManagedObjectContext:(id)arg2 changeNotifyingManagedObjectContextMap:(id)arg3 ;
+(id)keyForChangeNotifyingManagedObjectContext:(id)arg1 ;
+(id)changeNotifyingManagedObjectContextForKey:(id)arg1 ;
-(void)objectDidEndEditing:(id)arg1 ;
-(void)setDelegate:(id<ICSearchIndexerContextDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ICSearchIndexerContextDelegate>)delegate;
-(void)updateWithDeletedLegacyObjectIDs:(id)arg1 changeNotifyingManagedObjectContext:(id)arg2 ;
-(void)setImmediateIdentifiers:(ICSearchIndexableMutableIdentifiers *)arg1 ;
-(ICSearchIndexableMutableIdentifiers *)immediateIdentifiers;
-(void)setChooseToMigrateOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)chooseToMigrateOperationQueue;
-(void)setChangeNotifyingManagedObjectContextMap:(NSDictionary *)arg1 ;
-(void)setDidChangeDeletedIdentifiers:(ICSearchIndexableMutableIdentifiers *)arg1 ;
-(void)setDidChangeAddedIdentifiers:(ICSearchIndexableMutableIdentifiers *)arg1 ;
-(void)setDidChangeUpdatedIdentifiers:(ICSearchIndexableMutableIdentifiers *)arg1 ;
-(void)setIndexerBlockDispatcher:(ICThreadBlockDispatcher *)arg1 ;
-(void)setAlwaysRunInDispatchQueueIfNeeded;
-(void)localAccountMigrationStateDidChange:(id)arg1 ;
-(ICThreadBlockDispatcher *)indexerBlockDispatcher;
-(NSDictionary *)changeNotifyingManagedObjectContextMap;
-(id)searchIndexableNoteContextsFromMap:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(BOOL)enumerateAllObjectsFromMainContextOnly;
-(BOOL)evaluateObjectForSearchIndexableIdentifier:(id)arg1 refreshObject:(BOOL)arg2 includeDeleted:(BOOL)arg3 mainContextOnly:(BOOL)arg4 usingBlock:(/*^block*/id)arg5 ;
-(BOOL)evaluateObjectWithObjectIdentifier:(id)arg1 refreshObject:(BOOL)arg2 includeDeleted:(BOOL)arg3 mainContextOnly:(BOOL)arg4 usingBlock:(/*^block*/id)arg5 ;
-(id)objectsDidChangeResultsForDidChooseToMigrateAccount:(BOOL)arg1 legacyAccountType:(long long)arg2 ;
-(BOOL)canUpdateMigrationState;
-(BOOL)indexingDisabled;
-(void)updateResultsForDidChooseToMigrateAccount:(BOOL)arg1 legacyAccountType:(long long)arg2 ;
-(void)setWasEverPaused:(BOOL)arg1 ;
-(long long)pauseLevel;
-(void)setPauseLevel:(long long)arg1 ;
-(void)performUpdateWithResults:(id)arg1 ;
-(void)updateWithDeletedObjects:(id)arg1 addedObjects:(id)arg2 updatedObjects:(id)arg3 changeNotifyingManagedObjectContext:(id)arg4 ;
-(BOOL)nonBlocking;
-(void)notifyDelegateAboutUpdatedIdentifiersWithResults:(id)arg1 ;
-(ICSearchIndexableMutableIdentifiers *)didChangeDeletedIdentifiers;
-(ICSearchIndexableMutableIdentifiers *)didChangeAddedIdentifiers;
-(ICSearchIndexableMutableIdentifiers *)didChangeUpdatedIdentifiers;
-(void)notifyDelegateAboutIdentifiersUpdatesIfPossibleWithUpdateCount:(unsigned long long)arg1 ;
-(void)resetChangedIdentifiers;
-(void)invalidateAllNoteContexts;
-(id)searchIndexableIdentifiersForManagedObjects:(id)arg1 checkUpdatedValues:(BOOL)arg2 changeNotifyingManagedObjectContext:(id)arg3 ;
-(id)searchIndexableNoteContextForChangeNotifyingManagedObjectContext:(id)arg1 ;
-(void)resetPauseLevel;
-(void)notifyDelegateAboutIdentifiersUpdates;
-(id)integerIDForNote:(id)arg1 ;
-(BOOL)coreSpotlightDisabled;
-(BOOL)indexCommunicationSupportEnabled;
-(BOOL)supportsCompletionHandling;
-(BOOL)legacyObjectsOnly;
-(BOOL)shouldCreateIndexerOnDemand;
-(BOOL)canUpdateIndexClientState;
-(BOOL)shouldPurgeMemoryAfterIndexingEachObject;
-(BOOL)wasEverPaused;
-(BOOL)alwaysRunInDispatchQueue;
-(NSMutableSet *)migrationStateUpdatedLegacyAccountObjectIDs;
-(void)setMigrationStateUpdatedLegacyAccountObjectIDs:(NSMutableSet *)arg1 ;
-(void)removeSearchIndexableNoteContextForChangeNotifyingManagedObjectContext:(id)arg1 ;
-(void)setCoreSpotlightDisabled:(BOOL)arg1 ;
-(void)setIndexCommunicationSupportEnabled:(BOOL)arg1 ;
-(void)setLegacyObjectsOnly:(BOOL)arg1 ;
-(void)setNonBlocking:(BOOL)arg1 ;
-(void)setSupportsCompletionHandling:(BOOL)arg1 ;
-(void)setShouldCreateIndexerOnDemand:(BOOL)arg1 ;
-(void)setCanUpdateMigrationState:(BOOL)arg1 ;
-(void)setIndexingDisabled:(BOOL)arg1 ;
-(void)setCanUpdateIndexClientState:(BOOL)arg1 ;
-(void)setShouldPurgeMemoryAfterIndexingEachObject:(BOOL)arg1 ;
-(void)setEnumerateAllObjectsFromMainContextOnly:(BOOL)arg1 ;
-(void)setAlwaysRunInDispatchQueue;
-(void)addSearchIndexableNoteContext:(id)arg1 withChangeNotifyingManagedObjectContext:(id)arg2 ;
-(id)searchIndexableObjectInMainContextForObjectIdentifier:(id)arg1 refreshObject:(BOOL)arg2 includeDeleted:(BOOL)arg3 ;
-(void)enumerateAllObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)pauseIndexing;
-(void)unpauseIndexing;
-(void)objectsDidChange:(id)arg1 ;
-(id)noteForIntegerID:(id)arg1 ;
-(id)searchIndexableNoteContextOfClass:(Class)arg1 forSearchIndexableObject:(id)arg2 ;
-(void)accountStoreDidChange:(id)arg1 ;
-(void)updateWithResults:(id)arg1 ;
@end

