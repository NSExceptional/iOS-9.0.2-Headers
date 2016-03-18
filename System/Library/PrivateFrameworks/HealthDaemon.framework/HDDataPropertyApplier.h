/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:01 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSNumber, NSString, NSArray, NSDictionary, HDSQLiteDatabase, NSMutableDictionary, HDMetadataValueStatement;

@interface HDDataPropertyApplier : NSObject {

	NSNumber* _sourceID;
	NSNumber* _deviceID;
	NSString* _sourceVersion;
	NSArray* _orderedProperties;
	NSArray* _orderedSetters;
	NSDictionary* _propertySetters;
	/*^block*/id _authorizationFilter;
	HDSQLiteDatabase* _database;
	NSMutableDictionary* _sourceByPersistentIDCache;
	NSMutableDictionary* _sourceRevisionsDictionaryBySourceCache;
	NSMutableDictionary* _deviceByPersistentIDCache;
	HDMetadataValueStatement* _metadataValueStatement;

}

@property (nonatomic,copy,readonly) NSArray * orderedProperties;                                        //@synthesize orderedProperties=_orderedProperties - In the implementation block
@property (nonatomic,copy,readonly) NSArray * orderedSetters;                                           //@synthesize orderedSetters=_orderedSetters - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * propertySetters;                                     //@synthesize propertySetters=_propertySetters - In the implementation block
@property (nonatomic,copy,readonly) id authorizationFilter;                                             //@synthesize authorizationFilter=_authorizationFilter - In the implementation block
@property (nonatomic,readonly) HDSQLiteDatabase * database;                                             //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sourceByPersistentIDCache;                           //@synthesize sourceByPersistentIDCache=_sourceByPersistentIDCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sourceRevisionsDictionaryBySourceCache;              //@synthesize sourceRevisionsDictionaryBySourceCache=_sourceRevisionsDictionaryBySourceCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deviceByPersistentIDCache;                           //@synthesize deviceByPersistentIDCache=_deviceByPersistentIDCache - In the implementation block
@property (nonatomic,retain) HDMetadataValueStatement * metadataValueStatement;                         //@synthesize metadataValueStatement=_metadataValueStatement - In the implementation block
-(void)finish;
-(NSArray *)orderedProperties;
-(void)applyPropertiesToObject:(id)arg1 entity:(id)arg2 row:(HDSQLiteRowRef)arg3 healthDaemon:(id)arg4 ;
-(id)initWithPropertyOrder:(id)arg1 propertySetters:(id)arg2 authorizationFilter:(/*^block*/id)arg3 database:(id)arg4 ;
-(id)_sourceRevisionForPersistentID:(id)arg1 sourceVersion:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
-(id)_deviceForPersistentID:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
-(id)_sourceForPersistentID:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
-(NSArray *)orderedSetters;
-(NSDictionary *)propertySetters;
-(id)authorizationFilter;
-(NSMutableDictionary *)sourceByPersistentIDCache;
-(void)setSourceByPersistentIDCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sourceRevisionsDictionaryBySourceCache;
-(void)setSourceRevisionsDictionaryBySourceCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)deviceByPersistentIDCache;
-(void)setDeviceByPersistentIDCache:(NSMutableDictionary *)arg1 ;
-(HDMetadataValueStatement *)metadataValueStatement;
-(void)setMetadataValueStatement:(HDMetadataValueStatement *)arg1 ;
-(HDSQLiteDatabase *)database;
@end

