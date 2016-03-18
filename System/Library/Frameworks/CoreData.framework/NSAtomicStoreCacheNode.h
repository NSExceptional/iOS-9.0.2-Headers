/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectID, NSMutableDictionary;

@interface NSAtomicStoreCacheNode : NSObject {

	NSManagedObjectID* _objectID;
	unsigned long long __versionNumber;
	NSMutableDictionary* _propertyCache;
	void* _reserved1;

}

@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,retain) NSMutableDictionary * propertyCache; 
+(BOOL)accessInstanceVariablesDirectly;
+(void)initialize;
-(unsigned)_versionNumber;
-(void)_setVersionNumber:(unsigned)arg1 ;
-(const id*)knownKeyValuesPointer;
-(id)_snapshot_;
-(NSMutableDictionary *)propertyCache;
-(void)setPropertyCache:(NSMutableDictionary *)arg1 ;
-(NSManagedObjectID *)objectID;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 ;
@end

