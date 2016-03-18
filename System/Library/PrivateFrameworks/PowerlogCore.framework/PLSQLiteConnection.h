/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <PowerlogCore/PowerlogCore-Structs.h>
@class NSString, NSObject, NSMutableDictionary;

@interface PLSQLiteConnection : NSObject {

	int _transactionInProgress;
	int _entryCacheStorageSize;
	NSString* _filePath;
	sqlite3Ref _dbConnection;
	NSObject*<OS_dispatch_semaphore> _dbSem;
	NSMutableDictionary* _preparedStatements;
	NSMutableDictionary* _preparedUpdateStatements;
	NSMutableDictionary* _preparedDynamicStatements;
	NSString* _transactionLock;
	NSString* _cachedClassName;
	long long _cacheSize;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue; 
@property (nonatomic,copy) NSString * filePath;                                  //@synthesize filePath=_filePath - In the implementation block
@property (assign) sqlite3Ref dbConnection;                                      //@synthesize dbConnection=_dbConnection - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> dbSem;                       //@synthesize dbSem=_dbSem - In the implementation block
@property (retain) NSMutableDictionary * preparedStatements;                     //@synthesize preparedStatements=_preparedStatements - In the implementation block
@property (retain) NSMutableDictionary * preparedUpdateStatements;               //@synthesize preparedUpdateStatements=_preparedUpdateStatements - In the implementation block
@property (retain) NSMutableDictionary * preparedDynamicStatements;              //@synthesize preparedDynamicStatements=_preparedDynamicStatements - In the implementation block
@property (assign) int transactionInProgress;                                    //@synthesize transactionInProgress=_transactionInProgress - In the implementation block
@property (retain) NSString * transactionLock;                                   //@synthesize transactionLock=_transactionLock - In the implementation block
@property (retain) NSString * cachedClassName;                                   //@synthesize cachedClassName=_cachedClassName - In the implementation block
@property (assign) int entryCacheStorageSize;                                    //@synthesize entryCacheStorageSize=_entryCacheStorageSize - In the implementation block
@property (assign) long long cacheSize;                                          //@synthesize cacheSize=_cacheSize - In the implementation block
+(double)periodicIntegrityCheckInterval;
+(id)tableHasTimestampColumnSem;
+(id)tableHasTimestampColumn;
+(id)masterTableForTable:(id)arg1 andType:(id)arg2 ;
+(id)versionForTable:(id)arg1 ;
+(void)removeDBAtFilePath:(id)arg1 ;
+(id)sharedSQLiteConnection;
-(void)vacuum;
-(void)endTransaction;
-(void)dealloc;
-(id)init;
-(void)setFilePath:(NSString *)arg1 ;
-(id)initWithFilePath:(id)arg1 ;
-(NSString *)filePath;
-(void)closeConnection;
-(void)setCacheSize:(long long)arg1 ;
-(long long)cacheSize;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)updateEntry:(id)arg1 ;
-(long long)writeEntry:(id)arg1 ;
-(BOOL)tableExistsForTableName:(id)arg1 ;
-(void)createTableName:(id)arg1 withColumns:(id)arg2 ;
-(void)setSchemaVersion:(double)arg1 forTableName:(id)arg2 ;
-(void)removeIDIndexes;
-(void)checkPointDB;
-(void)removeEmptyOldTables;
-(double)schemaVersionForTable:(id)arg1 ;
-(id)tableInfo:(id)arg1 ;
-(void)createIndexOnTable:(id)arg1 forColumn:(id)arg2 ;
-(void)createCoveringIndexOnTable:(id)arg1 forColumns:(id)arg2 ;
-(void)setAllNullValuesForEntryKey:(id)arg1 forKey:(id)arg2 toValue:(id)arg3 withFilters:(id)arg4 ;
-(void)loadArrayValuesIntoEntry:(id)arg1 ;
-(void)deleteEntryForKey:(id)arg1 withRowID:(long long)arg2 ;
-(BOOL)copyDatabaseToPath:(id)arg1 ;
-(void)trimAllTablesFromDate:(id)arg1 toDate:(id)arg2 withTableFilters:(id)arg3 ;
-(void)clearTableHasTimestampColumnCache;
-(BOOL)copyDatabaseToPath:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 withTableFilters:(id)arg4 vacuumDB:(BOOL)arg5 withCacheSize:(long long)arg6 ;
-(BOOL)copyDatabaseToPath:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 withTableFilters:(id)arg4 vacuumDB:(BOOL)arg5 ;
-(void)dropTables:(id)arg1 ;
-(void)hashEntryKeyKeys:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 withCacheSize:(long long)arg2 ;
-(BOOL)openCurrentFileWithCacheSize:(long long)arg1 ;
-(BOOL)passesIntegrityCheck;
-(void)scheduleIntegrityCheck;
-(void)setJournalMode:(short)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)dbSem;
-(id)sqlFormatedColumnNamesForTable:(id)arg1 withQuoteChar:(char)arg2 ;
-(void)runTrimQuery:(id)arg1 ;
-(BOOL)tableHasTimestampColumn:(id)arg1 ;
-(void)trimTable:(id)arg1 fromDate:(id)arg2 withFilter:(id)arg3 withTrimLimit:(long long)arg4 ;
-(sqlite3Ref)dbConnection;
-(id)performStatement:(id)arg1 ;
-(void)dropTable:(id)arg1 ;
-(NSString *)cachedClassName;
-(int)transactionInProgress;
-(NSString *)transactionLock;
-(BOOL)isTransactionInProgress;
-(void)setTransactionInProgress:(int)arg1 ;
-(NSMutableDictionary *)preparedStatements;
-(void)buildColumnInsert:(id*)arg1 andValueInsert:(id*)arg2 forEntry:(id)arg3 ;
-(void)displaySchema:(id)arg1 ;
-(int)bindEntry:(id)arg1 toPreparedStatement:(id)arg2 atBindPosition:(int)arg3 ;
-(void)writeDynamicEntries:(id)arg1 ;
-(void)writeArrayEntries:(id)arg1 ;
-(NSMutableDictionary *)preparedDynamicStatements;
-(NSMutableDictionary *)preparedUpdateStatements;
-(void)deleteArrayEntriesForKey:(id)arg1 withRowID:(long long)arg2 ;
-(void)deleteDynamicEntriesForKey:(id)arg1 withRowID:(long long)arg2 ;
-(void)setDbConnection:(sqlite3Ref)arg1 ;
-(BOOL)openCurrentFile;
-(void)printDBStatusString;
-(int)rowCountForTable:(id)arg1 ;
-(id)sqlFormatedColumnNamesForTableInsert:(id)arg1 ;
-(id)sqlFormatedColumnNamesForTableSelect:(id)arg1 ;
-(void)removeTableNameFromMergeDB:(id)arg1 ;
-(void)enumerateAllTablesWithBlock:(/*^block*/id)arg1 ;
-(void)trimAllTablesFromDate:(id)arg1 toDate:(id)arg2 ;
-(BOOL)copyDatabaseToPath:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 ;
-(void)setDbSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setPreparedStatements:(NSMutableDictionary *)arg1 ;
-(void)setPreparedUpdateStatements:(NSMutableDictionary *)arg1 ;
-(void)setPreparedDynamicStatements:(NSMutableDictionary *)arg1 ;
-(void)setTransactionLock:(NSString *)arg1 ;
-(void)setCachedClassName:(NSString *)arg1 ;
-(int)entryCacheStorageSize;
-(void)setEntryCacheStorageSize:(int)arg1 ;
-(id)entriesForKey:(id)arg1 withProperties:(id)arg2 ;
-(id)entriesForKey:(id)arg1 withQuery:(id)arg2 ;
-(id)performQuery:(id)arg1 ;
-(void)deleteAllEntriesForKey:(id)arg1 withFilters:(id)arg2 ;
-(void)loadDynamicValuesIntoEntry:(id)arg1 ;
-(void)beginTransaction;
@end

