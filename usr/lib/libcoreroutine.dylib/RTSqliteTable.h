/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTSqliteDatabase;

@interface RTSqliteTable : NSObject {

	RTSqliteDatabase* _database;

}

@property (nonatomic,readonly) RTSqliteDatabase * database;              //@synthesize database=_database - In the implementation block
+(id)TableColumnTimestamp;
-(id)init;
-(void)clearEntries;
-(id)tableColumns;
-(RTSqliteDatabase *)database;
-(id)tableName;
-(unsigned long long)encryptionClass;
-(id)selectAllColumnsFromTable;
-(void)_fetchNumberOfEntriesWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchEarliestEntryDateWithHandler:(/*^block*/id)arg1 ;
-(void)_clearEntries;
-(void)_clearEntriesPredating:(id)arg1 ;
-(void)fetchNumberOfEntriesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchEarliestEntryDateWithHandler:(/*^block*/id)arg1 ;
-(void)clearEntriesPredating:(id)arg1 ;
@end

