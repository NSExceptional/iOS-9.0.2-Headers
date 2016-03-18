/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHFetchResult.h>

@class NSOrderedSet, NSArray, NSString;

@interface PHManualFetchResult : PHFetchResult {

	NSOrderedSet* _objectIDs;
	NSArray* _objects;
	NSString* _identifier;

}

@property (readonly) NSArray * objects;                     //@synthesize objects=_objects - In the implementation block
@property (readonly) NSOrderedSet * objectIDs; 
@property (readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
-(long long)collectionFetchType;
-(unsigned long long)possibleChangesForChange:(id)arg1 ;
-(id)changeHandlingKey;
-(id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3 ;
-(id)fetchResultWithChangeHandlingValue:(id)arg1 ;
-(void)updateRegistrationForChangeNotificationDeltas;
-(void)getMediaTypeCounts;
-(id)fetchUpdatedObjects;
-(id)initWithObjects:(id)arg1 identifier:(id)arg2 registerIfNeeded:(BOOL)arg3 ;
-(NSArray *)objects;
-(id)fetchedObjects;
-(id)photoLibrary;
-(id)copyWithOptions:(id)arg1 ;
-(id)fetchedObjectIDs;
-(id)initWithOids:(id)arg1 identifier:(id)arg2 registerIfNeeded:(BOOL)arg3 ;
-(void)prefetchObjectsAtIndexes:(id)arg1 ;
-(id)objectIDAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)initWithObjects:(id)arg1 ;
-(id)containerIdentifier;
-(id)fetchRequest;
-(NSOrderedSet *)objectIDs;
@end

