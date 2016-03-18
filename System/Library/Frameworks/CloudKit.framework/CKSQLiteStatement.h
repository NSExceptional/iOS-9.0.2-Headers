/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudKit/CloudKit-Structs.h>
@class CKSQLite, NSString;

@interface CKSQLiteStatement : NSObject {

	BOOL _reset;
	CKSQLite* _SQLite;
	NSString* _SQL;
	sqlite3_stmtRef _handle;

}

@property (setter=QLite,nonatomic,__weak,readonly) CKSQLite * SQLite;              //@synthesize SQLite=_SQLite - In the implementation block
@property (setter=QL,nonatomic,readonly) NSString * SQL;                           //@synthesize SQL=_SQL - In the implementation block
@property (nonatomic,readonly) sqlite3_stmtRef handle;                             //@synthesize handle=_handle - In the implementation block
@property (assign,getter=isReset,nonatomic) BOOL reset;                            //@synthesize reset=_reset - In the implementation block
-(BOOL)isReset;
-(id)initWithSQLite:(id)arg1 SQL:(id)arg2 handle:(sqlite3_stmtRef)arg3 ;
-(id)textAtIndex:(unsigned long long)arg1 ;
-(void)bindText:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindValues:(id)arg1 ;
-(id)allObjectsByColumnName;
-(void)bindNullAtIndex:(unsigned long long)arg1 ;
-(void)bindInt:(int)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindInt64:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindBlob:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindDouble:(double)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(int)columnTypeAtIndex:(unsigned long long)arg1 ;
-(id)blobAtIndex:(unsigned long long)arg1 ;
-(id)columnNameAtIndex:(unsigned long long)arg1 ;
-(CKSQLite *)SQLite;
-(sqlite3_stmtRef)handle;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)allObjects;
-(BOOL)reset;
-(unsigned long long)columnCount;
-(void)setReset:(BOOL)arg1 ;
-(NSString *)SQL;
-(void)finalizeStatement;
-(int)intAtIndex:(unsigned long long)arg1 ;
-(BOOL)step;
-(double)doubleAtIndex:(unsigned long long)arg1 ;
-(long long)int64AtIndex:(unsigned long long)arg1 ;
@end

