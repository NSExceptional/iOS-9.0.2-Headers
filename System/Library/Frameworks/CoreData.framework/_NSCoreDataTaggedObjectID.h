/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/_NSScalarObjectID.h>

@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID
+(void)setObjectStoreIdentifier:(id)arg1 ;
+(Class)classWithStore:(id)arg1 andEntity:(id)arg2 ;
+(unsigned)allocateBatch:(id*)arg1 count:(unsigned)arg2 ;
+(id)managedObjectIDFromURIRepresentation:(id)arg1 ;
+(void)_setStoreInfo1:(id)arg1 ;
+(id)_storeInfo1;
+(void)_storeDeallocated;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(id)persistentStore;
-(long long)_referenceData64;
-(id)initWithPK64:(long long)arg1 ;
-(id)_retainedURIString;
-(id)_referenceData;
-(id)_storeInfo1;
-(id)_storeIdentifier;
-(BOOL)_isPersistentStoreAlive;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)entity;
-(id)entityName;
-(BOOL)isTemporaryID;
@end

