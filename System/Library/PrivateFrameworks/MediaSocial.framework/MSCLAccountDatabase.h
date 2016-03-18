/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteDatabase.h>

@interface MSCLAccountDatabase : SSSQLiteDatabase
+(id)sharedDatabase;
-(id)init;
-(void)_createDatabaseSchema;
-(void)_migrateToSchemaVersion2;
-(void)_migrateToSchemaVersion3;
-(void)_migrateToSchemaVersion4;
@end

