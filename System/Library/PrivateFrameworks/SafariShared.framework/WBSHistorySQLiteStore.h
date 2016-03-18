/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:04 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/WBSHistoryLoaderDelegate.h>
#import <libobjc.A.dylib/WBSHistoryLoader.h>

@protocol OS_dispatch_queue, WBSHistoryStoreDelegate;
@class NSURL, NSObject, NSMutableDictionary, NSMapTable, NSMutableSet, NSData, NSArray, NSCountedSet, NSTimer, NSDate, WBSPeriodicActivityScheduler, WBSSQLiteDatabase, NSString;

@interface WBSHistorySQLiteStore : NSObject <WBSHistoryLoaderDelegate, WBSHistoryLoader> {

	NSURL* _databaseURL;
	unsigned long long _itemCountLimit;
	double _ageLimit;
	Class _historyItemClass;
	NSObject*<OS_dispatch_queue> _databaseQueue;
	NSMutableDictionary* _statements;
	NSMutableDictionary* _itemsByDatabaseID;
	NSMapTable* _weakVisitsByDatabaseID;
	NSMutableSet* _pendingAddsOrUpdates;
	NSMutableSet* _pendingDeletes;
	NSMutableSet* _pendingVisitDeletes;
	NSMutableSet* _pendingTombstones;
	BOOL _commitGenerationValuesOnNextWrite;
	long long _currentGeneration;
	long long _lastSyncedGeneration;
	NSData* _pushThrottlerData;
	NSData* _fetchThrottlerData;
	NSData* _syncCircleSizeRetrievalThrottlerData;
	long long _cachedNumberOfDevicesInSyncCircle;
	int _databaseLockingPolicy;
	int _databaseCoordinationLockFileDescriptor;
	BOOL _loadInProgress;
	NSArray* _loadedItems;
	NSArray* _discardedItems;
	NSCountedSet* _loadedStringsForUserTypedDomainExpansion;
	int _importState;
	NSTimer* _writeTimer;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* _suddenTerminationDisabler;
	BOOL _isClosed;
	NSDate* _lastMaintenanceDate;
	BOOL _writeLastMaintenanceDateOnNextWrite;
	BOOL _checkpointWriteAheadLogOnNextWrite;
	WBSPeriodicActivityScheduler* _maintenanceScheduler;
	BOOL _pushNotificationsAreInitialized;
	id<WBSHistoryStoreDelegate> _delegate;
	WBSSQLiteDatabase* _database;

}

