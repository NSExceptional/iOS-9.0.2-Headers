/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreRecents/CoreRecents-Structs.h>
@interface CRSQLRow : NSObject {

	sqlite3_stmtRef _stmt;

}
+(int)step:(sqlite3_stmtRef)arg1 ;
+(id)stringAtIndex:(int)arg1 statement:(sqlite3_stmtRef)arg2 ;
+(id)objectAtIndex:(int)arg1 statement:(sqlite3_stmtRef)arg2 ;
+(id)dataAtIndex:(int)arg1 copyBytes:(BOOL)arg2 statement:(sqlite3_stmtRef)arg3 ;
+(id)numberWithIntegerAtIndex:(int)arg1 statement:(sqlite3_stmtRef)arg2 ;
+(id)numberWithDoubleAtIndex:(int)arg1 statement:(sqlite3_stmtRef)arg2 ;
+(int)enumerateRowsInStatement:(sqlite3_stmtRef)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)rowWithStatement:(sqlite3_stmtRef)arg1 ;
-(id)objectAtIndex:(int)arg1 ;
-(id)stringAtIndex:(int)arg1 ;
-(id)dataAtIndex:(int)arg1 copyBytes:(BOOL)arg2 ;
-(id)numberWithIntegerAtIndex:(int)arg1 ;
-(id)numberWithDoubleAtIndex:(int)arg1 ;
-(id)initWithStatement:(sqlite3_stmtRef)arg1 ;
@end

