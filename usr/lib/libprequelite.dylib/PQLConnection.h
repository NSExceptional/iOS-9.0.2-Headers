/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libprequelite.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction, OS_dispatch_source, OS_dispatch_queue;
#import <libprequelite.dylib/libprequelite.dylib-Structs.h>
@class NSObject, NSMutableArray, NSString, NSURL, NSError;

@interface PQLConnection : NSObject {

	sqlite3Ref _db;
	NSObject*<OS_os_transaction> _batchStarted;
	int _suspendCaching;
	int _savePointLevel;
	int _skipBatchStop;
	int _vacuumTracker;
	NSMutableArray* _flushNotifications;
	NSObject*<OS_dispatch_source> _batchingTimer;
	double _batchingPeriod;
	int _batchingChangesLimit;
	int _batchingChangesCount;
	int _cacheSize;
	BOOL _useBatching;
	BOOL _useQueue;
	BOOL _needsFullSync;
	cache_sRef _preparedStatements;
	NSObject*<OS_dispatch_source> _stmtCacheSource;
	NSMutableArray* _stmtCacheCleanupQueue;
	BOOL _traced;
	BOOL _crashIfUsedAfterClose;
	NSString* _label;
	NSURL* _url;
	/*^block*/id _lockedHandler;
	/*^block*/id _autoRollbackHandler;
	/*^block*/id _sqliteErrorHandler;
	/*^block*/id _preFlushHook;
	/*^block*/id _postFlushHook;
	/*^block*/id _profilingHook;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSError* _lastError;

}

@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (assign,getter=isTraced,nonatomic) BOOL traced;                             //@synthesize traced=_traced - In the implementation block
@property (assign,nonatomic) BOOL crashIfUsedAfterClose;                              //@synthesize crashIfUsedAfterClose=_crashIfUsedAfterClose - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) sqlite3Ref dbHandle;                                   //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) BOOL isInBatch; 
@property (nonatomic,readonly) BOOL isInTransaction; 
@property (nonatomic,retain) NSError * lastError;                                     //@synthesize lastError=_lastError - In the implementation block
@property (nonatomic,readonly) long long lastInsertedRowID; 
@property (nonatomic,readonly) long long changes; 
@property (assign,nonatomic) unsigned long long statementCacheMaxCount; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic) unsigned long long synchronousMode; 
@property (nonatomic,copy) id lockedHandler;                                          //@synthesize lockedHandler=_lockedHandler - In the implementation block
@property (nonatomic,copy) id autoRollbackHandler;                                    //@synthesize autoRollbackHandler=_autoRollbackHandler - In the implementation block
@property (nonatomic,copy) id sqliteErrorHandler;                                     //@synthesize sqliteErrorHandler=_sqliteErrorHandler - In the implementation block
@property (nonatomic,copy) id preFlushHook;                                           //@synthesize preFlushHook=_preFlushHook - In the implementation block
@property (nonatomic,copy) id postFlushHook;                                          //@synthesize postFlushHook=_postFlushHook - In the implementation block
@property (nonatomic,copy) id profilingHook;                                          //@synthesize profilingHook=_profilingHook - In the implementation block
@property (nonatomic,readonly) BOOL isBatchSuspended; 
+(void)initialize;
-(long long)changes;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)debugDescription;
-(NSURL *)url;
-(void)flush;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)groupInTransaction:(/*^block*/id)arg1 ;
-(void)setSqliteErrorHandler:(id)arg1 ;
-(void)setTraced:(BOOL)arg1 ;
-(void)setCrashIfUsedAfterClose:(BOOL)arg1 ;
-(void)setStatementCacheMaxCount:(unsigned long long)arg1 ;
-(void)useSerialQueue;
-(void)setProfilingHook:(id)arg1 ;
-(BOOL)executeRaw:(id)arg1 ;
-(BOOL)openAtURL:(id)arg1 withFlags:(int)arg2 error:(id*)arg3 ;
-(BOOL)setupPragmas;
-(BOOL)registerFunction:(id)arg1 nArgs:(int)arg2 handler:(/*^block*/id)arg3 ;
-(id)fetchObjectOfClass:(Class)arg1 sql:(id)arg2 ;
-(long long)lastInsertedRowID;
-(id)fetch:(id)arg1 ;
-(id)fetchObject:(/*^block*/id)arg1 sql:(id)arg2 ;
-(id)userVersion;
-(void)setPreFlushHook:(id)arg1 ;
-(void)setPostFlushHook:(id)arg1 ;
-(void)useBatchingWithDelay:(double)arg1 changeCount:(int)arg2 ;
-(BOOL)performWithFlags:(unsigned)arg1 action:(/*^block*/id)arg2 ;
-(sqlite3Ref)dbHandle;
-(BOOL)backupToURL:(id)arg1 progress:(/*^block*/id)arg2 ;
-(void)groupInBatch:(/*^block*/id)arg1 ;
-(BOOL)performWithFlags:(unsigned)arg1 action:(/*^block*/id)arg2 whenFlushed:(/*^block*/id)arg3 ;
-(void)forceBatchStart;
-(void)setLastError:(NSError *)arg1 ;
-(void)makeNextFlushFullSync;
-(BOOL)isBatchSuspended;
-(BOOL)setUserVersion:(long long)arg1 ;
-(void)setSynchronousMode:(unsigned long long)arg1 ;
-(unsigned long long)synchronousMode;
-(BOOL)close:(id*)arg1 ;
-(BOOL)isInTransaction;
-(BOOL)execute:(id)arg1 ;
-(BOOL)isInBatch;
-(NSError *)lastError;
-(void)_resetState;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setLockedHandler:(id)arg1 ;
-(void)setAutoRollbackHandler:(id)arg1 ;
-(id)_description:(BOOL)arg1 ;
-(void)_clearStatementCache;
-(void)_createCacheIfNeeded;
-(BOOL)_execute:(id)arg1 mustSucceed:(BOOL)arg2 bindings:(char*)arg3 ;
-(int)_vacuumMode;
-(BOOL)_fullSync;
-(void)_vacuumIfNeeded;
-(BOOL)_performWithFlags:(unsigned)arg1 action:(/*^block*/id)arg2 whenFlushed:(/*^block*/id)arg3 ;
-(BOOL)openAtURL:(id)arg1 sharedCache:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)destroyDatabaseWithError:(id*)arg1 ;
-(id)_newStatementForFormat:(id)arg1 arguments:(char*)arg2 ;
-(id)fetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3 args:(char*)arg4 ;
-(unsigned long long)statementCacheMaxCount;
-(void)_batchStartIfNeeded;
-(void)_batchStopIfNeeded;
-(void)_fireFlushNotifications;
-(BOOL)execute:(id)arg1 args:(char*)arg2 ;
-(id)fetch:(id)arg1 args:(char*)arg2 ;
-(id)fetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3 ;
-(id)fetchObjectOfClass:(Class)arg1 sql:(id)arg2 args:(char*)arg3 ;
-(id)fetchObject:(/*^block*/id)arg1 sql:(id)arg2 args:(char*)arg3 ;
-(id)lockedHandler;
-(id)autoRollbackHandler;
-(id)sqliteErrorHandler;
-(id)preFlushHook;
-(id)postFlushHook;
-(id)profilingHook;
-(BOOL)isTraced;
-(BOOL)crashIfUsedAfterClose;
@end