@property (assign,nonatomic,__weak) id<WBSHistoryStoreDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSData * pushThrottlerData; 
@property (nonatomic,copy) NSData * fetchThrottlerData; 
@property (nonatomic,copy) NSData * syncCircleSizeRetrievalThrottlerData; 
@property (assign,nonatomic) unsigned long long cachedNumberOfDevicesInSyncCircle; 
@property (assign,nonatomic) BOOL pushNotificationsAreInitialized;                              //@synthesize pushNotificationsAreInitialized=_pushNotificationsAreInitialized - In the implementation block
@property (nonatomic,readonly) WBSSQLiteDatabase * database;                                    //@synthesize database=_database - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<WBSHistoryStoreDelegate>)arg1 ;
-(void)dealloc;
-(id<WBSHistoryStoreDelegate>)delegate;
-(void)close;
-(void)setServerChangeTokenData:(id)arg1 ;
-(void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)getServerChangeTokenDataWithCompletion:(/*^block*/id)arg1 ;
-(void)pruneTombstonesWithEndDatePriorToDate:(id)arg1 ;
-(BOOL)pushNotificationsAreInitialized;
-(void)setPushNotificationsAreInitialized:(BOOL)arg1 ;
-(NSData *)pushThrottlerData;
-(NSData *)fetchThrottlerData;
-(NSData *)syncCircleSizeRetrievalThrottlerData;
-(void)setPushThrottlerData:(NSData *)arg1 ;
-(void)setFetchThrottlerData:(NSData *)arg1 ;
-(void)setSyncCircleSizeRetrievalThrottlerData:(NSData *)arg1 ;
-(unsigned long long)cachedNumberOfDevicesInSyncCircle;
-(void)setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1 ;
-(void)resetCloudHistoryDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)replayAndAddTombstone:(id)arg1 ;
-(void)getAllTombstonesWithCompletion:(/*^block*/id)arg1 ;
-(void)visitIdentifiersMatchingExistingVisits:(id)arg1 populateAssociatedVisits:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)removePastHistoryVisitsForItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)itemWasReplaced:(id)arg1 byItem:(id)arg2 ;
-(void)visitsWereAdded:(id)arg1 ;
-(void)visitsWereModified:(id)arg1 ;
-(void)getVisitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)clearHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)performMaintenance;
-(void)_loadHistory;
-(void)waitForLoadingToComplete;
-(void)savePendingChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)itemsWereAdded:(id)arg1 ;
-(void)itemsWereModified:(id)arg1 ;
-(void)historyLoader:(id)arg1 didLoadItems:(id)arg2 discardedItems:(id)arg3 stringsForUserTypeDomainExpansion:(id)arg4 ;
-(void)historyLoaderDidFinishLoading:(id)arg1 ;
-(void)removeItemsOnDatabaseQueue:(id)arg1 ;
-(void)removeVisitsOnDatabaseQueue:(id)arg1 ;
-(void)addOrUpdateItemsOnDatabaseQueue:(id)arg1 ;
-(id)existingItemFromVisitRow:(id)arg1 ;
-(id)visitForItem:(id)arg1 row:(id)arg2 ;
-(id)visitForRow:(id)arg1 ;
-(void)_finishLoadingOnMainThreadIfNeeded;
-(void)_finishLoadingOnMainThread;
-(id)initWithURL:(id)arg1 itemCountLimit:(unsigned long long)arg2 ageLimit:(double)arg3 historyItemClass:(Class)arg4 ;
-(void)_releaseDatabaseCoordinationLock;
-(void)_processPendingWrites;
-(void)_updateGenerationForVisits:(id)arg1 ;
-(id)_visitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 ;
-(long long)_currentGeneration;
-(void)_clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 addingTombstone:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_clearHistoryVisitsMatchingURLString:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 addingTombstone:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_insertTombstone:(id)arg1 ;
-(void)_removeVisitsProvidedByBlockInvokedOnDatabaseQueue:(/*^block*/id)arg1 addingTombstone:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_visitsCreatedMatchingURLString:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 ;
-(void)_incrementCurrentGeneration;
-(id)_visitsNeedingSyncWithVisitSyncWindow:(double)arg1 ;
-(id)_tombstonesNeedingSync;
-(void)_setLastSyncedGeneration:(unsigned long long)arg1 ;
-(long long)_lastSyncedGeneration;
-(id)_visitsFromRows:(id)arg1 predicate:(/*^block*/id)arg2 ;
-(id)_metadataDataValueForKey:(id)arg1 ;
-(void)_setMetadataDataValue:(id)arg1 forKey:(id)arg2 ;
-(void)_pruneTombstonesOnDatabaseQueueWithEndDatePriorToDate:(id)arg1 ;
-(void)_setMetadataInt64Value:(long long)arg1 forKey:(id)arg2 ;
-(long long)_metadataInt64ValueForKey:(id)arg1 ;
-(void)_scheduleWrite;
-(void)_openDatabase:(id)arg1 andCheckIntegrity:(BOOL)arg2 ;
-(id)_databaseCoordinationLockURLForDatabaseURL:(id)arg1 ;
-(BOOL)_acquireDatabaseCoordinationLockForDatabaseURL:(id)arg1 ;
-(BOOL)_checkDatabaseIntegrity;
-(int)_migrateToCurrentSchemaVersionIfNeeded;
-(BOOL)_shouldMigrateFromPropertyListWhenLoadingDatabase:(id)arg1 ;
-(void)_loadFromDatabase;
-(void)_loadRedirectVisitsForLoadedItems:(id)arg1 ;
-(unsigned long long)_cachedNumberOfDevicesInSyncCircleOnDatabaseQueue;
-(void)_scheduleMaintenance;
-(void)_writeTimerFired;
-(void)_processPendingDeletes;
-(id)_itemsOrderedForInsertion:(id)arg1 ;
-(void)_insertItem:(id)arg1 ;
-(void)_updateItem:(id)arg1 ;
-(void)_updateVisitRedirectRelationships:(id)arg1 ;
-(void)_checkpointWriteAheadLog;
-(void)_processPendingVisitDeletes;
-(id)_statementForQuery:(id)arg1 ;
-(id)_visitsOrderedForInsertion:(id)arg1 ;
-(void)_insertVisit:(id)arg1 ;
-(void)_updateVisit:(id)arg1 ;
-(id)_deletionPlanForDeletionOfVisits:(id)arg1 ;
-(int)_setDatabaseSchemaVersion:(int)arg1 ;
-(int)_migrateToSchemaVersion:(int)arg1 ;
-(void)_performMaintenance;
-(void)_recomputeDerivedVisitCounts;
-(void)_expireOldVisits;
-(int)_setOrigin:(long long)arg1 forVisitsFromOrigin:(long long)arg2 ;
-(id)_visitsWithOrigins:(id)arg1 ;
-(int)_migrateToSchemaVersion_2;
-(int)_migrateToSchemaVersion_3;
-(int)_migrateToSchemaVersion_4;
-(int)_migrateToSchemaVersion_5;
-(int)_migrateToSchemaVersion_6;
-(int)_migrateToSchemaVersion_7;
-(id)debugDictionaryRepresentation;
-(WBSSQLiteDatabase *)database;
-(void)startLoading;
@end

