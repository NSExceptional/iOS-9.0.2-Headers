/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libprequelite.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libprequelite.dylib/libprequelite.dylib-Structs.h>
#import <libobjc.A.dylib/PQLEnumeration.h>

@class PQLStatement, NSSet, NSError, PQLConnection;

@interface PQLResultSet : NSObject <PQLEnumeration> {

	PQLStatement* _stmt;
	Class _objectsClass;
	SEL _objectsClassInitializer;
	BOOL _hasValuable;
	/*^block*/id _objectsConstructor;
	id _lastEnumeratedObject;
	BOOL _inTransaction;
	BOOL _requiresSecureCoding;
	NSSet* _defaultUnarchivingAllowedClasses;
	NSError* _error;
	unsigned long long _rowNumber;
	unsigned long long _columns;
	PQLConnection* _db;

}

@property (nonatomic,readonly) NSError * error;                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) unsigned long long rowNumber;                        //@synthesize rowNumber=_rowNumber - In the implementation block
@property (nonatomic,readonly) unsigned long long columns;                          //@synthesize columns=_columns - In the implementation block
@property (nonatomic,readonly) PQLConnection * db;                                  //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) sqlite3_stmtRef stmt; 
@property (nonatomic,retain) NSSet * defaultUnarchivingAllowedClasses;              //@synthesize defaultUnarchivingAllowedClasses=_defaultUnarchivingAllowedClasses - In the implementation block
@property (assign,nonatomic) BOOL requiresSecureCoding;                             //@synthesize requiresSecureCoding=_requiresSecureCoding - In the implementation block
-(id)columnNameAtIndex:(int)arg1 ;
-(BOOL)requiresSecureCoding;
-(NSError *)error;
-(BOOL)_next:(BOOL)arg1 ;
-(id)objectOfClass:(Class)arg1 ;
-(BOOL)next;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PQ3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)objectAtIndex:(int)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)description;
-(id)nextObject;
-(void)setRequiresSecureCoding:(BOOL)arg1 ;
-(void)close;
-(id)stringAtIndex:(int)arg1 ;
-(id)numberAtIndex:(int)arg1 ;
-(id)archivedObjectOfClasses:(id)arg1 atIndex:(int)arg2 ;
-(unsigned)unsignedIntAtIndex:(int)arg1 ;
-(unsigned long long)unsignedLongLongAtIndex:(int)arg1 ;
-(id)archivedObjectOfClass:(Class)arg1 atIndex:(int)arg2 ;
-(long long)longAtIndex:(int)arg1 ;
-(id)objectOfClass:(Class)arg1 atIndex:(int)arg2 ;
-(PQLResultSet*)enumerateObjectsOfClass:(Class)arg1 ;
-(unsigned long long)unsignedLongAtIndex:(int)arg1 ;
-(long long)longLongAtIndex:(int)arg1 ;
-(id)uuidAtIndex:(int)arg1 ;
-(unsigned long long)unsignedIntegerAtIndex:(int)arg1 ;
-(long long)integerAtIndex:(int)arg1 ;
-(char)charAtIndex:(int)arg1 ;
-(id)object:(/*^block*/id)arg1 ;
-(PQLConnection *)db;
-(sqlite3_stmtRef)stmt;
-(unsigned long long)rowNumber;
-(int)intAtIndex:(int)arg1 ;
-(double)doubleAtIndex:(int)arg1 ;
-(BOOL)boolAtIndex:(int)arg1 ;
-(PQLResultSet*)enumerateObjects:(/*^block*/id)arg1 ;
-(unsigned long long)columns;
-(id)dataAtIndex:(int)arg1 ;
-(id)initWithStatement:(id)arg1 usingDatabase:(id)arg2 ;
-(id)onlyObjectOfClass:(Class)arg1 initializer:(SEL)arg2 ;
-(id)onlyObject:(/*^block*/id)arg1 ;
-(BOOL)isNullAtIndex:(int)arg1 ;
-(NSSet *)defaultUnarchivingAllowedClasses;
-(id)onlyObjectOfClass:(Class)arg1 ;
-(id)objectOfClass:(Class)arg1 initializer:(SEL)arg2 ;
-(MemRef)sqliteValueAtIndex:(int)arg1 ;
-(unsigned char)unsignedCharAtIndex:(int)arg1 ;
-(short)shortAtIndex:(int)arg1 ;
-(unsigned short)unsignedShortAtIndex:(int)arg1 ;
-(float)floatAtIndex:(int)arg1 ;
-(const char*)UTF8StringAtIndex:(int)arg1 ;
-(id)dateAtIndex:(int)arg1 ;
-(id)dataAtIndex:(int)arg1 noCopy:(BOOL)arg2 ;
-(id)plistAtIndex:(int)arg1 ;
-(PQLResultSet*)enumerateObjectsOfClass:(Class)arg1 initializer:(SEL)arg2 ;
-(void)setDefaultUnarchivingAllowedClasses:(NSSet *)arg1 ;
@end

