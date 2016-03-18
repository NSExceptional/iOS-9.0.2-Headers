/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@class NSObject, NSString, NSMutableArray;

@interface RTSqliteDatabase : NSObject {

	BOOL _accessible;
	int _flags;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _path;
	NSString* _journalPath;
	sqlite3Ref _db;
	unsigned long long _encryptionClass;
	NSMutableArray* _pendingInvocations;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL accessible;                                  //@synthesize accessible=_accessible - In the implementation block
@property (nonatomic,retain) NSString * path;                                  //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSString * journalPath;                           //@synthesize journalPath=_journalPath - In the implementation block
@property (assign,nonatomic) sqlite3Ref db;                                    //@synthesize db=_db - In the implementation block
@property (assign,nonatomic) int flags;                                        //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned long long encryptionClass;               //@synthesize encryptionClass=_encryptionClass - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingInvocations;              //@synthesize pendingInvocations=_pendingInvocations - In the implementation block
+(id)databaseForEncryptionClass:(unsigned long long)arg1 ;
+(id)tableInfoTableColumns;
+(id)countTableColumns;
-(void)addInvocation:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)close;
-(BOOL)configure;
-(sqlite3Ref)db;
-(void)setDb:(sqlite3Ref)arg1 ;
-(BOOL)open;
-(void)setFlags:(int)arg1 ;
-(int)flags;
-(BOOL)isOpen;
-(NSMutableArray *)pendingInvocations;
-(void)setPendingInvocations:(NSMutableArray *)arg1 ;
-(id)initWithEncryptionClass:(unsigned long long)arg1 ;
-(void)onEncryptedDataAvailabilityNotification:(id)arg1 ;
-(void)_createTableWithName:(id)arg1 andColumns:(id)arg2 ;
-(BOOL)accessible;
-(BOOL)tableExistsWithName:(id)arg1 ;
-(BOOL)schemaDiffersWithTableName:(id)arg1 andColumns:(id)arg2 ;
-(void)_dropTableWithName:(id)arg1 ;
-(sqlite3_stmtRef)prepareStatementFromString:(id)arg1 ;
-(void)executeAndFinalizeStatement:(sqlite3_stmtRef)arg1 ;
-(void)createRowInInfoTableWithTableName:(id)arg1 ;
-(void)createCountTableForTableWithName:(id)arg1 ;
-(unsigned long long)encryptionClass;
-(void)setAccessible:(BOOL)arg1 ;
-(void)handleSqlError:(int)arg1 ;
-(void)setPragma:(id)arg1 toInteger:(long long)arg2 ;
-(void)configureLimit;
-(void)configureProfile;
-(void)configureTrace;
-(NSString *)journalPath;
-(void)finalizeStatement:(sqlite3_stmtRef)arg1 ;
-(void)logReturnCode:(int)arg1 ofStatement:(sqlite3_stmtRef)arg2 ;
-(id)prepareIntoStringForTable:(id)arg1 columns:(id)arg2 ;
-(sqlite3_stmtRef)prepareDeleteStatementFromTable:(id)arg1 forKey:(id)arg2 ;
-(BOOL)bindIndex:(int)arg1 ofStatement:(sqlite3_stmtRef)arg2 withString:(id)arg3 ;
-(sqlite3_stmtRef)prepareInsertStatementForTable:(id)arg1 withColumns:(id)arg2 ;
-(void)deleteRowFromInfoTableWithTableName:(id)arg1 ;
-(void)dropCountTableForTableWithName:(id)arg1 ;
-(BOOL)bindIndex:(int)arg1 ofStatement:(sqlite3_stmtRef)arg2 withInt:(int)arg3 ;
-(void)createCountTriggersForTableWithName:(id)arg1 ;
-(id)getSqlStatementForType:(id)arg1 withName:(id)arg2 ;
-(void)dropCountTriggersForTableWithName:(id)arg1 ;
-(void)executeStatement:(sqlite3_stmtRef)arg1 ;
-(void)createTableWithName:(id)arg1 andColumns:(id)arg2 ;
-(BOOL)bindIndex:(int)arg1 ofStatement:(sqlite3_stmtRef)arg2 withDouble:(double)arg3 ;
-(sqlite3_stmtRef)prepareInsertOrIgnoreStatementForTable:(id)arg1 withColumns:(id)arg2 ;
-(void)dropTableWithName:(id)arg1 ;
-(unsigned long long)getNumberOfRowsInTableWithName:(id)arg1 ;
-(unsigned long long)getNumberOfRowsModifed;
-(void)setJournalPath:(NSString *)arg1 ;
-(void)setEncryptionClass:(unsigned long long)arg1 ;
@end

